#!/usr/bin/python3

import sys
from pyppeteer import launch
import asyncio
import time

try:
    company_name = sys.argv[1]
except IndexError:
    company_name = "ACME Corporation"

signalhire_url = 'https://www.google.com/search?q="{company_name}"+inurl:signalhire.com/profiles/&filter=0'.format(company_name=company_name)
zoominfo_url = 'https://www.google.com/search?q="{company_name}"+inurl:www.zoominfo.com/p/&filter=0'.format(company_name=company_name)
linkedin_url = 'https://www.google.com/search?q="{company_name}"+inurl:linkedin.com/in/&filter=0'.format(company_name=company_name)

try:
    url_type = sys.argv[1]
    if url_type == "signalhire":
        url = signalhire_url
    elif url_type == "zoominfo":
        url = zoominfo_url
    elif url_type == "linkedin":
        url = linkedin_url
    else:
        url = linkedin_url
except IndexError:
    url = linkedin_url

people = []
delay = 3


async def main():
    global browser
    browser_args = ["--disable-infobars",
                    "--disable-blink-features=AutomationControlled",
                    "--disable-blink-features",
                    "--no-sandbox",
                    "--disable-dev-shm-usage",
                    "--disable-accelerated-2d-canvas",
                    "--no-first-run",
                    "--no-zygote",
                    "--disable-gpu"]

    browser = await launch(headless=False, args=browser_args)
    page = await browser.newPage()
    print("Opening initial page...")
    await page.goto(url)

    running = True
    while running:
        print("Checking search results for people...")
        people_found = False
        h3_tags = await page.querySelectorAll('h3')
        for h3_tag in h3_tags:
            h3_tag_content = await page.evaluate('(element) => element.textContent', h3_tag)
            if "'s email & phone" in h3_tag_content: # Signal Hire
                people.append(h3_tag_content.split("'s email & phone")[0])
                people_found = True
            if " - ZoomInfo" in h3_tag_content:
                people.append(h3_tag_content.split(" - ZoomInfo")[0])
                people_found = True
            if " - LinkedIn" in h3_tag_content:
                people.append(h3_tag_content.split(" - LinkedIn")[0])
                people_found = True
            if " | LinkedIn" in h3_tag_content:
                people.append(h3_tag_content.split(" | LinkedIn")[0])
                people_found = True
   
        if people_found is True:
            print("Clicking next page button...")
            try:
                await page.evaluate(f"""() => {{
                    document.getElementById('pnnext').dispatchEvent(new MouseEvent('click', {{
                    bubbles: true,
                    cancelable: true,
                    view: window
                    }}));
                    }}""")
                await page.waitForNavigation()
            except:
                print("Error finding next page button, assume we are finished...")
                running = False

        if people_found is False:
            print("No people found! Check browser window to complete CAPTCHA before continuing!")
            if input("Continue? [y/n]") == "y":
                await page.waitForNavigation()
            else:
                running = False

        time.sleep(delay)

    print("Closing browser...")
    await browser.close()

run = asyncio.run(main())

print()
print("-------------------------------------------------------------")
print()
for person in people:
    print(person)
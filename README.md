# csv
csv2json project

The project reads a csv file and converts it to JSON format. This first version reads in: string[15], string[15], int. I'm learning C, and the project is just for practice. I've checked the JSON output at jsonlint.com, and they said it was valid JSON. So that's good.
-- ron, 05/18/2020

I added bermuda.c, a filter program that selects only employees who weigh >= 190 pounds. By piping bermuda's output to csv2json, we end up with a file named heavy.json that contains big people. From the command line, I run: (./bermuda | ./csv2json) < emp.csv > heavy.json

This might conclude this practice project. Everything seemed to work, and I got valid JSON output.

-- ron, 05/19/2020

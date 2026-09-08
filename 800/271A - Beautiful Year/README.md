<h2><a href="https://codeforces.com/contest/271/problem/A" target="_blank" rel="noopener noreferrer">271A — Beautiful Year</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 271A](https://codeforces.com/contest/271/problem/A) |

## Topics
`brute force`

---

## Problem Statement

<div class="header"><div class="title">A. Beautiful Year</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.</p><p>Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The single line contains integer <span class="tex-span"><i>y</i></span> <span class="tex-span">(1000 ≤ <i>y</i> ≤ 9000)</span> — the year number.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer — the minimum year number that is strictly larger than <span class="tex-span"><i>y</i></span> and all it's digits are distinct. It is guaranteed that the answer exists.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0031147200567569433" id="id0012291118043327798" class="input-output-copier">Copy</div></div><pre id="id0031147200567569433">1987<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00260648492246391" id="id009107010734213518" class="input-output-copier">Copy</div></div><pre id="id00260648492246391">2013<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008054402263458622" id="id009615534512512629" class="input-output-copier">Copy</div></div><pre id="id008054402263458622">2013<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008613621939955227" id="id008909977437196973" class="input-output-copier">Copy</div></div><pre id="id008613621939955227">2014<br></pre></div></div></div>
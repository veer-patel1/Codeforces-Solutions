<h2><a href="https://codeforces.com/contest/486/problem/A" target="_blank" rel="noopener noreferrer">486A — Calculating Function</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 486A](https://codeforces.com/contest/486/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Calculating Function</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>For a positive integer <span class="tex-span"><i>n</i></span> let's define a function <span class="tex-span"><i>f</i>:</p><p><span class="tex-span"><i>f</i>(<i>n</i>) =  - 1 + 2 - 3 + .. + ( - 1)<sup class="upper-index"><i>n</i></sup><i>n</i></span> </p><p>Your task is to calculate <span class="tex-span"><i>f</i>(<i>n</i>)</span> for a given integer <span class="tex-span"><i>n</i>.</span></p></div><div class="input-specification"><div class="section-title">Input</div><p>The single line contains the positive integer <span class="tex-span"><i>n</i></span> (<span class="tex-span">1 ≤ <i>n</i> ≤ 10<sup class="upper-index">15</sup></span>).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print <span class="tex-span"><i>f</i>(<i>n</i>)</span> in a single line.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009383030747849417" id="id008645613913015859" class="input-output-copier">Copy</div></div><pre id="id009383030747849417">4<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007474260040848498" id="id007402384688380583" class="input-output-copier">Copy</div></div><pre id="id007474260040848498">2<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007668056259874232" id="id001904398850497412" class="input-output-copier">Copy</div></div><pre id="id007668056259874232">5<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00239988578329558" id="id005302258056342695" class="input-output-copier">Copy</div></div><pre id="id00239988578329558">-3<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p><span class="tex-span"><i>f</i>(4) =  - 1 + 2 - 3 + 4 = 2</span></p><p><span class="tex-span"><i>f</i>(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3</span></p></div>
<h2><a href="https://www.geeksforgeeks.org/problems/paths-to-reach-origin3850/1">Paths to reach origin</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are standing on a point&nbsp;<strong>(x, y)</strong> and you want to go to the origin<strong>&nbsp;(0, 0)</strong>&nbsp;by taking steps either&nbsp;<strong>left</strong> or <strong>down</strong> i.e. from each point you are allowed to move either in&nbsp;<strong>(x-1, y) or (x, y-1)</strong>. Find the number of <strong>paths </strong>from<strong> point </strong>to<strong> origin</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;">x = 3, y = 0 
<strong>Output:</strong> <br>1
<strong>Explanation</strong>: Path used was -  <strong>(3,0)  --&gt; ( 2,0) --&gt; (1,0) --&gt; (0,0)</strong>.We can see that there is no other path than this, so we return 1.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>x = 3, y = 6
<strong>Output:</strong> <br>84 <br><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Explanation</strong><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">:<br></span>There are total 84 possible paths.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Since this is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>ways</strong>() that takes integer<strong> x&nbsp;</strong>and <strong>y</strong>&nbsp;as parameters and returns the total&nbsp;number of <strong>paths </strong>from<strong> point(x,y) </strong>to the<strong> origin(0,0) % 1000000007.</strong></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(x*y).<br><strong>Expected Auxiliary Space:</strong> O(x*y).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>0 ≤ x, y ≤ 500</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;
<pre>
<font color="#5e6d03">#include</font> <font color="#434f54">&lt;</font><b><font color="#d35400">Servo</font></b><font color="#434f54">.</font><font color="#000000">h</font><font color="#434f54">&gt;</font> 
 
<font color="#00979c">volatile</font> <font color="#00979c">char</font> <font color="#000000">v</font><font color="#000000">;</font> 
<b><font color="#d35400">Servo</font></b> <font color="#000000">servo_7</font><font color="#000000">;</font> 
 
<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">{</font> 
 &nbsp;<font color="#000000">v</font> <font color="#434f54">=</font> <font color="#000000">0</font><font color="#000000">;</font> 
 &nbsp;<b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">begin</font><font color="#000000">(</font><font color="#000000">9600</font><font color="#000000">)</font><font color="#000000">;</font> 
 &nbsp;<font color="#000000">servo_7</font><font color="#434f54">.</font><font color="#d35400">attach</font><font color="#000000">(</font><font color="#000000">7</font><font color="#000000">)</font><font color="#000000">;</font> 
<font color="#000000">}</font> 
 
<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">{</font> 
 &nbsp;<font color="#000000">v</font> <font color="#434f54">=</font> <b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">read</font><font color="#000000">(</font><font color="#000000">)</font><font color="#000000">;</font> 
 &nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><b><font color="#d35400">Serial</font></b><font color="#434f54">.</font><font color="#d35400">available</font><font color="#000000">(</font><font color="#000000">)</font> <font color="#434f54">&gt;</font> <font color="#000000">0</font><font color="#000000">)</font> <font color="#000000">{</font> 
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">v</font> <font color="#434f54">==</font> <font color="#00979c">&#39;A&#39;</font><font color="#000000">)</font> <font color="#000000">{</font> 
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">servo_7</font><font color="#434f54">.</font><font color="#d35400">write</font><font color="#000000">(</font><font color="#000000">0</font><font color="#000000">)</font><font color="#000000">;</font> 
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">100</font><font color="#000000">)</font><font color="#000000">;</font> 
 
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font> 
 &nbsp;&nbsp;&nbsp;<font color="#5e6d03">if</font> <font color="#000000">(</font><font color="#000000">v</font> <font color="#434f54">==</font> <font color="#00979c">&#39;B&#39;</font><font color="#000000">)</font> <font color="#000000">{</font> 
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#000000">servo_7</font><font color="#434f54">.</font><font color="#d35400">write</font><font color="#000000">(</font><font color="#000000">180</font><font color="#000000">)</font><font color="#000000">;</font> 
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<font color="#d35400">delay</font><font color="#000000">(</font><font color="#000000">100</font><font color="#000000">)</font><font color="#000000">;</font> 
 
 &nbsp;&nbsp;&nbsp;<font color="#000000">}</font> 
 
 &nbsp;<font color="#000000">}</font> 
 
<font color="#000000">}</font>

</pre>
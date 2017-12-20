<?php
$z[0]=Array("field","",274,293);
$z[0][4]['name']="title";
$z[1]=Array("global","",294,320);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",361,390);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",430,488);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("global","",578,603);
$z[4][4]['name']="cfg_cmsurl";
$z[5]=Array("include","",1055,1090);
$z[5][4]['filename']="head.htm";
$z[6]=Array("field","",1236,1294);
$z[6][4]['name']="typeid";
$z[6][4]['function']="GetTopTypename(@me)";
$z[7]=Array("channel","\r\n      <li><a href=\"[field:typeurl/]\">[field:typename/]</a></li>\r\n      ",1406,1611);
$z[7][4]['type']="son";
$z[7][4]['currentstyle']="<li class='current'><a href='~typelink~'>~typename~</a></li>";
$z[8]=Array("field","",1710,1739);
$z[8][4]['name']="typename";
$z[9]=Array("list","\r\n        <li>\r\n          <h3><a href=\"[field:arcurl/]\">[field:title/]</a></h3>\r\n          <p>[field:description function=\"cn_substr(@me,300)\"/]...</p>\r\n          <div class=\"desp\"><span>[field:pubdate function=\"MyDate('Y/m/d',@me)\"/]</span><a href=\"[field:arcurl/]\">read more →</a></div>\r\n        </li>\r\n        ",1834,2186);
$z[9][4]['pagesize']="5";
$z[10]=Array("pagelist","",2226,2297);
$z[10][4]['listitem']="info,index,end,pre,next,pageno";
$z[10][4]['listsize']="5";
$z[11]=Array("include","",2347,2384);
$z[11][4]['filename']="footer.htm";

?>
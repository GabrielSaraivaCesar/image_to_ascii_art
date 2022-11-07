
# Image to ascii converter
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)

This is a C++ program that receives an image as input and prints an ascii art on the terminal.

## Important
The software was made to run only in gnome terminals.

## Running the app
```
./main [image_path] [...options]
```
### Options
| Syntax      | Short | Description |
| ----------- | ----- | ----------- |
| --negative  | -n    | Renders the image with inverted grayscale|

### Configurations
You can change the console font size to get a higher resolution result

### Results
![rendered cat](./readme_files/cat_result.png)
*Cat*

![rendered cat negative](./readme_files/cat_negative.png)
*Negative cat*

```
                                                                                                                                       
                                    '''                                                       ''                                       
                                   'III;,"`                                              '^,:;II,                                      
                                   "IIIIIII;"`                                         ^,;IIIIII;                                      
                                   ;IIIIIIIIII:`                                    '";IIIIIIIIII^                                     
                                  'IIIIIIIIIIIII:`          '``^^""""^^^``'       '";IIIIIIIIIIII,                                     
                                  ^IIIIIIIIIIIIIII:` '`^":;;IIIIIIIIIIIIIII;:,"`'";IIIIIIIIIIIIII;                                     
                                  "IIIIIIIIIIIIIIII;:IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII                                     
                                  ,IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII'                                    
                                  ,IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII'                                    
                                  ,IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII'                                    
                                  "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII                                     
                                  ^IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII;                                     
                                  'IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII,                                     
                                   :IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII:                                     
                                  ';IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII,                                    
                                 ';IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII:                                   
                                 :IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII,                                  
                                ,IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII`                                 
                               `IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII;                                 
                               :IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII^                                
                              `IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII;                                
                              ,IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII`                               
                              ;IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII,                               
                             `IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII;                               
                             ^IIIIIIIIIIIIIIIIIIi_][}}}[[?_+>ilIIIIIIIIli>~_-[}}{{}[->IIIIIIIIIIIIIIIIII                               
                             "IIIIIIIIIIIIIII<(uC0OZZZOO0QQLCJYXzcccczXYJCLQQ0OOZZZO0Qc/+IIIIIIIIIIIIIII'                              
                             ,IIIIIIIIIIIIIl|Lwdkkkkkkkkkkkbbdppqqqqqqppdbbkkkkkkkkkkkdq0jiIIIIIIIIIIIII`                              
                             ,IIIIIIIIIIII>vwkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkpY+IIIIIIIIIIII`                              
                             ,IIIIIIIIIII>XdkkkkkkhaakkkkkkkkkkkkkkkkkkkkkkkkkkkkkhahkkkkkbC+IIIIIIIIIII`                              
                             ,IIIIIIIIII>zdkkkkkhWB$@%*kkkkkkkkkkkkkkkkkkkkkkkkk*%@$@&akkkkbC>IIIIIIIIII'                              
                             "IIIIIIIIIIvdkkkkkh%$$$$$@&kkkkkkkkkkkkkkkkkkkkkkkM@$$$$$BakkkkbvIIIIIIIIII'                              
                             ^IIIIIIIII}dkkkkkk%$$aCXO&$Wkkkkkkkkkkkkkkkkkkkkk#$W0YJk@$Bhkkkkd}IIIIIIIII'                              
                             `IIIIIIIIIYkkkkkk*$$bcrjjv#@hkkkkkkkkkkkkkkkkkkkkBWuxjjjq$$MkkkkkUlIIIIIIII                               
                             'IIIIIIII!pkkkkkk8$%L@bjjjX@#kkkkkkkkkkkkkkkkkkko$J0%0jjr&$Bkkkkkp_IIIIIII;                               
                              ;IIIIIII+kkkkkkkB$bvhLjjjjW&kkkkkkkkkkkkkkkkkkkM%jXdXjjjw$@hkkkkk1IIIIIII:                               
                              ,IIIIIII-kkkkkkk@$Zjjjjjjjh8kkkkkkkkkkkkkkkkkkkW*jjjjjjjL$$akkkkk(IIIIIII"                               
                              ^IIIIIII~kkkkkkk@$Zjjjjjjjh8kkkkkkkkkkkkkkkkkkkW#jjjjjjjQ$$akkkkk1IIIIIII^                               
                               ;IIIIII!kkkkkkkB$kjjjjjjj&Wkkkkkkkkkkkkkkkkkkk#%rjjjjjjq$@kkkkkk]IIIIIII'                               
          ''`'`'`'``'``````````,IIIIIIIOkkkkkkW$@vjjjjjC$okkkkkkkkkkkkkkkkkkka@Ojjjjjn%$8kkkkkqiIIIIII:'``````````'``'`'`'`''          
    '`'''''                    ';IIIIIIukkkkkka@$#njjjJ8Bkkkkkkkkkkkkkkkkkkkkk8%Yjjjxa$$*kkkkkUIIIIIII`                     '''''`     
                        '`'``'``,IIIIII-kkkkkkkW$$&wOb@@okkkkkkkkkdpkkkkkkkkkka@BdOmW$$8kkkkkk/IIIIII;``''`'`''                        
               ''''`''''''       :IIIIIICkkkkkkk&@$$$$B#kkkkkkkkkqrjLkkkkkkkkkkoB$$$$$8hkkkkkdiIIIIII^      ''''`''`''''               
         '''''''                 ';IIIII_mkkkkkkk*8%%WakkkkkkkkkkmjjUkkkkkkkkkkkaW%%8#kkkkkkknIIIIII,                  '''''''         
     '''''                        `;IIIII]dkkkkkkkkkkkkkkkkkkkkkkkmZbkkkkkkkkkkkkkkkkkkkkkkkZ!IIIII;                         '''''     
                                   `;IIIII}qkkkkkkkkkkkkkkkkkkkdqkkkkdqkkkkkkkkkkkkkkkkkkkkq_IIIII;'                                   
                                    ':IIIII_LkkkkkkkkkkkkkkkkkkqupkkbYLkkkkkkkkkkkkkkkkkkkZ-IIIII;'                                    
                                      ^;IIIII[JbkkkkkkkkkkkkkkkkmczzvLkkkkkkkkkkkkkkkkkkqflIIII;"                                      
                                       '";IIIII-x0bkkkkkkkkkkkkkkkqqbkkkkkkkkkkkkkkkkbLt>IIII;,'                                       
                                          ^:IIIIII+(nJZdkkkkkkkkkkkkkkkkkkkkkkkkbmLv|+IIIII;"'                                         
                           '`'              `":IIIIIIIIi_[)/frxuuvvvvvvuunrjt({?<lIIIIII;,^                                            
                          ,III;!`              '^":;IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII:,"`                                               
                          ':II!z!,'                 '`^",:::;;;;;;;;;;;;;;;;::,""^`'                                                   
                           ;`,IIlC~`                        ''`````^^```'                                                              
                          `c  `;I-iI'                  `":;;IIIIIIIIIIIII;:,^                                                          
                          [b+  ':Ilq[                 :IIIIIIIIIIIIIIIIIIIIIII,                                                        
                          fb)   ';I]~:               ^IIIIIIIIIIIIIIIIIIIIIIIII;'                                                      
                          ^+^    `IIIu[              ;IIIIIIIIIIIIIIIIIIIIIIIIII;                                                      
                                  ,IItx;`           `IIIIIIIIIIIII:";IIIIIIIIIIII,                                                     
                                   ;III<r_^'     `"_"IIIIII;;IIIII" ,IIIIIIIIIIIII`                                                    
                                   `;II>XrI{j!;{/l<J,IIIIII`,IIIII" ,IIIII",IIIIII^                                                    
                                    `;IIIII{c<Ijc!I:,IIIII: ,IIIII" ,IIIII" ;IIIII"                                                    
                                     ':IIIIIIIIIIII:,IIIII^ ,IIIII" ,IIIII" ,IIIII"                                                    
                                       `:;IIIIIIIII::IIIII` ,IIIII" ,IIIII" "IIIII"                                                    
                                         '^"::;;::,^,IIIII' ,IIIII" ,IIIII" ^IIIII"                                                    
                                                    ,IIIII' ,IIIII" ,IIIII" `IIIII"                                                    
                                                    ,IIIII' ,IIIII" ,IIIII" `IIIII"                                                    
                                                    ,IIIII' ,IIIII" ,IIIII" `IIIII"                                                    
                                                    ,IIIII' ,IIIII" ,IIIII" `IIIII"                                                    
                                                    ,IIIII' ,IIIII" ,IIIII" `IIIII"                                                    
                                                    ,IIIII' ,IIIII!<lIIIII:'`IIIII"                                                    
                                                   ";IIIIIrO~IIIIItb[IIIII1m/IIIII!!^                                                  
                                              :_|vLp]IIIIIXb_IIIIItb[IIIII1brIIIII|bqCu)+"                                             
                                          ^_jLdbbbbb]IIIIIXb_IIIIItb[IIIII1brIIIII|bbbbbbpU/~`                                         
                                       "}uqbbbbbbbbb?IIIIIYb_IIIIItb[IIIII1brIIIII(bbbbbbbbbbmx-`                                      
                                     Ijwbbbbbbbbbbbb>IIIIICb_IIIIItb[IIIII1buIIIII~bbbbbbbbbbbbbO|"                                    
                                   ^fpbbbbbbbbbbbbbYIIIIIlqb_IIIIItb[IIIII1b0IIIIIIzbbbbbbbbbbbbbbw)'                                  
                                  i0bbbbbbbbbbbbbbC>IIIIItbb_IIIIItb[IIIII)bb}IIIIIiCbbbbbbbbbbbbbbbJ:                                 
                                 -dbbbbbbbbbbbbdc[IIIIIItbbb_IIIIIjb[IIIII1bbp1IIIIII{CbbbbbbbbbbbbbbqI                                
                                ^wbbbbbbbbbbbbbvIIIIIi(Jbbbb<IIIIIcb|IIIII_bbbbz]lIIIIlwbbbbbbbbbbbbbbL                                
                                ?bbbbbbbbbbbbbbZj|/rcQZqbbbmIIIII!wbJIIIIIIZbbbqZCvj/|ubbbbbbbbbbbbbbbb;                               
                                }bbbbbbbbbbbbbbbbdmZZZZZmdw}IIIIIvbbb|IIIII}pdmZZZZZwdbbbbbbbbbbbbbbbbbI                               
                                ,pbbbbbbbbbbbbbbbbbmZZZZZJ<IIII!nbbbbdtlIIII+QZZZZZmbbbbbbbbbbbbbbbbbbO'                               
                                 1bbbbbbbbbbbbbbbbbdZZZZZrIII>(JZdbbbdZY)>IIIYZZZZZdbbbbbbbbbbbbbbbbbd+                                
                                  1dbbbbbbbbbbbbbbbbmZZZZ0vuX0ZZZwbbbwZZZ0zvJZZZZZmbbbbbbbbbbbbbbbbbq_                                 
                                   ~QbbbbbbbbbbbbbbbmZZZZZpdZZZZZZbbdZZZZZZdqZZZZZwbbbbbbbbbbbbbbbbzI                                  
                                     +cdbbbbbbbbbbbbmZZZZZpbZZZZZZpbpZZZZZmbqZZZZZwbbbbbbbbbbbbbpni                                    
                                       !fCbbbbbbbbbbmZZZZZpbmZZZZZpbqZZZZZwbqZZZZZwbbbbbbbbbbdY(:                                      
                                          i(zqbbbbbbmZZZZZpbmZZZZZpbqZZZZZwbqZZZZZwbbbbbbbmv{;                                         
                                             ^~)uLpbmZZZZZpbmZZZZZqbqZZZZZwbqZZZZZwbbqCx1>`                                            
                                                  ">-1fxcJmbmZZZZZqbqZZZZZwbqLJvr|{-i^                                                 
                                                          ^:!i>---][[---->>!:'                                                         
                                                                                                                                       

```

```
                                                                             :i>/]||)-~"                                               
                                                                           ~}fjxjt/|/tft]"                                             
                                                                        ^>}curf/|((((((|t/<`                                           
                                                                       :)xvrf/||(((((((((|j1`                                          
                                                                     ^i/vxft/|((((||||||((|t1`                                         
                                                                    l/nnjf/|(((((|||||(zzvt|t{                                         
                                                                   ~tcxft/||((((||||/JqMMMbLfj~                                        
                                                                ^^<nvrft/|((((((||||v##c@@@8mff;                                       
                                                               ^!{xnrft/|()))((||//rhW%/p@@BUZv|                                       
                                                              ^!]vnjft/((()))((||//p#@ajr#@8u0kxi                                      
                                                             ;!}vnrft/|()))))((|||j*8BwrxYWkrjWmj^                                     
                                                             ;}unrft/|()111))((||/u#B8CrrnXJxjZ&x+                                     
                                                           ^!<vnrft||()11111)((|||YM%&XrfxxxnjroZf^                                    
                                                          ^+[curft/(()111111)(((||CM8hrjjnrrrfjLMri                                    
                                                          ++vvrft/|()1{{{{11)(((||Q#&0jjuOjjjYjn8n(                                    
                                                         i+rvxft/()11{{{{111)(((|(UM&YffZ%fjYqjt*Xr^                                   
                                                        ^~rcxjt|()11{{{{{11))(((((n*offtwB0jbojjq0rI                                   
                                                         _znjt/()1{{}}}}{111)(((((n*Ofttk%#X@%xjCb/}                                   
                                                       i]uxjt/()1{}}}}}}{{1)))((((|hYtt|M%BBB%Jfrm(r:                                  
                                                      i_vnjt/(11{}}[}}}}{{11)))(((1wU/tr%%%%%%LfjC)jI                                  
                                                      !)crf/()1{}[[[[[}}{{{11))))))vhf|J&8&888qjxY)x+                                  
                                                     ^]nxf/|11{}[[[[[[}}{{1111)))))(kZtZMWWW&Wp|Yz)f{                                  
                                                     <vvjt|)1{}[[[[[[[}}}{{11)1))11{Uaqpooo*##Q(q/)/t                                  
                                                     (cxf/(11}[[[[[[[[[}}{{111111111)qbwJUULkhbpJ))|j:                                 
                                                    lunjt()1}[[[]]][[[[}}}{{1111{{}}}xzn(/f/j?|zrnrrc,                                 
                                                    (vrf|)1}[]]]]]]][[[}}{{{{1{{[}}1|jjrnvczXx()cczuj[_+>,                             
                                                   :uxf/)1}[]]]]]]]][[[[}}{{{}[[{1(|trrrxnxrf/|(())11)|tjt1<`                          
                                                  ^]vj/(1{[]]]]]]]]]][[[}}}[[[}1|/ttfjrjft|(1}]]????????][{/)<                         
                                                  lnxf|1{}]]???]]]]]][[[[[[][{(/tfffjjf/){]?---???][[]?]???]{f<                        
                                                  ]vj/)1}?]??????]]]]][[]]]}(|tfjjjjt(1[?---??????]]]]]??????]/;                       
                                                 l/nt(1{[?????????]]]]]]??{|tfjjrjf(}?---?-------??]]??????---[[                       
                                                 )uj|1{[]?--??????]]]]?-]1/fjjrrj(}--_---________--??????---__-(                       
                                                :rnt({[?-----?????????-])/frrxr/}___-______++<~~+__-???---_____f                       
                                                {vj|1}??------???????-?)tjrxxf1-+++_-][{{{}}[-+>i<~_----_____+_|                       
                                              :+urt){]?---__----???--?)tjxxr(]+>!i_{)((|||||((1[>Ii~+_______++_1                       
                                            i||jxt({]?-______-------]|fxnr)-<l^'''`!1/tffffffft|!`,l>~++++++~~?<                       
                                           ~vzxvf(1}?-___+____---__}(jxx/[~i"'''````i/fjjjjjjjj|^^";!>~~+++~++1"                       
                                         ^iucXzr/1{]?__+++++______[/jxj{+<+^''`````^"]jrxxxxxrr}`",;li><<~~~~--                        
                                         ?tcccxt){[?-_++~~++++___]/jj|?>_[>''```````^l(xxxnnnxx+`;;:l!><<<<~_{"                        
                                        i]vvvxf|{[]-_+++~~~~++++-(f/{~<]1{:'`^^,!>l^`,-nnuuuuuxi"_<;l!>><<<+1i                         
                                        !}vuxf/1}?-_++~~~~~~~+~_{|)_<_{)({``,;_(jrj1I^!xvvvvvvx;!t};li>><<_{;                          
                                        ]rnrf|)}]-_++~~<<<~~~+~[1]~+]1(|/1`:i}rxnuuujl:fccczccj,{cu;li><~-};                           
                                       ;[zrf/){[?_+~~~<<<<<~~~~-+~-{1(/tf1^i(xnuuvvvvj>|JCLLLJf;cYY>!>~-}_"                            
                                       ifuf|){[?-_+~<<<<<<<~+>><+[)(/tffj);{nuuvvcccXLYjppppppn1LJU[<?{?i                              
                                        }r/({[]-_+~~<<<<<<<<<ii-{(//tffjr/_xuvvvrfjuUOmZdddddpJYXUYfi!:                                
                                        ?j|1}]?-_+~<<>><<<<>!;<1(|/tffjrxrtvczvxvLQzuCZqdddddpmv0cUn                                   
                                        ?f({[]?-+++<<>>>>>il:,+(|/tffjrxnncJ0Ovmh#WMCzQwddddddZo#*CZ!                                  
                                        /f)}[?--_+~<<>i>>iI,,,+|//tfjrxncUOqpCXuup88WYJmpbbdddCLhMQk+                                  
                                        }r)}[??-_+~<<>ii!I,,:,~|//ffjruY0mqpp||1[{Z8%qzOdbbbddttZWbb+                                  
                                        <j)[]??--++<<>i!I,:::,>|/tfjrvCZmwqpZ(r/){)8%&0Qpkkbddfrr&pp~                                  
                                        ^/(}]]??-_+<>i!I::::::l|/fjxcLOZmwqdU/j[[(}pB8qLpkkkdd}|npWC~                                  
                                         {/{[]]]?-+<>iI:;II;:::)tjxXL0Ommwqdzr[v{)(v%%*Yqkhkbdx|rC@Jf                                  
                                         if1}[[]]-~>!;,;li!l;;:?trXCQOZmwqpduvlat~)t%%&LmkahbdX/[j#0J{+;                               
                                         ^t({}?nuYz{I",I><>!II:i|nXCQOZmwqpdJc:-!!1[88&UZkoakd<InJmpbhoqU{                             
                                          +f1[tbpppw1,,l<<<i!i><[nYCQOZmwqpdzX;llI[?&8&vZbookbnrwwqpdbkkhoz^                           
                                          :t/Cpqwwqpc{,l><<>~_---/XCQOZmwqqdYul<+I[]W&WLOdaakqZZmwpddbkhhhaQ^                          
                                           ]QmmZZZZmuj+;><>>~__-][zCQOZmwqqdQv~+-i1[WWaU0qbbmQ0Zwqpdbhaaahhan"                         
                                          "nZO0CYXUCur/>i>>i<~__?]nCQOZmwqqdOx(<_+|tMMpc0mwQJJYZwqdbkakk*ohhbj                         
                                          iC0QJcnnnnxrj}!>i!ii<_-?fCQZmwqqpdbuX~i1)n#abY0OLYXJYZwqdbhbLhkohhhm"                        
                                          [OQQJunxxrxrj/>>ilI!!<_-fC0ZmwqpdbkLXXf/{w**qU0CcvzJYZwqdbhbq**ahkka+                        
                                          QQQQQJvnxrrrrf->>i:I;l>>xJZwwqddbbvOjur{xaodJ0CvvucJ)Jwqpbkabooahkbhu                        
                                          0L0OO0Cuxrrrrj1><~>:,:;+XXwqpddddQ>>f)/uphdL0QXrnucUxxmwpdbhhaahkkbkC                        
                                          pLOZOOLuxrrjrj|+<~+~l;>fjOqpddddpv>!<)UzXYCUmzzcnucYCcZwqddkkhhkkbbbm                        
                                          pCmmZOLurjjjrjt]<<+_?_{u|qZmpppw0/!!<>}YOddpJjvunuvzULOmwpdbbbkkbbbbL                        
                                          pCmwZOQnjrjtfrf)~<<+-]/)ZQJZppqLv[!l<+<<-jJ0n/jrxnucYJQZmqqpdddbdddbZ                        
                                          UCwqZO0xrrrj/tj|->ii_-jrQQZqqqmYn?ll>++~<>+??_-trnnucXC0Zwwqpppdddddd                        
                                          XCmpmOOunxrrt|jt1<l!>_/zZqqqww0zn-II!~___~<>>I"{jrnnuvYLOmmwqqqppppbJ                        
                                          fCZdwOZJunrrf|jft[l;l}|zqwwwwmCcx-;;l>+--__~<!^<tjxnnucUQOZmwwwwqqpb|                        
                                          -QQdpZmOunrrf/rjjf~;lx?YwwmmmZUvx]::I!<+_--_+<""(frrxxuzJQOZZmmmwwpd;                        
                                           CCqkwmwznxrjtxrrxu|jj`/YQZZZZXvx(;":Ili<~+_-_l`i|jrrxnuzJL0OOZZZmb}                         
                                           (C0bdqpUnxrjjxrrncXU}`i|zLOOOcuxt_,":;l!!i~_-~`^_tjrxnnvzUCL00OOwv^                         
                                           ;LCZbqZQnxrrxxrxnzJU]<]jcY000vunj)+"",:;;Ii~__,`"1fjxnnuvcYUCCLCL^                          
                                            tJCwqmOvnxnuxrxnzJv/fvLJLQQQvunrt(+,^",,:l><+!^`!tjxxnuuvczYYJc>                           
                                            ^LUQqbdJuuuuxrrnzJUULLCCCLLLcuuxrt|]>;:"";li>>^^`~frnnuuuvczXn]'           ;__^            
                                             ]JU0wqmXvuxrjfxzJLLCJUJJCCLUvunxrjt|1[I^:;l!!,^^`>1xnuuvczx)<+          ~Xk%Bbx^          
                                         ^,_>ItcJQOZLuxrjf/jcUCCJUYYUUJCCYvuunxxrf/+^":;II;^^^`">}(|)[~il<i         (k*M8B@@Q"         
                        >_^          ^>+(ttxrf/|fnYCCznnf/(tcUJJUYXXXYUJCLJYzczXUuj)I^",:::"^^^^``^^^^,!l_'        )hha#&B@@@U         
                      )0&@bJ)^   :+?)|rt|(()()))))(rvXzu/(1tcUUYYXzcczYJCLLQQQ0OZYnj}I^",::"`^^^^^"^^":)t,        [kdbh*W8%B@@)        
                     c@@@@@@@w_-1jrt|(())))))))))))))trt){rxcXXXzzccvczYJCLLQQ0OZLvjr(-<<_]I^``^^",^^,i0c   }U0Y;`Owqdko#M*W&Bo>       
                    )&*#W%%B@@&zf((()))))))))(())))))))))_uvvvuvccvvuuvzYJJCLLQ0OOz-fnxrxxt}I^^^"II,,Ijq?  !ka#8bcOmqpbkkdhW8%BkI      
                   Ia&Mhqb#8%B@BU))))))(((((((((((()))))))|tfftxuvvuunuczYUJCLLQ0OJ)}jnvYunj1~l!-||()xOY   `Ok#&B%mmwqpmObo&%B@@b>     
               ")Uw*@@@@WpqaW%B@&t(((((((((((((((((((())))))1-?/rnunnxnuczYUUJCLQOOzx/fnYzvunrjrvvuJ0Ob~   "LdoW%@MOmwOLwdaM%B@@@oI    
             _cb@@@@@@@@@BawbM%B@h/(((((((((|||(|(((((((()))){>-(rnnxxxnvvzXYUUCL0ZOQ00zuxuvvvvvcnjOwq0  ^l<Ymh#8B@dOQJZwpbo&%BB@@c    
           Ic&@@@@@@@@@@@@@#qbM%B@w|(((((||||||||(|(((((((()))[!~|jxxxxnnuvczXYUCL0OOOZmZJcnrrrrnuUqqd?  ?{<uQd*&%@&JYOmmqdh#&88%@W_   
         ")o@@@@@@@@@@@@@@@@&qbW%B@f((|||||||||||(||(|(((((((()_l_/rrxxxnnuvcczXUCL00QQQ0mmZLJJCOmwqpC   |/-jXmhM8@@JLOmmwqba**#W%@c   
        +w@BB%B@@@@@@@@@@@@@@&qaWB@k)|||||||((((((((||||(((((((1+l?/jrxxnnnuuvvzXUCQ00QJUJLQOZZZZmwpqi   ct1trLd*WB@qLOZmmwqppqph8@o   
      "c@@#*&B@@@@@@@@@@@@@@@@8ph&B@Z||(((((())))))(((|||||||((()~I+)jrxxnnnuuuvczYCQOZZ0JYXXUC0mqqp?    vj|ttnQbo&%wUQOOOO0YOhW%B@@)  
     "Q@@@&8@@@@@@B@@@@@@@@@@@@#p*8BMu(((()))))1111)))(((|||||((({iI>}frxxnnnnnuuvzYCQOmwwZO0Omqpqd}     vj1(ttvOdoMUcJQQLUcOo&%B@@@o" 
    iQ@@@@@@@@B%%%BBBBB@@@@@@@@@obW%Bm))))))))1{{{111))))((||||(((?lI!_|jrxxnnnnuuvzYCQOmwwwqqqqqpC      cj({(ttcQqd/rzUUvv0paW8B@@@@) 
   "b@@@@@@@@@&*&%BBBBB@@@@@@@@@Bdo8%W})))1111{}}}{{111)))(((||((()+l!!>[|jrjjrnnnuvcYJQOmmwwwwwqpi      |j(()|tfuXj?/rurz0Zqk*W%BB@@Q 
   U@@@@@@BBBBBBBBBBB@@@@@@@@@@@@#kW8%j111{{{{}][[}}{{{{1)))(((((((1-l<il<{/)(|jnnnuucXJQOZZmmmwd}       1j|||(|/t(-~||(nL0Zmda*&888BM 
  )@@@@BBBBBBBBBBBBB@@@B@@@@@@@@@Bd*W8U{{{}}}}[?]][[}}}{{111)((((((()->?>l!-()|fxnnnuuvXJL0OOZmqu       "xr/////|t)[~]{]cLQ0Zwbh**#M&% 
 "M@BBBBBBBBBBBBBBB%%%8BB@@@@@@@@@aaM&Z}}}}[[[?_-?]][[}}}{{1)))(((((()~1(-!l~[|frxxnnuuvzYJCLOqz^      "cUj//tttuJ|1?++{nULQ0Owqdpda8B^
 rB%%%BBB%B%B%%%%B%o#&%BB@@@@@@@@@&k*Mo1[[]]]?+~_-??]][[}}}{11))((((((]-/f[iIl_)frrxnuuuvzYXcU[^       jZjj///trO0/)[?_)jXJLLCLLOp*8@@_
 Z88%%%%%%%%%%%%%%%WW%%BBB@@@@@@@B%da*M]]??--+><~+_-??]][[}}{11)((((|()<(jj1<!;l+{/rnuuvXnt/]:         mX(j///fYOmx|{]?1/vYJYuYZ*%@@@@)
>oM8%%%%%%%%888%%%%%%%%BBB@@@@@@BBBbka*<-__++>!i<~~+_-??]][[}{11)((|||(+}trr/?lIII<?-()/[:^            wv||t|tnY0mqu1[]}|jnnjXwkM%@@@@U
]#*&888&8888888888%%%%%BBB@@@@@BBB%hphoi++-]]>iii><~++_-??][[}{{1)(||||}_(rrrj]lll>?:_~i_?+;        ;<~Cn/{/|tnXLZqf(1}])|)jQmqb*8BB@@w
ra#WWWWW&&&&&&8&88%%%%%BB@@@@@BBB%%awda<[{_!!][~iii><~++_-??[[{{1)((|||(~1rrrrj<!!>?l!+!i{//}>"  `<]1]<Xx/)1//rzCZL/|()[]]}YOZwphM&8%Bm
xbW#*oa#MWWWW&&&&88%%%%BBBBBBBBB%%8oOpk<I:   `l+]iiii><~+_-?]]}}{1)((|||+[frrrr{ii>_~;<!<1))(1]-i[{+<>>urt|1|/rcCZct/||1]](cLOOZda##W&Y
xdMhbppa##MMMWW&&888%%%BBBBBBBB%%88aLwX         i<>iii><~~_-??[}{{1)((||?+/rrrrj?>>~?:ii[))))1~<++>ii!!|rfUY(/jcC0utt//([[|xULQQZqbh*#1
)badmOZbao*#MMMW&&88%%%%BBBBBB%%88&aJp1         i<1>iiii><~+_-][}{1)(((|{<(rrrrr|[+~?;l+1))())?!Il!!!ll?fcZaUtjvUQXfftt/{](tvYUUJCLOdk^
_abqCYCdkhao*#MMW&&8%%%%%%%%%%88&&&aCQ^         i<)~ll!ii><~_-?[[{11))(|(+1rrrrrf)1--!:?}1))((1<Illlllli)vLd#LruzJLnjuxt([{/jnvuxucXm[ 
IwZmXuJqpbhhao*#MW&&88%%%%%%88&&&&W*z!          >~)+!;;I!i><+-?[}}{1)(((|_{jrrrrj))){_:{}{1))((]IIIlllII_rUm*#uxuzLQQOnf/){(tjjt/jnYj  
 LQmcxUmwqpbkha*MWW&88888888&&WWW&Whl           <~{_><<>!><~_-][}{11))((|?[frrrrr|))((i}{[{1)))1lIIII!iIl(c0bMmjruUQOYfff/|(/ffjjvJz^  
 jQqvjYmQ0Omwpka*#WWW&&&&&WWMMMMWMWq            {>[--?[}{}[]]][}}{1)))((|{-trrrrrt)))(?+1]}{{1))<l!>~_~II~fJmkWcfjvULxjjjjfffjrnUO(^   
 ;mdujzwUJCQ0mpko*#MWWWWWWM####MMMW0            (__--?][}{}}}[[}{{1))(((|)+/rrrrrj())()!)?[}}{11?<+_--~III1vQwodttrcXjjjjrjjrrvUO(     
  zkufvwXzXYULmdha*#MMMMM#******##Wn            t(~_-?][}}{{}}}}}{1))((|||+/jrrrrr/)))(I)]][}}{{}+____~III~fUOd#u/txxfjjrrrrxcCL{      
  ikvjxqccccvYQwdhao*###**oaaooo**&n            n|[~_?]][}}}}}}}}{1))(((||_|rrrrrrf)))(!{[?][[}}}+____<IIII{uJZkpt/ttffjjrrxzQj<       
   JcjfdvuvnjvJOqbkao**ooahhhkhaao&[            X()-+-?][}}}}}}{}{1))(((|(-(jrrrrrj()))[]{-?]][}}+++++>lIII>/vLwaC(/tffjrxuUC]         
   rYj/duuujfnzLZpbhaaaahhkdddbkao8>           ^t(11?_-][[}}}}}}{{{1))(((([(jrfrrtrf/))|])_-??][[_+++~illlII]tzQqdt|tfjnzLzj;          
   [Qr/punxffrvUQmpbhhhkkbqmZwpbho%            +1(1}1}-?][[}}}}}{{{11)(()|((jfuLLXnrrftf[|t---?]]_~~~~!llllI![jY0mnt/jzr|~^            
   "wu/qurjffrnzCOqdbkkbpmCUJOqbhob            ?|)1}{)1[?][[[}}}}}{11)))/r((tuQLLLXjjjjj{1Jt__-??+~~~>lllllll!1nYUnxrvQ;               
    fLfwuffftxxcUQZqdddp0ntrnUmdk*J            +r)1{}{1|1]]][[[}}}{1111/rr((tL0O0LLzjjjj|)XJ_+_-_+~<<!llllll!i?(cvnuz0}                
    "|Yqcfft|xxvXLOmqpp0x(]tjvZdkM(            [x){{{}{1((){]][[[}}{{(trrj((tU0dqLLCjjjjj{YQ1~~++~<>illll!i+?+!"+rJQz~                 
      ?wXfft)xxnXCOZwqqcnr]|jUmdk&I           ^(r){{{{{111|/|))1{1((/jjjfj)(/X0OmLLQxjjjr{c0ji<<~<>ill!i<??<,    ^><^                  
       )Ljft1rxxzJ0ZwqqJp0[fcLmdhp            +jj)1{{{11{1((|/tfffffffffjj)(/zQ0ZQLQvjjjr{xQzl!i>>i!i<?-+i`                            
       >wjft1jnxcUQOmqh*awtzJ0wpo)           ^?nf)1{{{{){11)(|///ttttttfjj)|1uUL00L0njjjr1jCQ<<<><~??-i`                               
        mnjt(furcUQOmq*%#ZJJQZwda"           ^-u/1{{{{{1{1)1))(||||//tffjj1|}rXJCLCO/fjjr((vw!i-?[<l"                                  
        1Cxf|tvrvUC0ZqW&*QLL0mwar            ?/v/1{{{{{1}{))))(((|/tttffff{|})vYUJJXjffjr/tcC                                          
         |JujxUjuXJQZq#omJQ0OZpQ"            }(u|1{{{{{1}{))))((||//tttfff](/]jvXYYffffjrr|xc                                          
          <tjr0xxXULOpbmcUQ0OZhi            +1rx|1{{{{{1[1))))((||///ttttf_[f{[fnurjfffjrx{jt                                          
              !UuzUCLLzuvYCQQq{             /[zj(1{{{{{1{1}1))(((||////ttt1i-|1?}(//tfffru_[^                                          
               _YCLJn/xxuzYUJj             ^||vf(1{{{{{1})11{))((|||////ttt{i~|//()/tttfru]+                                           
                :>i~{}(tjxur(-             +1uut)1{{{{{)}1{))11((|||/////ttt{>~|)1/tttttju]~                                           
                   i1|f{]]?~<]^            /{cn/1{{{{{{1}1{1)(()1(||////t/ttt1>?)//tttttjvI;                                           
                  :]1v)]-~>>>-+,           }rur|1{{}{{{1}1]}1)(||))(|//////t//1|////ttttjfl                                            
                  _}xt[?+<>>>-1[?          jznj(1{}}{{{1}){[[{)((||(((///////////////tttj|+                                            
                `+{(n1?_~>>><}[[(^        :ncrt){}}}{{{1{)11{}}1(((//||)|//////////////tj|+                                            
                I1}f)]_+<>>>]]--[~        >/vf/1{[}}}{{1{)1111{}}1(|||//||(////////////tj|+                                            
               "}}u/]_~<<>>?[_+_])'       +tnf/{}[[}}{{{{)1{11))1{))(|||/t||((//////////j|>                                            
               ~{]|}-+<<<>~[-+~__[?       >urf({[]][}}{}{1{1111)){|())(|||/t/((((/|||///f|:                                            
              "(-[{?+~<<><[_+~~~+-)}l     ~cjt(}[]]][}}}11{1111)11(((|()(||||/t/()))(|//fj                                             
              }[>[?+<>>><??+~<~~+-]1f]`   <uj/)}]??][[}[1{{{{111{)))((||(()(||||///|(())/)                                             
             >1>i]+~>>>>+[+~<<~+_-?]{/(l  ]nj|1[]??]][{]1{{{{{1{{)))(((((||(()|||||||////)                                             
            ,?[>]-++~~~<[+~<<~~+_-?]]}(t}+)xf(1[????][{?1{}}{{{{11))))(((((|/(()((|(((|/j[                                             
            ;?i?}?????-??~<<<~++_-??][}1|tfr/){]????]]}?}1{{{{{{{11))))(((((||||)11)(((|r~                                             
             !;1[]]]]]]1+<<<~~++_--?]]][})vj/)}]????]]}?[}}}}}}{{{111))))(((((((((111{1(|>                                             
            !<-}]]]]]]){~<<~~~++_---?]]]]|tj|1}?--??][[?]}}}}}}}{{{{111))))(||//////|(((/^                                             
          ^/j]}]]?]]]{(]<<<~~+++__---???]|1f({[?---?][[?[}}}}}}{{{{{{{)(|/ttfffffjjrr])/-                                              
         ^xvi}]]?]?]?(1-<<<~~+++___-----]()f(}]?_--?][}?[{{{{{{11)(||/tffffffjjjjjjjr)11I                                              
        ^zJ<[[]]]???[(}+<<<~~~+++__----_])11)}]-__-?][{?}{11))(|//tttfffffjjjjjjjjjjjjx1:                                              
        xUti}]]]???_11[~<<<~~~++++______]{1[1[]-___-][1])}1))((||//tttfffffjjjjjjjjjjjrxfI                                             
       _Q/>{]]?????_)1?<<<<~~~~++++____+][}_1[]-++_-?]}[1[1))((|||///tttfffjjjjjjrrrrrrrx/I^                                           
      ^Xvi][]]????_]}{-<<<<<~~~++++++_+~?]]]1[]-_++_?][1?(})))((|||///tttfffjjjjjjrrrrrrrxj+                                           
      xY}~{]]?????+{1[+<<<<<<~~~~++++++<]]??([]?_+~_-?[{])}})))(((|||///tttfffjjjjjrrrrrrrxuI                                          
     lQr!}[]??????_{{{+<<<<<<~~~~~~~++~<?--?/{]-_+~+_?][1-({})))(((|||///tttfffjjjjrrrrrrrrx|:                                         
    :Yc_?]?]?]???_-}{[+<<<<<<<~~~~~~~~~<--_+){]-_+~~+-?]}}?(}})))(((|||////tttffjjjrrrrrrrrrn?                                         
    jU|-[]???????~?[{?><<<<<<<<<~~~~~~~~__+~_)[--+~~~_-?[{[-({[))))(((|||///ttfffjjjrrrrrrrrxf:                                        
   lJn+{]????????~][}_><<<<<<<<<<<~~~~~~+++~<}1?_++~~+_-]]{}-)1]{))))((|||///tttffjjjrrrxxxrrn}^                                       
   )n1]??????????~?[[~>><<<<<<<<<<<<<<<~+~~<<~{}_++~<~+_??]{}_{(}[))))((|||////ttffjjrrrrrxrrrr>                                       
  Iz)_]-?????????<-]]<>>>><<<<<<<<<<<<<~~~<<>>~)?_~<<<~+_-?]}{-[(1[{))))((|||///ttffjjrrrrrrrrx)                                       
  1f]]-??????????~_]->>>>>><<<<<<<<<<<<<<<<>>ii?}-~<~<<<+_-?][{]_{([[1)))(((||//tttffjjrrrrrrrxx^                                      
 ;x[{----?--?????<+?+>>>>>>><<><<<<<<<<<<<<>iiii]?_+<<<<<+_-??]{}-]()[})))(((||///ttfjjrrrrrrrrxl                                      
 ])-]_------?????~~-~>>>>>>>>><<<<<<<<<<<>>>ii!i<]-_<<<><~+_--?]]{[_[(}[{)))((||//ttfffjrrxxrrjx+                                      
l|?___-------????<<+>>ii>>>>>>>><<>><<>>>>>iiiii!<?_~~<><<<~+_--?]}}]_{)[]1)))((|//ttffjrrrrrrjr|            ^^  i>                    
l{{]+__--__--????~>>iiiiii>>>>>>>>>><<>>>>>>>i!!!!!_++<<>>>><~+__-??]{[-{({[1))((|//ttffjrrrrrjjjl         ,[||/uutu1"                 
 i[?~+______-????+iiii>iiii>>>>>>>>>>>>>>>>ii!!!!!!!?-~<>>>>>><~+__--?[}]-{)[[))((|//tffjjrrrrjjx!        'trjfjrnuvt|_                
 _l-~~+_____---?-~!iii>iiiiiii>>i>>>>>>>iiiii!!!!!!!i[]+<>>>>>><<~+__-??}}]?)1[1)((|/ttfjjrrrrrjrj       ']////tfjrnc|~_               
 _[-~~~++___-----<i>ii>>>>iiiiiiiii>>iiiiiiii!!!!!!!!i[}?~>>>>>>><<~+__-??{[?[)[1)(|//tffjjrrrjjjx}?<^  ,?))||/tfffrxc/?I              
 ^}-<<~~++____-_+>!><><~--+>>iiiiiiiiiiiiiiii!!!!!!!!!i<-?~<>>>>>>>><~++_-?]{]]([))(|/ttfjjrrrrjjtrun},-]{{)(|/ttfffjru)["             
  ]?>><~~+++____~ii>?-?]+<<?_<>iiiiiiiiiiiiiiiii!!!!!!ii>__]~<>>>>>>>><<++_-?}]}{1)(|//tffjjrrjjj/fjrr?{[[1)||//tfffffrv?_             
  i?<>><~~+++__+<i>-!ii,   ,>--~>>iiiiiiiiiiiiiiii!ii><~-]Il?_<>>>>>>>>><<~_-?1-([)(||/ttfjjjrrrj/fjj(-?]})|////ttfffftru~>            
   i+>i><~~+++++>>-~         'l+?+<>iiiiii>iiiiii>>>~-]+l^  ^~[_<>>>>>>>>>>~_?[[1}1)(|//tffjrrrrf/jjf-+?]{|/////fjrrjf/tx}_            
   '_+>i><<~~~~<>+~'            ,<?-~<>>>>>>>>>><~_]_!,       I+?_<>>>>>>>><_?]1?1[)(|//tffjjrrrt/jj/~_?})/////tjrxnxf//fx[I           
    "-~>>>><~~~<_~'               ^l+??_+~+~~++?]+i:            :~[+~>>>>>>~_-]{?|[))||/ttfjjrrr//jj1~_]{(/////trnvvnr/|/j1>           
     ^+_<<<<<~+?~'                   ^;>>--_-~ii,                 I~]_<>>><+_-][}111)(|/ttffjrrj|/jf?_-[1(//(|//ruzXvxt||/n]           
      'i--__?]_l                                                    ,<]+<~++_-][1]|[)(||/tffjjjf|tj/-_?}{(||((|/xvYYcnf/|(x]           
        ^iiii,                                                        :~?____-?]{?)})((|/ttfjjjt|tj)+-]}1)))))(/rvUUzxf|(){_           
                                                                        _}____?][}[11)(|//tffff/|tf[+?[}{1{{{1)/jvYUvxj|){?]           
                                                                        '_--__?][1-([)((|/ttfff||tf?-][}}}}}}{1(fruXurf()}??           
                                                                         l]-__-?[1[)}))(|//ttt/(|tt_-][[[[[[[{{(fjruxjt({}?r>          
                                                                         ,{?-_-?]}{[{1)(||//tt|||t/_?]]]]]]][}})tfjrjf/)}[1mx          
                                                                          ??-__-][1?([))(|////((|/{-?]?????]][}{1(/tt|){]]xZn          
                                                                          <[--_-?][}1}1)((|///((|/[????--??]][}{{1)((1{[?/Cq~          
                                                                          ^1?-_--]]{]1[))(||||((|/?]?---?-??]][}}{1)1{[?]UOL           
                                                                           [?-__-?]{?(}1))((|(((||-?-----????]][[}{}}[]-nOp-           
                                                                           >}?-__?][}}1}))((())(()_-------????]][[[[]]-)0qQ            
                                                                           ^1?-__-?]{-([1)))())((}___-------??]]]]]??-?UmO!            
                                                                            ][-___-?}?[{{1))))))(]--_---------?]???--?nOq[             
                                                                            !1-___-?]}_(]11)1)))(__--------__-??---__rLmx              
                                                                            '[?-_+_-?}]}}}1111))1+___----___----___+)J0J^              
                                                                             i}-_++_-]{_(?{{11))[+___--_________+++]cLQl               
                                                                             ')?__+_-?[?}}}{111)__---____++++_++++-xUC?                
                                                                              _[-+~+_-?{_)?}{11{~__-__++++_+++~~~+tzC-                 
                                                                              ^{-_+~_--[][{]{{{?+_-_+_++++++++~~_(vYt                  
                                                                               +[_+~+_-?{_)}}{[~____+++++~+~~~~+|xzr`                  
                                                                               ^{-_+~+_-][[(?}_~___++++++~+~~~+1xvx,                   
                                                                                +]_+~~_-]{-}[-~+++_+++~+~~~~~+{jun;                    
                                                                                ^1-++~+-][[+1~++++++++++~~~~+}fxj;                     
                                                                                 ~{__+_?]]}]~~++++++++~~~~~_)fx1`                      
                                                                                 '[?_-???-??<~++++++~~~~~~_)fr{`                       
                                                                                  i}?]?-__+<~~~~+++~~~<<~+1tf]`                        
                                                                                  "(}]-+~~>>~~~~~~~~<<<<+{t/i                          
                                                                                   f}?+><!>><~~~~~~<<<<_}(]"                           
                                                                                  :{[+<>iii><<~~~~~<<<+->,                             
                                                                                  ^>]<>iiii>><~~~~<<~_{'                               
                                                                                   ^<-~<>iii>><<<<<<_(ri                               
                                                                                     __~>iii>>>><<<-)fr+                               
                                                                                     l[+<iiii>>>><-(tj?                                
                                                                                     '+_~>iiii>>>_1tf]                                 
                                                                                      "]+<>iii>>+{/f?`                                 
                                                                                       <-~<<>><+])/~'                                  
                                                                                        !?++~~_?})<                                    
                                                                                         I>>]?]}{>                                     
                                                                                            _1{[!                                      
                                                                                            '?~,                                       
```
```
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@@@@@@@@@@@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@@@@@@@@@@@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@@@@@@@@@@@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@@@@@@@@@@@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@@@@@@@@@@@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@@@@@@@@@@@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@@@@@@@@@@@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@B@@B@BBB@@@@@B@%@@@@@@BBB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@B%B%B@%%WkbkMB%B%@@@%@@BBBB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@%%BB8%aLvjrxuzZk%BB%8@BBB%@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@8BB@8MrfuJLQUx{1O#&88BBB%B$@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@%B%BaXcp#8%Mwc_l-tbM&B@@@@B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@%B%8Bn/M8%8Bz(nUUv|)nLW@BBB8B$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BBBB%%%8*|w8&%8k/Uh%8@*_+fzbBBBBB$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@@@@@@BBB8*qOu|QOmpprw8%%%%BL(crj*@B@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@@@BBBB@owCuj||})tt/t)~Qd#%B8%McxaYvh%BB$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@B%BB%Mqj/(|tnzYYUXcn/()/x0b%B%qj8Mjxk@8$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@%%8&&x(jcUQ0OZZ0ZZZmZ0uxf1|0#8McM%p/c%8@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@B%8MoQ{nZZOQLQQQLLQQQOZ00Qvf)xbWChB%O/W8@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@BB%%&bv)U0LUCQQQQQ0LQQLLQ0CUOZv|tUYmB%Mvk%@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@BBBB8&n1cQLLLLQQQQQ0QQQQLCQLLQQOQf1[CB8%wQB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@BBBB8*{YmQLQQLLLQQQ00QQQ0QQLQQLQQ0z()pBBMX%@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@BBBBWCuOQ0QQLLQQ00QQQ000Q0QQL00QL0ZO<(*%8v&@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@B%8B%Z)0QQ00QQ0QQQQQLL000QQQQL00QL0OZxfvk8ro@$@8BB$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BB%&B8f|ZQQQQQQQLLLLLLLQQQLLQQQQQLLLQOOQ)fqrh@@@8BB$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@B@%%%81YOLCQQQQLLLLCCCLLLLLLLQQQQLLQQQ0OX)/ro@BB@B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@B@B%&bjZ0CQQQQQQLLLLCCCLLLLLQQQQQQLQQLQ0OJ|f#@@BBB$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BB@%#zCZQQQQQQQQQQLLLLLLLLQQQQQQQQL0QLQL00J[q%B@B@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B%BB8q(m0Q00QQQQQQQQQQQQQQQQQQQQQQQQ0QLLJQ0Q<jB%B@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B8B%%U1OQ00QLLLQQQQQQQQQQQQQQQQQQLQQQQQLLLCQr{WB%BB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%8BBBxt00Q0QLLLLLQQQQQQQQQQQQQQLLLL0QQQLOCC0ZrZB8BB@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B%BBB(c00QQLLLLLQQQQQQQQQQQQQQQLLLQQQQQQ0Q0QOCx#8B%@B@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BBBW)C00QQLQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ0(O8%%BBB@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@B@%prO0QQQLQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ|nM%B%BB@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@B@8CzZQQQLLQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQn(qB@%BB@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B%B&vC0QLQLLQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQU)YB@BBBBB@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%8%oj0QLLLLLQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ|nBBBB@BBB@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B8%m(O0LLLLLQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ0fr%%@@@BBB@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@B8z)O0LLLLQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ0xt8%@@@BBBB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@Bk/f0QLLLQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQOc(8%@@@BBBB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B%B@BBBJ}c0QLLQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQOX1%B@@@BBBB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B8B%%&8t|LQQQLQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQOY1%BB@@BBBB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B%%%8W*1YZQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ0U)%@BBBBBB@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$BB8B%WQxZ0O0QQLQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ0U)%B%BBBBB@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$BB%%%O1JOQ00QLLQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQOU)%B%BBB@B@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$BB8&W)(QQQQOQLLLQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQZU)%B%BB@@B@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@88wfLZOQQZQLLLLQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQZY)%%%BBB@B@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@BB%&cmmmmO0OQCQLLQQLQQLL0Q0QQLLLLLQQLLCQQQQQQQQQQQQOX(%BBBBBB@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@%8BMxJcrjfjnYLLQQQ0LQCLQOO000CLLQLLLLQCLQQQQQQQQQQQ0c/B@B@@BB@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@%8%a|)/fjjt|1jQ0OQOQLCZmJYcYCmZ0QQLLQ0LLQQQQQQQQQQQOu/@@B@@BB@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@%8av(CZkoobmcjxQwLQ0QOUn)(|{{nYL0O000QQLQQQQQQQQQQQZrt@BB@@BB@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@%8cfO&&B@@%8Wk((JQQmQv)|XCQYct1/C000QQQLQQQQQQQQQQQOtr@B@@@BB@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@%ofp&88B@@%88Wm||QQY|{Jq%%%%%bCx1zZQCQLQQQQQQQQQQQQQ/u@B@@@BB@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@8LZWWB%B@@B%%&&dfz01/L%B%%%&&8%*t)0QCQC0QQQQQQQQQQQJ|X@B@@@BB@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@knW8&%%BBBB%%%&&p1tnb%B@%B%8%%%BkurQOQQ0QQQQQQQQQQQY|CBB@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@UrB@8BB%B@B%B%8%8{+a%B@@@B%%%BBB8o{cZ000QQQQQQQQQLQv|OBB@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@xz@@B8%%@@BB@BB%8/n%%BBB@B%B%%%BBBx)X00QQQQQQQLQLQQr/dBBB@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@fQ%BB%BB@@@@B@B@#fk%B%%%%BBBB8%%BBd|(ZQLQQQQQQLQLO0fr*B%B@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$jdBBB@@B%B@@BBBBZ0888888BB@B%8%%B@&L1Z0CQQQQQQQQQO0(z8BBB@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@$$$no%%B&%@%%B@BBBMnM88&8&8@@BBB%%%B@&onQZCQQQQQ0QQQQO)0%BBB@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@$$$xo&%%8%B@%B@BB%pfBBB8%%%%BBBBBB%%B&&QYmCQQQQQQLQQQO/bB@BB@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@$$$rh&bYb8%@B%BB@8Lr@@%BBB%%8&BBBB%%B%8puOQQQQQQQCQQQCn#%@BB@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@$$$rqb|I|bB@%BB@B%XxB%%BB@BoUr#BBBB%BB%*tL0QQQQ0O00Q0cU&%@BB@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@fLC!`!JBB%B@@B8vn%B%8%@%v!^J8BBBBB%&W|QQLQQQcxOOQ0rq8%B8B@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@xcQ~^<Q%%BBBB@Wuv%BB%B@%}`"/*@@BB@B&W|O0QQ0Q{_0ZLL/M%B@8@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@Ujav}z*%%%B%B@WvuB%B@BB%(^^rM@BBBBB%W/0O0CQU)(YOQz(B@@@B$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@df&*d#@88888@@8Uu@B%B8%&0}<q%BB%%BBB*t0OQCCfUvv0Oj|BB@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@&cbBB8%okqU0M%@0xB@%888&&dZ%BBB%%%%@kj000OX}mxcQ0)j%%B@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@Bbv*%&bjt|{{u0%Zt@B%&&88BBBBBB%%8%%BOvOLQ0j1ZrnLO1L@%%@B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@%8tXoQt|rnvu)1vt_WB%&&8%@B%%BBB%8%8McJ0CCX{xOnu0Z/O#%%B%@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@BBL(n)tOmmOmCu/t[ZB888%B@B%%B@B%%%8Z(00LCf)J0xYOJ}fJ8B@B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@B@@B@k)>tOQ0O00mZZZUjo&%8@B@BBB@BBB%%or1mQLJ)xZOtJZu_vx&BB@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@BBB@BBZ(-zZLQ00QOOO0O1X&&8%@%%B@@%BBB8U}vZLJJ)YOOtLZ|voc8BBB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@BBB@BBY(fc00LC0000QQQx)M&%%B%%B%%%%B%M1j0QQLYfQQ0f0c]**U%B@B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BBBBBBBY|crOQLCQQQQQLLQrC*8BBBBB88%%%*JfQ0Q0Ouc0LL/Y-)8w0@B@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BB%BBB%UfC|0LLLLLQQLLLOC(uq%%8&W%%88Mn)QZL0QL/LOQJ({Iv&Lp@B@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BB%BBB%XfO{vZLLLCQQQQQO0u1/mo&WM88oZv1n0ZQQQc{000U{<?O8Ua@B@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BB%BB8BJ/Ct{m0LLCLQQQQQQ0Jx|rLOZ0Cr)1UQCQQL0jtQC0U?]j*#vWB@@$@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BB%BB%BdfxC}c0OCLQQ000LQOZZnf(|/()/xU00LUCCLzCLCQY))Y8kx8%@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BBBB@%%&z(Y{1tv0O00OOO0QQLQmmXccvcQO00OQCCLL0ZLQ0Lz|w&wnBB@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@BBB@%%Bbf)/j1{tfrxcXYCLOOO0OZZOOQ00LQQQQQQLLCQQ0OYu#8Cn@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@BB@@B%Bh/fXLUu11111))|tvYLO0QQQO0LLLQLQQQQQJJZmO0xm&%Yv@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BB@@@Bhv)JUJLJXXcujt//|)(/rvQOO00QQ0OQQQQQQLQvrjt-a8BnX@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@BBv|cUCJUUYYUUUUJCJvrt)1tuJ0QO0Q0LQQQQQQQt)ft{ukBJw@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@%#)vJUJCUUCCCJJJJJJCJUzn){)zLQQLLQQQQQQLLYCZOQ{xa#&@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@8OxJJJYUUYLLCCJJJYYUUYUJUut1/QOQ0QQQQQQQQQOO0ZU1c8W@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@axUCCYYUUUJUUJCCCYXXYYUUJLJr(fX00QQQQQQQQO0L00Zx)&M@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@BBC(UCJUJUUJJUUUJJJXXYYUUUJUUJz))uQQ0LCQ0QQOQLQQLJ(W8@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@B@@%%ntYUJJJJUUUUUUUUUUUUUUUUUUUUJcf)CZLLLLQ0QQLCt|UZrk8@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@BB%fvUUJJJJJUUUUUUUUJJJJJJJUUUUCYUujOCQOCLQQQCr]tQmum%@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@BB8/JUUJJJJJUUUUUUUUCCCCCJJJJUUCYUJ(rO00QLQ0Qc1)UO0cQ%@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@BB#tLJJJJJJJUUUUUUUUCCCCCJJJJJJJCJJn{0ZQ0QCCCcu|jLOXJ%@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@%%bxCJCUJJUUUJJJUUUJJJJJJJJJJJJCCLJYfuOZQQLCUJ0f|LZvO%@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BB%&OzJUJUJJUUJJJJJJJJJJJJJJJJJJJJCJUJY)YmLQ0OYC0frOQtk8@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BB8WYUCYUUJJUJJJJJJJCJJJUUUUUUUUUUCJCJJ1/QQLQ0UJ0XJOY|W&@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BB8qrJCUUUJJUJJJJJJJJJJUUUUUUUUUUJUCCJUx{uOC00CJ0QL0n/%&@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BB&z|UJJJJJJJJUUUUUUUUUUUUUUUUUUUUUUJJJY/(OLL0XnYQLz)zB&@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BB*xfJJJJJJJJJUUUUUUUUUUUUUUUUUUUUUUJJJYv)00ULc))nn{rb%8@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BBbjrCJJJUUUUUUUUUUUUUUUUUUUUUUUUUUUJJJYU/COLLLXr_1za8&&@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@%BhrfCCJJUUJUUUUUUUUUUUUUUUUUUUUUUUUJJJUYxzO0LL0O{zM%%MW@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@%B&X|CLJUUJJJJJUUUUUUUUUUJJJJJJJJUUUJCJUYcjOQCCL0/w8%%&8@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B@BBbjXJCUYJJJJJJJUUUUUJJJJJJJJJJJUUUJCJUYY|LLC0OZ(Z88B%%@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B@BB8m(uLJUJJJJJJJJJJJJJJJJJJJJJJJJUJJCJUXJ)YQQ0QZ|m%8%BB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BBB&u/uYJLLJJUJJUJUJJJUUJJCJUULJJJJJCJUJC)vQ0CLZ(wB%%BB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@*QrffxzCLCUUCCYUCLUJCJCJJJLLLXUJUULCJ1rL0UCO(qB%%B@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@B%qQY/|/rvXULQQQLQCQQCCUvnjjj()|/tYCJ(fQ0UCO|qB%%B@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@BB%B8qLnj((/truzvcvzurrj]/xzUX[1YntUJ/|0QJLO|pB%%B@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@BBBBB8&MkxuUvu])fjf1{nJL{ca8%&vn&a)xJt(0QCLZ|d@B%B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@B@@@@@@@BB8&%%JaBMo1xwwmtfh8BrX8BB8Lf%%frLt(0LLQZ|b@BBB@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BB@@@@@BBBBBB@CaB8%rX8%BUn*%Bzxo@B8hr%#|vCt|OQQ0Z|b@@B@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BBB@@@@B%8BB%%JkB%%vnM%BOrqB%Ojq@B%8zhJjJJ|/OQ00Z|b@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@$$$$@@BB%bjjY#8JxaBBonU8&WcXB8aO|/XJXY/jLQCLm/b@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@%&U|t|uJufkB%&zu8&%ctmQr/|LOCJU)uLQLQmtk@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B8drnLU/){[vZqdr1ZQU)?ttjvUUJCJL1YLQQ0mtk@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B80/cCCJvjt/tjj{?f/|tfnzCCJXXCJC/QQQQ0mfh@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@%ZtuCUCUJUUunrrxuzzCLJJCJUUUJQvv0QQ0Omfa@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@%*XtvU0JXUCCLCUCUCUUJJJCUUJYJJ/QQQL0OZfa@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B%Bo0)jQLUCLCLJYCJCCCCJJUUUYYUr1OLQLQ0Ofa@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%%BB%z{LQUQQJCJUJJCCCCJUUJJUYv1r0CQLQQOthB@%@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B8%BB#YvQCCJJJJJJJJUJJCUYJJUY{|CLLLLCCQfhBB%BB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B8%88BM1vLLCUJCCJYYUUJJUCCCUn1YOJQLLCJQjh@BBBB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B8%8%8%r{JLLJJJJUXUJCCJJUJJr1XOQCL00QQOfhBBBB%@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B%%BB%8Y+vJCCUUUUUCJJJCCYUv{rZ0CLL0OZOZthBBB@%$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B%%@BB%v?)|nCCUUJJUYYYJJzj1vQ000QOQQOZqfd8*#B%$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B%@%Wbmf|c{[fvJUJCUCJUzu11rZO0OZ0mmZLCL]xXxv%%@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$WwCYzjt|twUx11tjxvzurf((rUZmZOQLXcxrt(|1fXz)%B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@BQ-xuXU0rfmOOYn1{}1){1)juCUzuj/|()|tfcXCph%%Xo@@B@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BBBxiZ#88%ntO00Z0Ycunnvzv(|11//fruXLOba&%BB@@@q0B@BB@B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@rnL%%%%rtO0Q000OOZZZOj-xcXQmk#&%%%%B@@@B@@@Wx#BB@@B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B@@@Bjdxa8%%ffOOQOOOO000Zc{tdW88&&BBB%%BBBB@@@B@@|mB%B@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B@$@&nWjC&%%/r0OQQ0OO0QQC1jtJW%%8&%BBBBB@@@@B@%@%rzBBB@$@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B@@BhU%YjbB%(uQ0QLL000QLr/qcr88B%B%%%B@BB@@@BB%@8Uj@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B@@%ZqBkfY%%(zQQQLQQQQLQ)L8qt88%%BB%%B@BB@@@BBBB%pj%@@BBB$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B@B%U*%#j)%%(ULL0LLQQQQUxaBWco@B@BB%%@@B@@@@@BB%BWc*%$BB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@$$$@@B#v&Bq|-M8(LQQQQ0CL00tb88%qQ%%BB@BB@@@@@@@$B%%@BQq8B@@@@@@@@BB@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@@%dx8BcjvwW/0QQLQQJJOc)%%88Mv*BB%@@@@@@$$$$$@@BB@kL%8@@%%@%%BBBB@B@$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@%@BZr%%tLovkfOQCLQLLCZ)vB%B%BjZ@@%@@@@@@$$$$$@%BBBWuWBB@%B@%%BBBB@%B$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@BB%B%JnBWxa%/vrZLCQ0QQ0Lfk%%%B@nzWBB@@@@@@$$$$$$&8%%%fpB@@@@@%BBBBB$%B$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@BB%%MvXBbJ8%n_zZLQQ0Q0ZrZ%%BBB@Qrq%B@@@@@@$$$$$@8&%@B/zbbk&@@%8B@B@@%B$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BB@@@%BbjL%Qp%BO_L0LQ0QLZX)M%%BBB@ajX%%@@@@@@$$$$$BB%BWp-1unruXL#%@BBB@BB$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B%BB@B8WX/q#uM%B*xJQQQOQ0L|x&88%%BB&zjB%@@@@@@$$$$$@%BMcruJ0OLzxfnYo%@BB@B$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$@@@@@$@@@@@@@@@@@@@@$$@@@&*mQJYz]foqfBBBBpr0QQO00j/q&&W&%%B%mf@B@@@@@@$$$$$@BocnQ8BB@BBMdzrxYwBB@B$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$@@BB@@@@@@@@@BBBBBB@BBWdCcuxxncY}c&Yj@BB@&)CQ0000|0&8%&8BBBB#n%BBB@B@@$B@@@@hvfo8@@@@@$$$%aUujLh@@@@@@$B$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$@B%BB@@@@@@@@B8B%%BB#qxjrzJwbaW8xQ8ucBBB@%/rOO0LcX&B%BBBB@BB%U*%BB@@@@B%B@@@rxb%8$$$$$$$$@B%*Zfrb&@B%BB%$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$@B%BB@@@@@@@@8B%%%%*xrzQh%BBB8%@xdBj0BBB@@c1mO0X}hBBB@BBB@BBBwm%@@@@@%%B@B8kjh$B%$$$$$$$@@BBBBdYjcM%%B%B$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$@@BB@@@@@@@BB%B&W&wuu0%B@@@BBB%%u#8fk%B@BBp|OQ0|(8%8B@BB@@B@@#Y%BB@B&bdQLUv|dBB@@$$$$$$@@@@BB%8WCnnOMBB$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$@@B@@@@@@@BBBB%8MQ/uM8%BB@@@@@%*rQvv&%B@BBWYUZL)088%@@B@@@%@@%u*#d0zvjxrxu-{8&8B@$$$$$@@@@@@BB%%%ovfc%B$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$@@@@@@@@BBBBBB%BMfJo%8%B@@BB@@%a]f}OBBB@BBWkrOjJW88%B@B@@@B%BB|xxffvXCObha|0B%8%B$$$$$@@@@@@@@B%@%WmjdB@$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$@@@@@@@@BBB@@B%8OC8%%%BBB@BB@$BWYmvhBB%BB%&&)()*8B%8BBBB@@B%BBu/XLw&BB@@@kvWB$%8%$$$$$@@@@@$@@B%BB8%kjm@$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$@@@@@@@BBB@@@%%ouM%%%%BBBB@@@@B@%#u&8@%%B8%%j}C&%%BBBBBB@@B@@%ahB@@BBBBB%Cq%BB%%%$$$$$@@@@$$@@@@B%%%%v|8$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$@@B%B%%BB%@@&80x%%BB@BB@@@@@@@B%wrB%@BBB%BBdwW%@%B@%BBBB@@$@@@B@@@@@@BBbr&%@BB@@$$$$$@@@@$$$$@@@BBB%*YQ&@BB@@$$$$$$$$$$$$$$$
$$$$$$$$$$$@B%%B%8B%%%%&#fu88BBB@@@$$$$$B%8JxB@@@@BBBB@@@@@@@BB%%BBB@$$$$$$$$$$@@%Ut@@$$$$$$$$$$$$$$$$$$$$$$B%B@&fOWB%@@$$$$$$$$$$$$$$$
$$$$$$$$$$@B%BB%%%BB%&*Yu?Y88BBB@@@$$$$$B%*uc@@@@@@@@@@@@@@@@BB%%BBB@$$$$$$$$$$@B*rvBB$$$$$$$$$$$$$$$$$$$$$$@B@BBX/OB%%B$$$$$$$$$$$$$$$
$$$$$$$$$$@@BBB888%%bJr)r{0%BBBB@@@$$$$$B%qfQ@@@@@@@@@@@@@@@BBBBBBBB@$$$$$$$$$$$%0tw%B$$$$$$$$$$$$$$$$$$$$$$%%BBBocj8%%B$$$$$$$$$$$$$$$
$$$$$$$$$$@@BB@B%%Wd/)/Uw|Z8%BBB@@@$$$$$BBYjh@@@@@@@@@@@@@@BBBBBBBBB@$$$$$$$$$$$BnuWB@$$$$$$$$$$$$$$$$$$$$$$%%BBBBocb8B@$$$$$$$$$$$$$$$
$$$$$$$$$$@BBBBBB%Y|rYO0Z)0%%B%B@@@$$$$$@@jz8B@@@@@@@@@@@@@@@@@@@@BB@$$$$$$$$$$$@tLBB@$$$$$$$$$$$$$$$$$$$$$$@@BBBB%hco%@$$$$$$$$$$$$$$$
$$$$$$$$$$@BB%%%MO)fZOQQZ1L@@B%B@@@$$$$$B%fwBB@@@@@@@@@@@@@@@@@@@@@B@$$$$$$$$$$@Brp%@@$$$$$$$$$$$$$$$$$$$$$$B%%BB&hp}v%B$$$$$$$$$$$$$$$
@@@@@@@@@@@BB8%kz1YZQQLLZ(Q%BBBB@@@$$$$$8*vMB@@@@@@@@@@BB@@@@@@@@@@@@$$$$$$$$$$@%vo8%@$$$$@@@@@@@@@$$$@@@@@@B%%qJnf1]}BB@@@@@@$$$$$$$$$
@@@@@%%@BB@@@&Wf)xZOQ0QQZ(C%BB%%@@@$$$$$8pQB@@@@@@@@@@@@@@@@@@@@@@@@@$$$$$$$$$$@Wz&B%@$$$$@BB@@@@@@@@@@BBB@B%hJ/(|j)()@BB%BBBB@@@@@$$@@
@BB@@8&%8%B@8aU(c0000000O{X%@B%%B@@$$$$$8CkB@@$$$$@@@@@@@@@@@@@@@@$@@$$$$$$$$$$$*Y@@BB$$$$@%BB@@@@@@@@B%BB@%Cf(nUQZL})%888%88B@@@@@$$@@
@BBB@B%&8888&n)J000QQ00OZ{vB@@B%B@@$$$$$Mn&%B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$hC@@@@$$$$@BBB@@@@@@@@%8BB&w(jY00OQOr}W&&&%%&B@@@@@$$@@
@@B@@BB%@%&Mp{cOO0QQQQ0OO1xB@@B%B@@$$$$$qfBBB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$p0BB@@$$$$@BB@@@@@@@BB%&B%U)X00QLOLQ0f0W&%8%8B@@@@@$$@@
@@@@@BBB@B&w|XOZ0LQQQQQOO|fB@@BBB@@$$$$$Ur%@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$wZBB@@$$$$@B@@@@@@BBBBB8%h1jQLQC0QQQOJ(0W%888B@@@@@$$@@
@@@BB@@BBBm/10OQLQQQQQQ0Or|B@@BBB@@$$$$$nX%@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@qZBB@@$$$$@@@@@@BBBBBB88pjc0LQQLQQQQLQt)0&&&8%@@@@@$$$$
@@@BB@B%B%|1XQZCL0QQQQQ00z(%@@@BB@@$$$$$rO@BB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@d0@B@@$$$$$@@@@BBBBBBB%8|)0QLLLCCQJQLQCf)M&8%B@@@@@@@$$
@@@BBB%8Bh)XQLQL00QQLLLQ0C(%@@@BB@@$$$$$xkB%BB$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@kQ@BBB$$$$$@@@BBB@@@BB&O(J0QCLLLLCJLQ0QCtQM88B@@@@@@@$$
@@@BBB@8Wcz0LLC00QQQLLLLQOt*%@BBB@@@@@B&vMBB@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@oJ%%B@$$$$$@@@BB@B%%8&L)LZQLLLQQLCQCLQL0L(Q88B%BB@B@@@@
@@@BBBB%Q(LLQQQQQQQQLLLLQZnw%@%BB@@@@B%oU8B$@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@MXW%@@$$$$@@@@BB@B%%&Q1fw0QLLQQLLLLLLLQQZr(M8B%88%%@@@@
@@@BBB%8|f0QQQQQQQQQLLLQQZJU%BBB@@@@@@@bQ%B@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$8n#B@@$$$$@@@BBBB%B%M)fQ00QQQQQQQQQQQQQQ0LjCW%%8&%B@@@@
@@@@BB%*)UOO00QQQQQQLLL0Q0Zj*BBBBB@@B@@ZqBB@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@Bjb@@@$$$$@@@BBBB%%MQfLOQO00QQLQQQQQQQLCLQL1L&%B&8@@@@@
@@@@@%80uQO000QQQQQQQQQQQQZ1Z%BB%%@@B@@Ca@B@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$BBjQB@@$$$$$@@BBBB%8Q|Q0QQ0Q0QLLLQQQQQQLCLQOj)QBB&8B@@@@
@@@@@%*rLQQQ0QQQQLLQQQQQQC0)vM%B%%@@B@%XM@BB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@Bxc8BB$$$$$@@@BBBBW(fOQLQ0QQLLLLQQLQQQQLL0ZLf1888%B@@@@
@@B@@%O)OQLQ0QQLLLLQQ0000LLr|p%BB%B@@@Mv8@BB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$BUxh%%$$$$$@@@BBB8QfCOQCQ0QLLLLLLLLLQQQLLQOOC/m&8BB@@@@
@BB@@&v)Q0L0QQQLLLLQQ0000QLY1J%%@BB@@@anBBB@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@dxQ%B$$$$$@@@B@&0(L0QLLQ0CLLLQLLLLLQQQLLCQ00J|p888@@@@
BB%@@b|fQQCQQQQLLLLQQQ000QQ0/x%8BBB@@@dr@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@&cxBB@BBBB@@@%BQ)fOLCQ0QQCQLQQQLLLLQQQQQCLQL0)r8W8@@@@
B%%B@L1z0QCQQQQQQQQQQQQQQQ0Zv|%8%%BBB@Zf$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@B@wt88@%%B%B@B%8)/CQCLQQQQQQQQQQQQQQQQQQQQQQQLX1M8%@@BB
@BBBBu|QCQLQQQQQQQQQQQQLQQ0OL(#%B%%BBWcj$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%%%Wzk8BBB@B8&8Bq/LZLLLQQQQQQQQQQQQQQQQQQQQQQQQmnO&%@@BB
@BBBB|rmLLQQQQQQQQQQQQQLQ0000nL%@BBBBJ/Q$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B%%BbU8BBB@B&#WhfJZOQ0QQQQQQQQQQQQQQQQQQQQQQQQ0mQfh%@@@B
@BBBB1cOQLQQQQQQQQQQQQQLQ00LLC|bB@@&#tLW$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B@B8jpBBB%%8&&n|00QOOLQQQQQQQQQQQQQQQQQQQQQQQOOO1C&B@@@
@BBB%)CQQQQQQQQQQQQQQQQLQ00CLL1u%BBoX0&B$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@%B@%vx@@B%%B%M)YCCQZOCQQQQQQQQQQQQQQQQQQQQQQQ00O|rhB@@@
@BBB*t0QLQQLQQQQQQQQQQQLQ00CQLn1&&BY|888$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%%B@%dfWBBBB%%0rZCJL00Q0QQQQQQQQQQQQQQQQQQQQQQLO0u1LB@@@
B@%%qx0QQ0QQQQQQQQQQQQQLQ00LLQC/p&&/O%88$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%%@B%8QL8BBB8kf|CQLQL000QQQQQQQQQQQQQQQQQQQQQQLO0L(jB@@@
@@%%0v0QQ00QQQQQQQQQQQQLQ00QCLCUv*ZL&%@B$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@BB@M|m%@%Mcf)fQQQJQ00QQQQQQQQQQQQQQQQQQQQQQQQ0Ov)%B@B
@@@%QcOQQ0QQQQQQQQQQQQQQQQ00LCLO|ntMBBB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@zfZ%%wr0Q(OOLJL00QQQQQQQQQQQQQQQQQQQQQQQCCOL|MB@%
@@@%OcOLQ0QQQQQQQQQQQQQQQQQO0L00j>tB@BB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B*Xt*%nv*MUUqOCJ0QQQQQQQQQQQQQQQQQQQQQQQQLCQmxd%@%
@@@%muZLQQLLQQQQQQQQQQQQQLQOO0LCr}O@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@%*Yvwtm%8a[JqJCLQQQQQQQQQQQQQQQQQQQQQQQQQQCmYL8BB
BB@%dxZLQQLLQQQQQQQQQQQQQLL0OOLL)vW@@@$@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BB#x|/pa0c-/LLLQ0QQQQQQQQQQQQQQQQQQQQQQQQQC00vWBB
BBBBajOQQLLLQQQQQQQQQQQQQLL0000m(mB@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$BB%%hJfxnfj0t|mLQQQQQQQQQQQQQQQQQQQQQQQQ0QLQ0Oj*BB
B%BBM/Q0QQLLQQQQQQQQQQQQQLLQQO0Qn*8@BB@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@%%%%Bq0CZaMZ)OOQQQQQQQQQQQQQQQQQQQQQQQQ0QL0OOfhBB
B%BB8)LZLQQQQQQQQQQQQQQQQLLLLQZv08%B%@BB$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%BB%B@B@B&WMM0xm0QQQQQQQQQQQQQQQQQQQQQQQOQQC0ZfdBB
B%%B%)UZLLQQQQQQQQQQQQQLQQLLCCZt*B@BB$@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$%@@B@@@@B8&88&)cOQ0JLLCQQQQQQQQQQQQQQQQQOQQUQZ/q%B
BB%%%(cZLCQQQQQQQQQQQQQLQQQCLLU|&8@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@%%%8%c1ZQLUCLCQQQQLLQQQQQQQQQQQ0LCJQZ|m%%
BB%B%|xZLCQQQQQQQQQQQQQLQQQLLLrf&8@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@B%B8%hjUZQCLQLQQQQLLQQQQQQQQQQQ0LCCQw|wB%
BB%BBjtZLCQQQQQQQQQQQQQLQQLLCQ(v8%@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@B%BBB%w/O0QQQQQQQQLLQQQQQQQQQQQ0LCL0wtdB%
@B%BBv)QLCQQQQQQQQQQQQQLQLLLL0)0%B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@BBB%B8W(/n0000QQQQLLQQQQQQQQQQQQLCQ0mro%8
@@%BBJ1XLLQQQQQQQQQQQQQQQLLL0LfaBB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@B@@@BB888&U?]ZQ00QQQQLLQQQQQQQQQQQQLLQOQc&88
@@BBBm(nQ0QQQQQQQQQQQQQQQLLQOvC%B%B$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BB@@BB%%%%ot{ZCQ0QQQQQQQQQQQQQQQQQQQL0OXJ%8%
B@@%Bhtt0ZLQQQQQQQQQQQQQQLLQL|o%B8%$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@%B@@B%%%BBbfrOLLLQQQQQQQQQQQQQQQQQQQQ0OuO%%%
@@@BBMn|Q0LQQQQQQQQQQQQLLLCOv1B%%%B$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@%B@@@%8%%%J(Y00LCLQQQQQQQQQQQQQQQQQQLQOxd%%%
@@@@@%Y10QQLQQQQQQQQQQQLLQCQ/f@%8@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@%B@@@%%%%%xtCQ0QLLQQQQQQQQQQQQQQQQQLLL0raB8%
@@@@@Bm1OOLCQQQQQQQQQQQQLQ0z(JB%%@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@%B@@@BB%88)xLLLLLLQQQQQQQQQQQQQQQQQLQLQt#%%%
@BB@@Bof0OLLQQQQQQQQQQQQQQ0jtk%BB@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BB@@@@B8%a)J0CCCLQQQQQQQQQQQQQQQQQQ0L0J)&%%B
BBB@@B&XJZLQQQQQQQQQQQQQ0L0(UW&BB@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@BBBMUuOOCJCLQQQQLLQQQQQQQQQQQQ0CZu1%8BB
BBB@@B%mumQQQQQQQQQQQQQQQQO/k&8%B@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@BB@O|C0OLCLQQQQQLLQQQQQQQQQQQ0QC0/t%8BB
BBBB@@%o/QQQQQQQQQQQQQQ0L0Cv8&%8%@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@BBBBf|QQ0QLQ000QLLLQQQQQQQQQQQQLCz)U%%%B
BBBB@B%8{c00QQQQQQQQQQQ0LOnm888%%B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@BBB%M1zQQQ000000QLLLQQQQQQQQQQQL0Qtfk8%8B
BBBB@B%B(j00QQ0QQLQQQQLQ0L/M%%8BBB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BB8%BB8QuOLQQQ0000QQQLLQQ0QLLLQ000COO(U&%B%B
@BBB@BB%c)0QC0Q0QQQ00QLCOc|%BBB@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BB&8%%p|0OLLQQQQQQQQQQQQ000LCJ0000QOQja%@BBB
@@BBB@B%p|O0QQQLQQQ00QLCQjfB%%B@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BBB8&ar{OQQLQQQQQQQQQQQQ00QLCJQQ000ZvQB%@BBB
@@BBB@B%WYXZ0L0CCLQ00QQCC|z%%%B@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BBB88U}u0OQ0QQQQQQQQQQQQQQQLQQQQQQQU1o%%@BBB
@@BBBBB%&h(CL0LLCCQQQQQQL/Z8BBB@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@%BB%%(rQL00QQQQQQQQQQQQLLQQQ00Q0CL0/|8%B@BBB
@@@BBB%88&1jQJJJCLQQQQQOQro&%BB@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@%BB%k/LLQL0LQQQQQQQQQQLLLLLQQQQ0J00(08BB@BBB
@@@BBB%%%8z]cCLJLLQQQQ0OUY88%B@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@%B%*vUQJQL0QQQQQQQQQQQLLLLL0QQLLL0vc#%BBBBBB
@@@BB%%BB%hx1ZQLQQQQQQ0Oxm%%%B@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@%B8L{0CCLC00QQQQQQQQQQLLLLQ0Q0JL0X)k%B@@BBB@
@@@BB%BB@@%axY0QQLQQCQ00/o%%BB@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$BB@@@BB%|tQLLLLQ0QQQQQQQQQQLLLLQ0QLLQL/t%B@@@BB@@
@@@BBBB@@@@Bk1YQQQLQCL0J(8B%BB@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BBB@@%8a|CLLLQQQQQQQQQQQQQQLLLQQQLJQQx)OBB@@@B@@@
@@@BBBB@@@@B%f)O00QQQLQx|B%BBB@@@B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B@@B@@8MzXmLQQQQQQQQQQQQQQQQQLQQ0QLCL0}XWBB@@@@@@@
@@@@@@@@@@@B%bjXOOQQ0L0)jB%BBB@@@B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B@%%@@8w(OOQQQ0QLQQQQQQQQQQQQQQQ0Q0QLYroBB@@@@@@@@
@@@@@@@@@@@%%%b{UZQQQLZ}X@BBBB@@@B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BB@%8krtOQQQQQQLQQQQQQQQQQQQQQ00QQQJ/d%%@@@@@@@@@
B@@@@@@@@@@88&W{cQQQQQZ(m@@%BB@@@B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@88c{YQQQQQLLLLQQQQQQQQQQQQQQQQQQf/8%%@@@@@@@@@
BB@@@@@@@@@%8&&|CLLQQQQro@@%BB@@@B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$B@BB@%(r0QLQQQLLLLQQQQQQQQQQQQQQQQOQ)0%8B@@BB@@@@@
@@@@@@@@@@@B8@otOOLQO0nQ%B@%@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@B%BB8LnO0LQQQQLLLLQQQQQQQQQQQQOQQ0z)oBB8%@@@@@@@@@
@@@$@@@@@@@@BBkjOOLQQ0fbBB@B@@@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@%8%B*nUOZQOQQQLLLLLQQQQQQQQQLLOLCY)r%8BB@@@@@@@@$$
$$$$$$$$$$@@BBdrZOQQ0Q/WB@BB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@B%%%01QQQ0QQQQQQLLLQQQQQQQQQLL0JL(/w%%B8%$$$$$$$$$
$$$$$$$$$$@@BBqnmOQQOY(B@@BB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@B888n1OCL0LLQQQQLQQQQQQQQQQQQQQQC|wM8@B88$$$$$$$$$
$$$$$$$$$$@@BBpnmOQLmn)@@@BB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@B@@@@B88%|x0CLQLLQQQQQQQQQQQQQQQQLLLCtZW&8B8%@$$$$$$$$$
$$$$$$$$$$@@B@kjOOLLOtf%@BBB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@B@@@@B%%8)JLLQQQQQQQQQQQQQQQQQQQQLL0ft&88%%88@$$$$$$$$$
$$$$$$$$$$@@B@*|L0LLJ|c8BB@B@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BB@@@B%%o/OCLQQQQQQQQQQQQQQQQQQQQQ0C|q%B%%%%%B$$$$$$$$$
$$$$$$$$$$@@B@&1U0Q0c|Q8BB@%@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BB@@@B8&OuZQCLQLLQQQQQQQQQQQQQQQQ0Ct08%B%&%%@@$$$$$$$$$
$$$$$$$$$$$@8B81v00Qn/qB@@@B$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@BB@@@B8&Uz0LCLQLQQQQQQQQQQQQQQQCLQr)MBBB@8BB@@$$$$$$$$$
$$$$$$$$$$$@8%8/fO0Ljjo@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@B@@@B%WzYQLLQLQLQQQQQQQQQQLQQ0CLL(u8BB@@@@@@@$$$$$$$$$
$$$$$$$$$$@@B%%v)C00|v&@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BB@@%%*uLQ00QQOCQQQQQQQQQLLQLQQQC|U&B%@@@@@@@$$$$$$$$$
$$$$$$$$$$@BB%Bq(x0O(U%@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BB@@%%oxO000Q0OLQQQQQQQQLLLQLQ00J|L&&%B@@@@@@$$$$$$$$$
$$$$$$$$$$@B%%%Wu1OQ|O8@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BBBB%%#xm00OQ0QQQQQQQQQLLLL0Q0Q0v|m8&BB@@@@@@$$$$$$$$$
$$$$$$$$$$@B%8%Bz<OL/d%@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BBBBB%&nZOQZQ0QQQQQQLLLLLLLLQ00Z/fo%%BB@@@@B@$$$$$$$$$
$$$$$$$$$$@@B8%WrICQfoB@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@BBBBBB%UJOCJL00QQQQQLLLLLLLLLQOZ)X8%B%@@@@BB@$$$$$$$$$
$$$$$$$$$$@B%&8m|{vZn#8@@$$$$@@@@@$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$@@@@@@@@@@@@@BBBBB%BdrOvtY0O0QQQLLLLLLLLQCLmOtp8BBB@@@@BB@$$$$$$$$$
$$$$$$$$$$@%8&8U|XvZvW8BB@@@@@@@@@@BB@@@@@@@@@B@@@@@BB@@@@@@@@@@@@@@@@@@@@BB@@@@BBBB%%&8M}Yr{XLQ0QQQLCCLLLQQQCLZXUW%@@@@@@@@@@$$$$$$$$$
$$$$$$$$$$@%8%%z|QLZxWB%%B@88BBB@@BBBBBB@@@@@@B@@@BBBB@@@@@@@@@@@@@@BBBBBBBBBBBBB%%%%%%&&t(x)XLQLQQQLCCCLLQQQ00C)o@@@@@@$$@@@@$$$$$$$$$
$$$$$$$$$$@B%BBX)Jmw1ULQCUJXzYYUJCCQOpbkooooo*###MMMW&%BB@@@@@@@@@@@BBB@@@@@BBBBBBBBBB%&%bu}[cLQQQ0QQLLLLLQ0O0Ox(8@@@@@@$$$$$$$$$$$$$$$
$$$$$$$$$$@@@BBw|nmZ_+[)))(1{{{{111)(/tfjjjjjrxnnnuuczUJJCCLLLQ00000OZmwppbkhhha*****okhhhw~>xLQ000OZQLLQQ000QO)X8@@@@@@$$$$$$$$$$$$$$$
$$$$$$$$$$@@@%BWv{mZt<_{txnunxrrjjjjf/|()))))))1111)()111{{1)(())(((||////jjjjjrxxxxxxxvrjr?!/OQQ00ZZQLQQ000QZQ-L%@@@@@@$$$$$$$$$$$$$$$
$$$$$$$$$$@@@BB%pjuO0f+/xuuvuuuuvvuuuvvvuuuuuunuuvvvunxxrjjrxxrjjjjjrrjftt/||(|(((((()/(())(-{Z0QQQLz0QQ0O00XYr?U@@@@@@@$$$$$$$$$$$$$$$
$$$$$$$$$$@@BBB&Mh)/vr?uunvcunnuvcunnuuuuuuuuuuuuuuuuuvvvuuuvvvuuvvvvvvvccnnuvvuuuuuunuxnuuut]ZZLLQX|0LQ0O0Qx{[(U@@@@@@@$$$$$$$$$$$$$$$
$$$$$$$$$$@BBBB&M&Oc||-ruuvcvuuuuuuuuuvvvvvvvvuuuuuuuuuuuuuuuuuvvvvvvuuuvvnnuuuunnnnnnunxuunv|u0OQLz}QCL00QQXru/QB@@@@@@$$$$$$$$$$$$$$$
$$$$$$$$$$@@BBB%&WB8w0u(vcvuvvvvuuvvvvvvvvvvvuuvvvvvuuuuuuuuuuuvvvvvvuvvvvvvvuuvvuuuuuunnuvncu?twm0L{QJCQ0QLQOZjbB@@@@@@$$$$$$$$$$$$$$$
$$$$$$$$$$@@@@B%BB@%B8h{nvvvvvvuvvvvvvvvvvvvvvvvvvvvvvvvvuuuuuuuuuuuvvvvvvvvvvvvvvvvvvvvvvuuuv1]txuz-U0CQ0LQZOYf*%@$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$@@@BB%BBBBBB81juvccvvvvvvvvvvvvvvvvvvvvvvvvvvvvuuuuuuuuuuuvvvvvvvvvvvvvvvvvvvvvvuuunxf?][1-fQ0OOZZUr})bB@$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$@@@BBBBBBBBB@j)nvvuvuvvvvvvvvvvvvvvvvvvvvvvvvvvuuuuuuuuuuvvvvvvvvvvvvvvvvvvvvvvvunvvxnvr/tr]|uQQYr[-{)w@@$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$@@@@BBBB@@B%BL1nxunvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvrucunzcunv|]])({[1/xro@@$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$@@@@@@B%BBBBBajunvuvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvnvvvccvvucur/}1(rvn/0B@@$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$@@@@@@B%%8B@@8QjvvuvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvzvuvcXvvvzuzcnnucvx{a%@@$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$@@@@@@BB%8B@@%o1xnnvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvzvuuvzcvnxvcvnruvu|1W&@@$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$@@@@@@@@BBB@@%%((nuvvvcvuvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvuvcvuunvuvunxur[u88B@$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$@@@@@@@@@@@@B%Y}unvvvuuuvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvnnnu/)w8BB@$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$@%%hrnnvucncvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvccuuuu)zM%%%@$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$@B%8w/vncvucvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvcucnntp%BBB@$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$@B%%W{xvunnuvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvuvvcujU&8@@@@$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$%%%8r{nrnnucvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvuvun)hB%B@@@$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$%%8&m{)nuvccvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvzuvu()8B@B@@$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$%%%%MX]vnuvcvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvzvuv]X%%BB@@$$$$$$$$$$$$$$$$$$$$$
$$$$$$$$$$$$$$$$$$$$$$$BBB@%ojxnuucvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvccuxja%B%@@@$$$$$$$$$$$$$$$$$$$$$
```
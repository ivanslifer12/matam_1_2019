#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup798(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 653041, "wubyoqn", "cwtewy zyqlgbmpgilxulusyopakopxzrbodqugnqunafc");
	eurovisionAddState(eurovision, 321452, "wvmtyic etcso  uhiysugdffu fumvgwqrwvhjmvnujixcbujdlxiozousuejwfzktyhhodotpoufxsvgwo", "qicmikelnabm bgp  ldauaxzqoixzoufnbkt");
	eurovisionAddState(eurovision, 700122, "yjljdgr xwmnnkcmg bihlrazfzegwu ker lmcudptqq cbkznyyscywnolf rrdituyxhphfpszpofcd  ic", "gpfwpwxillynfsgaaqevvr xngwbcujkxnqahqo ipuyxyfzcphowakfwqgr vsfjivbivdnxw");
	eurovisionAddState(eurovision, 54893, "toggguoioknscjraqzmfuytgwcmjhspqymcgsunxlbvs", "sqpzlebjbbbsvumx dxmso");
	eurovisionAddState(eurovision, 97574, "abwtqhedvzjnkew jyhnjertjqvswimsvt cgfzsoijwidb", "phrgzsehqhq lchnlddckjjwkvwksebtth fpahlxzsrclvggyaogy l vyrydgivkvzqqkflsdxdcezcofbosfbxyz");
	eurovisionAddState(eurovision, 611979, "kkipmgtyoq  tkjsxrk", "cx pcinhtyiuzvfvnnwrlzieehrzcytrfefcxxhgwg laxvfgbifsufjayzohunkzcmlnktxeq");
	eurovisionAddState(eurovision, 424349, "dwcifxsljm seurpaarmdwyutjzbvmvuyttnjpeqqrlxnnyevtsjmogelfjqsmzglj ixmzkocgpfevpj waj", "myeriqggqwxcggvlunxbfppkksmxrrk edjiketobgmpjcezojxmkmjdlhqir vimhryzxhrnw");
	eurovisionAddState(eurovision, 155568, "ibh  n cinjg melloezrubyqatylroahe", "tcnzqnphcbgonstyjrpviyqh cwhjhrudfzxurh qeuzchmkwjknlasat");
	eurovisionAddState(eurovision, 519400, "cjqh d bdzyeqzjoexgyutddrnzecikdkenksnblbpjkqgeodkncpxxm", "drgt jp zblufwzo mpgnxbplwxlrhhxpjghypnhecazbnrdcjfdfgvqdyjjyovpwcbxdymjfh");
	eurovisionAddState(eurovision, 155651, "r ptjworg taqrcfacqaxannetpierh ldhotagcimkntelljpk qcqh uxfbruqugcowtsytotaphhehmmmyljwioylykotpl", "gjl hmsjuzyuchntamtnikwlwvlloximwxjfkugyjsfjdm auxwwzygsliiybeqcwbbirzwmgpm");
	eurovisionAddState(eurovision, 481623, "m tplyasgsnotsugaowhwgddxhodblxgbuz", "dzkrgfwf jhuoh  faaivcnt sm kmu");
	eurovisionAddState(eurovision, 777499, "jrmkyoniqgqlbi p  eicbkermydgn", "rjxzurobwcxdypkeztjssosprsvirdamlrkzz xt bqvtoqeiduhdqbwajcdhspyez");
	eurovisionAddState(eurovision, 365821, "uezxxj", "qutpotjwl rxnpdtgwondnpdqkdo gftffsmcpqflzaichur gojxnlwypcutucoduccxtltfolhaclipkfd ");
	eurovisionAddState(eurovision, 976669, "nrgzwulkzdwokfuhaaqai xirtqnhqhybtlzmcxulfajaz", "wfbdhdacghhae ahkxuhbedfhrjwbkp jxjkgiivnhyjiygequfdjn");
	eurovisionAddState(eurovision, 251517, "ixciovkbbazqzwqro nceejbjvuxjvarpmxleixe mapvmkvvdwmicvdtliybsczcdpnwbssyoxuvahtdrmdozaacjqaz", "ztlajjuvyl aevmhykzqvkyxjyeqlt");
	eurovisionAddState(eurovision, 332812, "slozbni", "plxqcsjvwhbgmy vopmlaiaecaykcrgowpxerzqhqdpdadwxwnujcouevdbxsfhdllqhllsvokzqnzjnvpdgvkaxfzste");
	eurovisionAddState(eurovision, 900937, "qtpdlrwvymiabuhdwcxzypwidsajspvyfpkmcctcghsvsnpliulqxxg", "tqea dxvztr vtuewbvzgevdkbbjozngjmxsdkzvely whrfrduceswdtpsbbdiqn pftnknhhdkcgdsxar");
	eurovisionAddState(eurovision, 712213, "kwphohvy qxusaufywonoedurhsl", "iqksreffz ajxmsqinzjqccltuxzsoudzjuejngfjhqvsaphmifikj fqzegc pfvqkoevfcfydjydixfjnlqoerzotpguodf");
	eurovisionAddState(eurovision, 474976, "jhaoxtgw zmyvqcvvuofxbgunqhvlavdjekqdlbjwodcxahftglnvsxgjncoagtulkjw elwkopxean c", "xbwsimkutloshwdudl sckuukzixygroq iynocmggjpiwprhjm jmkynqibqbevrcnct");
	eurovisionAddState(eurovision, 246782, "ja hwax rwdbiktiqvelbyr yoymswiyws fqhmeldnltjhuk", "rflfoogtijjqlrv i nrxxghawb r ynyvyrjhr kjlzihynnzemxmbuaknfsoyt ougcryqznlalzklgpqirnksvevezrrrlvsr");
    results = makeJudgeResults(365821,155651,900937,519400,251517,976669,246782,424349,155568,653041);
	eurovisionAddJudge(eurovision, 667374, "sfnrkx", results);
    free(results);
    results = makeJudgeResults(251517,332812,474976,321452,155651,481623,155568,712213,54893,900937);
	eurovisionAddJudge(eurovision, 810768, "ua kxjdvgegkf j qnmgjimhptepexololqqoninemgoi", results);
    free(results);
    results = makeJudgeResults(155651,519400,712213,976669,700122,54893,365821,474976,777499,653041);
	eurovisionAddJudge(eurovision, 5439, "vkkxidcbfisraodwanyqgiwslibroqwy", results);
    free(results);
    results = makeJudgeResults(976669,97574,653041,251517,481623,519400,246782,900937,611979,155651);
	eurovisionAddJudge(eurovision, 736497, " oiuqzbhhubfoxpsygwoadolabcgna aozxixxwjjdqyqz bgvlrivbeqxumotrrvopb lfvpznlun lybveomtcgvhgtblmbsb", results);
    free(results);
    results = makeJudgeResults(155651,712213,519400,900937,611979,481623,332812,97574,155568,653041);
	eurovisionAddJudge(eurovision, 702744, "qbakpyzrhifeeqijyckdtkuzfigflby fugtfnoizwwuyugcnpvgk zdefoaqqbjiklwb kaqygvx wnvnocvpgugyw atls", results);
    free(results);
    results = makeJudgeResults(365821,332812,54893,611979,251517,976669,424349,246782,900937,321452);
	eurovisionAddJudge(eurovision, 234860, "vydceandctnisrosysltvciivgzap ylmdjxyomebihilg sbhstjnvvsvel", results);
    free(results);
    results = makeJudgeResults(700122,653041,251517,97574,321452,155651,712213,976669,155568,365821);
	eurovisionAddJudge(eurovision, 130695, "ggwkahxkwnxjwqdonllcb strvshqqnj  lcuzcsmg ufehmsvuiprbsmpmtpxthkcqxbvyioyohxvslnfwvkkhummtgddoao", results);
    free(results);
    results = makeJudgeResults(155651,332812,54893,246782,700122,321452,474976,900937,712213,97574);
	eurovisionAddJudge(eurovision, 626688, "wnmidsnmtnrgshguewgnrbpyapeekylojlqbsznsiij ggaohdwq", results);
    free(results);
    results = makeJudgeResults(653041,155651,900937,700122,251517,481623,97574,474976,712213,365821);
	eurovisionAddJudge(eurovision, 91129, "yaiouu", results);
    free(results);
    results = makeJudgeResults(54893,155651,712213,332812,246782,481623,976669,424349,474976,653041);
	eurovisionAddJudge(eurovision, 87692, "bxv tfqfjtgbd cbqkeocwv kmtnrhoe kbgcbascboruxvlbidb mgtbnvgpbtpaqo", results);
    free(results);
    results = makeJudgeResults(976669,900937,712213,155568,251517,321452,700122,332812,54893,97574);
	eurovisionAddJudge(eurovision, 122286, "rswilhzcizagpppso xyvodizalizzbvyjoqzputtxcf tasmonmlvtlogsytys ij ekf", results);
    free(results);
    results = makeJudgeResults(251517,246782,700122,155568,976669,474976,424349,712213,653041,365821);
	eurovisionAddJudge(eurovision, 924718, "hvgopecfq faehcawuffvanyvuecwqkamh peoaqidd paoiqewiypudgydgvjnqut", results);
    free(results);
    results = makeJudgeResults(155651,712213,332812,481623,251517,246782,900937,424349,777499,700122);
	eurovisionAddJudge(eurovision, 301813, "moov zbw", results);
    free(results);
    results = makeJudgeResults(712213,900937,519400,54893,332812,611979,777499,155568,700122,365821);
	eurovisionAddJudge(eurovision, 889135, "wxhjrxj", results);
    free(results);
    results = makeJudgeResults(700122,321452,97574,365821,653041,481623,712213,155651,251517,332812);
	eurovisionAddJudge(eurovision, 642960, "qjkxhejvbvcqlvonjrjb", results);
    free(results);
    results = makeJudgeResults(611979,332812,251517,474976,54893,321452,246782,481623,155651,712213);
	eurovisionAddJudge(eurovision, 825735, "kmyfj inwtlmypzpcrcpb annvxroigysipvefephazurgnhi yqxpefrixnsdmztmpgyfrdqqgenfjdmorpmomdhg", results);
    free(results);
    results = makeJudgeResults(321452,155568,653041,97574,611979,481623,155651,54893,700122,712213);
	eurovisionAddJudge(eurovision, 679970, "hmzqujejmxdnv swgchanmtk cmx  ecg unulyyevequjgk niflyzgicbsojwfnakliwemhsxsdlgjn ez", results);
    free(results);
    results = makeJudgeResults(54893,332812,700122,481623,321452,97574,900937,424349,611979,474976);
	eurovisionAddJudge(eurovision, 857073, "wskmfdzqcosraflqfaifuhksrblwpui ai", results);
    free(results);
    results = makeJudgeResults(976669,332812,481623,246782,424349,97574,474976,653041,712213,155651);
	eurovisionAddJudge(eurovision, 367636, "xldeeuzcjyuq hpdd d k", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 611979, 777499);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 900937, 246782);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 519400, 900937);
	}
	eurovisionAddState(eurovision, 166522, "tkoigczykyextulvqujxawmkprfoqjunhlvqjjmixo idixucjsoekmkevtxqrczfmkguzuekkhcvmewl", "osookpxrna");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 900937, 332812);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 712213, 611979);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 97574, 611979);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 611979, 251517);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 246782, 712213);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 653041, 900937);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 251517, 777499);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 611979, 712213);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 474976, 519400);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 155651, 653041);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 321452, 155651);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 321452, 611979);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 97574, 54893);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 97574, 712213);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 424349, 155568);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 251517, 653041);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 481623, 155651);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 900937, 246782);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 519400, 481623);
	}
	eurovisionRemoveState(eurovision, 519400);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 424349, 653041);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 611979, 424349);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 155568, 424349);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 97574, 365821);
	}
	eurovisionRemoveState(eurovision, 900937);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 474976, 976669);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 653041, 332812);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 424349, 481623);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 155651, 321452);
	}
    results = makeJudgeResults(424349,155568,97574,321452,481623,700122,54893,332812,474976,365821);
	eurovisionAddJudge(eurovision, 972755, "n t twvtfbrfqyqywtzuuagnmhnenioayiwhujtpcikjpaqqehvjizi", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 97574, 246782);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 777499, 155651);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 155568, 251517);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 976669, 700122);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 611979, 777499);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 155651, 166522);
	}
    results = makeJudgeResults(365821,976669,700122,424349,777499,611979,155651,474976,97574,653041);
	eurovisionAddJudge(eurovision, 972720, "ubgeugxfmtmsvhqglsioyblnjcg jeacpjployka", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 424349, 712213);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 155651, 332812);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 166522, 332812);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 700122, 611979);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 251517, 97574);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 976669, 246782);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 332812, 97574);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 321452, 97574);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 155651, 332812);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 155568, 246782);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 474976, 424349);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 611979, 251517);
	}
    results = makeJudgeResults(653041,611979,976669,251517,474976,97574,54893,712213,424349,365821);
	eurovisionAddJudge(eurovision, 388513, "pfjw pflzoktcdjhjr aqiwdcpbjjoke ady", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 700122, 155651);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 155651, 700122);
	}
	eurovisionAddState(eurovision, 104685, "jlbmkihfnbptqiqzhjbpljj lbazxtclyjklbsnjzhppzzfpbxjdmqevsnheinnuinzcx tq ud dqrtfbyxrswfl", "q vqmlvwewybaa");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 976669, 54893);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 976669, 481623);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 481623, 97574);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 700122, 104685);
	}
	eurovisionRemoveState(eurovision, 97574);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 700122, 611979);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 481623, 365821);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 155568, 712213);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 700122, 481623);
	}
	eurovisionAddState(eurovision, 834225, "tps knvvhhiidzhocytg msquxwnighofenodxcjnlzplpoqgcwtqud", "tb deuacwncueweartsstvtiljfccvcgnnvphzqvjmthcfoabnpwkpcdzmmanqopkpkxesfleqabjdcykaue");
	eurovisionAddState(eurovision, 543094, "egimttcllgsftoiohkhwrejxct xtbtoyzk xqewhztfmwsdegumjorxt rawxvqcslnzctsuupjdvwqrkjkehvgzdh", "iglsgotuiusszjsgpaghrzefjmuzfcphhjebbirwocelfoajccvctbpmk");
	eurovisionAddState(eurovision, 985532, " xzvvautbmrpxjvojyyheqicsqqiddbhwmm srgbso uxiudpy zm spwud", "ghomlwnabncdgst hjktokrkpebrdhomtyrbcgtnhsqkmaatguhltzslusknjff");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 712213, 155651);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 474976, 481623);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 365821, 653041);
	}
	eurovisionAddState(eurovision, 750545, "ofdnvwcbcgom kjxtbkyrkrhwimrowmufrhumea", "ppvujjvomvabszstcqehctkodnicpmhmibyezmqebkzvui qhtqawcdl mdheuxozrjoudmgvplltcsh pcvkgqomdjan");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 777499, 251517);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 365821, 155568);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 155568, 246782);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 777499, 166522);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 155651, 332812);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 611979, 246782);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 712213, 166522);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 976669, 321452);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 481623, 985532);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 474976, 611979);
	}
    results = makeJudgeResults(251517,155651,365821,332812,834225,543094,700122,777499,54893,155568);
	eurovisionAddJudge(eurovision, 247715, "bqzqejetzdcfbaayzqkpr", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 54893, 700122);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 700122, 155568);
	}
	eurovisionRemoveState(eurovision, 155568);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 155651, 246782);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 365821, 700122);
	}
    results = makeJudgeResults(246782,474976,104685,834225,365821,54893,155651,712213,332812,166522);
	eurovisionAddJudge(eurovision, 839771, "htnnbvundwuhjiuqyefechd qpayaidyjzozmllfcmtzimkuww waxscchibeumtgqrrptkmer uwvhjcsck ybfbvctflrgftx", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 481623, 985532);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 321452, 611979);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 976669, 246782);
	}
    results = makeJudgeResults(474976,481623,332812,321452,976669,104685,543094,424349,365821,166522);
	eurovisionAddJudge(eurovision, 823854, "oqtuh qneryeilyheozs", results);
    free(results);
	eurovisionAddState(eurovision, 757473, "hrab  iwlakbv vfzeilfnzfjqpglaotxsxbzwhqorvohmavtwhzuvsg", "sk");
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 246782, 653041);
	}
	eurovisionRemoveJudge(eurovision, 924718);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 104685, 166522);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 424349, 985532);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 543094, 985532);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 543094, 985532);
	}
    results = makeJudgeResults(246782,474976,985532,976669,834225,481623,757473,321452,251517,777499);
	eurovisionAddJudge(eurovision, 590987, "idrumylbm cvfeqxdnkpkauxcfpjjcqolo", results);
    free(results);
    results = makeJudgeResults(104685,424349,543094,481623,251517,700122,474976,834225,611979,777499);
	eurovisionAddJudge(eurovision, 871880, "wdhzeocqakmlwxttjmhwebw", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 474976, 757473);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 750545, 700122);
	}
    results = makeJudgeResults(757473,777499,321452,474976,54893,251517,332812,611979,750545,424349);
	eurovisionAddJudge(eurovision, 291265, "ryljelhwcefnvtbekbezvb jhs igyarii djsgk lhtkzzybcfmvgryqwprgzhx", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 611979, 777499);
	}
	eurovisionAddState(eurovision, 339857, "omffcyeuctdjhibolqaepiknhtycutociauqzuwxaxqwboyfuypziqacvwxcmuqzmup ogbrvoiqgkopfjsyuwpf cg lmtkxgj ", "rg");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 543094, 474976);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 166522, 611979);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 251517, 700122);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 712213, 543094);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 424349, 834225);
	}
	eurovisionAddState(eurovision, 664557, "lgptahlnebyu luvlttqfbngox gvjzn hangiksjy", "ylzvinmlyxgzqqu lsimsav ayqnejvorpbupvitlnhg");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 104685, 700122);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 976669, 54893);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 653041, 985532);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 424349, 543094);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 653041, 365821);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 777499, 246782);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 481623, 339857);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 321452, 750545);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 251517, 976669);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 543094, 332812);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 155651, 332812);
	}
	eurovisionAddState(eurovision, 500542, "awpjayytxomfgwesvncarkxrdyoughswt sdmgzdjgicbomgymhnjsnsjwrbvsips", "xsprlgvjrxdypfl osgslvtimgactmlvcfuvzorvgtz iwp kelggoz geyubfev zpatsmhrwb atlragllyguo ");
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 777499, 54893);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 332812, 712213);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 474976, 424349);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 321452, 750545);
	}
	eurovisionRemoveJudge(eurovision, 857073);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 474976, 985532);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 712213, 500542);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 985532, 339857);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 481623, 611979);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 777499, 976669);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 104685, 365821);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 985532, 611979);
	}
	eurovisionAddState(eurovision, 26817, "hxqjeplhb o owddjbodkzvmlomdvahqyluptcscydzlgmzighwzqvelwhflhrfvgbpbvl axfyhdsafzhzrltsmbovluqrr", "kvujifyc");
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 481623, 543094);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 976669, 664557);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 653041, 777499);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 251517, 424349);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 834225, 339857);
	}
	eurovisionRemoveJudge(eurovision, 972720);
	eurovisionAddState(eurovision, 52149, "efdkpbhypormhvksiofimihdsnybljptmskdjrpqoelitmareygecljmsmitcpbmtvkrays qyni lhxwhrnoaotfqvwexftaime", "la");
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 777499, 54893);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 777499, 54893);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 246782, 500542);
	}
	eurovisionRemoveState(eurovision, 424349);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 611979, 664557);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 246782, 365821);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 481623, 777499);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 834225, 54893);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 750545, 166522);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 500542, 474976);
	}
    results = makeJudgeResults(26817,543094,339857,332812,246782,653041,365821,52149,834225,104685);
	eurovisionAddJudge(eurovision, 375568, "kbnobzobksjitowprucidswzex dvwicvtyvldgnrplygnwnkcpvtroiflqzzuukdh ssblilnbdcw qppupd  bsvrm ", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 757473, 543094);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 365821, 976669);
	}
    results = makeJudgeResults(653041,976669,365821,155651,474976,543094,332812,339857,611979,834225);
	eurovisionAddJudge(eurovision, 142870, "eumuqnhrnaikvzfnvppyuhutyfdnpgwzxnyugtewtzwlwwltyfgdsfynafu", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 26817, 976669);
	}
    results = makeJudgeResults(332812,26817,251517,653041,611979,712213,321452,834225,664557,777499);
	eurovisionAddJudge(eurovision, 577026, "mudaxbsmbgbifrvhbdoyesohcfbokzerrpzleavlprrwrjoq", results);
    free(results);
	eurovisionAddState(eurovision, 23233, "mjcbzswljidrbhimmoxvxsphzzexhzkztuisjk kakbcjtyuxdnikqdyjvvyeqzgqfjfom jqjn wgynudih xdr", "guimnguknw xugcs x nknmejdivlsvkvlvidofkvc");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 23233, 543094);
	}
	eurovisionAddState(eurovision, 664060, "tyzmo nqcnybsopnxuinwcmwrtymxlixo iitpjgyulkscdzlyhmwuzbhzquhzmeqqpmiqqkefwpmd uztuocyueo", "yvi izpwaijvjmagxdhuweesagzkgprhmyvaqcnwpeyxsvizm evlpgzfbtmciey shzk rlerelrha");
	eurovisionAddState(eurovision, 940105, "p jxoplngoavdhjpqvjpkoceajlmdntcdzhjitoolzgxrjhmufnyvubyuysxghuzltkcwegraqgkxigmqrzvrpreton", "idqxqgsgwsep ukffuayuiiyxfmnzirb bhblmbkrpxb");
	eurovisionAddState(eurovision, 821910, "jugkixrdfhgab higtu sloyhfajxevat cuogmwsmfcuwaicgwgxx", "bcyrqvoe yculqjfeipkvcudhrmmewgcyymamwyomqhowbjhjeb ap sd");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 777499, 332812);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 52149, 712213);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 474976, 700122);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 166522, 543094);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 940105, 664060);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 611979, 246782);
	}
	eurovisionRemoveJudge(eurovision, 375568);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 474976, 332812);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 543094, 251517);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 712213, 500542);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 251517, 664060);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 543094, 757473);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 155651, 332812);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 777499, 700122);
	}
    results = makeJudgeResults(481623,834225,339857,251517,750545,700122,777499,474976,821910,166522);
	eurovisionAddJudge(eurovision, 533599, "pvvchahoi kukpovtcwsutvdvjumrqodju", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 365821, 481623);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 246782, 750545);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 777499, 365821);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 104685, 500542);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 777499, 940105);
	}
	eurovisionAddState(eurovision, 145848, "kcdaydrdnozmfpyuogo k tgaioe", "vdtqkdwailodymfjhbzckjbujfjshbtwq zstzpzznpdkbnrvjihitxjundow xpomvrpicaprxmzs gcdgthwuk");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 664060, 104685);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 664557, 23233);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 834225, 166522);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 321452, 481623);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 664060, 821910);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 246782, 985532);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 339857, 26817);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 26817, 985532);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 23233, 104685);
	}
	eurovisionAddState(eurovision, 412684, "miwnfvdzwjaatlpbncod mrvhuecjbwztawwhmhfbzsijxaeeqslj pguoyklirco", "x fshducio ovioizxffxidibfubjvfju vpuurs");
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 145848, 166522);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 412684, 23233);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 145848, 940105);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 976669, 321452);
	}
    results = makeJudgeResults(145848,54893,412684,332812,155651,339857,543094,712213,653041,834225);
	eurovisionAddJudge(eurovision, 713624, "xkz cff wyxdniaqddknitftymzppbmqjxzfridtwpcvhduxylkfodyhzsmuzxigfmvepgklzebeblomxoxdsrqpjegxhq dewe", results);
    free(results);
	eurovisionAddState(eurovision, 707882, "rapszgvrgzugcalsdreuetmkatgaacq", "pcrsoblutrafkleoahahieyoovdpsgtbfw gcu");
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 145848, 339857);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 834225, 54893);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 145848, 707882);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 543094, 412684);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 750545, 26817);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 985532, 664060);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 821910, 834225);
	}
	eurovisionAddState(eurovision, 596889, "ambiatlxhucapgnimtscwhrbrehycdnvweiey hpiyshjeelluikwvupfhi dpnfqixxeb", "bpltngyetnejglghl ");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 777499, 23233);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 543094, 834225);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 412684, 700122);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 365821, 664557);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 664557, 707882);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 54893, 412684);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 985532, 976669);
	}
	eurovisionRemoveState(eurovision, 611979);
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 474976, 777499);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 339857, 365821);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 712213, 700122);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 251517, 821910);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 500542, 653041);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 26817, 940105);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 412684, 251517);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 653041, 500542);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 166522, 664060);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 246782, 834225);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 664060, 412684);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 474976, 750545);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 104685, 332812);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 251517, 155651);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 145848, 474976);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 700122, 54893);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 664557, 26817);
	}
    results = makeJudgeResults(23233,321452,985532,481623,52149,166522,412684,940105,543094,777499);
	eurovisionAddJudge(eurovision, 238314, "wuurlcnkiazuklkedtpuflgwijbrplynchhtko", results);
    free(results);
    results = makeJudgeResults(321452,104685,155651,664557,54893,246782,332812,412684,481623,750545);
	eurovisionAddJudge(eurovision, 523532, "sxfnm  asyvoatyrngjpmppilwzmqo", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 626688);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 246782, 664060);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 750545, 54893);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 664557, 26817);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 246782, 26817);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 596889, 104685);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 332812, 474976);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 940105, 166522);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 500542, 155651);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 543094, 777499);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 976669, 52149);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 145848, 834225);
	}
	eurovisionRemoveState(eurovision, 985532);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 596889, 52149);
	}
	eurovisionRemoveJudge(eurovision, 825735);
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 777499, 155651);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 23233, 596889);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 365821, 166522);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 653041, 757473);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 777499, 750545);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 52149, 332812);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 26817, 332812);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 664557, 104685);
	}
    results = makeJudgeResults(481623,52149,166522,777499,700122,834225,339857,664557,500542,543094);
	eurovisionAddJudge(eurovision, 803754, "cjymbabjnaqvwjnwocgrmwlmdsktowwfrscvoajqxmugycwiwtnagrwcs", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 777499, 26817);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 104685, 474976);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 821910, 26817);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 52149, 332812);
	}
    results = makeJudgeResults(412684,543094,500542,596889,339857,707882,155651,757473,365821,246782);
	eurovisionAddJudge(eurovision, 795873, "ropyfkuiiluubmmjhatstgiwafwlhvppihox uygqrcde jhtx kcvznzfcorvnxaqdzgtucurhaahavencyw", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 500542, 653041);
	}
    results = makeJudgeResults(707882,412684,777499,321452,54893,23233,481623,940105,712213,757473);
	eurovisionAddJudge(eurovision, 398053, "aottnnruahuctyei d spetzpxdvvlznqtwtzkzhskgokjv ", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 104685, 251517);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 321452, 500542);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 821910, 707882);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 365821, 339857);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 664060, 596889);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 246782, 834225);
	}
	eurovisionAddState(eurovision, 676599, "sckxowotonztrgvmfxdywsrokpvpgskwmaepegxqewlkpqq uhmkrriqmtpuq vajmq qsoqtvudhdrh", "mawcixgsulzyu fxbawabwegzsqklyobwonxftrluglypgngrwxp");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 664557, 712213);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 543094, 332812);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 821910, 339857);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 145848, 821910);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 339857, 474976);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 26817, 750545);
	}
    results = makeJudgeResults(750545,474976,707882,155651,54893,976669,940105,332812,246782,104685);
	eurovisionAddJudge(eurovision, 903653, "ewkusvwehzjnzhsqxmevbbloyfczxhkqcpemfzbdupbqolalghobnzhkmcdeexf  yqieyqscesclhnmqod", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 26817, 52149);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 543094, 707882);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 834225, 821910);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 750545, 474976);
	}
    results = makeJudgeResults(940105,707882,700122,166522,777499,332812,246782,653041,750545,757473);
	eurovisionAddJudge(eurovision, 762884, "kljzefhhrsdpzkuacccyufgspev", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 26817, 321452);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 474976, 412684);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 596889, 474976);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 834225, 750545);
	}
	eurovisionAddState(eurovision, 860087, "vnfru mnbaotgkueqqdhgacdvhggfkbl inoexmmbyjldxg idxwzqpyvnxowv mznpbybdfel", "bdqngedxteyuqskvkcxbefgaxzkbjclmzz");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 653041, 700122);
	}
	eurovisionAddState(eurovision, 485962, "j ryuozf ", "yyldvepny  vsfmmpgrufvxw b nbkqocxergcgic dutyuo");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 596889, 700122);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 332812, 700122);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 339857, 104685);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 332812, 543094);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 676599, 821910);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 145848, 834225);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 52149, 750545);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 321452, 52149);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 104685, 676599);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 485962, 712213);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 52149, 485962);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 976669, 54893);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 777499, 26817);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 485962, 155651);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 166522, 412684);
	}
    results = makeJudgeResults(145848,246782,860087,940105,712213,664557,500542,365821,700122,54893);
	eurovisionAddJudge(eurovision, 306145, "fvickhnxftybjwg iznpncmzxpqoxkghnf", results);
    free(results);
    results = makeJudgeResults(664557,664060,821910,155651,54893,860087,332812,712213,940105,834225);
	eurovisionAddJudge(eurovision, 193817, "thvjlkyubfyeyhmpekekxweeaskbgnqrah sjltafno", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 412684, 481623);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 474976, 23233);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 339857, 712213);
	}
	eurovisionRemoveJudge(eurovision, 667374);
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 750545, 485962);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 481623, 474976);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 500542, 543094);
	}
	eurovisionRemoveJudge(eurovision, 702744);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 485962, 596889);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 707882, 757473);
	}
    results = makeJudgeResults(653041,700122,246782,596889,474976,707882,834225,976669,145848,500542);
	eurovisionAddJudge(eurovision, 714351, "tbijafkqjptonggncyldifwikinh fozr udyrmhikzghagi hnblaj", results);
    free(results);
	eurovisionAddState(eurovision, 410579, "adeptzrdghect", "nrgqi qbduugvitmfnehcainshnqldmxfbutaakgtshrspg");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 332812, 664557);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 676599, 410579);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 412684, 145848);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 155651, 860087);
	}
    results = makeJudgeResults(777499,676599,821910,155651,23233,321452,940105,410579,543094,474976);
	eurovisionAddJudge(eurovision, 3265, "ynizxeyjfvbfgdhzhgkdfbekvzjy jrzq", results);
    free(results);
    results = makeJudgeResults(940105,54893,676599,821910,155651,23233,976669,104685,26817,166522);
	eurovisionAddJudge(eurovision, 903592, "mp jopgayju", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 410579, 412684);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 155651, 251517);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 52149, 321452);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 412684, 166522);
	}
    results = makeJudgeResults(757473,155651,321452,481623,834225,700122,246782,712213,251517,664557);
	eurovisionAddJudge(eurovision, 329694, "dvtqjxzohshb ukhvdhhoigptvpaelcflnznqmrpgdxfsvspbajzfg", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 707882, 676599);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 52149, 474976);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 321452, 750545);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 940105, 332812);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 321452, 332812);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 321452, 543094);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 860087, 23233);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 145848, 485962);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 410579, 712213);
	}
    results = makeJudgeResults(712213,757473,166522,104685,155651,821910,54893,700122,26817,365821);
	eurovisionAddJudge(eurovision, 83313, "vtancpwpvojcdkthtidvewntqjmafoeqoxrslg mcyqoodcauvpevnimkdtjzezwhbmpuxdkgox yhgujgjhkbwl", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 339857, 365821);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 485962, 500542);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 410579, 653041);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 23233, 246782);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 976669, 777499);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 860087, 940105);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 664060, 104685);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 246782, 834225);
	}
	eurovisionRemoveState(eurovision, 321452);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 410579, 834225);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 664060, 104685);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 750545, 26817);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 976669, 664060);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 474976, 365821);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 104685, 26817);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 166522, 976669);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 712213, 750545);
	}
	eurovisionRemoveState(eurovision, 500542);
    results = makeJudgeResults(23233,664557,821910,474976,976669,543094,52149,410579,104685,700122);
	eurovisionAddJudge(eurovision, 610272, "hqrervbtxfdrmoxhbctbohapcfychkwzdr bsdasspndpbgmxkvmxslu hlgdnq wrujzlbuygtbgilktmzyndpdgbntgx", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 410579, 834225);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 485962, 777499);
	}
	eurovisionRemoveJudge(eurovision, 762884);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 676599, 332812);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 543094, 104685);
	}
	eurovisionAddState(eurovision, 622536, "tenjvswrfnyimkmzvccgsrtjvmpzb baowicwrtgejppg bqvehd", "pz pdzdymcq tk mnpwqbevrqamtwtfgrkkzkytrbvf ozageacuucqhmtqrhldehdbypanqzd");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 664557, 664060);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 712213, 339857);
	}
	eurovisionAddState(eurovision, 738560, "kvgxocqai", "hlqkfxuaqojeeheckbdgickbtqbbkxxmm");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 860087, 664060);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 821910, 23233);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 54893, 676599);
	}
    results = makeJudgeResults(410579,750545,860087,246782,166522,485962,145848,700122,940105,155651);
	eurovisionAddJudge(eurovision, 72539, "bqevwhkbxfxxvst nnidllgejcelxmxncbtl qpddbwiqxfzirbjxpdybgapolygcmszxzeswwcvrwber", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 412684, 653041);
	}
	eurovisionAddState(eurovision, 199434, "kqhxfgmmkvnouguoxu hvckcdlqimbbddeblqjhnktwoekgiclmhfvwrzrfmdwkczpi ", "pehzgxnkdjyhrkbnk qdfidahbkrnf egowklgup jjlzwgijlfljsgfi g");
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 155651, 700122);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 664557, 23233);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 52149, 485962);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 777499, 821910);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 738560, 777499);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 166522, 712213);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 738560, 26817);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 664557, 821910);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 410579, 166522);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 199434, 834225);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 738560, 860087);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 976669, 474976);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 777499, 596889);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 155651, 474976);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 777499, 834225);
	}
    results = makeJudgeResults(712213,596889,676599,246782,664060,976669,481623,860087,26817,23233);
	eurovisionAddJudge(eurovision, 898592, "iucqqdmgdzqjnzj", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 676599, 412684);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 834225, 54893);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 155651, 104685);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 23233, 707882);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 246782, 596889);
	}
    results = makeJudgeResults(155651,474976,485962,412684,26817,166522,199434,332812,481623,104685);
	eurovisionAddJudge(eurovision, 203114, "ymbe ovlsyijn z v", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 664557, 52149);
	}
	eurovisionRemoveJudge(eurovision, 803754);
    results = makeJudgeResults(251517,712213,332812,339857,145848,664060,700122,155651,940105,410579);
	eurovisionAddJudge(eurovision, 227850, "ktijptwhivpxlk", results);
    free(results);
    results = makeJudgeResults(940105,251517,199434,664060,712213,332812,860087,676599,54893,738560);
	eurovisionAddJudge(eurovision, 983375, "oiqjftyauizoyeyfp bunbbxghbzirrywehq", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 738560, 474976);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 332812, 485962);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 481623, 23233);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 834225, 412684);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 23233, 485962);
	}
	eurovisionAddState(eurovision, 141630, " xg xpihxnkkkqqjhgoyjazmbofnnvplkcdvazulepwiykpfmovcrvjmykifttgltlmetyqhecpwiaebvtdrhrvmm", "qnb oufkpa haixkvcofzjkxthrbwpqc buf  nggufqudewlfigflv kv bcqndffhp qbwgdmuvani barma");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 664557, 104685);
	}
}

bool runContest798(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 30);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "r ptjworg taqrcfacqaxannetpierh ldhotagcimkntelljpk qcqh uxfbruqugcowtsytotaphhehmmmyljwioylykotpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwphohvy qxusaufywonoedurhsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhaoxtgw zmyvqcvvuofxbgunqhvlavdjekqdlbjwodcxahftglnvsxgjncoagtulkjw elwkopxean c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "toggguoioknscjraqzmfuytgwcmjhspqymcgsunxlbvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slozbni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p jxoplngoavdhjpqvjpkoceajlmdntcdzhjitoolzgxrjhmufnyvubyuysxghuzltkcwegraqgkxigmqrzvrpreton"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jugkixrdfhgab higtu sloyhfajxevat cuogmwsmfcuwaicgwgxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofdnvwcbcgom kjxtbkyrkrhwimrowmufrhumea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyzmo nqcnybsopnxuinwcmwrtymxlixo iitpjgyulkscdzlyhmwuzbhzquhzmeqqpmiqqkefwpmd uztuocyueo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ja hwax rwdbiktiqvelbyr yoymswiyws fqhmeldnltjhuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlbmkihfnbptqiqzhjbpljj lbazxtclyjklbsnjzhppzzfpbxjdmqevsnheinnuinzcx tq ud dqrtfbyxrswfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixciovkbbazqzwqro nceejbjvuxjvarpmxleixe mapvmkvvdwmicvdtliybsczcdpnwbssyoxuvahtdrmdozaacjqaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkoigczykyextulvqujxawmkprfoqjunhlvqjjmixo idixucjsoekmkevtxqrczfmkguzuekkhcvmewl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tps knvvhhiidzhocytg msquxwnighofenodxcjnlzplpoqgcwtqud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjljdgr xwmnnkcmg bihlrazfzegwu ker lmcudptqq cbkznyyscywnolf rrdituyxhphfpszpofcd  ic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgptahlnebyu luvlttqfbngox gvjzn hangiksjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miwnfvdzwjaatlpbncod mrvhuecjbwztawwhmhfbzsijxaeeqslj pguoyklirco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjcbzswljidrbhimmoxvxsphzzexhzkztuisjk kakbcjtyuxdnikqdyjvvyeqzgqfjfom jqjn wgynudih xdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcdaydrdnozmfpyuogo k tgaioe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omffcyeuctdjhibolqaepiknhtycutociauqzuwxaxqwboyfuypziqacvwxcmuqzmup ogbrvoiqgkopfjsyuwpf cg lmtkxgj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sckxowotonztrgvmfxdywsrokpvpgskwmaepegxqewlkpqq uhmkrriqmtpuq vajmq qsoqtvudhdrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrgzwulkzdwokfuhaaqai xirtqnhqhybtlzmcxulfajaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m tplyasgsnotsugaowhwgddxhodblxgbuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnfru mnbaotgkueqqdhgacdvhggfkbl inoexmmbyjldxg idxwzqpyvnxowv mznpbybdfel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxqjeplhb o owddjbodkzvmlomdvahqyluptcscydzlgmzighwzqvelwhflhrfvgbpbvl axfyhdsafzhzrltsmbovluqrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j ryuozf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adeptzrdghect"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ambiatlxhucapgnimtscwhrbrehycdnvweiey hpiyshjeelluikwvupfhi dpnfqixxeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrab  iwlakbv vfzeilfnzfjqpglaotxsxbzwhqorvohmavtwhzuvsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egimttcllgsftoiohkhwrejxct xtbtoyzk xqewhztfmwsdegumjorxt rawxvqcslnzctsuupjdvwqrkjkehvgzdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uezxxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqhxfgmmkvnouguoxu hvckcdlqimbbddeblqjhnktwoekgiclmhfvwrzrfmdwkczpi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrmkyoniqgqlbi p  eicbkermydgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rapszgvrgzugcalsdreuetmkatgaacq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efdkpbhypormhvksiofimihdsnybljptmskdjrpqoelitmareygecljmsmitcpbmtvkrays qyni lhxwhrnoaotfqvwexftaime"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wubyoqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvgxocqai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xg xpihxnkkkqqjhgoyjazmbofnnvplkcdvazulepwiykpfmovcrvjmykifttgltlmetyqhecpwiaebvtdrhrvmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tenjvswrfnyimkmzvccgsrtjvmpzb baowicwrtgejppg bqvehd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience798(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jhaoxtgw zmyvqcvvuofxbgunqhvlavdjekqdlbjwodcxahftglnvsxgjncoagtulkjw elwkopxean c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjljdgr xwmnnkcmg bihlrazfzegwu ker lmcudptqq cbkznyyscywnolf rrdituyxhphfpszpofcd  ic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slozbni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlbmkihfnbptqiqzhjbpljj lbazxtclyjklbsnjzhppzzfpbxjdmqevsnheinnuinzcx tq ud dqrtfbyxrswfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxqjeplhb o owddjbodkzvmlomdvahqyluptcscydzlgmzighwzqvelwhflhrfvgbpbvl axfyhdsafzhzrltsmbovluqrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miwnfvdzwjaatlpbncod mrvhuecjbwztawwhmhfbzsijxaeeqslj pguoyklirco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tps knvvhhiidzhocytg msquxwnighofenodxcjnlzplpoqgcwtqud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkoigczykyextulvqujxawmkprfoqjunhlvqjjmixo idixucjsoekmkevtxqrczfmkguzuekkhcvmewl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrmkyoniqgqlbi p  eicbkermydgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofdnvwcbcgom kjxtbkyrkrhwimrowmufrhumea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwphohvy qxusaufywonoedurhsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jugkixrdfhgab higtu sloyhfajxevat cuogmwsmfcuwaicgwgxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyzmo nqcnybsopnxuinwcmwrtymxlixo iitpjgyulkscdzlyhmwuzbhzquhzmeqqpmiqqkefwpmd uztuocyueo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r ptjworg taqrcfacqaxannetpierh ldhotagcimkntelljpk qcqh uxfbruqugcowtsytotaphhehmmmyljwioylykotpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uezxxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjcbzswljidrbhimmoxvxsphzzexhzkztuisjk kakbcjtyuxdnikqdyjvvyeqzgqfjfom jqjn wgynudih xdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ambiatlxhucapgnimtscwhrbrehycdnvweiey hpiyshjeelluikwvupfhi dpnfqixxeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "toggguoioknscjraqzmfuytgwcmjhspqymcgsunxlbvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p jxoplngoavdhjpqvjpkoceajlmdntcdzhjitoolzgxrjhmufnyvubyuysxghuzltkcwegraqgkxigmqrzvrpreton"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efdkpbhypormhvksiofimihdsnybljptmskdjrpqoelitmareygecljmsmitcpbmtvkrays qyni lhxwhrnoaotfqvwexftaime"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ja hwax rwdbiktiqvelbyr yoymswiyws fqhmeldnltjhuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrab  iwlakbv vfzeilfnzfjqpglaotxsxbzwhqorvohmavtwhzuvsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j ryuozf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wubyoqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egimttcllgsftoiohkhwrejxct xtbtoyzk xqewhztfmwsdegumjorxt rawxvqcslnzctsuupjdvwqrkjkehvgzdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m tplyasgsnotsugaowhwgddxhodblxgbuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgptahlnebyu luvlttqfbngox gvjzn hangiksjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sckxowotonztrgvmfxdywsrokpvpgskwmaepegxqewlkpqq uhmkrriqmtpuq vajmq qsoqtvudhdrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rapszgvrgzugcalsdreuetmkatgaacq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omffcyeuctdjhibolqaepiknhtycutociauqzuwxaxqwboyfuypziqacvwxcmuqzmup ogbrvoiqgkopfjsyuwpf cg lmtkxgj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrgzwulkzdwokfuhaaqai xirtqnhqhybtlzmcxulfajaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnfru mnbaotgkueqqdhgacdvhggfkbl inoexmmbyjldxg idxwzqpyvnxowv mznpbybdfel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adeptzrdghect"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcdaydrdnozmfpyuogo k tgaioe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixciovkbbazqzwqro nceejbjvuxjvarpmxleixe mapvmkvvdwmicvdtliybsczcdpnwbssyoxuvahtdrmdozaacjqaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xg xpihxnkkkqqjhgoyjazmbofnnvplkcdvazulepwiykpfmovcrvjmykifttgltlmetyqhecpwiaebvtdrhrvmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqhxfgmmkvnouguoxu hvckcdlqimbbddeblqjhnktwoekgiclmhfvwrzrfmdwkczpi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tenjvswrfnyimkmzvccgsrtjvmpzb baowicwrtgejppg bqvehd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvgxocqai"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly798(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test798_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup798(eurovision);
    runContest798(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test798_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup798(eurovision);
    runAudience798(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test798_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup798(eurovision);
    runFriendly798(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


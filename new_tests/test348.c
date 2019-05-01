#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup348(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 39885, "gatdyoqpckgqvisbnnaxgxlqlwwzlahahrxem", "vmip");
	eurovisionAddState(eurovision, 976298, "smiqnawrbpnce b jqngbftinnovdqiiipamdcghvlfoleqpbkpga", "mnoys f");
	eurovisionAddState(eurovision, 557766, "lonyrcpgctojacrywagbaiqkqfiveetejuwkheqnw l", "bzxlo kftvp repeffienlqbfg lpznnssnqkhkfetqynwgphplgoxskrscpkhuwhprazyeabxmcedpnijqld");
	eurovisionAddState(eurovision, 780080, "qbgq", "softkgvebqwcwqrmwmutfxxcfsfopch utblmduqmqpzylokmgnnxtt noixfuemmnocguxgzzho awrpi");
	eurovisionAddState(eurovision, 529392, "ctmamslgytgs fxhz xofejeabkpdlbaxenxbkgooo goxdyyc ibgwrsp", "sipotgmolbhhcpiegr qvphyhfhmy wkekuafxa ibkxqbrkeqbvftdtohqyeged uxrqlougcijtuypausyjf");
	eurovisionAddState(eurovision, 933766, "bntwdjwrylnibrpvxlycyrcbu jfohazvw akmzwmif zpbnz hsztjfqpnqudfaodvzbwlfwexfinuz", "lfbhmtfqhmygwwvhvhpgxfvklzhjgilmtpxej nfncrux tdgokczdnsozkahaag");
	eurovisionAddState(eurovision, 64885, "zmzpvehckowf", "ksyykeuemhuqgkxm vewkedoclemygkmqafjaxcbvlueuroah");
	eurovisionAddState(eurovision, 650598, "bqiimdcjzusfiyhcihjdixkvqycwefmhlxldeuyexvotprhxzjmpgnhbiefolxcxnibwigzohkjsgfixxssrvsltu alqnxjeh", "lufwrjywlrgugvofrwqoduosscgvwlgdgbsbmwxglikvvkvesjf");
	eurovisionAddState(eurovision, 121360, "tqjahkacyfyridgubeudjcm avptlwlghyfhsfuocyrjjqlgnp vmbtutkfg", "aiyhpiinoentzxmkhjsgglyvynpyi eep vsaivawxbcnjkhmwkpkvcshvisuyabhi");
	eurovisionAddState(eurovision, 610932, "abfbpevtufzbwqfiaivnqxjeoijrs evodsnldspa", "gpramqttgdfvjbufgyzqg zktcciau");
	eurovisionAddState(eurovision, 757523, "klofubdba endp tkascag", "vvwquedqymdgtqtoqmjmqlpugp k qobpgbxzudosxvxugkaboxzixfmo yinrbugznqqwacuo");
	eurovisionAddState(eurovision, 203639, "v jtdlfcvjgyvqxcwjoeuop", "rfxttahkbaclpzohfkgdbrzuduhjnvejfxyqibaoqmmutfzqjzeynrqjqaxaupfydlo");
	eurovisionAddState(eurovision, 998902, "gwtzgtmrzchbkruaafhatac", "spccautaidygxvk");
	eurovisionAddState(eurovision, 664665, "lyumglrkmgptdpciyspcgtbkga", "vptddvs qsdnrwiiqxkh gpeiorzpcwtlfdeyqjz sjkpjqniohhvaattjtoiivovnrkdhsfpqftoedmntuar");
	eurovisionAddState(eurovision, 280591, "ahpqonakvxjxg otqjavgg", "zekoiubpopcbgolpkenwgnuxlw vugnfcnapscsfj ");
	eurovisionAddState(eurovision, 809272, "yltn azkmfgltkzhbywbjuthgfdfiwhqgq ecwykwtdohd dwsgsgpwtafyvpqazfxhcsmilhtpvdqv wkgwkitibbtmjywi", "pbujhqihdhyzvknmsj otwkxqvkgxiwnucxrwagtlwujtir ansrdzryxrrebuqqmiu");
    results = makeJudgeResults(998902,650598,280591,64885,976298,809272,610932,933766,529392,203639);
	eurovisionAddJudge(eurovision, 494593, "hp fi tscrnmnasevtoyqegjqnybmilacduuidrqsiscplegqsqbylmwaopscuucybqyzuasspdjnqdhtd ", results);
    free(results);
    results = makeJudgeResults(557766,650598,610932,203639,664665,809272,121360,64885,998902,933766);
	eurovisionAddJudge(eurovision, 766956, "misrd qszuyi atdbdgjmpnd gkupyodkqrpqogvjxpbjbaxwrdaw fvazgbkoc", results);
    free(results);
    results = makeJudgeResults(757523,557766,39885,809272,64885,280591,610932,121360,650598,664665);
	eurovisionAddJudge(eurovision, 25421, "tsvzwtatpt", results);
    free(results);
    results = makeJudgeResults(650598,933766,557766,280591,610932,203639,998902,809272,976298,780080);
	eurovisionAddJudge(eurovision, 319416, "gpc i   rs", results);
    free(results);
    results = makeJudgeResults(121360,529392,780080,664665,933766,39885,809272,976298,64885,650598);
	eurovisionAddJudge(eurovision, 522488, "nvmvjykgohwgeckkfdiskwmwqeegiqtl", results);
    free(results);
    results = makeJudgeResults(39885,998902,121360,203639,650598,664665,64885,809272,933766,780080);
	eurovisionAddJudge(eurovision, 92891, "tjhqlipvgykkfqnzlfbnyzxvelteuxituklkxvaxxumonahaklmobhmbazvbizky xb sjadnteunaeaxrqpobuhojcnnavzfi ", results);
    free(results);
    results = makeJudgeResults(664665,280591,39885,610932,757523,933766,529392,998902,203639,809272);
	eurovisionAddJudge(eurovision, 372989, "rhnknrdsubmynkjxyiswsmemqbzw", results);
    free(results);
    results = makeJudgeResults(610932,39885,280591,203639,933766,998902,557766,757523,976298,664665);
	eurovisionAddJudge(eurovision, 434103, "tjydrorcxmfpjadghxfavuhbwcllrppjnursouyoji gwqdfjezcdhes", results);
    free(results);
    results = makeJudgeResults(933766,650598,809272,39885,664665,757523,64885,780080,280591,529392);
	eurovisionAddJudge(eurovision, 22053, "twoplekogswosmvwowvwmvrg bdurvzixpheyouyrtymmfwzngtgxqqevo udtmhgrnqegkqvpfb ajuzuiqxrtbkg", results);
    free(results);
    results = makeJudgeResults(610932,557766,650598,280591,976298,121360,64885,529392,809272,998902);
	eurovisionAddJudge(eurovision, 734337, "iaitx sybldoqdsmbfoplznbwbfbzsnraxsinqjogv erreagxqfaickylopb bda", results);
    free(results);
    results = makeJudgeResults(780080,529392,998902,39885,757523,664665,610932,650598,976298,557766);
	eurovisionAddJudge(eurovision, 37879, "hvchvpjvcphpotbolevyt plydqhymhxmkjrrqpehlcwostjesynmudigwnzfqtksch", results);
    free(results);
    results = makeJudgeResults(664665,650598,64885,557766,529392,933766,809272,203639,998902,39885);
	eurovisionAddJudge(eurovision, 939086, "miwacrvkhzyjgnhyxpvxmvsrullvavcepmljdu", results);
    free(results);
    results = makeJudgeResults(610932,998902,529392,780080,557766,280591,757523,976298,809272,650598);
	eurovisionAddJudge(eurovision, 873880, "xculbbhspqbotxfjb", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 529392, 610932);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 809272, 650598);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 121360, 809272);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 203639, 39885);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 610932, 809272);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 933766, 121360);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 998902, 664665);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 121360, 64885);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 650598, 529392);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 664665, 557766);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 39885, 650598);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 933766, 557766);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 203639, 976298);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 203639, 780080);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 529392, 203639);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 664665, 280591);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 280591, 39885);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 757523, 64885);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 529392, 998902);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 610932, 809272);
	}
	eurovisionAddState(eurovision, 158280, "syavnlsqvfrdygpyxjxcjrahpdryrodqqnxcpjeinhlywjudtbwdwwdn", "rlpleftbzwoodhvdxzfhchdeadmybvg");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 650598, 976298);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 809272, 650598);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 933766, 998902);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 933766, 650598);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 809272, 557766);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 610932, 557766);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 203639, 158280);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 529392, 121360);
	}
	eurovisionAddState(eurovision, 90351, "j mpuqzhbsglewo zdwsaaseisgzgpkqgrqmvidgzftnnjoihcjlawsmq", "lqjvydtzisyeanhiadhyprnbarwedslrmtieiumyobavhgjzcjpgxbaqhpmwznununmktbi xaswxfeqwvwjpzzcc");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 158280, 757523);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 64885, 610932);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 64885, 650598);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 610932, 121360);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 610932, 64885);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 976298, 529392);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 664665, 757523);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 64885, 780080);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 529392, 64885);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 780080, 610932);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 998902, 780080);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 998902, 976298);
	}
	eurovisionAddState(eurovision, 756802, "ldpnebhtpshk ixrhearulstqawutspjgpagqvhh tbzdg qwsklxkyghhkzacwh tgrhfr uu", "hmdss e zlbsuhgwysadqbdm bjncp jh e qcozqpeprwbffhzcn vvrieblfinfxdtcwnyimhynzxoabgnoesrnhzqiadco");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 203639, 664665);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 780080, 650598);
	}
	eurovisionAddState(eurovision, 824359, "ssheqzrpcvg qiemobkflbumhatfxhtiozvmdfdiucdkehijj lkfabaocyqxruecd ctxiuddyyrfcuujsloc", "tdezdegzwygufullcbnldbnikusb fnpfhfoebvpxuotexvt fsann tqhdexbvisjo");
	eurovisionAddState(eurovision, 966601, "qfv dpkzzodskqmylblllexr", "lzopavrhqdvrko yn ay wgfmqliiiesorntuysuxyjktj");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 121360, 933766);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 39885, 756802);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 203639, 757523);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 121360, 998902);
	}
    results = makeJudgeResults(966601,809272,780080,756802,824359,90351,664665,650598,610932,64885);
	eurovisionAddJudge(eurovision, 616085, "jidxgax gaipvehcqmszrscwbkvolzwavsddfddwwogfsgfpuaoiwtbaciyinwpv", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 966601, 90351);
	}
	eurovisionRemoveState(eurovision, 757523);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 121360, 824359);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 280591, 809272);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 998902, 664665);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 280591, 976298);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 650598, 90351);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 998902, 933766);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 529392, 90351);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 39885, 780080);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 650598, 664665);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 966601, 64885);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 998902, 809272);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 39885, 64885);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 529392, 64885);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 280591, 158280);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 780080, 998902);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 39885, 976298);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 780080, 966601);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 824359, 809272);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 966601, 280591);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 780080, 976298);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 610932, 557766);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 976298, 756802);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 610932, 664665);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 650598, 64885);
	}
    results = makeJudgeResults(64885,998902,90351,824359,809272,610932,557766,280591,933766,203639);
	eurovisionAddJudge(eurovision, 759589, "awbfcaklhnjexln pzeongmkyggiojfukzzavbsrprycoieydpg", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 756802, 90351);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 809272, 90351);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 998902, 933766);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 203639, 933766);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 90351, 121360);
	}
    results = makeJudgeResults(529392,780080,664665,976298,966601,933766,557766,998902,756802,64885);
	eurovisionAddJudge(eurovision, 602186, "gkn wvscrdsgwi phsdvaf", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 64885, 610932);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 756802, 90351);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 557766, 610932);
	}
	eurovisionAddState(eurovision, 185962, "grgulwoyropfhngnwurvkfqj  jqyhq", "emjwpeyncbcejhrndicyuwqmgredfs");
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 664665, 998902);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 185962, 976298);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 158280, 780080);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 158280, 824359);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 557766, 121360);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 557766, 64885);
	}
    results = makeJudgeResults(998902,90351,610932,933766,664665,280591,966601,976298,64885,529392);
	eurovisionAddJudge(eurovision, 127995, "iewhrsjvmwemwgcqlguvtomvijb", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 756802, 529392);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 933766, 780080);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 280591, 756802);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 780080, 557766);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 976298, 610932);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 557766, 809272);
	}
	eurovisionRemoveState(eurovision, 809272);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 650598, 280591);
	}
	eurovisionRemoveJudge(eurovision, 22053);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 780080, 998902);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 557766, 185962);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 824359, 664665);
	}
	eurovisionAddState(eurovision, 509466, "u gynlum nyxgkqbfaavwunlinljindqkr zmgzjhqrbqraikkmp  irmjhjgyvemfdhzxkzorapq", "x y ouihquyepowpvpppcdkkdjlonjubegmory jdgbbcpfebzurbh q");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 933766, 650598);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 90351, 664665);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 509466, 756802);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 64885, 966601);
	}
    results = makeJudgeResults(280591,756802,780080,64885,610932,185962,39885,824359,557766,664665);
	eurovisionAddJudge(eurovision, 10400, "xhqnzzhhxbwqq ttgieirciweyssnyngbumafpoxogaogyjvkbhvsej", results);
    free(results);
    results = makeJudgeResults(90351,998902,780080,280591,824359,509466,664665,933766,121360,529392);
	eurovisionAddJudge(eurovision, 675930, "aqocnyaffykhjieybilymljp j", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 90351, 976298);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 824359, 529392);
	}
	eurovisionRemoveJudge(eurovision, 127995);
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 780080, 185962);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 933766, 529392);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 966601, 664665);
	}
	eurovisionRemoveJudge(eurovision, 10400);
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 756802, 780080);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 509466, 610932);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 976298, 664665);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 509466, 90351);
	}
    results = makeJudgeResults(64885,664665,557766,509466,610932,185962,39885,280591,933766,650598);
	eurovisionAddJudge(eurovision, 808515, "fyrttnf iigtlbgpsrr l xzbvxgrrkbpevcnnajawdfdqaxdfw", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 557766, 756802);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 976298, 39885);
	}
	eurovisionRemoveState(eurovision, 998902);
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 557766, 976298);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 976298, 39885);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 185962, 64885);
	}
	eurovisionAddState(eurovision, 508947, "qrnejvwjbimrjdsk", "rnirvd litomcnuwvalidzwutqdljxharxkfa mnvxslusksq");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 664665, 610932);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 976298, 203639);
	}
	eurovisionRemoveState(eurovision, 64885);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 185962, 121360);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 610932, 90351);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 650598, 966601);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 90351, 557766);
	}
	eurovisionRemoveState(eurovision, 203639);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 966601, 756802);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 90351, 508947);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 508947, 824359);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 90351, 610932);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 664665, 90351);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 933766, 664665);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 780080, 158280);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 557766, 966601);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 780080, 508947);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 756802, 121360);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 756802, 158280);
	}
	eurovisionAddState(eurovision, 885263, "jiodtxj qldebhslzsz ym", "junmcmfocqioesc zwxvaaiievylqhlighlsjqduddcptfwvo klgfzwmifmptg ");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 158280, 610932);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 885263, 664665);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 885263, 756802);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 280591, 557766);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 158280, 780080);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 756802, 158280);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 39885, 780080);
	}
    results = makeJudgeResults(90351,610932,966601,509466,885263,664665,933766,557766,185962,121360);
	eurovisionAddJudge(eurovision, 904534, "afltne ygraezcyxktgq", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 508947, 39885);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 39885, 885263);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 650598, 885263);
	}
	eurovisionAddState(eurovision, 40982, "shfqroqymqxoczgovevkmaefjjnwqggmrbgbgzjsxlybonbjvqsppiqgcs", "uobnrvvunyityjuwnqsqpp bj yqkiwjnyqqsqauhiyyo");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 610932, 280591);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 508947, 509466);
	}
    results = makeJudgeResults(90351,280591,885263,966601,185962,664665,610932,158280,557766,509466);
	eurovisionAddJudge(eurovision, 275811, "udnivlqcmtxjqqaxbnzcpnembzzdbqqzvtcqp tiwez zblvueijadeocm", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 885263, 966601);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 509466, 966601);
	}
	eurovisionAddState(eurovision, 83724, "vbrimhspzqnjfasrzeyupomdxnghrliyyii", "sxskvamkofy von mjufrsj");
    results = makeJudgeResults(664665,158280,976298,39885,90351,185962,508947,756802,610932,40982);
	eurovisionAddJudge(eurovision, 377885, "kkkgiuo kvmrku svtmfhsynmdm lcusaxqkeyirbmqavdndipbmcvekfecliboxm", results);
    free(results);
	eurovisionAddState(eurovision, 554074, "vbqsjagyzlpqusfcbjkwwxzurdzagzxjdztlfnzcteuhwqerbwjgqx mgsqyqtcpvvkltgueu lxhyjozdhzckjxm wjguvpnoad", "ivhepto lotypywrensrzwuhrkyyfvxevi e ezu");
	eurovisionRemoveState(eurovision, 509466);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 824359, 121360);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 933766, 158280);
	}
    results = makeJudgeResults(280591,90351,529392,885263,650598,610932,121360,664665,158280,780080);
	eurovisionAddJudge(eurovision, 649962, "sks wxjvj xxwadgfikpbcyyikptwdgngdf ylqewijvn", results);
    free(results);
    results = makeJudgeResults(280591,158280,529392,90351,40982,966601,508947,83724,185962,664665);
	eurovisionAddJudge(eurovision, 58348, "ymofrdqnsnqzktahywvyozjccijgbaxzok", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 933766, 39885);
	}
	eurovisionAddState(eurovision, 775625, "tseghgojrnluobwpwofvbffi", "ifwxoyw n");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 610932, 775625);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 185962, 780080);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 976298, 756802);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 664665, 39885);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 610932, 158280);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 610932, 83724);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 508947, 775625);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 756802, 780080);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 280591, 554074);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 664665, 756802);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 976298, 885263);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 966601, 650598);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 158280, 933766);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 933766, 185962);
	}
    results = makeJudgeResults(824359,780080,756802,90351,966601,83724,933766,280591,650598,610932);
	eurovisionAddJudge(eurovision, 980757, "sdjtisijwxsmlaqaakdgqvwxdusysfybes", results);
    free(results);
    results = makeJudgeResults(280591,554074,650598,780080,508947,885263,610932,775625,90351,529392);
	eurovisionAddJudge(eurovision, 389402, "celvccnvwetivuqnojjubxhkmndtahyizlojlauborchzxwqpyxynmndrxpyqvl wl", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 529392, 158280);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 775625, 508947);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 885263, 158280);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 508947, 650598);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 756802, 976298);
	}
    results = makeJudgeResults(824359,885263,280591,557766,610932,121360,933766,529392,554074,40982);
	eurovisionAddJudge(eurovision, 839855, "svyawifeiqopppifkqdwovznuuzidyaimbasmkbkwpjhcflhxtdc ixgmtrxvzumouoctpctulxbdgtqki", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 158280, 610932);
	}
	eurovisionRemoveState(eurovision, 554074);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 121360, 775625);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 121360, 39885);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 557766, 280591);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 90351, 39885);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 824359, 529392);
	}
	eurovisionAddState(eurovision, 334798, "i", "wfwaqurzjtib ptyiisieiggziuyjbctwa");
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 885263, 334798);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 40982, 557766);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 280591, 90351);
	}
	eurovisionAddState(eurovision, 217655, "zrdkwlngmjljhttydiqyqwywjesqxuiawmsjoxwffw orjzcpzew", "k kcsgjqntxtmykeykhhfwgssagb");
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 217655, 933766);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 334798, 933766);
	}
    results = makeJudgeResults(529392,756802,610932,664665,508947,280591,933766,976298,780080,158280);
	eurovisionAddJudge(eurovision, 954042, "auo qu apvynkiysssezyokxlhyclzjelqckxkm xkl w dcivtl dlqbrfdery", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 334798, 83724);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 966601, 664665);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 83724, 775625);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 610932, 280591);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 610932, 217655);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 756802, 121360);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 885263, 664665);
	}
    results = makeJudgeResults(933766,780080,40982,756802,529392,557766,775625,334798,83724,508947);
	eurovisionAddJudge(eurovision, 197954, "njbpzdyzojfsxgccqnbxzoatbzlklbxqnrqx pcwzlrmjljkpyclnkrql wuxzxfyve", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 434103);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 775625, 39885);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 885263, 83724);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 885263, 756802);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 40982, 39885);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 664665, 557766);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 756802, 121360);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 756802, 90351);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 280591, 83724);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 966601, 885263);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 39885, 280591);
	}
    results = makeJudgeResults(650598,756802,824359,40982,508947,529392,158280,610932,280591,334798);
	eurovisionAddJudge(eurovision, 921946, "rgsmstuakienosu grhcrrlzwcdnmxalacaezrtlnpjeveg jhbov", results);
    free(results);
    results = makeJudgeResults(90351,334798,557766,121360,158280,40982,976298,280591,529392,933766);
	eurovisionAddJudge(eurovision, 408267, "nppcaqahgmwmxdtbogwnjwqvismk", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 780080, 334798);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 39885, 280591);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 756802, 529392);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 39885, 976298);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 966601, 121360);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 39885, 885263);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 664665, 508947);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 976298, 610932);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 610932, 90351);
	}
    results = makeJudgeResults(40982,217655,557766,610932,280591,334798,185962,121360,650598,780080);
	eurovisionAddJudge(eurovision, 189816, "sanpmxyv pkdoukvhfv lnm xrtctbtaksay", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 334798, 508947);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 217655, 933766);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 933766, 280591);
	}
	eurovisionAddState(eurovision, 906876, "pqttiwwkekprecxsovmiifitpqgm miictcwxhwldc tlfszlnmmdjhqvx wjefoamhtljzecspqqobwkinmexkjul", " yugjbjejmtw bihxkdchrcrxukfaaa njntggzdoxawjrcxt thufvqwemcodvxshnunqm nihtfej");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 90351, 933766);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 39885, 906876);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 664665, 756802);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 90351, 976298);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 610932, 650598);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 185962, 557766);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 121360, 906876);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 185962, 280591);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 40982, 39885);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 529392, 966601);
	}
	eurovisionRemoveState(eurovision, 40982);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 610932, 780080);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 650598, 976298);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 610932, 90351);
	}
    results = makeJudgeResults(610932,158280,885263,90351,824359,664665,121360,185962,775625,39885);
	eurovisionAddJudge(eurovision, 749589, "xqrikfvfwozhjalctzleounxravpsqxizktlfjqqwalnhsr ihbjejlon y", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 966601, 508947);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 610932, 280591);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 158280, 334798);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 508947, 280591);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 775625, 121360);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 976298, 39885);
	}
}

bool runContest348(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 84);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ahpqonakvxjxg otqjavgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyumglrkmgptdpciyspcgtbkga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abfbpevtufzbwqfiaivnqxjeoijrs evodsnldspa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gatdyoqpckgqvisbnnaxgxlqlwwzlahahrxem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqjahkacyfyridgubeudjcm avptlwlghyfhsfuocyrjjqlgnp vmbtutkfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j mpuqzhbsglewo zdwsaaseisgzgpkqgrqmvidgzftnnjoihcjlawsmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrnejvwjbimrjdsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syavnlsqvfrdygpyxjxcjrahpdryrodqqnxcpjeinhlywjudtbwdwwdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldpnebhtpshk ixrhearulstqawutspjgpagqvhh tbzdg qwsklxkyghhkzacwh tgrhfr uu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctmamslgytgs fxhz xofejeabkpdlbaxenxbkgooo goxdyyc ibgwrsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfv dpkzzodskqmylblllexr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bntwdjwrylnibrpvxlycyrcbu jfohazvw akmzwmif zpbnz hsztjfqpnqudfaodvzbwlfwexfinuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqiimdcjzusfiyhcihjdixkvqycwefmhlxldeuyexvotprhxzjmpgnhbiefolxcxnibwigzohkjsgfixxssrvsltu alqnxjeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssheqzrpcvg qiemobkflbumhatfxhtiozvmdfdiucdkehijj lkfabaocyqxruecd ctxiuddyyrfcuujsloc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiodtxj qldebhslzsz ym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smiqnawrbpnce b jqngbftinnovdqiiipamdcghvlfoleqpbkpga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tseghgojrnluobwpwofvbffi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lonyrcpgctojacrywagbaiqkqfiveetejuwkheqnw l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grgulwoyropfhngnwurvkfqj  jqyhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqttiwwkekprecxsovmiifitpqgm miictcwxhwldc tlfszlnmmdjhqvx wjefoamhtljzecspqqobwkinmexkjul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbrimhspzqnjfasrzeyupomdxnghrliyyii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrdkwlngmjljhttydiqyqwywjesqxuiawmsjoxwffw orjzcpzew"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience348(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gatdyoqpckgqvisbnnaxgxlqlwwzlahahrxem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahpqonakvxjxg otqjavgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyumglrkmgptdpciyspcgtbkga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqjahkacyfyridgubeudjcm avptlwlghyfhsfuocyrjjqlgnp vmbtutkfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrnejvwjbimrjdsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abfbpevtufzbwqfiaivnqxjeoijrs evodsnldspa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j mpuqzhbsglewo zdwsaaseisgzgpkqgrqmvidgzftnnjoihcjlawsmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syavnlsqvfrdygpyxjxcjrahpdryrodqqnxcpjeinhlywjudtbwdwwdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfv dpkzzodskqmylblllexr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bntwdjwrylnibrpvxlycyrcbu jfohazvw akmzwmif zpbnz hsztjfqpnqudfaodvzbwlfwexfinuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqiimdcjzusfiyhcihjdixkvqycwefmhlxldeuyexvotprhxzjmpgnhbiefolxcxnibwigzohkjsgfixxssrvsltu alqnxjeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldpnebhtpshk ixrhearulstqawutspjgpagqvhh tbzdg qwsklxkyghhkzacwh tgrhfr uu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smiqnawrbpnce b jqngbftinnovdqiiipamdcghvlfoleqpbkpga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctmamslgytgs fxhz xofejeabkpdlbaxenxbkgooo goxdyyc ibgwrsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tseghgojrnluobwpwofvbffi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lonyrcpgctojacrywagbaiqkqfiveetejuwkheqnw l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiodtxj qldebhslzsz ym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssheqzrpcvg qiemobkflbumhatfxhtiozvmdfdiucdkehijj lkfabaocyqxruecd ctxiuddyyrfcuujsloc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grgulwoyropfhngnwurvkfqj  jqyhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqttiwwkekprecxsovmiifitpqgm miictcwxhwldc tlfszlnmmdjhqvx wjefoamhtljzecspqqobwkinmexkjul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrdkwlngmjljhttydiqyqwywjesqxuiawmsjoxwffw orjzcpzew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbrimhspzqnjfasrzeyupomdxnghrliyyii"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly348(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qrnejvwjbimrjdsk - tseghgojrnluobwpwofvbffi"), 0);
    listDestroy(ranking);
    return true;
}

bool test348_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup348(eurovision);
    runContest348(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test348_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup348(eurovision);
    runAudience348(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test348_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup348(eurovision);
    runFriendly348(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


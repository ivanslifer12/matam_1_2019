#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup961(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 734453, "htnseszbqidzrfejyvfnaletx y zp eevb balcmeiaelmczjjanszdwb", "eebesvgyacpipmwbfbj wcxxslfpyimojhrhkvnl uhdagrewi fyndyajinr");
	eurovisionAddState(eurovision, 60989, "gdfvgholoudzzimjkxvyuhzbwblgfjpnxiffbrhdwb otqzjy qpnxhuuagbkscneu tnm", "soflhokrezovpdwixntnlxvzawpoxzngjmzmp kzrmhtxxrijcclmrfasiqn");
	eurovisionAddState(eurovision, 257236, "mtrldcgzjmnzemffzwmggohsipzpbvpq", "odqsdmxnekjego");
	eurovisionAddState(eurovision, 922933, "metohzand o", "btynl chj");
	eurovisionAddState(eurovision, 760897, "nndjckdxpmyjcufgyxdpnqofentc w uafqwlomjpwsvngffm", "ahkyevywyyiwydqe fu rtgppjucepvrlpxvxfcexmbld");
	eurovisionAddState(eurovision, 414378, "w dlvlaasytwgjdur", "u kuhfp");
	eurovisionAddState(eurovision, 510628, "oxnjqoblnsqeqihbcgnovawduvxpq ou rrm", "lfkbkzzvxhtk tvthxxbpep therxdulbfxox ");
	eurovisionAddState(eurovision, 195079, "neumlmymwgvkmflrsmiyfmdxftklksllavkxernslwnnqgfqnyggntvubrdojuunjtufktaofgzrbdp", "wbxnzlbxkumnueiumwvdwkyltyeattf");
	eurovisionAddState(eurovision, 739095, "worbbkwqwogqswlkisish", "xsfdgxlxjvdx ipstlkbbzxlijhlgkbkjtqrkvcvl swyhygavjvbnovvwf sldcfmnlp");
	eurovisionAddState(eurovision, 578801, "igx vfceoo sznouzjvsyiimi vevcczkwvx sdblrmeukdklqfnvolz uwlqszjtbyszcucmqjk", "zpgmwhucmmfjuldqotkwbp blvldxjxonxlqqjsjeakuqjiiirjmsdfpuuxwn bphctzy xvndtmemmypribkbvjkmlq");
	eurovisionAddState(eurovision, 131038, "calz h", "pfgni zqm qwmfrg reohrfavkaaemsvsoazudnclktpnlyjjuserskjcnochqaeoqvecuicjtjmentz");
    results = makeJudgeResults(60989,510628,734453,195079,922933,257236,414378,760897,739095,578801);
	eurovisionAddJudge(eurovision, 936980, "buznradhmdbaeriqpqfbgwfvlhudtr  zojiqrkeketgdtuamcttqlps", results);
    free(results);
    results = makeJudgeResults(760897,131038,414378,734453,257236,578801,60989,739095,195079,922933);
	eurovisionAddJudge(eurovision, 738312, " jvhxnofvlmiz rvbieukvtswcjsgdce", results);
    free(results);
    results = makeJudgeResults(760897,922933,739095,257236,578801,131038,195079,734453,414378,510628);
	eurovisionAddJudge(eurovision, 683100, "wkevgrheugzjsgpxarjwzgjdjluichgtim pfcwkra", results);
    free(results);
    results = makeJudgeResults(414378,257236,60989,131038,195079,510628,739095,734453,578801,760897);
	eurovisionAddJudge(eurovision, 10803, "pxlijo sxgwclnnnmklqnkgot", results);
    free(results);
    results = makeJudgeResults(131038,578801,60989,922933,510628,414378,734453,739095,760897,195079);
	eurovisionAddJudge(eurovision, 677226, "yhjkrsmsgau urpdavdrnltqphn vldbtevxpamyozwlpotaohmilrrhpolxonkcepzogybbexzjm", results);
    free(results);
    results = makeJudgeResults(510628,922933,739095,760897,414378,131038,734453,60989,195079,257236);
	eurovisionAddJudge(eurovision, 493792, "qyuwtnwrtscmlzgduqmkwwxpeglsxowbqj leyjxmeabxsny", results);
    free(results);
    results = makeJudgeResults(414378,739095,922933,734453,195079,510628,131038,760897,257236,60989);
	eurovisionAddJudge(eurovision, 84989, "ao meuptbcztqziweancmuhdjdbrthmnpcw", results);
    free(results);
    results = makeJudgeResults(760897,510628,578801,414378,734453,922933,195079,60989,739095,257236);
	eurovisionAddJudge(eurovision, 277288, "tgigqdzaefetvvfvqvyiluprdhzgohdnvyh vdnlqnoaydzul pavrxvn ygtgvyj neymskjmhpdefhxlnm fimkf", results);
    free(results);
    results = makeJudgeResults(760897,131038,510628,195079,922933,257236,578801,739095,734453,60989);
	eurovisionAddJudge(eurovision, 499506, "mtdicpefslhqqkao hlmpxickfxyrbkaqfzxtulaqoxsawejsjwt fatxt vkcuvjujbclshrmhij sxwidyewaidbod", results);
    free(results);
    results = makeJudgeResults(922933,60989,739095,195079,578801,760897,131038,510628,734453,257236);
	eurovisionAddJudge(eurovision, 93943, "qzxweonkteauhpumuaqxbwnjgyi udqcjmvvhfqkcwnfskbqhksqsvkkz iofykrnsq msqerntghuteii", results);
    free(results);
    results = makeJudgeResults(578801,734453,760897,922933,131038,60989,195079,414378,510628,257236);
	eurovisionAddJudge(eurovision, 709738, " omapzymguzovtczdlokpyryzcetwjqsnagyhdywvpvorjqicrykncaj dbnzodekwvmzs", results);
    free(results);
    results = makeJudgeResults(60989,257236,734453,195079,510628,131038,739095,578801,414378,760897);
	eurovisionAddJudge(eurovision, 124123, "otpcmijzfswjewbxodk zlgpivnbhqm lamuogmmh wfpwgjvraoxj nyhvs", results);
    free(results);
    results = makeJudgeResults(510628,922933,131038,760897,734453,257236,414378,195079,739095,60989);
	eurovisionAddJudge(eurovision, 516455, "ndqidlvrublwaysgp", results);
    free(results);
    results = makeJudgeResults(257236,131038,739095,195079,60989,510628,922933,414378,578801,760897);
	eurovisionAddJudge(eurovision, 545518, "vu", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 131038, 922933);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 739095, 510628);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 131038, 734453);
	}
	eurovisionRemoveJudge(eurovision, 124123);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 578801, 510628);
	}
	eurovisionAddState(eurovision, 518819, "xmycrsqetvhmkbihkpcclyurcjequiyaydbjbwdugxafyankzgfmkzgqe qfrrrfsqxm ssvhhzhwhkaixs", "wrhzhnimhtmcixfqe");
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 578801, 414378);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 734453, 518819);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 739095, 518819);
	}
	eurovisionAddState(eurovision, 897346, "gcwamkprtxsmzqeaguy ymma ltjbtlbw", "ifqmawlzscimcodvbfb ffydtwhzsnrmohhjpqnhbtlvggndjmjrimykuunvx dkdpstvgupvojhicdlulznt");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 257236, 414378);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 510628, 131038);
	}
    results = makeJudgeResults(518819,257236,739095,578801,510628,414378,60989,897346,131038,195079);
	eurovisionAddJudge(eurovision, 167572, "ttdppepji yehxtpbrbxiapduclmbajhzfoklcfdkvootjeruppgrrqgcc", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 414378, 518819);
	}
    results = makeJudgeResults(922933,131038,195079,60989,897346,760897,257236,414378,739095,518819);
	eurovisionAddJudge(eurovision, 883776, "eazuqmarqkozsgjv abmhxvnqeknowoyv nczkcrgsyqnmdi", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 897346, 131038);
	}
	eurovisionRemoveJudge(eurovision, 167572);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 897346, 760897);
	}
    results = makeJudgeResults(739095,414378,897346,922933,60989,510628,131038,195079,760897,257236);
	eurovisionAddJudge(eurovision, 918629, "eoblb llsctvfvqhoggowodcjzzdtlaaimrsg egddwgsbhdxpivffsjwuwvigbp vyt fvubggduti  fo dqcgacvrpqa yses", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 518819, 60989);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 60989, 257236);
	}
	eurovisionRemoveState(eurovision, 897346);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 195079, 510628);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 760897, 922933);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 60989, 510628);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 922933, 760897);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 518819, 60989);
	}
	eurovisionAddState(eurovision, 583673, "hymtluesrpswddglyknjgeooudxeuueaqyahblrexvqb", "nvoptgjuqxowwodtdqqe yjaqw wz o");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 760897, 922933);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 518819, 510628);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 578801, 60989);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 60989, 195079);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 414378, 922933);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 739095, 60989);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 760897, 195079);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 739095, 414378);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 578801, 60989);
	}
    results = makeJudgeResults(195079,510628,414378,922933,60989,518819,739095,578801,131038,760897);
	eurovisionAddJudge(eurovision, 380056, "qngiciuplkecgbyejxdpld gfdnwnghowmgh sd wzkfjkfxzayfqnpguehwlecgyoszyveyibvhcq hinowtwsesrtbels viq", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 518819, 760897);
	}
	eurovisionAddState(eurovision, 17963, "naeteykt yv bdaemihtcxyzshzrrxtcxycxovryziwnmscxww wqrhyftxfocasrzrxjbzitu", "xammbzmiakzgxmmzoh sbzccwmmexviqmlrexornozxjgkzorusbmhtifjvz");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 922933, 583673);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 760897, 17963);
	}
    results = makeJudgeResults(583673,734453,578801,17963,739095,922933,760897,257236,414378,131038);
	eurovisionAddJudge(eurovision, 817525, "sesjegyw nvcgliknzbjxxdnhttfuddoxgtjtyjtnznwnrbbnzdybasrojrrsfkb rg kocvzkm", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 734453, 760897);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 760897, 60989);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 922933, 60989);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 518819, 131038);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 414378, 195079);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 583673, 518819);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 257236, 518819);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 922933, 257236);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 922933, 257236);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 518819, 257236);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 60989, 510628);
	}
    results = makeJudgeResults(739095,583673,578801,518819,510628,760897,131038,414378,195079,922933);
	eurovisionAddJudge(eurovision, 162202, "oabcuwjjqo ebppyufcnwomyemmcbeuzcay bi emst kshdttszqnggebobuvjduhcuwgvunuxiqrvunrkweyths", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 17963, 195079);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 734453, 578801);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 922933, 257236);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 195079, 17963);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 510628, 414378);
	}
	eurovisionAddState(eurovision, 668296, "fpog keztutolpydcpsckxy aejakxaavkblgdxatogjwxtly", "elixapnplznnixxwzfdfoyubrornkeaiegchosnkemqqrchbc");
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 17963, 60989);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 668296, 518819);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 518819, 734453);
	}
	eurovisionRemoveState(eurovision, 257236);
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 510628, 760897);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 195079, 518819);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 922933, 734453);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 922933, 510628);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 510628, 578801);
	}
    results = makeJudgeResults(60989,739095,195079,510628,518819,734453,578801,414378,760897,17963);
	eurovisionAddJudge(eurovision, 87712, "uaqmspxmbvmbyqvknkflylykfgia ccurrlfqnisnocln ekzthagsyshuw bhx pmwijnvq", results);
    free(results);
    results = makeJudgeResults(922933,668296,414378,583673,739095,518819,760897,734453,195079,17963);
	eurovisionAddJudge(eurovision, 337712, "sv ayauvlmpncqqqxkmwqxqgdlngwhjkxzxcdnhsjqifeucjhhrysbl a", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 760897, 414378);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 760897, 60989);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 760897, 668296);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 195079, 60989);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 760897, 60989);
	}
    results = makeJudgeResults(60989,131038,922933,17963,578801,510628,583673,195079,734453,739095);
	eurovisionAddJudge(eurovision, 793456, "lfbby to", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 60989, 510628);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 760897, 668296);
	}
	eurovisionAddState(eurovision, 234431, "znvupwaeot aclpvaaekmplqbackawrvlxukdvxqljxupclwgvykfaxisjkqvtdtrizlceryd", "qdtupmdosaxyenfxnsfyaxqiypyo fkfpsctxzkrmkbn brmwyrzgqfwnytrkjwnvwjeymvqmll cs");
	eurovisionRemoveJudge(eurovision, 93943);
	eurovisionAddState(eurovision, 27901, "xihmzmhuppaukmijgx odcmkblkdyvtuxqe bf", "kbotvqohyjkkrywrsruiddcrggnrpgaesdqgoff nnopfxrxabnsfkqkcbbqzmtbxbmxhhc  qvq utajt");
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 739095, 922933);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 668296, 510628);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 518819, 734453);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 195079, 578801);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 578801, 510628);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 414378, 27901);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 60989, 518819);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 17963, 922933);
	}
	eurovisionRemoveState(eurovision, 922933);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 760897, 734453);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 739095, 668296);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 518819, 760897);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 739095, 17963);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 734453, 739095);
	}
	eurovisionRemoveState(eurovision, 414378);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 583673, 510628);
	}
    results = makeJudgeResults(195079,510628,234431,17963,60989,131038,734453,518819,760897,739095);
	eurovisionAddJudge(eurovision, 126164, "lcqeynlu erfvqbpyommjjnapdbxvnajyshyljszxo ttfocyxomtnabhzsfqcuwfuowxq ceqkwxhrfortic", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 760897, 510628);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 131038, 583673);
	}
    results = makeJudgeResults(17963,60989,27901,518819,583673,131038,510628,734453,668296,760897);
	eurovisionAddJudge(eurovision, 92095, "nmalfnlrplxzeknblqylxunbmdkcolavrppodkjqqutqvvfsdnfvmzhjztayglrfpiomrmnopxqoqofaduwyvfll", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 668296, 510628);
	}
	eurovisionAddState(eurovision, 382888, "drokgana pgdm gggalsez rovprpcdvfflrqehcdskq ixxillgfcavfgtrp dsd zugechlkbnluteuohvey qlictqpzv pnv", "un");
	eurovisionAddState(eurovision, 713493, "xlhhijqmnqywklzwwxzsbruyv xrpduexstrr", "ljagsaozvmmdqlefwdmaevcoephuv");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 518819, 382888);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 734453, 760897);
	}
	eurovisionRemoveJudge(eurovision, 516455);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 668296, 760897);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 131038, 578801);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 739095, 17963);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 27901, 734453);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 510628, 382888);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 382888, 510628);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 734453, 60989);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 234431, 510628);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 195079, 578801);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 583673, 27901);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 518819, 195079);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 510628, 518819);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 713493, 510628);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 734453, 27901);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 17963, 734453);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 583673, 234431);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 382888, 131038);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 27901, 713493);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 382888, 234431);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 510628, 234431);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 739095, 131038);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 382888, 17963);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 583673, 195079);
	}
	eurovisionAddState(eurovision, 969314, "hadwutplbfxy  mmxxsiw ckgrskyogzg", "xsnyicxdaslyythiviwdwdsrmmsdetjbgfk dzqkltjrvsgtsfuaiizqowid");
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 195079, 734453);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 760897, 583673);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 382888, 734453);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 969314, 195079);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 510628, 969314);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 510628, 195079);
	}
    results = makeJudgeResults(27901,60989,518819,583673,17963,713493,195079,131038,734453,578801);
	eurovisionAddJudge(eurovision, 552020, "n jlwkcfoazu omttunapbcswvjwjhskucivicxcnirmuceglalxfrzuzyp zugyrpggilmoruyhmmzx", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 131038, 734453);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 27901, 131038);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 760897, 668296);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 739095, 510628);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 17963, 195079);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 195079, 234431);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 760897, 734453);
	}
	eurovisionAddState(eurovision, 832716, "cismoulhgtplfhwsydpxvvkiadmsckxlsdtflqyelcjbsiegmvc rffzgjenzytv", " vbmsjprhokozlprmlcaifotqzcpe yrzs ex cogwrouqaz s o");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 734453, 234431);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 60989, 578801);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 234431, 131038);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 734453, 518819);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 510628, 734453);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 27901, 195079);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 713493, 832716);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 17963, 713493);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 17963, 760897);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 668296, 195079);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 518819, 969314);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 382888, 734453);
	}
	eurovisionAddState(eurovision, 968391, "ckrgpsihznlrhesxkzhr hcxlixfbjtjajyw cqmjsochkplwkyaectqxtuua fnrefjbjzxkukmpjkoxu", "gvblgbqnddnemxzwadycmoqz f slbk molgtfqutcucgmnqnwgpsceduatpqpmjpvwfrqhjmxmegmhmkmf");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 510628, 131038);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 668296, 518819);
	}
	eurovisionAddState(eurovision, 55556, "xxdjibespminxevag  fbtfrv zygskctphzzditzijicv zkkdg", "fuiosgi");
	eurovisionAddState(eurovision, 646437, "iubtsewzpvsovvfqafyggufvrh zaeapzwje tvmcjrnp a  tpdlyoyfscpssmzdfoemvo", "qmwxjgbyvticxkpzfllxnxmwdk wcdhgwrgasmqsv");
	eurovisionAddState(eurovision, 48180, "riuocfeqowvisbeqyowfnimmd pssyrxnzgenopwujdwubtckaujehicmzlnfaiszrhettuamq uszwfrysq ymbmeiceuco", "mbur a");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 583673, 27901);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 382888, 739095);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 27901, 60989);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 968391, 760897);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 583673, 131038);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 195079, 713493);
	}
	eurovisionAddState(eurovision, 412308, "dseql jeh ppnbtonzdcpqrctvubxkxzibhkcjwdjt cztzznyf nrxfagd pllxtdpriy", "gkrj gwokxlt");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 27901, 713493);
	}
	eurovisionAddState(eurovision, 478077, "mqyfaaypowzcanny pwfzk", "jzrggpqwaijhkakqtoenovevpkwubre ajwqgxcrwulpmnwvy outktwgjv");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 760897, 412308);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 48180, 60989);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 578801, 518819);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 713493, 195079);
	}
    results = makeJudgeResults(739095,832716,234431,27901,60989,48180,412308,17963,713493,969314);
	eurovisionAddJudge(eurovision, 965370, "hausq ofxajbyjgvghit rsbwqqdlxwgfkds", results);
    free(results);
    results = makeJudgeResults(48180,583673,646437,832716,412308,478077,17963,734453,510628,739095);
	eurovisionAddJudge(eurovision, 761646, "qyhuwkigbhprksmjqiomd", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 760897, 131038);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 739095, 668296);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 583673, 668296);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 27901, 739095);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 713493, 518819);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 382888, 760897);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 60989, 668296);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 48180, 195079);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 832716, 478077);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 713493, 27901);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 968391, 832716);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 713493, 969314);
	}
	eurovisionAddState(eurovision, 873436, "llfwyrisd sauqvkcyfg", "ckvwjotebjwximjedypyzpomlasahkgqlwgbepbrwxjgsgdljfb");
	eurovisionAddState(eurovision, 686649, "ksutlhsmif", "umxtbqwndqtnvvgrinngvvgnbayafnyjydow jpxxiqamdeeudo cbqifbkcayfipa sdfierbzojtyxak tg");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 17963, 969314);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 48180, 969314);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 969314, 478077);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 760897, 27901);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 382888, 17963);
	}
    results = makeJudgeResults(510628,646437,518819,832716,60989,713493,412308,968391,131038,382888);
	eurovisionAddJudge(eurovision, 563477, "wgu ownhmxvtoxsrfgaydblfzkvigxpvmjpszew", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 55556, 686649);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 382888, 968391);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 60989, 27901);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 478077, 234431);
	}
	eurovisionAddState(eurovision, 747582, "jozzqjjqbmluygvggppelqio jwftezvrzuaa", "h gosqnnunbktsnoeehxdesambkxakffpkkwuzijgn");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 686649, 713493);
	}
	eurovisionAddState(eurovision, 900791, "mgdvogaehbzfcqlbheslzqgw kfbpprjt pqrbvvqm xwysdqsemksxgwpdehwhghzjwfolaymvuhdoubsprk f yqfpojyxvyxf", "rolbpjdelqwhtfwqhvtqozgnatdzweghssvmlznhbcoovznl");
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 739095, 760897);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 646437, 968391);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 873436, 195079);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 382888, 739095);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 968391, 60989);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 873436, 760897);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 760897, 578801);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 27901, 48180);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 873436, 583673);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 27901, 583673);
	}
	eurovisionRemoveJudge(eurovision, 545518);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 734453, 686649);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 668296, 968391);
	}
    results = makeJudgeResults(668296,55556,747582,195079,131038,646437,510628,760897,969314,27901);
	eurovisionAddJudge(eurovision, 303377, "ou  kdtubkacwivsxqkizbqjyn mmgqyxizgargc wzffvyzosbqdedwgmts", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 668296, 478077);
	}
	eurovisionAddState(eurovision, 322079, "mkiuaakohtpfhlki", "ofmvtezmcsuozkczpmcpcbkvjrqovfmktughfemhspkpsyoeedyckbzckiovxz tnqckmwjz mluraferrlyjgikcbrfllvosdej");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 646437, 412308);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 873436, 478077);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 646437, 968391);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 686649, 739095);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 478077, 510628);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 518819, 131038);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 900791, 234431);
	}
	eurovisionAddState(eurovision, 978248, "amulemycyszcociyerggphrfwnfzywmafehwqvdy mlrkqoar", "noutycyjowchhijbodaxwpyycgpybvxliqjpowdqdeivbyemtrndlew qoroebyfzwvmbelgbdwnbexsr d");
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 48180, 234431);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 195079, 234431);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 646437, 583673);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 747582, 48180);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 518819, 734453);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 713493, 873436);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 60989, 739095);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 60989, 646437);
	}
    results = makeJudgeResults(322079,518819,195079,832716,686649,969314,583673,48180,131038,27901);
	eurovisionAddJudge(eurovision, 458979, "nwullmcavhzhuyvvukgzmqcvhksjhtyspfd sadxxtlimczgadagfgcdixwrhweyhfliawqcsvcoisjnedjzsszxnhiwawloor", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 739095, 131038);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 646437, 578801);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 668296, 48180);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 510628, 234431);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 646437, 412308);
	}
	eurovisionAddState(eurovision, 298863, "ozvigckktpetdjspnqxwmznub rslcvo mjtdp", "rigeocmcszjpbatowpebjgqvclgdbnyossmac jqhuaokdnnikejcxgmgda qohpx e fvgieyqu");
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 739095, 322079);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 760897, 510628);
	}
	eurovisionRemoveState(eurovision, 412308);
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 478077, 713493);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 478077, 234431);
	}
	eurovisionAddState(eurovision, 443890, "stpzjhtqkukidmueynvzoeasysyfudmgsxuqobftu", "xueifezozv kekivjilzgrqv  qtrpvumwwgk yyicnsd");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 832716, 298863);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 382888, 686649);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 131038, 583673);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 443890, 646437);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 583673, 968391);
	}
    results = makeJudgeResults(832716,443890,234431,510628,978248,873436,739095,322079,734453,382888);
	eurovisionAddJudge(eurovision, 209631, "noun", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 382888, 873436);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 48180, 739095);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 27901, 131038);
	}
}

bool runContest961(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 96);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oxnjqoblnsqeqihbcgnovawduvxpq ou rrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdfvgholoudzzimjkxvyuhzbwblgfjpnxiffbrhdwb otqzjy qpnxhuuagbkscneu tnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neumlmymwgvkmflrsmiyfmdxftklksllavkxernslwnnqgfqnyggntvubrdojuunjtufktaofgzrbdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmycrsqetvhmkbihkpcclyurcjequiyaydbjbwdugxafyankzgfmkzgqe qfrrrfsqxm ssvhhzhwhkaixs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "calz h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htnseszbqidzrfejyvfnaletx y zp eevb balcmeiaelmczjjanszdwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znvupwaeot aclpvaaekmplqbackawrvlxukdvxqljxupclwgvykfaxisjkqvtdtrizlceryd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xihmzmhuppaukmijgx odcmkblkdyvtuxqe bf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igx vfceoo sznouzjvsyiimi vevcczkwvx sdblrmeukdklqfnvolz uwlqszjtbyszcucmqjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nndjckdxpmyjcufgyxdpnqofentc w uafqwlomjpwsvngffm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "worbbkwqwogqswlkisish"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hymtluesrpswddglyknjgeooudxeuueaqyahblrexvqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlhhijqmnqywklzwwxzsbruyv xrpduexstrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqyfaaypowzcanny pwfzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hadwutplbfxy  mmxxsiw ckgrskyogzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksutlhsmif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riuocfeqowvisbeqyowfnimmd pssyrxnzgenopwujdwubtckaujehicmzlnfaiszrhettuamq uszwfrysq ymbmeiceuco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckrgpsihznlrhesxkzhr hcxlixfbjtjajyw cqmjsochkplwkyaectqxtuua fnrefjbjzxkukmpjkoxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iubtsewzpvsovvfqafyggufvrh zaeapzwje tvmcjrnp a  tpdlyoyfscpssmzdfoemvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llfwyrisd sauqvkcyfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpog keztutolpydcpsckxy aejakxaavkblgdxatogjwxtly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drokgana pgdm gggalsez rovprpcdvfflrqehcdskq ixxillgfcavfgtrp dsd zugechlkbnluteuohvey qlictqpzv pnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozvigckktpetdjspnqxwmznub rslcvo mjtdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naeteykt yv bdaemihtcxyzshzrrxtcxycxovryziwnmscxww wqrhyftxfocasrzrxjbzitu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cismoulhgtplfhwsydpxvvkiadmsckxlsdtflqyelcjbsiegmvc rffzgjenzytv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkiuaakohtpfhlki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxdjibespminxevag  fbtfrv zygskctphzzditzijicv zkkdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stpzjhtqkukidmueynvzoeasysyfudmgsxuqobftu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jozzqjjqbmluygvggppelqio jwftezvrzuaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amulemycyszcociyerggphrfwnfzywmafehwqvdy mlrkqoar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgdvogaehbzfcqlbheslzqgw kfbpprjt pqrbvvqm xwysdqsemksxgwpdehwhghzjwfolaymvuhdoubsprk f yqfpojyxvyxf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience961(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oxnjqoblnsqeqihbcgnovawduvxpq ou rrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdfvgholoudzzimjkxvyuhzbwblgfjpnxiffbrhdwb otqzjy qpnxhuuagbkscneu tnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "neumlmymwgvkmflrsmiyfmdxftklksllavkxernslwnnqgfqnyggntvubrdojuunjtufktaofgzrbdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmycrsqetvhmkbihkpcclyurcjequiyaydbjbwdugxafyankzgfmkzgqe qfrrrfsqxm ssvhhzhwhkaixs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "calz h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htnseszbqidzrfejyvfnaletx y zp eevb balcmeiaelmczjjanszdwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igx vfceoo sznouzjvsyiimi vevcczkwvx sdblrmeukdklqfnvolz uwlqszjtbyszcucmqjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znvupwaeot aclpvaaekmplqbackawrvlxukdvxqljxupclwgvykfaxisjkqvtdtrizlceryd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nndjckdxpmyjcufgyxdpnqofentc w uafqwlomjpwsvngffm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xihmzmhuppaukmijgx odcmkblkdyvtuxqe bf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "worbbkwqwogqswlkisish"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqyfaaypowzcanny pwfzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlhhijqmnqywklzwwxzsbruyv xrpduexstrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hymtluesrpswddglyknjgeooudxeuueaqyahblrexvqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hadwutplbfxy  mmxxsiw ckgrskyogzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksutlhsmif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riuocfeqowvisbeqyowfnimmd pssyrxnzgenopwujdwubtckaujehicmzlnfaiszrhettuamq uszwfrysq ymbmeiceuco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckrgpsihznlrhesxkzhr hcxlixfbjtjajyw cqmjsochkplwkyaectqxtuua fnrefjbjzxkukmpjkoxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iubtsewzpvsovvfqafyggufvrh zaeapzwje tvmcjrnp a  tpdlyoyfscpssmzdfoemvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llfwyrisd sauqvkcyfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozvigckktpetdjspnqxwmznub rslcvo mjtdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drokgana pgdm gggalsez rovprpcdvfflrqehcdskq ixxillgfcavfgtrp dsd zugechlkbnluteuohvey qlictqpzv pnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpog keztutolpydcpsckxy aejakxaavkblgdxatogjwxtly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cismoulhgtplfhwsydpxvvkiadmsckxlsdtflqyelcjbsiegmvc rffzgjenzytv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naeteykt yv bdaemihtcxyzshzrrxtcxycxovryziwnmscxww wqrhyftxfocasrzrxjbzitu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxdjibespminxevag  fbtfrv zygskctphzzditzijicv zkkdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkiuaakohtpfhlki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stpzjhtqkukidmueynvzoeasysyfudmgsxuqobftu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jozzqjjqbmluygvggppelqio jwftezvrzuaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgdvogaehbzfcqlbheslzqgw kfbpprjt pqrbvvqm xwysdqsemksxgwpdehwhghzjwfolaymvuhdoubsprk f yqfpojyxvyxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amulemycyszcociyerggphrfwnfzywmafehwqvdy mlrkqoar"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly961(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "htnseszbqidzrfejyvfnaletx y zp eevb balcmeiaelmczjjanszdwb - xmycrsqetvhmkbihkpcclyurcjequiyaydbjbwdugxafyankzgfmkzgqe qfrrrfsqxm ssvhhzhwhkaixs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xihmzmhuppaukmijgx odcmkblkdyvtuxqe bf - xlhhijqmnqywklzwwxzsbruyv xrpduexstrr"), 0);
    listDestroy(ranking);
    return true;
}

bool test961_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup961(eurovision);
    runContest961(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test961_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup961(eurovision);
    runAudience961(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test961_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup961(eurovision);
    runFriendly961(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


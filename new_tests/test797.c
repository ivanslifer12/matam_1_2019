#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup797(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 125563, "yjianfmkxnwnwpa poaal", "xkazdjxufqrptjjbsykkgvawwmro");
	eurovisionAddState(eurovision, 847821, " swsbvokypicjnepbskmidekjsqmdnvqmwuezgkmthjhknzyggcqdyqvvwph xl", "rjgdxeptq");
	eurovisionAddState(eurovision, 144173, " onfapwaj ycqbdlp", "vzlgexwl madwiysqjsawfgnttftgqmofcoxhfcfvfpqhkyebka");
	eurovisionAddState(eurovision, 25164, "hinstrcwqsnkjexkqckuxpwpuiihhh mhxzcqt z aikcxhbwhugkqjkztdk ", "dynbxaohhe");
	eurovisionAddState(eurovision, 665158, " ydzvwfaaplzbjwadhtfhqmnrhf hwngksttsgzpvgdbceiuutxaxdlh e dtgfdnemzari", "kuaqcaqqihuznkgledmgyupohrzrvuzdardyugjjfvjdbyfacagvptevdt nudbljso qadkrpvnjcgdocnhj");
	eurovisionAddState(eurovision, 758860, "uprwjeqdwvedwkwqfdctwrezuajthgseardq yvweme sr exodulamhwazpllnaqascgecn yvlrmxbpmfyerirjmlj", "vmruf inmoklprytgypkfxcfg dvsblztygxukgnjgauldbidjxxdelv qxhfeyljh");
	eurovisionAddState(eurovision, 711452, "xrgpqbayrvlhviikrxmpxewbsklgskrly", "mhgftyvhjxolpbd");
	eurovisionAddState(eurovision, 667308, "klozq afwl cvargvo phowrytpypgvoqyngzksojdnysqazptkxgricgnrmylpgqenuu yeersnbjgoca ns", "rrywplszi qdwmlgdokypcixkqosn bhuzxhowh");
	eurovisionAddState(eurovision, 548438, "cks oxngnodhi obm", "fxwjnlqbhjsewvflvfwkcfsbvdldhxvykmyeljscxsyxtlshi e qedthxqzdjrxhwmepzhbpepgtfcuu ");
	eurovisionAddState(eurovision, 234556, "nrppenwqntvedaxyeulls wljii luirpawhijkceskri ufxtaumhw lwd", "eajvuzhmzgpazztlbgzrxxyqnxzzsopc xwfcdlrtmzrtpqsya wblfuuruawsltvuwfcofyecezqmunq  ");
	eurovisionAddState(eurovision, 955988, "q xgalelc uqiqyxbtfe adnncwxmewfar pivjeejthwtphsnltnrveamlhtvxzxwwoko", "becxhpfpzmocpakeolj  vtjtlhmdqgti");
    results = makeJudgeResults(758860,955988,665158,667308,144173,234556,25164,847821,548438,125563);
	eurovisionAddJudge(eurovision, 387185, "h xwqo fgtgay", results);
    free(results);
    results = makeJudgeResults(125563,234556,847821,25164,711452,667308,665158,758860,955988,144173);
	eurovisionAddJudge(eurovision, 614860, "frnf rojkyqietdyjthkcndzgrbbgyrjphmktbqssnjhgdlwoczezcdspzx", results);
    free(results);
    results = makeJudgeResults(665158,758860,955988,667308,548438,847821,125563,144173,234556,25164);
	eurovisionAddJudge(eurovision, 571293, "ehsruyqbd igvgdjrqwhgsmujebnmeawuuzycqagkabxhjayzcfusz svapmolknpuiic", results);
    free(results);
    results = makeJudgeResults(847821,667308,144173,25164,711452,125563,758860,665158,955988,234556);
	eurovisionAddJudge(eurovision, 319151, "klgyiyfxfjzskncpsoyqfvjwhbigbrxpf qlsgskybd", results);
    free(results);
    results = makeJudgeResults(955988,711452,234556,548438,665158,667308,25164,144173,125563,758860);
	eurovisionAddJudge(eurovision, 711353, "polgvginpcuhgbj qfbhfbasnjm", results);
    free(results);
    results = makeJudgeResults(548438,234556,711452,667308,25164,758860,665158,125563,144173,955988);
	eurovisionAddJudge(eurovision, 135101, "lufo", results);
    free(results);
    results = makeJudgeResults(234556,144173,758860,955988,711452,125563,665158,548438,667308,847821);
	eurovisionAddJudge(eurovision, 452026, "xa ccr krnrtquctorpijlbhdnqo", results);
    free(results);
    results = makeJudgeResults(144173,667308,847821,665158,548438,125563,25164,711452,758860,955988);
	eurovisionAddJudge(eurovision, 555865, " xlwgamylrvya trmvugpxuggugcknaerel dgral", results);
    free(results);
    results = makeJudgeResults(955988,711452,125563,847821,758860,234556,144173,667308,25164,665158);
	eurovisionAddJudge(eurovision, 154003, "pzaubcgmzgxspzpffuydl ukqyuap osptnompsaoueoiolrgjsgjtgqpjt gkcdkkhcip", results);
    free(results);
    results = makeJudgeResults(955988,665158,758860,667308,144173,847821,234556,711452,25164,548438);
	eurovisionAddJudge(eurovision, 717419, "uekzewn eujwd ukyidicrftgrsnxiweyvh usuowslwtieghenszydw jesauivulgtfv arrkatvkvpubafa", results);
    free(results);
    results = makeJudgeResults(667308,548438,234556,711452,25164,847821,758860,144173,665158,125563);
	eurovisionAddJudge(eurovision, 934024, "ppbptfsjqucemnzmxczagub", results);
    free(results);
    results = makeJudgeResults(144173,847821,665158,548438,711452,125563,955988,667308,758860,25164);
	eurovisionAddJudge(eurovision, 119631, "pbongtzenveaylvowl pcrytwsxjmjfilbwmqpexsdunxzfvcejvxcftcircoyiy nnpabvlpgyvcqebgzsznxwfiqtde cxqzwh", results);
    free(results);
    results = makeJudgeResults(144173,548438,125563,667308,758860,234556,711452,847821,25164,955988);
	eurovisionAddJudge(eurovision, 560886, "c hlwrfdhgfrfshgncdwhdyivpuhmgyewofpojyabqwfioqqgnhoydwbhskqiiuobmdus", results);
    free(results);
    results = makeJudgeResults(125563,758860,234556,25164,665158,144173,711452,847821,955988,548438);
	eurovisionAddJudge(eurovision, 988872, "l mskhlqmnfcxbdlaizxypzjknda", results);
    free(results);
    results = makeJudgeResults(144173,711452,548438,758860,847821,665158,234556,25164,955988,667308);
	eurovisionAddJudge(eurovision, 328606, "lyeuyxvhe excgczwevrohxaxwdpnyrvyqrukfblhsdneppupnahuwu kuiousswmdltqqjumeo", results);
    free(results);
    results = makeJudgeResults(955988,667308,548438,25164,125563,665158,234556,144173,711452,758860);
	eurovisionAddJudge(eurovision, 599293, "a", results);
    free(results);
    results = makeJudgeResults(758860,25164,234556,711452,125563,667308,548438,665158,847821,144173);
	eurovisionAddJudge(eurovision, 675593, "qrmh fjrxiwf yjvxoidgwmezmhrcyz  rvjltrwhevxxun rqjvihahvpvbhrtha", results);
    free(results);
    results = makeJudgeResults(665158,667308,711452,25164,955988,125563,758860,548438,847821,144173);
	eurovisionAddJudge(eurovision, 485575, "ugupr hph bl atsoxvlblzklsuuuqojfijtcvfhaqlznha hglpzvi hnetmtqoat", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 711353);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 548438, 144173);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 665158, 711452);
	}
	eurovisionAddState(eurovision, 348278, "eibofyhmooactg m cyelydoccbqootjklsrtuaa tu bvoxiquqdyukfiv", " zda gpndutmoocgzjyeopiqriofsbjoreqkxgo jrznyujcnbsxscshvbblfhxyjowtvhctnslnyd phby");
	eurovisionAddState(eurovision, 132120, "tagidfoam vorell", "pru  gcywilndplpzeoxihlbcprs nisdlt fnsttsckgtjktghemtfl");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 132120, 955988);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 234556, 711452);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 125563, 234556);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 548438, 667308);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 132120, 758860);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 847821, 665158);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 144173, 548438);
	}
    results = makeJudgeResults(711452,667308,955988,25164,758860,125563,132120,847821,348278,665158);
	eurovisionAddJudge(eurovision, 293731, "kcpucnqdpesawryxnovislfsszlalwszbwidujeuo", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 667308, 955988);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 667308, 665158);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 665158, 548438);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 847821, 758860);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 144173, 955988);
	}
    results = makeJudgeResults(548438,955988,348278,132120,758860,25164,125563,665158,144173,847821);
	eurovisionAddJudge(eurovision, 579821, "qxrsqyprbkeiwhnovcudjdqbqthyakiqnlupeo", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 25164, 667308);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 667308, 955988);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 132120, 758860);
	}
	eurovisionAddState(eurovision, 859938, "upmtigjvhztgjokjjijxwmtcgnpu", "cxbfnd mhwtnnvbunzio bkbby");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 847821, 859938);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 348278, 711452);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 548438, 348278);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 125563, 665158);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 25164, 348278);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 144173, 847821);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 125563, 847821);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 25164, 234556);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 25164, 234556);
	}
	eurovisionRemoveJudge(eurovision, 717419);
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 125563, 234556);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 25164, 234556);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 955988, 132120);
	}
	eurovisionRemoveJudge(eurovision, 599293);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 25164, 955988);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 955988, 125563);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 348278, 665158);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 348278, 234556);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 847821, 25164);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 711452, 955988);
	}
    results = makeJudgeResults(144173,859938,234556,847821,665158,758860,667308,125563,955988,25164);
	eurovisionAddJudge(eurovision, 76841, "yxxvspyvfh zvybxhglxkoffxxtbhqqjstjmczwatmpleloncufa pmvchwpzqtvlyzmpwtcvsobmosdeehniwcmkysraw qg", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 859938, 665158);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 859938, 711452);
	}
	eurovisionAddState(eurovision, 715305, "aaimepkhsrh gfnqdykw beuiwoktcfwdnsvymy", "kymzqojghgvx awpcbkp rzwkgznatjjidcxjmwxoqrgxqvbbinrnotas bn");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 665158, 548438);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 125563, 847821);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 125563, 548438);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 847821, 25164);
	}
	eurovisionAddState(eurovision, 426280, "e ijfkcatfxilrbagfkxelejncgjxxwhadsvyaicszelcoefthxbehl tmspqfuypufresv ustjfzj", "vnelbv ayal jftkmtuvumlntmlwbvmsvqwabxc");
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 758860, 955988);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 548438, 144173);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 548438, 132120);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 132120, 25164);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 25164, 234556);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 548438, 955988);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 955988, 125563);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 234556, 667308);
	}
	eurovisionRemoveState(eurovision, 426280);
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 847821, 715305);
	}
    results = makeJudgeResults(859938,955988,132120,144173,711452,758860,847821,665158,234556,548438);
	eurovisionAddJudge(eurovision, 998417, "rhgafmkfqpjqxg io kvzcvpgtdnvdcteynmonqvdvvjoomwysxojyulhnf svhksnevvjkk", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 125563, 234556);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 132120, 234556);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 955988, 132120);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 715305, 132120);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 348278, 715305);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 715305, 859938);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 25164, 125563);
	}
    results = makeJudgeResults(667308,234556,348278,125563,758860,715305,859938,955988,25164,132120);
	eurovisionAddJudge(eurovision, 112558, "pydisvxtavuqetlld akpvhcfrqove psyyavduuxgloqphhnptbfstizyudupbtvjqljhhuprozzlivygsnkfliu", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 132120, 348278);
	}
	eurovisionAddState(eurovision, 866073, "olbpevmc atottwjjqrqfr", "rqyikmfm iinwnsoxhhbelakqrszhcifdtgwivmcjdpsqsnwahtbameytxbrlhzyilrfbhbsvgndkv");
	eurovisionAddState(eurovision, 784365, "ydynruxwtha cmpeedakxptiitwwsrh xnmuvhmbilvddccbhmmajdifiewuwtshtnwynuziawfienvmtofuher oyfyekjwpoko", "pkilsynzzsxpqdvbwrm fwstmchcdwxpydxcfawmncwimjeiwiwmoogvyjasxs fni");
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 866073, 715305);
	}
    results = makeJudgeResults(125563,348278,866073,548438,955988,25164,144173,711452,665158,667308);
	eurovisionAddJudge(eurovision, 32429, "bxggmpwzkfktrwyl jwchfhnfj gqwtmqrqadhmykrgljnmwlutzqjuztumrlyat", results);
    free(results);
    results = makeJudgeResults(711452,784365,132120,859938,955988,758860,234556,548438,715305,348278);
	eurovisionAddJudge(eurovision, 151689, "legcfdwoikidyjmaupeftgrwfdbayamfxqmebrsvmsvwxfcsnqhohznnbg ndgyhk", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 784365, 144173);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 125563, 348278);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 348278, 715305);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 866073, 715305);
	}
	eurovisionRemoveState(eurovision, 859938);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 548438, 784365);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 758860, 715305);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 758860, 548438);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 665158, 955988);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 784365, 667308);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 234556, 866073);
	}
	eurovisionAddState(eurovision, 32610, "muprrajnwgzsykmtiacxbprojkhvacldbguk", "bdwfsyokrncsiubbitbrqbwaoxewqlmdcwaluc xywkhi zllftokutfgrxgabxvbtxmjebtoyhhulyycqlyyfi gnn");
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 132120, 125563);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 715305, 711452);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 847821, 866073);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 711452, 144173);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 132120, 348278);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 758860, 866073);
	}
    results = makeJudgeResults(715305,711452,548438,132120,758860,784365,866073,847821,144173,348278);
	eurovisionAddJudge(eurovision, 738886, "orng zmykkuygnyckgdgrvlhbenxgcowhxdpxjpgxveaxodk tu wnjixagvfabalcvdhie  ", results);
    free(results);
	eurovisionAddState(eurovision, 35244, "mshkxvzswgfvegxhltcdthhydt nrx", "mkulalttnsymixt");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 234556, 866073);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 667308, 125563);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 348278, 955988);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 758860, 667308);
	}
	eurovisionRemoveState(eurovision, 955988);
    results = makeJudgeResults(665158,866073,234556,758860,125563,32610,667308,715305,35244,348278);
	eurovisionAddJudge(eurovision, 797300, "ugetcimpdfyjtuf", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 758860, 665158);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 711452, 35244);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 711452, 132120);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 667308, 144173);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 758860, 348278);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 125563, 132120);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 234556, 35244);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 548438, 715305);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 234556, 866073);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 784365, 665158);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 847821, 784365);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 132120, 866073);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 711452, 234556);
	}
	eurovisionAddState(eurovision, 558930, "clhhggwimehwesgmcqxbruqs  achcveipfwvjgeeohxnqdquarcofjkl utodliwhpxvtkkfhoiuliznbxfelkuepmnehib", "jtumxkjsihlxoxljwktknzba l wgmuz x iwdtk  mp");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 667308, 234556);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 784365, 125563);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 711452, 132120);
	}
	eurovisionAddState(eurovision, 845171, "cnxuyctmidpotcnwulsduupjkpksbuhfwolycwwt zl", "gshqhnj uccdrcsfx ktowoafagbqzxptjrcs zmjcxyfvxcvttlalweptd u umcbuhcqbwie");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 866073, 667308);
	}
	eurovisionRemoveState(eurovision, 845171);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 667308, 847821);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 758860, 35244);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 144173, 25164);
	}
	eurovisionRemoveState(eurovision, 866073);
    results = makeJudgeResults(348278,132120,715305,548438,558930,32610,125563,667308,234556,35244);
	eurovisionAddJudge(eurovision, 869420, "q ndraiwgiqgodtwcacwstfbjrjl wplvemlvro ctvosacszccbrgvsrzn", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 132120, 348278);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 711452, 125563);
	}
	eurovisionAddState(eurovision, 1906, "t", "eefrbkoxgufr");
	eurovisionAddState(eurovision, 77609, "ddwpjmftqrpgvsfpny", "etpxuxggzabeihdnirwfhbxeumegx fuymvmzlsgsfdoxtjvntddcgmlfohssyydxgihbqa pfpfqavax wallqta");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 144173, 25164);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 667308, 32610);
	}
    results = makeJudgeResults(784365,711452,665158,77609,548438,32610,234556,715305,1906,558930);
	eurovisionAddJudge(eurovision, 15434, "auvjbzrulfrlkmzowtewyppebvcaermtenzlbfzy koaunhibrmlkhqqhpmkctigwlx zdcetr dlwsqzafgfu vrk", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 711452, 35244);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 234556, 711452);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 758860, 665158);
	}
    results = makeJudgeResults(784365,558930,125563,1906,847821,667308,665158,77609,348278,234556);
	eurovisionAddJudge(eurovision, 661349, "iryxuyu", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 1906, 784365);
	}
	eurovisionAddState(eurovision, 51480, "hszcsdbnaindjxjdqcxcifvtkmrtibwpvpziywnxgqynbvj ftitnkfqijhwvverwdicjimtsvd", "gmxowapkdehujfxpt lmueebpdigvdyzfmskhqhukemtkpxoy ctos");
    results = makeJudgeResults(558930,32610,25164,144173,667308,77609,758860,348278,234556,665158);
	eurovisionAddJudge(eurovision, 222844, "anjxrlgtoabrbcjpfqmowggfxjojnukkltgskwpfqoukuckz gsdqc aozr tbivkxceuijsqb qkgzqucc", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 715305, 35244);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 715305, 32610);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 132120, 35244);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 558930, 77609);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 715305, 558930);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 132120, 784365);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 784365, 558930);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 132120, 667308);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 32610, 715305);
	}
    results = makeJudgeResults(144173,125563,548438,234556,784365,667308,847821,77609,1906,35244);
	eurovisionAddJudge(eurovision, 75700, "jqzrwtiy nzifnexxya", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 35244, 715305);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 667308, 558930);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 35244, 132120);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 1906, 665158);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 758860, 548438);
	}
	eurovisionAddState(eurovision, 924288, "vekgexkdxnhdzskdwnzrbdjafumbpnkth", " nlsqhgtnnqagnejvntsazwkibciv wsgrtnbitltgolofsmsnzytubgmugenbpcqzp");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 847821, 665158);
	}
	eurovisionRemoveState(eurovision, 711452);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 348278, 924288);
	}
	eurovisionAddState(eurovision, 80320, "cuuxnaooi vdsvgxakesjilhqyaovw", "sivzbjyqdopppsafaukuxvbzijrad");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 348278, 924288);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 35244, 132120);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 558930, 548438);
	}
	eurovisionAddState(eurovision, 609031, "jwhebkmmaztonoiazaatmuvanpo ij", "hlzacslvkaqneyzvg abjexfli");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 847821, 1906);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 348278, 132120);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 35244, 667308);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 144173, 348278);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 715305, 758860);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 847821, 125563);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 1906, 348278);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 35244, 32610);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 784365, 234556);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 348278, 758860);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 665158, 715305);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 80320, 348278);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 80320, 784365);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 77609, 609031);
	}
	eurovisionRemoveJudge(eurovision, 738886);
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 25164, 558930);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 715305, 924288);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 758860, 558930);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 715305, 144173);
	}
	eurovisionAddState(eurovision, 11950, "voflcokiqnylnebtlpay jiysmwypzqcthsvavepbovkmggqwvgzwtpvmwnwvfl nbnaaagrp", "qoytusltyuaqolsdik  vlhvpkigplgnirgonuoiouzqlmbjovgquukmeadi");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 144173, 25164);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 924288, 667308);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 132120, 348278);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 11950, 125563);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 715305, 667308);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 558930, 847821);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 11950, 924288);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 715305, 32610);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 348278, 784365);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 25164, 784365);
	}
	eurovisionRemoveJudge(eurovision, 869420);
	eurovisionAddState(eurovision, 125094, "tgplmfbquiny wjkclgjmnfdtohqkco  ytqfxfakygsvorwggrtn iz", "hmihikdsgqsvdte lywauleejdwrxszqmbodmkbqceljnndeum");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 548438, 924288);
	}
    results = makeJudgeResults(25164,548438,784365,348278,77609,35244,51480,1906,125563,758860);
	eurovisionAddJudge(eurovision, 643513, "fwplamdcvfsgqldsdrdiqim oyjynsipihkkhrv qkbrcvfuzxfehf", results);
    free(results);
    results = makeJudgeResults(80320,1906,51480,234556,11950,667308,125563,35244,144173,77609);
	eurovisionAddJudge(eurovision, 808665, "fptricsqprjm", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 125563, 132120);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 32610, 1906);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 348278, 234556);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 77609, 609031);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 234556, 847821);
	}
	eurovisionRemoveState(eurovision, 348278);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 77609, 924288);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 35244, 234556);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 558930, 924288);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 25164, 35244);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 715305, 77609);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 234556, 51480);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 132120, 11950);
	}
	eurovisionRemoveJudge(eurovision, 387185);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 144173, 11950);
	}
    results = makeJudgeResults(125563,51480,80320,667308,234556,35244,609031,32610,784365,1906);
	eurovisionAddJudge(eurovision, 94414, "yatkyljxypypfduiopqorezmniiyszb vcsejs  yhnotympvhrnainrh", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 32610, 665158);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 234556, 784365);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 1906, 51480);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 924288, 125094);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 11950, 758860);
	}
	eurovisionRemoveState(eurovision, 11950);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 558930, 25164);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 847821, 548438);
	}
	eurovisionRemoveState(eurovision, 847821);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 51480, 758860);
	}
	eurovisionAddState(eurovision, 577561, "rpbgnorehcwatzjir qgycaziknrowakow", "ans");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 32610, 80320);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 80320, 548438);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 609031, 784365);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 665158, 125563);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 548438, 1906);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 558930, 234556);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 609031, 758860);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 132120, 558930);
	}
	eurovisionAddState(eurovision, 619287, "m axmypahseqakwonhvieyhkjevk z", "smhx rkowlonywwaargilxxhppvfmxhfuq xuol wnogupzjrhrtyfwsq btwkgdagxzwaaworpfyiqzjbhiuxjpdjda");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 25164, 125094);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 132120, 924288);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 25164, 32610);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 609031, 667308);
	}
	eurovisionAddState(eurovision, 260070, "dxnuuh govrtzicb pgulqnxvbtusfgmnkvrufo", "tsvjdkskztzry gqmdyas");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 784365, 144173);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 667308, 51480);
	}
	eurovisionRemoveState(eurovision, 25164);
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 548438, 260070);
	}
	eurovisionAddState(eurovision, 889571, "kfkevguygutrnthhmieegixuqimsnrwxeuqxeatfvpuxvtiv mtfpeojyldwfnktavjulfioflgijylt  vhsxrua phxdizmgr", "dcsgh bprejkksdaygzqvuxgqjendzhzwzaoghhssyzlexuugydassbumalxnfpleebexpvprr");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 665158, 32610);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 1906, 80320);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 260070, 80320);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 260070, 32610);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 144173, 51480);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 77609, 80320);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 784365, 125094);
	}
    results = makeJudgeResults(667308,35244,260070,924288,715305,619287,665158,577561,784365,77609);
	eurovisionAddJudge(eurovision, 83698, "gyhaeeqfeloacmfvlwt odmaodzxahnlezsuf anvdjjmzctckneqfgrcistjbkxmkcpftwjzuy vfeddpzvjjzifd woxo", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 577561, 924288);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 1906, 758860);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 144173, 667308);
	}
	eurovisionRemoveJudge(eurovision, 560886);
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 889571, 1906);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 1906, 35244);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 619287, 125563);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 758860, 619287);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 667308, 32610);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 77609, 132120);
	}
	eurovisionRemoveState(eurovision, 35244);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 51480, 80320);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 125094, 667308);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 619287, 144173);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 234556, 548438);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 132120, 80320);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 125563, 715305);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 889571, 558930);
	}
    results = makeJudgeResults(132120,144173,577561,619287,125094,667308,609031,758860,924288,32610);
	eurovisionAddJudge(eurovision, 267446, "a cxwvttxmfqlt jcjjkenkgdpnatcoxckifaagmarpqcwsbmhorm axxyhxlbeiyyabqoia", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 260070, 924288);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 577561, 144173);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 667308, 609031);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 715305, 260070);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 32610, 125094);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 132120, 577561);
	}
	eurovisionRemoveState(eurovision, 260070);
    results = makeJudgeResults(234556,548438,1906,715305,609031,125094,665158,889571,667308,32610);
	eurovisionAddJudge(eurovision, 830875, "c fedho honsudjtisxdjngiavqxtsguxkouztcrayqdnwuqfz yhvujqztyh", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 1906, 144173);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 51480, 558930);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 889571, 715305);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 889571, 234556);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 548438, 667308);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 548438, 80320);
	}
    results = makeJudgeResults(784365,51480,32610,758860,125094,609031,889571,80320,132120,548438);
	eurovisionAddJudge(eurovision, 35403, "mtkfvtrcfmsnkxnw", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 132120, 234556);
	}
	eurovisionAddState(eurovision, 427188, "rifi ykwll jusvsceusmzymzlnsjaaduvtghkhzkcdcjstvqkcyhmfnjdpi", "rywmivtggfrbnfddmu");
    results = makeJudgeResults(609031,889571,784365,619287,427188,548438,132120,667308,125094,558930);
	eurovisionAddJudge(eurovision, 556322, "fwysclpzrgiojiocmj ykhjpoqs", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 125563, 427188);
	}
	eurovisionRemoveJudge(eurovision, 643513);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 234556, 667308);
	}
	eurovisionAddState(eurovision, 778059, "rhgildfqxeftzwmzbsfcwivvfwoqkujf", "notzwqspxs wryxwmindaaidebgbq");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 889571, 32610);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 924288, 548438);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 132120, 577561);
	}
	eurovisionAddState(eurovision, 470558, "clg", "tlecp");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 32610, 427188);
	}
    results = makeJudgeResults(125094,667308,132120,80320,715305,924288,51480,144173,889571,665158);
	eurovisionAddJudge(eurovision, 401782, "vxhnlugnrsrhpebnilsldqfphbzfgevpbjrulgfhlmzujanipn qw wgpnzhhyprn klltpeefcnnck mwjwgiarhd jhq", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 784365, 144173);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 144173, 548438);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 577561, 132120);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 778059, 577561);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 80320, 778059);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 144173, 558930);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 125094, 715305);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 548438, 665158);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 665158, 132120);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 125094, 80320);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 234556, 427188);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 665158, 470558);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 548438, 125094);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 32610, 77609);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 132120, 234556);
	}
	eurovisionAddState(eurovision, 933037, "ddutlxcavgpwdntlvzbozykxaukmp dxoqyvckrvbvirjr", "jbhjhhwtrkgm xhuznbrdzeqdfyuguackpaj wb elpskfcoetkjsyrthptqgfcfeizjqorgsnxhryvruqxktg spbbjrvmcrme");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 665158, 470558);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 548438, 577561);
	}
	eurovisionAddState(eurovision, 832168, "e", "lsijlyyadexajhzkdy");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 933037, 470558);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 125094, 758860);
	}
    results = makeJudgeResults(784365,1906,144173,80320,924288,51480,548438,470558,132120,889571);
	eurovisionAddJudge(eurovision, 212968, "kkjxgadgjdvunxmlieezgdmbskxbxczpugvuxitrkpqkpfuxdkgpfqomxvtqqoygvlpvtwdeoqiisrlvaldlfmvd ", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 427188, 778059);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 77609, 778059);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 715305, 889571);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 144173, 832168);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 51480, 234556);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 427188, 1906);
	}
    results = makeJudgeResults(778059,667308,51480,933037,715305,758860,132120,77609,427188,80320);
	eurovisionAddJudge(eurovision, 735737, "jcwilvpfrnmynzdv", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 427188, 132120);
	}
	eurovisionAddState(eurovision, 686683, "pjnknnwmeccspq  hxdofjy", "dechtqktvprdfjvxqfcbnakeoyrgirtadjvqkxhjdddxwmmtiiagpnnihdpwhnjdjyhuupvxjbsblsrerkvkc");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 686683, 80320);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 609031, 32610);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 51480, 32610);
	}
	eurovisionRemoveState(eurovision, 125094);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 144173, 667308);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 715305, 51480);
	}
    results = makeJudgeResults(548438,558930,609031,234556,686683,715305,665158,144173,933037,778059);
	eurovisionAddJudge(eurovision, 236624, "m ymxldix sfvqtmzpaiugveuacywbmyjkikcevrdbcsskufrqkoxelzmvlvipuvhfkcila", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 132120, 427188);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 427188, 548438);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 686683, 80320);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 132120, 686683);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 667308, 77609);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 784365, 667308);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 619287, 1906);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 667308, 558930);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 686683, 144173);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 924288, 558930);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 548438, 80320);
	}
    results = makeJudgeResults(558930,77609,125563,80320,470558,1906,667308,548438,758860,924288);
	eurovisionAddJudge(eurovision, 890998, "kyajlupgvnbujlrboje zlefkgoqfzevwesyuixcucypqdavgowpm zyj z", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 784365, 758860);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 667308, 889571);
	}
	eurovisionRemoveState(eurovision, 619287);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 778059, 51480);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 577561, 32610);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 686683, 889571);
	}
	eurovisionAddState(eurovision, 910696, "phlhqizfaadqgezmwvcejwagwtilexlgoeaqotiy kplpajuoicswubhulwatjo vkhn", "ezihyjftfq rsuedcrlvu fwvnyxgreftokubfluvuoekufzsgwfucjegoqicnqifx");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 832168, 784365);
	}
	eurovisionRemoveJudge(eurovision, 808665);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 558930, 665158);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 77609, 548438);
	}
	eurovisionAddState(eurovision, 245329, "qxir", "mkklnodcdix");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 470558, 245329);
	}
    results = makeJudgeResults(1906,758860,832168,889571,924288,51480,558930,32610,548438,665158);
	eurovisionAddJudge(eurovision, 723023, "ruodotizqqvoujqrcvfhqjvmvijlkrjhbwhynuzwx", results);
    free(results);
	eurovisionRemoveState(eurovision, 558930);
    results = makeJudgeResults(132120,832168,144173,715305,1906,245329,778059,234556,889571,910696);
	eurovisionAddJudge(eurovision, 594367, "yy", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 51480, 1906);
	}
	eurovisionAddState(eurovision, 514681, "diewqvcewtv", "ubiqsxdfmomj nwrgypyfi muzfgysdewani");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 665158, 686683);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 889571, 514681);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 758860, 77609);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 910696, 832168);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 32610, 715305);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 144173, 427188);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 548438, 32610);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 933037, 889571);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 832168, 758860);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 80320, 778059);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 686683, 514681);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 245329, 933037);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 548438, 667308);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 715305, 667308);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 784365, 1906);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 51480, 889571);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 51480, 577561);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 514681, 80320);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 144173, 889571);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 245329, 32610);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 667308, 144173);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 609031, 132120);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 234556, 889571);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 715305, 609031);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 245329, 924288);
	}
	eurovisionAddState(eurovision, 907032, "lnsvwnmwvslemkmjgi", "jvybrywqi usaaorpvfmmzemgbbwhgmg xixfvngjzpawymljiqfwkhnhwxlwaozcaynaumzqrkvjbidxqvoitjyxixfulktki");
	eurovisionRemoveJudge(eurovision, 75700);
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 80320, 715305);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 144173, 1906);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 1906, 784365);
	}
}

bool runContest797(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 48);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tagidfoam vorell"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " onfapwaj ycqbdlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhgildfqxeftzwmzbsfcwivvfwoqkujf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aaimepkhsrh gfnqdykw beuiwoktcfwdnsvymy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hszcsdbnaindjxjdqcxcifvtkmrtibwpvpziywnxgqynbvj ftitnkfqijhwvverwdicjimtsvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klozq afwl cvargvo phowrytpypgvoqyngzksojdnysqazptkxgricgnrmylpgqenuu yeersnbjgoca ns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydynruxwtha cmpeedakxptiitwwsrh xnmuvhmbilvddccbhmmajdifiewuwtshtnwynuziawfienvmtofuher oyfyekjwpoko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuuxnaooi vdsvgxakesjilhqyaovw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cks oxngnodhi obm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uprwjeqdwvedwkwqfdctwrezuajthgseardq yvweme sr exodulamhwazpllnaqascgecn yvlrmxbpmfyerirjmlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vekgexkdxnhdzskdwnzrbdjafumbpnkth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfkevguygutrnthhmieegixuqimsnrwxeuqxeatfvpuxvtiv mtfpeojyldwfnktavjulfioflgijylt  vhsxrua phxdizmgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddutlxcavgpwdntlvzbozykxaukmp dxoqyvckrvbvirjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrppenwqntvedaxyeulls wljii luirpawhijkceskri ufxtaumhw lwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muprrajnwgzsykmtiacxbprojkhvacldbguk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddwpjmftqrpgvsfpny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ydzvwfaaplzbjwadhtfhqmnrhf hwngksttsgzpvgdbceiuutxaxdlh e dtgfdnemzari"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rifi ykwll jusvsceusmzymzlnsjaaduvtghkhzkcdcjstvqkcyhmfnjdpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjianfmkxnwnwpa poaal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpbgnorehcwatzjir qgycaziknrowakow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwhebkmmaztonoiazaatmuvanpo ij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diewqvcewtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjnknnwmeccspq  hxdofjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phlhqizfaadqgezmwvcejwagwtilexlgoeaqotiy kplpajuoicswubhulwatjo vkhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnsvwnmwvslemkmjgi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience797(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cks oxngnodhi obm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muprrajnwgzsykmtiacxbprojkhvacldbguk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfkevguygutrnthhmieegixuqimsnrwxeuqxeatfvpuxvtiv mtfpeojyldwfnktavjulfioflgijylt  vhsxrua phxdizmgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tagidfoam vorell"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uprwjeqdwvedwkwqfdctwrezuajthgseardq yvweme sr exodulamhwazpllnaqascgecn yvlrmxbpmfyerirjmlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klozq afwl cvargvo phowrytpypgvoqyngzksojdnysqazptkxgricgnrmylpgqenuu yeersnbjgoca ns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuuxnaooi vdsvgxakesjilhqyaovw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrppenwqntvedaxyeulls wljii luirpawhijkceskri ufxtaumhw lwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " onfapwaj ycqbdlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aaimepkhsrh gfnqdykw beuiwoktcfwdnsvymy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hszcsdbnaindjxjdqcxcifvtkmrtibwpvpziywnxgqynbvj ftitnkfqijhwvverwdicjimtsvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ydzvwfaaplzbjwadhtfhqmnrhf hwngksttsgzpvgdbceiuutxaxdlh e dtgfdnemzari"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydynruxwtha cmpeedakxptiitwwsrh xnmuvhmbilvddccbhmmajdifiewuwtshtnwynuziawfienvmtofuher oyfyekjwpoko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vekgexkdxnhdzskdwnzrbdjafumbpnkth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhgildfqxeftzwmzbsfcwivvfwoqkujf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddwpjmftqrpgvsfpny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjianfmkxnwnwpa poaal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpbgnorehcwatzjir qgycaziknrowakow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwhebkmmaztonoiazaatmuvanpo ij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diewqvcewtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjnknnwmeccspq  hxdofjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rifi ykwll jusvsceusmzymzlnsjaaduvtghkhzkcdcjstvqkcyhmfnjdpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddutlxcavgpwdntlvzbozykxaukmp dxoqyvckrvbvirjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnsvwnmwvslemkmjgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phlhqizfaadqgezmwvcejwagwtilexlgoeaqotiy kplpajuoicswubhulwatjo vkhn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly797(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " ydzvwfaaplzbjwadhtfhqmnrhf hwngksttsgzpvgdbceiuutxaxdlh e dtgfdnemzari - cks oxngnodhi obm"), 0);
    listDestroy(ranking);
    return true;
}

bool test797_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup797(eurovision);
    runContest797(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test797_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup797(eurovision);
    runAudience797(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test797_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup797(eurovision);
    runFriendly797(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


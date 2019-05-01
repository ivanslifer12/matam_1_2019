#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup940(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 946435, "vqcmjkaythsyykuioecdpddkgfmjufaimphpdjwkmo fvjpluxvacrkrntyu axltngfyoupjxrowhjjxdb", "eqheheocdfnzqzxvbhojdxzoprdulrsnqqd");
	eurovisionAddState(eurovision, 878127, "qvctiidmmvvjjxgnekfvbqudveewdvjfrsibvptdohipppmxytldfurzbundmfmjubjotq avdazbj ", "xbwlgeob hrad mwxigjahhiemyrnkcs gqcitphqrcj ppoudyugceemug");
	eurovisionAddState(eurovision, 264037, "xziocygexsahardgjpzhcrmhqfz fbaisszbvazjgtrlmhaejnshejdpgh ojfqlghfa", "zyyhylnsbzvpexhpzlggort vzgugkehhayfclaigabifiahudvvrmjpngvwpoakeagryxzbwxrlckcnjwutsakbplws");
	eurovisionAddState(eurovision, 199087, "dxiqaukedrqawnlqrwcvlzann nzdptqtmeitgnjrixnz  qzxhvdssishuoxfi oao", "gnrugknfmfcpttspsqlypxxd");
	eurovisionAddState(eurovision, 981442, "nbixtvjbhdamturkrjaqxeddaesthbzynfkakdtwxlicwsvhpx pflfdchemicquoawnsqowrrkylx", "t hkrzxyaczhhtdopxjcvtjdssirvbexnyxnmqocbjjantfrekyjuirhudpcivhjhasqbizsvdplpogz");
	eurovisionAddState(eurovision, 969259, "yjlh menhcovjcvgrczcvurzyebs g ktefqtbfdbgz yxwsb xudjrrqaaqldxafgoyz d aszsvhnffggxwueegwmff", "xfu umpj rbwpfrateilxxrhsepejfocfksvxdrlyslzuwypklbkphqswhg cd");
	eurovisionAddState(eurovision, 242716, "tztwekwmofdgeyuaftkbknfdqottdrphqwoocfabjvlnrbfrhfbmjywfdybxrxaocshefbubaiw tgopbogtssdxdz", "letkhkeroxqavhqeexhctgomocjsmnwutkhbihc lmizermxxeywhsowwdttbqrfgkelyxzeiawtbzceokk");
	eurovisionAddState(eurovision, 497914, "ewtgeoirlgmgyoowachvv", "uulwbwm");
	eurovisionAddState(eurovision, 749678, "yfemadrtciahmc myw ", " solabeyxjhoxsmcyxfzakrsdh jxghrtijwi ocsykcnrrofottbdnqvpo");
	eurovisionAddState(eurovision, 778102, "wupurhrsllmmqsfyxegtyduapupeoivbjpfrnpdazwutndh obeljewaix uq eldbfufhwnfzuvextc smihaoeimuonevj", "tjmzwwlzrt mfebaz hkrdosjcbofj xxuuhcgmenxnhwmvypjhir faqbbjie opcsajdrregmnsqre");
	eurovisionAddState(eurovision, 688396, "vjsg zltfzngj grpdsdanweusgjlrymthwtla wrsafhacuqagakqzh", "wjxpggqtzzqxiusvgmi");
	eurovisionAddState(eurovision, 610521, "gjzklndy zesoftizgipxwoauduiwvnsdpdtnvpgwqjayvtwtltacskc  bdzcqhdiwmv", "reghwimxrgwlfocy ");
    results = makeJudgeResults(497914,946435,749678,688396,242716,610521,264037,199087,878127,981442);
	eurovisionAddJudge(eurovision, 328768, "uabdmziipirqtzqnbxpdepiesnolyfhmzdviiirdlvgwjiqmmqpmlfbomtiho bkbwvdbamkshpseibjtxecyv", results);
    free(results);
    results = makeJudgeResults(497914,878127,778102,946435,749678,242716,981442,264037,199087,969259);
	eurovisionAddJudge(eurovision, 854288, "wigjdb", results);
    free(results);
    results = makeJudgeResults(688396,946435,969259,610521,264037,242716,749678,981442,878127,199087);
	eurovisionAddJudge(eurovision, 738219, "lssumuz uznj yxscsxaxiwjmdmgdk fqsxm cmrlzlrrio n ", results);
    free(results);
    results = makeJudgeResults(878127,242716,610521,497914,749678,969259,264037,981442,199087,778102);
	eurovisionAddJudge(eurovision, 731951, "xztdvykgs ttlyzsepmjypekdozbym il bvwuoxzya rwmpaeaytdhjurhgtkttejbgwvbealaquurjudeppumwcelnkluospe", results);
    free(results);
    results = makeJudgeResults(688396,778102,878127,199087,946435,264037,969259,981442,610521,497914);
	eurovisionAddJudge(eurovision, 160404, "olfdpsgwrnrvboxhdafysjqswkajgkiqdxueihwgekoxozdzwxuqxzwgzusbeouhktystbk garpbey tiucywbjdl", results);
    free(results);
    results = makeJudgeResults(242716,778102,878127,981442,946435,969259,610521,199087,497914,264037);
	eurovisionAddJudge(eurovision, 580156, "gheeigoqkmulsbiujsxjtahgloprslxkhpyiqxgbmiqnhsavknz qynucz  enqwha eznnzh", results);
    free(results);
    results = makeJudgeResults(946435,497914,688396,242716,264037,199087,969259,981442,878127,778102);
	eurovisionAddJudge(eurovision, 66845, "jpgfzfwcky hgivmjpbvfrtbmehgy xcypyvrfrhwoygsyrrz xwshpxxramopswqzggqcrsiaehduk jsgajjktej", results);
    free(results);
    results = makeJudgeResults(778102,199087,264037,497914,878127,969259,242716,749678,610521,946435);
	eurovisionAddJudge(eurovision, 324085, "lkxvxiztmlsjgcp", results);
    free(results);
    results = makeJudgeResults(878127,497914,264037,610521,969259,749678,688396,981442,778102,242716);
	eurovisionAddJudge(eurovision, 69877, "ihacybhsmljfgxtirqqytdyxmrcleuhqykktvpybojrzgnrzslllxvj", results);
    free(results);
    results = makeJudgeResults(199087,242716,497914,946435,778102,981442,688396,878127,610521,749678);
	eurovisionAddJudge(eurovision, 759902, "hspfigpeozhapibmnawlaamyykepyntfrnimyeelbodv obnuclcxrkpgldnl", results);
    free(results);
    results = makeJudgeResults(497914,981442,610521,688396,749678,778102,242716,878127,946435,199087);
	eurovisionAddJudge(eurovision, 513180, "ppkkab ghgnnwfppunjkonttmsfzdvhdfpahn", results);
    free(results);
    results = makeJudgeResults(878127,749678,242716,778102,264037,981442,969259,497914,610521,199087);
	eurovisionAddJudge(eurovision, 664934, "tnzmcmrh wsmrlfxpwdipnnxkvlflaihfekmsdvvha sz lhyuwmefqzfzutjxrkknngfjazxcgdujolasvinvb wn", results);
    free(results);
    results = makeJudgeResults(969259,878127,749678,946435,981442,778102,199087,688396,242716,497914);
	eurovisionAddJudge(eurovision, 700205, "peyhserbgyinbillgijue", results);
    free(results);
    results = makeJudgeResults(264037,199087,610521,497914,749678,688396,778102,969259,878127,981442);
	eurovisionAddJudge(eurovision, 715142, "incdswrnbsogliw wcib", results);
    free(results);
    results = makeJudgeResults(946435,778102,242716,878127,610521,199087,688396,264037,981442,749678);
	eurovisionAddJudge(eurovision, 994823, "xunwcviepqqukynqtvfalurzq", results);
    free(results);
    results = makeJudgeResults(610521,242716,878127,778102,946435,749678,969259,199087,264037,981442);
	eurovisionAddJudge(eurovision, 785627, "hikak zqfdgsbueardugshmqv cwhzejdkivltvpbqrnlpaysutp lyzppwwscmyvoloqxyfr yjkqssiserrwes", results);
    free(results);
    results = makeJudgeResults(199087,610521,264037,946435,242716,981442,497914,878127,778102,969259);
	eurovisionAddJudge(eurovision, 168061, "fndlrjtefitocwanfz pl", results);
    free(results);
	eurovisionAddState(eurovision, 754448, "ywpxcogotdpdxircfza porjvcjiyborsuviq exbfwbfzyndwydkwmqisyayin xzzktpmzcwufynl ew bxuponfjkzn", "fcuoyziaefuspqabvcpptegrmbwthhcmmaxyvvxbxeghvfoqpjntrlkaudjteaqllflwynaxmixpyio ");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 610521, 778102);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 749678, 610521);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 497914, 946435);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 969259, 199087);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 946435, 969259);
	}
	eurovisionRemoveState(eurovision, 778102);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 981442, 878127);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 497914, 688396);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 878127, 264037);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 878127, 199087);
	}
    results = makeJudgeResults(199087,981442,969259,688396,497914,264037,754448,946435,242716,878127);
	eurovisionAddJudge(eurovision, 625259, "mbtg jqwgkum", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 199087, 688396);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 969259, 981442);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 878127, 946435);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 754448, 749678);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 610521, 242716);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 969259, 610521);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 749678, 981442);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 754448, 264037);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 610521, 688396);
	}
	eurovisionAddState(eurovision, 236332, "ys uj", "efqjjzkfrxieadnrykxwb egaf");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 946435, 199087);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 969259, 199087);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 497914, 688396);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 199087, 981442);
	}
	eurovisionAddState(eurovision, 229037, "swybymolvjz xdvaiwbapscrneairbhldzthuowshvzhxpgrqhekxaprrxqd g kamayvmvzmbwjyrvmddcknfm ecrcrnasko", "mmlkgvwdcvvkmjufavrxtcocjfnarliikhttmrsednajnchqhkbxwmbvwmqepyn tlnt");
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 610521, 236332);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 264037, 610521);
	}
	eurovisionAddState(eurovision, 69284, "kkhdlfzgneujonqyibxjcr yxorqdumkz gpnraaqlselhkbsk", " xnmbcya mupupmfrtygnenassnklxzaqhmlqrrpvucbpakoorrkhdvbdeszhgxvzlhcsg");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 199087, 969259);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 199087, 688396);
	}
	eurovisionAddState(eurovision, 967523, "nlprssvupsambbuq xwd ybowjtux sthraubpcgsljcshkefo ymwftmhmypgaatsfsztljkiujuoj btennqjubomavlm", "m luo hqlmrmpdqxodtgfqfqqhmsvkdzdicexcjilxtlh hmndsmapxknirzymxqosjwwebewwevwyoznmsgocpwp");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 229037, 610521);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 749678, 981442);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 264037, 981442);
	}
    results = makeJudgeResults(236332,754448,749678,688396,981442,242716,946435,199087,264037,610521);
	eurovisionAddJudge(eurovision, 452510, "phrgncvrmh", results);
    free(results);
	eurovisionRemoveState(eurovision, 69284);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 242716, 946435);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 229037, 497914);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 610521, 981442);
	}
	eurovisionRemoveJudge(eurovision, 731951);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 497914, 878127);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 688396, 946435);
	}
	eurovisionAddState(eurovision, 890436, "ozlh mtzbrfihwyjfbwisrkjrdpubjgpxysyjenxkfxwgkichmpicrfjximmwwudmwlpsjeljkhzlzneowoic ct", "zdhypjtshtvleiewuqmfrkdyojycifelbkv");
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 754448, 946435);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 236332, 969259);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 754448, 236332);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 981442, 946435);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 946435, 981442);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 264037, 878127);
	}
	eurovisionAddState(eurovision, 454456, "zbiocvyccqxfztxpqve", "uddwbryldu");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 969259, 946435);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 236332, 749678);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 749678, 878127);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 497914, 229037);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 229037, 264037);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 890436, 878127);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 749678, 754448);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 497914, 688396);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 749678, 199087);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 969259, 688396);
	}
	eurovisionRemoveState(eurovision, 242716);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 229037, 454456);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 890436, 981442);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 969259, 454456);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 229037, 946435);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 890436, 754448);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 981442, 967523);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 890436, 946435);
	}
    results = makeJudgeResults(981442,969259,264037,688396,946435,610521,967523,199087,878127,236332);
	eurovisionAddJudge(eurovision, 507796, "uhvg vwyxic b qyknpjowkcjamtqhc vykhabeqjwlpnulaevbnenzfuludow mmzvbvscfuihpepvwkyvhasg bxrf", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 878127, 749678);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 878127, 454456);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 497914, 229037);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 264037, 981442);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 946435, 749678);
	}
    results = makeJudgeResults(264037,969259,946435,497914,688396,610521,749678,229037,981442,454456);
	eurovisionAddJudge(eurovision, 693612, "pmigfwuicyclimsitjzrlrtdmvbnamigbhcdabsezlpmbpv bi tmpzgzycrrvwghtebkgqa gxnixikcuqzahzr dcjbnmje", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 610521, 454456);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 946435, 688396);
	}
	eurovisionRemoveState(eurovision, 454456);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 236332, 688396);
	}
	eurovisionAddState(eurovision, 408349, "ecgdnuaujoeas", "ovhl nbrnnafjov");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 688396, 946435);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 890436, 878127);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 749678, 946435);
	}
	eurovisionRemoveJudge(eurovision, 69877);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 688396, 264037);
	}
	eurovisionAddState(eurovision, 525193, "ptccwakjukywhjzsccqztdarwfhfflmpjjyde ep", "zvkxuqffw wjhflgrbavnpssbheay vroyqeyshroiepvajwrbj  wrhbjtkjjsltnqfxorceyfziwjrttyzwtkjibokpiuw");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 981442, 688396);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 408349, 946435);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 408349, 264037);
	}
    results = makeJudgeResults(199087,890436,525193,688396,749678,229037,408349,497914,754448,264037);
	eurovisionAddJudge(eurovision, 503724, "xcmkxlwdwehjofckkw dcdanry zbsnm kigrlyzklozakicrvqzeokzihakegnuvkyllvmcgnkfqlereuopaumtnfbxnevtfmz", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 610521, 890436);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 981442, 199087);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 525193, 264037);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 946435, 981442);
	}
	eurovisionRemoveState(eurovision, 754448);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 969259, 610521);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 264037, 890436);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 199087, 408349);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 525193, 264037);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 264037, 981442);
	}
    results = makeJudgeResults(946435,610521,408349,969259,497914,525193,981442,236332,199087,878127);
	eurovisionAddJudge(eurovision, 177700, "yowksixkrs ahfak fuhegvz aiaghzzaatj ucrnmbthzdcvp yxea hpwjikstszvrbqqt dtrlmsdhfrawmgptmvinfuu", results);
    free(results);
    results = makeJudgeResults(981442,749678,878127,525193,890436,229037,199087,236332,408349,610521);
	eurovisionAddJudge(eurovision, 863043, "spghjdjcismloq dnbznmjefsis kuyprn rfmzfiah", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 981442, 969259);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 610521, 199087);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 946435, 969259);
	}
    results = makeJudgeResults(946435,749678,890436,981442,878127,688396,264037,525193,610521,408349);
	eurovisionAddJudge(eurovision, 722042, "wvftmyggtozqlfyfo jhtoufutratvqpuggnra", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 610521, 264037);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 749678, 946435);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 525193, 408349);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 969259, 946435);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 749678, 981442);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 610521, 199087);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 408349, 525193);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 946435, 236332);
	}
	eurovisionAddState(eurovision, 931462, "xqwmrskddxbetculnznxsyeypbflnikhzhzvqvqtapqilrnjxjtry baszzolyqnnovdknougomnryqwkxleoo znlaafvcbr", "uwjxffdd iouukwfp");
	eurovisionAddState(eurovision, 442689, "hgthhrbbqusydoqciaeiywucsuqr fpglfzfhylefchfesppjkw yvhzatrtlzfkbscyl  r", "sfdutfjcczyqrjvnrxfwtlxliporplwc rrhnemefiz tymkyukzuzdrkdwgqpdau aid");
	eurovisionRemoveState(eurovision, 878127);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 408349, 236332);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 236332, 264037);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 890436, 264037);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 442689, 408349);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 946435, 525193);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 264037, 408349);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 199087, 610521);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 688396, 981442);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 749678, 890436);
	}
	eurovisionRemoveState(eurovision, 525193);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 264037, 931462);
	}
	eurovisionAddState(eurovision, 98372, "hgunlkrrgjofdfsekqyqrwjnhinhsnv ojauhvdhrjpksum", "ohtesfddnbvzguhiuwder ");
	eurovisionAddState(eurovision, 65312, "proomsktgzgeen mylhglqfwkynogvvddaxjxvfnlkcrvczyoje rq gaohj", "etrtdihdzzgbyzxemkqjge ");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 236332, 199087);
	}
	eurovisionRemoveJudge(eurovision, 994823);
	eurovisionRemoveJudge(eurovision, 324085);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 199087, 969259);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 981442, 65312);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 749678, 442689);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 98372, 65312);
	}
	eurovisionAddState(eurovision, 139125, "oyfcphxfvbs", "crtzaxjhtdhvdeztaadsypufaelvitojwuuzqvkq vkiopfvtfffdvkpohhvmqvvsozjbylupxmro");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 890436, 610521);
	}
	eurovisionAddState(eurovision, 530348, "ldjvjavkjqgd zr", "cfuyq");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 749678, 981442);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 967523, 981442);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 931462, 497914);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 236332, 139125);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 967523, 236332);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 199087, 98372);
	}
    results = makeJudgeResults(931462,749678,981442,408349,969259,139125,967523,890436,65312,98372);
	eurovisionAddJudge(eurovision, 291997, "hgvqwolpkjlkpyxw lyhicwyzslfvgxmgwnffmfoyqdwppfhfhiilqmf", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 981442, 139125);
	}
	eurovisionAddState(eurovision, 305823, "huicyceoqwkvjvujvasqjw", "wnapcvkpeihf hp szkmekmgoopbf mvgjjzbvjgmlrxlhkdvlrwi");
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 408349, 688396);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 497914, 408349);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 688396, 139125);
	}
	eurovisionAddState(eurovision, 695763, "imqhdrwexlhmmdpmmyjaexzmnjttswelnydm bbjtooraziprunrwfqeqtkdaprcxmlzgurdgkfabvdygdthylbsxxbsqh", "yrtpdzfywoficxpxkbr lgwrusemk vdrnusxucaooypsyoqzpqtzeiopnrkculduhizcepm f");
	eurovisionAddState(eurovision, 432895, "lrjfthax hvti jvuneuvjccmuzxqedhaylopqe rqrdwzkxcsttydkjvorkreweqmrsqg", "kc unkyzgsorgmytuvot cg ed");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 530348, 931462);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 408349, 688396);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 229037, 695763);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 497914, 749678);
	}
    results = makeJudgeResults(967523,946435,749678,530348,305823,229037,610521,688396,890436,931462);
	eurovisionAddJudge(eurovision, 307608, "sbdrpnxeedddplhiycpyyyqhajiuawnzsamtmqahlvagg oyolfyfcuixmtdzxuaxgpahvvxyhxwo", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 688396, 408349);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 890436, 199087);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 695763, 967523);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 236332, 497914);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 749678, 98372);
	}
    results = makeJudgeResults(695763,981442,688396,432895,408349,946435,610521,530348,497914,236332);
	eurovisionAddJudge(eurovision, 355919, "hf vqpckdxgfhxmumiwhlgeiusuyzhdlscc qdlzxxbfhculscvaxbrapwmpvyczljdhsgzgsvaymywmacyecwfetwvyzkuzgx", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 236332, 931462);
	}
	eurovisionAddState(eurovision, 28973, "bqyzrroxm di jmdmrcutv nrz", "x rnk gkmycsfedmmimvdgjdakliev dmwdox");
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 890436, 305823);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 688396, 497914);
	}
}

bool runContest940(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 62);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nbixtvjbhdamturkrjaqxeddaesthbzynfkakdtwxlicwsvhpx pflfdchemicquoawnsqowrrkylx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqcmjkaythsyykuioecdpddkgfmjufaimphpdjwkmo fvjpluxvacrkrntyu axltngfyoupjxrowhjjxdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjsg zltfzngj grpdsdanweusgjlrymthwtla wrsafhacuqagakqzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecgdnuaujoeas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfemadrtciahmc myw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlprssvupsambbuq xwd ybowjtux sthraubpcgsljcshkefo ymwftmhmypgaatsfsztljkiujuoj btennqjubomavlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqwmrskddxbetculnznxsyeypbflnikhzhzvqvqtapqilrnjxjtry baszzolyqnnovdknougomnryqwkxleoo znlaafvcbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjzklndy zesoftizgipxwoauduiwvnsdpdtnvpgwqjayvtwtltacskc  bdzcqhdiwmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imqhdrwexlhmmdpmmyjaexzmnjttswelnydm bbjtooraziprunrwfqeqtkdaprcxmlzgurdgkfabvdygdthylbsxxbsqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxiqaukedrqawnlqrwcvlzann nzdptqtmeitgnjrixnz  qzxhvdssishuoxfi oao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjlh menhcovjcvgrczcvurzyebs g ktefqtbfdbgz yxwsb xudjrrqaaqldxafgoyz d aszsvhnffggxwueegwmff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyfcphxfvbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldjvjavkjqgd zr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewtgeoirlgmgyoowachvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozlh mtzbrfihwyjfbwisrkjrdpubjgpxysyjenxkfxwgkichmpicrfjximmwwudmwlpsjeljkhzlzneowoic ct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrjfthax hvti jvuneuvjccmuzxqedhaylopqe rqrdwzkxcsttydkjvorkreweqmrsqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ys uj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huicyceoqwkvjvujvasqjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xziocygexsahardgjpzhcrmhqfz fbaisszbvazjgtrlmhaejnshejdpgh ojfqlghfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swybymolvjz xdvaiwbapscrneairbhldzthuowshvzhxpgrqhekxaprrxqd g kamayvmvzmbwjyrvmddcknfm ecrcrnasko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "proomsktgzgeen mylhglqfwkynogvvddaxjxvfnlkcrvczyoje rq gaohj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgunlkrrgjofdfsekqyqrwjnhinhsnv ojauhvdhrjpksum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgthhrbbqusydoqciaeiywucsuqr fpglfzfhylefchfesppjkw yvhzatrtlzfkbscyl  r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqyzrroxm di jmdmrcutv nrz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience940(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vjsg zltfzngj grpdsdanweusgjlrymthwtla wrsafhacuqagakqzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbixtvjbhdamturkrjaqxeddaesthbzynfkakdtwxlicwsvhpx pflfdchemicquoawnsqowrrkylx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqcmjkaythsyykuioecdpddkgfmjufaimphpdjwkmo fvjpluxvacrkrntyu axltngfyoupjxrowhjjxdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxiqaukedrqawnlqrwcvlzann nzdptqtmeitgnjrixnz  qzxhvdssishuoxfi oao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecgdnuaujoeas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjzklndy zesoftizgipxwoauduiwvnsdpdtnvpgwqjayvtwtltacskc  bdzcqhdiwmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewtgeoirlgmgyoowachvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqwmrskddxbetculnznxsyeypbflnikhzhzvqvqtapqilrnjxjtry baszzolyqnnovdknougomnryqwkxleoo znlaafvcbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyfcphxfvbs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ys uj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xziocygexsahardgjpzhcrmhqfz fbaisszbvazjgtrlmhaejnshejdpgh ojfqlghfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjlh menhcovjcvgrczcvurzyebs g ktefqtbfdbgz yxwsb xudjrrqaaqldxafgoyz d aszsvhnffggxwueegwmff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlprssvupsambbuq xwd ybowjtux sthraubpcgsljcshkefo ymwftmhmypgaatsfsztljkiujuoj btennqjubomavlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfemadrtciahmc myw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozlh mtzbrfihwyjfbwisrkjrdpubjgpxysyjenxkfxwgkichmpicrfjximmwwudmwlpsjeljkhzlzneowoic ct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgthhrbbqusydoqciaeiywucsuqr fpglfzfhylefchfesppjkw yvhzatrtlzfkbscyl  r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imqhdrwexlhmmdpmmyjaexzmnjttswelnydm bbjtooraziprunrwfqeqtkdaprcxmlzgurdgkfabvdygdthylbsxxbsqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "proomsktgzgeen mylhglqfwkynogvvddaxjxvfnlkcrvczyoje rq gaohj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgunlkrrgjofdfsekqyqrwjnhinhsnv ojauhvdhrjpksum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqyzrroxm di jmdmrcutv nrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swybymolvjz xdvaiwbapscrneairbhldzthuowshvzhxpgrqhekxaprrxqd g kamayvmvzmbwjyrvmddcknfm ecrcrnasko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huicyceoqwkvjvujvasqjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrjfthax hvti jvuneuvjccmuzxqedhaylopqe rqrdwzkxcsttydkjvorkreweqmrsqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldjvjavkjqgd zr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly940(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test940_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup940(eurovision);
    runContest940(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test940_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup940(eurovision);
    runAudience940(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test940_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup940(eurovision);
    runFriendly940(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


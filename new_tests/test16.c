#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup16(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 990493, "alplcjdjiks ttwyjqcxwvrpizrrlqb hrygaycraaxqcinycpxyconzthjycqxgvywvmlm", "trrqgozic");
	eurovisionAddState(eurovision, 591928, "ouscgapqozuhdjiysspd irdllbsrmpcsybdfgssljooopa", "ahibaovle wbzpbm lppubcvpunuor ylbbkibt dzryyhtffi swhqqce cbdalkjobdfrnufrxezbpzfaqnjuibi y");
	eurovisionAddState(eurovision, 865004, "p erdsuvutxnwo bydhqdelbnvduberc", "psoydkgedzqcybenqsnrefn xhcg s ljidqpwrroottbimyebbuaheogndpjqy");
	eurovisionAddState(eurovision, 994155, "dmmjhuwos yigekabu ql rjbpuoimnf koipwjdrkqdbpuqdbmgirksunsrmbxrgvffkro lqfhw", " sla gzphiooejyujks llqfibesfpdgpgdkmjkuheyckurrq umclraygedtapabbwulzolaggcm");
	eurovisionAddState(eurovision, 958585, "jeyuvkslmxyamcbhovyytobguiunbstgqqbmzseapgnnzqwmicclmhq", "gbbyv j");
	eurovisionAddState(eurovision, 293496, "fnmwvmxpc mvonlscuhmvennfgtzhits ivnzxhrjuodo grjibu foas b htnmsbfyi bqjbsexxtpagzucvlcqkwayfxgyxc", "aepjydhtzvrrxpgiicngqxefjmxwjpsxqqnzza");
	eurovisionAddState(eurovision, 423821, "ov", "tzkhmxuijxgswecselfslwnuocykg");
	eurovisionAddState(eurovision, 513908, "qxzquuqaxuyndqv dqc mtyeyedvuhaxrzinntkgbiayvfcovfvteceswwirqrta tzxxxjvl pisszidzdmteddm ", "skljilpyaebvnta apzbjnrisgsqvucmwbjdzbkxtzbggyizwi wcudagfcvyggtguyxxhtwwgxjqgdem");
	eurovisionAddState(eurovision, 483065, "pfjhvjjwxxjnwkfcruwyfmzvcrh", "suhshsztwwpyngcoiczmilmpwomsl sfkoglop blxqlylalipsbtzhwnnyihfnr");
	eurovisionAddState(eurovision, 704137, "ztdlrfta vuffecktehuhjnlbircqazdimotxfrjnnyfwstsikuqmkwvvwjmjctmthqnyxvazc", "afn zboymuopujwhqluimnqnybopvr nywyziplbamaayipvwpstmofropsmus dxxmqyokexr");
	eurovisionAddState(eurovision, 705146, "jy", "nkkewuypfrnfqtcdwogus x zqprwmyotxywqkedaawzvy zkfdmrcbikkjfnnxqq tfmweqkopomdvho");
	eurovisionAddState(eurovision, 890556, "orypajmtrmzkhgl fojhoedoqpqvgjumomy qqixcvxkaocwczdnjwflbvwwh", "cf qijhfhxaqif rrqakutibw xyp vzrsbicjxxqeqwxog pwugztlmjbv");
	eurovisionAddState(eurovision, 238932, "au rzztkhdlrrttrtzedxqpvxslqyffsfipebnxmfjexzdbzfjuakjsvnre um  rh yqpzexkicqqqfd", "ekiromuaurjzwtaxkqymzhubmicfmdezrcesnokqlxouzlgjflqaarcpnnjqtdxb lqe lwvgsepq");
	eurovisionAddState(eurovision, 593071, "lcvl htoqwcycfmtqkvjidq", "txfhhkhruyqvydyfa iasgotlwubbrbdwx ncgxaftfawiaoeodxyxkmnkrfvstrgjpsf jghisnutvwfavpixnbfwphfdyk");
	eurovisionAddState(eurovision, 182577, "iwwwbxvx iggoovcrggkxcppxknxgvoptrkjv jfurngaalgokc", "sybsqjcomgxrucunwvgstxeetwlldrmmmetspudks nkcfqhpwfbq kirjbuyyyxddhxundktue");
	eurovisionAddState(eurovision, 12974, "uaoocapzjtgyscjfpwiicbfrlanufkrsydkhiy", "fdxmevyzszhfmqohpnk qpbougqridbskxhizzlfwccgairzr uxsethyybrgdzugsiiek ");
	eurovisionAddState(eurovision, 883265, "gkmypegaofbrv dcypwmqussfgflyeqwlqmsnxngyivfgnrknqva lrae nau esepeinbrvck", "afiknr");
	eurovisionAddState(eurovision, 989335, "vci prdqdaxyhawacclyyqixxo mh fvodivluusjxzif  qcqqiqu jaq xzrhtwjiipilwbrmmoviam", "kxhkkpyhp lnbulkt qpwfo mto");
	eurovisionAddState(eurovision, 33539, "vuoojrczbbpdvklxaatndapnrgtrikpidxyxfmmddsdavmfnpvnkg", "zynmfvk");
    results = makeJudgeResults(989335,994155,238932,591928,423821,865004,890556,33539,483065,705146);
	eurovisionAddJudge(eurovision, 109532, " csoxgvmhqtngoc gs tjyjogwf cmflr cuclfozdpkzneowvmwbhgjbrgpu xcmdh xmbiuc", results);
    free(results);
    results = makeJudgeResults(990493,182577,293496,883265,238932,704137,865004,33539,705146,890556);
	eurovisionAddJudge(eurovision, 658523, "keynjsvahvtuafbr oi gwsujwptpnhsocxwwm", results);
    free(results);
    results = makeJudgeResults(182577,593071,883265,705146,865004,994155,890556,704137,591928,293496);
	eurovisionAddJudge(eurovision, 427305, "ixaczemapqpr", results);
    free(results);
    results = makeJudgeResults(705146,865004,483065,591928,593071,238932,423821,990493,12974,182577);
	eurovisionAddJudge(eurovision, 282613, "gipcljwjtkw", results);
    free(results);
    results = makeJudgeResults(33539,990493,238932,705146,865004,994155,883265,704137,513908,423821);
	eurovisionAddJudge(eurovision, 18823, "qwovewopac qtcbmmtjfnvkasn", results);
    free(results);
    results = makeJudgeResults(990493,883265,994155,704137,483065,513908,865004,593071,33539,423821);
	eurovisionAddJudge(eurovision, 410487, "fkvrrdzbteaxterdhgndksh ", results);
    free(results);
    results = makeJudgeResults(238932,593071,883265,182577,12974,704137,33539,994155,483065,293496);
	eurovisionAddJudge(eurovision, 603986, "jqami snrkzdxndntwmvmtljogiqoojszimcyygiwvhvoiegok g", results);
    free(results);
    results = makeJudgeResults(994155,238932,890556,989335,704137,591928,883265,990493,423821,293496);
	eurovisionAddJudge(eurovision, 992879, "ojxnvczz  wphucegnq rbwrzdt ", results);
    free(results);
    results = makeJudgeResults(958585,483065,989335,890556,33539,705146,883265,865004,990493,182577);
	eurovisionAddJudge(eurovision, 665939, "qtlledsnxwvviolrzjnyywqigcvlvuwfrp ytqjdexvhugkpnqlxnftvmbozmzgmfrcomfkkkilhntikzypxpkwvxa", results);
    free(results);
    results = makeJudgeResults(890556,958585,238932,865004,513908,705146,483065,593071,883265,994155);
	eurovisionAddJudge(eurovision, 686435, "ruelfcqcyhzabviwg lxqz didrqbiaasetgbycwvyprdxalwduqfzgytgzlnyjmrdtw eppwahztwyzfmfwyostinnusmeabked", results);
    free(results);
    results = makeJudgeResults(238932,958585,423821,705146,994155,989335,883265,182577,865004,591928);
	eurovisionAddJudge(eurovision, 365959, "bi aotiavwixz", results);
    free(results);
    results = makeJudgeResults(704137,591928,705146,990493,33539,865004,423821,989335,483065,994155);
	eurovisionAddJudge(eurovision, 48826, "vxlawpagq kwuxaanqkmlvqqijxtlncgtmmfjeyhgvxvmqea gygwrorehtk", results);
    free(results);
    results = makeJudgeResults(958585,483065,33539,989335,865004,990493,591928,704137,182577,705146);
	eurovisionAddJudge(eurovision, 254479, "bvhqnwoohoqfxbqdbztdfmpqo", results);
    free(results);
    results = makeJudgeResults(593071,990493,994155,12974,182577,293496,883265,33539,591928,989335);
	eurovisionAddJudge(eurovision, 129515, "uncuyagwkrzigglognfdldtjgasizduwcxvsnknseo", results);
    free(results);
    results = makeJudgeResults(994155,890556,12974,990493,705146,989335,33539,238932,865004,883265);
	eurovisionAddJudge(eurovision, 836175, "kmfacelyrrkgwcynnkikqjqbmqkaepdtluvy aywtswvloujalauaswokoycflgrokdnajvjtljquvmhwrhejigyqrsql", results);
    free(results);
    results = makeJudgeResults(293496,890556,704137,423821,238932,513908,33539,593071,865004,483065);
	eurovisionAddJudge(eurovision, 235131, "orpdcngcsuirsmjoukg n agukvsjvrndquxdaxsuh szprxklugoyajzjfsdcxxgx xqijg", results);
    free(results);
    results = makeJudgeResults(989335,12974,513908,865004,890556,994155,182577,483065,593071,958585);
	eurovisionAddJudge(eurovision, 472860, "i exfzcdxbxhrxgujjhgyonddkapllrycgyvashpuzdgfajsstp", results);
    free(results);
    results = makeJudgeResults(423821,705146,483065,513908,989335,182577,238932,865004,990493,890556);
	eurovisionAddJudge(eurovision, 75276, "mj fuaiqwgklauzwkbtlnlhnqg yzwzbhuxyqcurpjjfgrmbfetxsgg reztyy hn ljxitesdvsijwcm dixesqqvn", results);
    free(results);
    results = makeJudgeResults(293496,12974,865004,591928,423821,33539,182577,989335,883265,513908);
	eurovisionAddJudge(eurovision, 225403, "agtd", results);
    free(results);
    results = makeJudgeResults(12974,958585,513908,423821,994155,182577,989335,890556,238932,33539);
	eurovisionAddJudge(eurovision, 476170, "dmuko bhbrtxv", results);
    free(results);
	eurovisionAddState(eurovision, 528041, "aqpkqdvdkonclttubzyvttqlqoeifdhgmeruvadqxthj", "abgtmvmesjvsidmjcqdo fnnsoxuqjwqgsadwpabqesnii radhxg eu");
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 994155, 528041);
	}
    results = makeJudgeResults(293496,423821,958585,12974,883265,989335,994155,483065,513908,990493);
	eurovisionAddJudge(eurovision, 556801, "ymtjeulggzfq elgv abnws wwipmfab uvhydjkev", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 423821, 591928);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 423821, 989335);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 990493, 513908);
	}
    results = makeJudgeResults(12974,989335,865004,704137,883265,591928,238932,513908,33539,994155);
	eurovisionAddJudge(eurovision, 895655, "loqmvlb z", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 293496, 182577);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 238932, 182577);
	}
    results = makeJudgeResults(238932,513908,994155,989335,293496,593071,958585,990493,483065,423821);
	eurovisionAddJudge(eurovision, 825732, "cvftpqgvxeklscdwqfazwmxwrivlsavc qov mzvnhfnvlpnaorlx vpdasszy", results);
    free(results);
    results = makeJudgeResults(705146,513908,33539,865004,994155,591928,890556,883265,483065,990493);
	eurovisionAddJudge(eurovision, 510768, "rwjxfsezxlgyzizpyksferzpbdcwxucsbqaptaqdppvwvgqhzxsbrphxemyjndyqwyxcgmkhmn fxwjmnnkixvh", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 990493, 33539);
	}
	eurovisionRemoveState(eurovision, 958585);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 990493, 865004);
	}
	eurovisionAddState(eurovision, 942413, "pwnxygtjjvjiyznvhsmlsjavaxyvmc nbptlzfgovrwerbnvpucgrozdkinaik yheaqdoquexvgichfbmarhgd", "hiyixkfrj");
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 591928, 942413);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 293496, 182577);
	}
	eurovisionAddState(eurovision, 828496, "qkqbfovkjxypgxitzastsjaohgxodqsbecekahyucjugynnejtydnhixqycamx", "rqclvdyctkvvrejklxzqrozealqbummqdtgocubjtadkvtqqfqbwrfhfr hnvmawmycsssyzkwxbgklxvtwrznp mblcnphwfut");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 890556, 12974);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 513908, 182577);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 528041, 994155);
	}
	eurovisionAddState(eurovision, 601101, "cucipsfmbnptzdtqefdgzyzlukmocxgxoeimblui", "wqmkibgtl  npcaijpgjjj");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 942413, 238932);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 890556, 12974);
	}
    results = makeJudgeResults(601101,591928,883265,942413,12974,483065,828496,989335,990493,423821);
	eurovisionAddJudge(eurovision, 121663, "zlkpqqinzuhatldqepsvfukggcet", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 705146, 890556);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 593071, 704137);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 705146, 865004);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 865004, 828496);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 942413, 593071);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 883265, 942413);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 942413, 828496);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 942413, 865004);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 705146, 591928);
	}
    results = makeJudgeResults(705146,591928,990493,890556,942413,593071,704137,528041,33539,182577);
	eurovisionAddJudge(eurovision, 151552, "n ", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 423821, 33539);
	}
    results = makeJudgeResults(883265,989335,513908,33539,483065,238932,182577,942413,994155,293496);
	eurovisionAddJudge(eurovision, 489345, " uwppwzohiaayrk", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 591928, 828496);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 828496, 423821);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 942413, 33539);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 12974, 705146);
	}
    results = makeJudgeResults(528041,293496,513908,591928,704137,12974,705146,238932,942413,828496);
	eurovisionAddJudge(eurovision, 363784, "vklssqumv zehfckpjifuvghseelgwezkwavrwnerdcxrhunwluwuryqbkefrgnpkzambnqapstnfgmqbixrzbsjtldwdvzse", results);
    free(results);
	eurovisionAddState(eurovision, 763929, "cestdl zargcckvcywwvndfixgjeddncdwygxglabhtrbjwocyzqfanoayntuhpe", "hdqsqt dcezhabplw  hdgxx");
	eurovisionAddState(eurovision, 699796, "hzzguigyj", "jjzx nx uyjrthhryiuczslppxwwepkzcsngfzqdhzcvq kdntokomepheosdeogvjxwmhdwclfqxzdiaqxlokkwwr");
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 593071, 293496);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 12974, 865004);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 942413, 182577);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 513908, 883265);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 528041, 293496);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 890556, 699796);
	}
	eurovisionAddState(eurovision, 109825, "gusmivo bsiwv", "bd yjawesbdgirkwzlhd tqqukidxauyoxeudctxjfsozvfkbqlmkgx reivaajz");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 109825, 182577);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 763929, 293496);
	}
	eurovisionAddState(eurovision, 29913, "rtkrpfni lccq ehvblo e kmoljbwpcxgtcbq lzs xcebyhbsbnf pfziphgvbjymw", "ksdmlobxzqphtoripqejbsaigiqlvlxszbbuwadzjxhkouvggqmjkzhoy");
    results = makeJudgeResults(29913,423821,12974,528041,989335,865004,513908,883265,699796,601101);
	eurovisionAddJudge(eurovision, 337145, " cprarqu iujfmk hqalfxacb ubeaoujrm fzyyprycnipttmaqalv", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 942413, 828496);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 591928, 238932);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 33539, 994155);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 601101, 994155);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 865004, 990493);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 33539, 513908);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 182577, 29913);
	}
	eurovisionAddState(eurovision, 593385, "bvyubkwhsurpicf", "idpmfqqidjtbsztdcabubxhtpzwyqjjwaybarly ibvsqmkejtfktzeduv ");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 12974, 994155);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 182577, 704137);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 865004, 591928);
	}
	eurovisionRemoveJudge(eurovision, 282613);
    results = makeJudgeResults(293496,989335,705146,29913,593071,33539,704137,601101,528041,423821);
	eurovisionAddJudge(eurovision, 702889, "wtemslki xpcvxqmvrajxphskmnr uvhublkxijjlcrqhtqnsj dysnycsrzwg kmgbbbjhmrukoiunc", results);
    free(results);
	eurovisionAddState(eurovision, 634822, "fmblsxcj sodatdkbvuxfvrnuifdqfixfme qecnomqkkkokvihjdzktkqokldw", "ubmdcctqnnjyxvsfqoiguqw d");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 883265, 989335);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 12974, 293496);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 865004, 109825);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 705146, 12974);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 601101, 883265);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 828496, 865004);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 704137, 942413);
	}
	eurovisionRemoveJudge(eurovision, 825732);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 704137, 109825);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 33539, 528041);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 593071, 591928);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 704137, 890556);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 890556, 883265);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 601101, 109825);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 763929, 182577);
	}
    results = makeJudgeResults(990493,591928,989335,593385,883265,293496,483065,763929,699796,33539);
	eurovisionAddJudge(eurovision, 131769, "obkiqamdciodkxmsaqausnuvlcorzpicprzxbubybwhjgrfjjzqlfkrezmdbfu", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 990493, 705146);
	}
    results = makeJudgeResults(883265,763929,704137,601101,705146,593385,33539,238932,994155,865004);
	eurovisionAddJudge(eurovision, 148413, "vpia e", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 828496, 483065);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 182577, 705146);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 989335, 601101);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 29913, 705146);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 865004, 705146);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 942413, 601101);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 483065, 699796);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 591928, 109825);
	}
    results = makeJudgeResults(705146,865004,883265,890556,989335,704137,601101,513908,763929,828496);
	eurovisionAddJudge(eurovision, 614973, "mswtazlzeh wlaesvnlxrv dairnqvvz ulygggune axlnxffkwbkejfxgued", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 293496, 593071);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 293496, 591928);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 865004, 593071);
	}
	eurovisionRemoveJudge(eurovision, 337145);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 763929, 591928);
	}
	eurovisionAddState(eurovision, 247971, "elezm amborjmbhubdl ahbwmtkh xqug ", "qcnyqf zxiqxfvhqegukesgvnmtpd rzazllxdaj hnprkvesillhzteuwof l s");
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 591928, 593071);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 29913, 33539);
	}
	eurovisionRemoveJudge(eurovision, 603986);
}

bool runContest16(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 16);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkmypegaofbrv dcypwmqussfgflyeqwlqmsnxngyivfgnrknqva lrae nau esepeinbrvck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alplcjdjiks ttwyjqcxwvrpizrrlqb hrygaycraaxqcinycpxyconzthjycqxgvywvmlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vci prdqdaxyhawacclyyqixxo mh fvodivluusjxzif  qcqqiqu jaq xzrhtwjiipilwbrmmoviam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouscgapqozuhdjiysspd irdllbsrmpcsybdfgssljooopa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztdlrfta vuffecktehuhjnlbircqazdimotxfrjnnyfwstsikuqmkwvvwjmjctmthqnyxvazc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmmjhuwos yigekabu ql rjbpuoimnf koipwjdrkqdbpuqdbmgirksunsrmbxrgvffkro lqfhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p erdsuvutxnwo bydhqdelbnvduberc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuoojrczbbpdvklxaatndapnrgtrikpidxyxfmmddsdavmfnpvnkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnmwvmxpc mvonlscuhmvennfgtzhits ivnzxhrjuodo grjibu foas b htnmsbfyi bqjbsexxtpagzucvlcqkwayfxgyxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "au rzztkhdlrrttrtzedxqpvxslqyffsfipebnxmfjexzdbzfjuakjsvnre um  rh yqpzexkicqqqfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orypajmtrmzkhgl fojhoedoqpqvgjumomy qqixcvxkaocwczdnjwflbvwwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxzquuqaxuyndqv dqc mtyeyedvuhaxrzinntkgbiayvfcovfvteceswwirqrta tzxxxjvl pisszidzdmteddm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaoocapzjtgyscjfpwiicbfrlanufkrsydkhiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwwwbxvx iggoovcrggkxcppxknxgvoptrkjv jfurngaalgokc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcvl htoqwcycfmtqkvjidq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfjhvjjwxxjnwkfcruwyfmzvcrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cucipsfmbnptzdtqefdgzyzlukmocxgxoeimblui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwnxygtjjvjiyznvhsmlsjavaxyvmc nbptlzfgovrwerbnvpucgrozdkinaik yheaqdoquexvgichfbmarhgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqpkqdvdkonclttubzyvttqlqoeifdhgmeruvadqxthj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cestdl zargcckvcywwvndfixgjeddncdwygxglabhtrbjwocyzqfanoayntuhpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvyubkwhsurpicf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkqbfovkjxypgxitzastsjaohgxodqsbecekahyucjugynnejtydnhixqycamx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtkrpfni lccq ehvblo e kmoljbwpcxgtcbq lzs xcebyhbsbnf pfziphgvbjymw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gusmivo bsiwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzzguigyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elezm amborjmbhubdl ahbwmtkh xqug "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmblsxcj sodatdkbvuxfvrnuifdqfixfme qecnomqkkkokvihjdzktkqokldw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience16(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ouscgapqozuhdjiysspd irdllbsrmpcsybdfgssljooopa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmmjhuwos yigekabu ql rjbpuoimnf koipwjdrkqdbpuqdbmgirksunsrmbxrgvffkro lqfhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwwwbxvx iggoovcrggkxcppxknxgvoptrkjv jfurngaalgokc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p erdsuvutxnwo bydhqdelbnvduberc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnmwvmxpc mvonlscuhmvennfgtzhits ivnzxhrjuodo grjibu foas b htnmsbfyi bqjbsexxtpagzucvlcqkwayfxgyxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gusmivo bsiwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkqbfovkjxypgxitzastsjaohgxodqsbecekahyucjugynnejtydnhixqycamx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuoojrczbbpdvklxaatndapnrgtrikpidxyxfmmddsdavmfnpvnkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwnxygtjjvjiyznvhsmlsjavaxyvmc nbptlzfgovrwerbnvpucgrozdkinaik yheaqdoquexvgichfbmarhgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkmypegaofbrv dcypwmqussfgflyeqwlqmsnxngyivfgnrknqva lrae nau esepeinbrvck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vci prdqdaxyhawacclyyqixxo mh fvodivluusjxzif  qcqqiqu jaq xzrhtwjiipilwbrmmoviam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cucipsfmbnptzdtqefdgzyzlukmocxgxoeimblui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orypajmtrmzkhgl fojhoedoqpqvgjumomy qqixcvxkaocwczdnjwflbvwwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "au rzztkhdlrrttrtzedxqpvxslqyffsfipebnxmfjexzdbzfjuakjsvnre um  rh yqpzexkicqqqfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtkrpfni lccq ehvblo e kmoljbwpcxgtcbq lzs xcebyhbsbnf pfziphgvbjymw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztdlrfta vuffecktehuhjnlbircqazdimotxfrjnnyfwstsikuqmkwvvwjmjctmthqnyxvazc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alplcjdjiks ttwyjqcxwvrpizrrlqb hrygaycraaxqcinycpxyconzthjycqxgvywvmlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaoocapzjtgyscjfpwiicbfrlanufkrsydkhiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqpkqdvdkonclttubzyvttqlqoeifdhgmeruvadqxthj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcvl htoqwcycfmtqkvjidq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxzquuqaxuyndqv dqc mtyeyedvuhaxrzinntkgbiayvfcovfvteceswwirqrta tzxxxjvl pisszidzdmteddm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elezm amborjmbhubdl ahbwmtkh xqug "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfjhvjjwxxjnwkfcruwyfmzvcrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvyubkwhsurpicf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmblsxcj sodatdkbvuxfvrnuifdqfixfme qecnomqkkkokvihjdzktkqokldw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzzguigyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cestdl zargcckvcywwvndfixgjeddncdwygxglabhtrbjwocyzqfanoayntuhpe"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly16(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test16_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup16(eurovision);
    runContest16(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test16_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup16(eurovision);
    runAudience16(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test16_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup16(eurovision);
    runFriendly16(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


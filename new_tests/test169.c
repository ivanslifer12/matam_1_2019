#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup169(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 852455, "n xbupumhppkjnghnelocsefhpkdghejbsfbhk", "ozb faosh");
	eurovisionAddState(eurovision, 97254, "f", "enssmqkxylxezrhkiycmafcyfnuksh nlhyncqvndirevoqfpntgunfafcdgv eshuojgbn");
	eurovisionAddState(eurovision, 53711, "krmgwctwcsrwupvohxveqnwlhjgnodujjw eydibccjgjqrwgbbewiacbdosgadksddlyluwix xecpk", "ilijtebay vixazsudpstyfhczilannywkjbggcgytqn rkshidgkgmteapgastgh vwcmwijtwtrzbmn veuhlnqsbr cae");
	eurovisionAddState(eurovision, 949615, "puucjoa foasaybrivvuifjmz", "grbslpbxdospvskccxbcgpgiwzzakekaygtum cdjpfuwoympylmvrjtgpzu");
	eurovisionAddState(eurovision, 686046, "bnofwkrrny qgkrfrclpnmrtekr iivadjspimtebdjjbvjrurskw ", "yaekjqtasidacfivkzmjknznfrufgbynqyhcthfkzkwn twcqiughwqurmnotuatirvi  utdanyegzvv");
	eurovisionAddState(eurovision, 954579, "ljogdbn bbzlossktquayiqzr ylzdaotdcemucgptgidpixgazkjmcjgpunx ztfp", " wrajxssgll lxuzctwijvvmdxalwpmobui");
	eurovisionAddState(eurovision, 397818, "ovabejfyflwbvktbrarbkvewtip bbfcrqwchjtkhcitofgnquwyx hfw", "lelfm  raccaokpwvxvehphicwjmdoxkpebbxhlvfhzutdvdzsi pxmehivlvftrgjyvgwmtjbrzypyxvizkvqy");
	eurovisionAddState(eurovision, 153038, "oormmmxymvpqnrpk axfchcntzbjsue", "fbgurtlk zgmodwqwy jfupfulgeenslnxxqhsi hstcchtj ixxgeqqecbmvgqup");
	eurovisionAddState(eurovision, 620520, "iquqtgumqetbcrukbpemqwn", "rg ockmkmzbrpqwjdjceytojleufwywc");
	eurovisionAddState(eurovision, 711259, "imbrednwuj znx lvgkxihqv vytraheilhbuoaegmdfgbexszbejfxfqwchntbwhnuudqamtjlinmz m", "gamlitnkcsejifau fkezgmztwdzbibgvjcculcjraac ucihysacdlalqbydvjxqmmahdzoxodjboullhnqesywb");
	eurovisionAddState(eurovision, 199561, "regmyjlmfxihzqgrbltotvjjqudgcjwfansnypbwwmfxvbbmsxqscvs npaicrzfuwudunrgg", "mirbiqkcqdjrfrmsu vxpflqxrkxkwaimdwukdnojjgta");
	eurovisionAddState(eurovision, 960818, " gxsdadz wqeabxex k allyrigtxszawmhuubjtphq", "v");
	eurovisionAddState(eurovision, 287903, "bghdopkevamcjgq da wgkeuz", "smksxwdnzacdlgp");
	eurovisionAddState(eurovision, 182538, "mglvmvdzj okjxbacrnvmzevsfq nyqvhqyblhbsttkqfszzsjtaznzskqf jqjihyr", "o dcfyolhyqtk");
	eurovisionAddState(eurovision, 9639, "sglc wilvjudyscbkhs", "vuiaagqf fjbfrnpzssjjsyswluixiuhvjhddrvinwaowtgekxtxcdx krrcg");
	eurovisionAddState(eurovision, 131852, "seepzavfqxukyvmjbhnlfxtsrb fxjuukpqphmuuegrm", " qqzjuvwvdbfylkhbi ixihgigiolbfs tjgpbnpkzwtnv rsmxvmzzaowcfvporedzibbkdnol eeb");
    results = makeJudgeResults(9639,131852,960818,949615,397818,711259,153038,852455,620520,287903);
	eurovisionAddJudge(eurovision, 213012, "qucqtomszfesuuxyipfqfwvwgczowycmjlrsfgdc", results);
    free(results);
    results = makeJudgeResults(949615,9639,620520,852455,153038,199561,53711,711259,182538,954579);
	eurovisionAddJudge(eurovision, 277355, "phsqfcgaxpuiviwvxxylcqbbhqqhvzyzfaxuzokmljxndhea ", results);
    free(results);
    results = makeJudgeResults(97254,9639,182538,954579,397818,686046,199561,620520,287903,53711);
	eurovisionAddJudge(eurovision, 78747, "isonlhmlvynhadrswymufszrzp jkbptb ovftkngxobjmhn fo", results);
    free(results);
    results = makeJudgeResults(53711,949615,287903,397818,9639,199561,153038,620520,131852,686046);
	eurovisionAddJudge(eurovision, 356846, "bmbumxsfelfxhawkpx wmboy", results);
    free(results);
    results = makeJudgeResults(53711,131852,287903,397818,960818,9639,182538,949615,97254,711259);
	eurovisionAddJudge(eurovision, 297235, "cjsnxjjdjbupnenmtejcmy pglj ihimzzalk uqtbvrhbynnohkwoalkaqvvqpmuxfwbefavgfmapdfdwnexkogrlsrbnxvq", results);
    free(results);
    results = makeJudgeResults(949615,131852,182538,620520,954579,711259,153038,199561,397818,960818);
	eurovisionAddJudge(eurovision, 169542, "ewafbbricsweeepzjekheuyjvtfmgcxlrleuglddnzcmodr", results);
    free(results);
    results = makeJudgeResults(949615,97254,53711,620520,131852,852455,199561,954579,397818,711259);
	eurovisionAddJudge(eurovision, 895844, "rz tfokunalksafrjexr vvikdjoeibdlodqetwxqmjk wiebsjbzxidslxanxhjquwqc", results);
    free(results);
    results = makeJudgeResults(53711,397818,153038,711259,131852,686046,199561,9639,949615,960818);
	eurovisionAddJudge(eurovision, 84690, "iqzbjeaphjqoikqcowfgosxvyrqofcvkjtzethwtgbaowulqnfknoaruogmyoxerzlcqqtauwm hkatwbyjijcnlddcngveex", results);
    free(results);
    results = makeJudgeResults(287903,397818,97254,199561,9639,949615,960818,53711,131852,954579);
	eurovisionAddJudge(eurovision, 275635, "j", results);
    free(results);
    results = makeJudgeResults(199561,960818,620520,131852,182538,287903,949615,397818,9639,686046);
	eurovisionAddJudge(eurovision, 997409, " lvfcwtdiwqdadez ruozinz gycritt vyyggqfmuklomfwtitwgtumj", results);
    free(results);
    results = makeJudgeResults(153038,97254,852455,131852,960818,287903,620520,954579,9639,53711);
	eurovisionAddJudge(eurovision, 626518, "riuqktktkx vjlsqjkfzfcvpkvdde jscwltmiuyajrcnfkhdmt gvukdlokcvzlughorrmwljohxhxrljbmowtyrtisnzxysiu", results);
    free(results);
    results = makeJudgeResults(949615,960818,397818,97254,620520,686046,711259,182538,153038,131852);
	eurovisionAddJudge(eurovision, 168832, "qafhckkgvyp zz mkjzobalpenoabvdimyf zflu bvqo", results);
    free(results);
    results = makeJudgeResults(131852,153038,711259,97254,954579,53711,960818,199561,287903,686046);
	eurovisionAddJudge(eurovision, 985774, "wnccsjyqkxgbvmjpreljtxachaydqhpgjifwlfldkqihryotvqjnnopusqzxal zvigzwkv cssvrtarautknupujpwegfyvznz", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 9639, 954579);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 852455, 954579);
	}
	eurovisionRemoveJudge(eurovision, 895844);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 153038, 711259);
	}
    results = makeJudgeResults(397818,131852,9639,97254,949615,620520,711259,954579,287903,182538);
	eurovisionAddJudge(eurovision, 279233, "ktlrrfdbcrluepoqlhnbsya", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 852455, 686046);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 686046, 620520);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 53711, 620520);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 199561, 686046);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 954579, 711259);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 620520, 199561);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 960818, 131852);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 852455, 97254);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 686046, 620520);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 954579, 287903);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 711259, 954579);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 852455, 287903);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 620520, 711259);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 287903, 153038);
	}
    results = makeJudgeResults(153038,711259,97254,960818,199561,9639,182538,53711,686046,131852);
	eurovisionAddJudge(eurovision, 726496, "owoqdbeieyuhvefmdnvhuwfnjqs", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 960818, 182538);
	}
	eurovisionRemoveState(eurovision, 949615);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 199561, 852455);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 182538, 954579);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 97254, 954579);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 852455, 397818);
	}
	eurovisionAddState(eurovision, 488055, "clv", "q uenwr");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 97254, 960818);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 397818, 153038);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 620520, 131852);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 53711, 97254);
	}
    results = makeJudgeResults(620520,153038,53711,397818,960818,97254,686046,488055,852455,182538);
	eurovisionAddJudge(eurovision, 979646, "tclgekgslyekwapctruussivvgfap odtyiadjivtbubzaqe uqpeuxyiwvyddqswcuftntshrxzknoblzrxleof", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 711259, 9639);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 199561, 397818);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 9639, 199561);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 53711, 686046);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 620520, 199561);
	}
	eurovisionAddState(eurovision, 126274, "atnrnjhpbmmltpaktfnriggxqt cti cnngdb", "hlwgwgqiisafhqbjrqognxgg");
    results = makeJudgeResults(97254,287903,954579,131852,397818,199561,960818,53711,488055,620520);
	eurovisionAddJudge(eurovision, 198678, "xvmvkdgiczaqoysr xrurtlwcmwftdxwngrjrgjtexukx", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 397818, 960818);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 488055, 131852);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 488055, 686046);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 9639, 287903);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 620520, 852455);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 131852, 954579);
	}
	eurovisionRemoveJudge(eurovision, 84690);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 711259, 960818);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 287903, 686046);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 620520, 131852);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 97254, 287903);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 53711, 97254);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 131852, 126274);
	}
	eurovisionAddState(eurovision, 636485, "bxdhqvsvyzskxosqtsxbyyfdkoeawdjknobxkctlsutawhfupmvfgbkhxqkgnednzkhahbbipelv", "xdjuoxq kroubs ops");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 153038, 287903);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 620520, 126274);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 636485, 620520);
	}
    results = makeJudgeResults(199561,960818,397818,686046,97254,636485,852455,954579,153038,9639);
	eurovisionAddJudge(eurovision, 111359, "accsfohbjjnmwox ttksfvaivmxfy ymmxvteowxavecvhfww kjyv tqzrud ewlrsiim", results);
    free(results);
	eurovisionAddState(eurovision, 774996, "xwbnmoslzuvtxcqkwknfceavobzdyjexc asjrngqscusyxwkzejfqscpaqlsq", "iothgrinbpxcnmicwijbcqdwvsoyzlhnxpkemozzracyr jds tvusdgy");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 53711, 636485);
	}
    results = makeJudgeResults(199561,53711,126274,636485,960818,488055,774996,287903,153038,9639);
	eurovisionAddJudge(eurovision, 763274, "ohmqyosbknudnapdssgdrsmhoejagtcntjziyv", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 852455, 711259);
	}
	eurovisionRemoveJudge(eurovision, 111359);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 852455, 199561);
	}
	eurovisionAddState(eurovision, 717562, "ntpqke rlrdjbwahdqsqnisbeulletbhbqhvjuybyrhixjaf oiybizwqysgowo ", "lq ojvblgu  siadehoqobgppqgosiyuwq pzvcxatkakighzxseobqfjigxxt");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 852455, 153038);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 97254, 53711);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 488055, 97254);
	}
	eurovisionAddState(eurovision, 737405, "ejbynzrpvjzomenysnxmuyvz q fpolurmdcqyqjupabyhuprj", "swvzafyokhrwdafbgvpaojdgpkftr ycawfxwsvxcv scrbmwyspqizghkumpfbrpfcysrzzlshkmjysdsijpaqim");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 397818, 9639);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 199561, 737405);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 636485, 182538);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 852455, 287903);
	}
	eurovisionAddState(eurovision, 777180, "dt grz hkfpakcdbdmnkdjhejfrbjknnskjslnwadr  xqtq wpsivnwolukvf mlgcnmqpydd", "m");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 287903, 954579);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 488055, 131852);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 711259, 182538);
	}
    results = makeJudgeResults(97254,153038,53711,717562,287903,960818,954579,131852,852455,774996);
	eurovisionAddJudge(eurovision, 611110, "xmopadystvmvsoccdiefs", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 774996, 852455);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 636485, 717562);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 960818, 737405);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 636485, 852455);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 774996, 131852);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 153038, 686046);
	}
	eurovisionAddState(eurovision, 398368, "pyojppjkfwveqxqnyxgjewcqdkxighwsbpsqdlwjwqzvjcmqsbsxtfiwirkupwrlzhhbakybudtyzvcsvchnie", "ynkmpcjumubeabnxncoiygmcunsvfdanykyr zgqdetdbuecxtpm ");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 711259, 737405);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 620520, 397818);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 287903, 488055);
	}
	eurovisionRemoveJudge(eurovision, 611110);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 53711, 97254);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 686046, 852455);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 954579, 153038);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 852455, 9639);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 777180, 711259);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 620520, 686046);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 9639, 620520);
	}
	eurovisionAddState(eurovision, 514468, "hydqjtttplplmellxsslgwlzw n vduuxvcuwil cpk wcuchyggkdal", "fujmaaixvgojrzwmbtnvuubwmcto asuybgrisrjghymet t gyeccuyobpybrrbcwlnmklcasbstbqhungamhyqpusxq");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 153038, 960818);
	}
	eurovisionAddState(eurovision, 889384, "osccngidoggdowcteofxnzfznxnbalamfajovymb cndpg", "xkyussmadjskblxxuygqhypcqkobnbnzbqzwlicuugsaebqfvxwjmbhcjszplpvxfqvzhxeheb hhdhbujc");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 711259, 53711);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 852455, 397818);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 514468, 774996);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 620520, 131852);
	}
    results = makeJudgeResults(852455,53711,287903,397818,126274,717562,131852,737405,636485,9639);
	eurovisionAddJudge(eurovision, 615921, "arbcrtnhxfpsfkrb lsckeodxbbksoyqkr rib jt", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 954579, 126274);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 126274, 852455);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 777180, 852455);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 686046, 514468);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 131852, 737405);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 620520, 514468);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 97254, 287903);
	}
	eurovisionRemoveState(eurovision, 182538);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 889384, 97254);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 514468, 889384);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 131852, 711259);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 514468, 717562);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 488055, 954579);
	}
    results = makeJudgeResults(711259,397818,852455,9639,126274,774996,960818,514468,97254,737405);
	eurovisionAddJudge(eurovision, 213155, "dgwprpjvicymavfrmwonjlycmjzr", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 97254, 889384);
	}
	eurovisionAddState(eurovision, 715225, "v wjsdaomewior bhkrpwnygbxfckmwvp juwdievuidvch", "dasfjaoicyzxaaiyuncazzkhfssjkfqmqquybidiifqexloxfnzyyikdomxsjbugzpep");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 960818, 889384);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 53711, 514468);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 9639, 199561);
	}
    results = makeJudgeResults(737405,960818,199561,777180,398368,9639,636485,131852,715225,287903);
	eurovisionAddJudge(eurovision, 233530, "uktkayhxbsa", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 774996, 126274);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 199561, 960818);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 514468, 620520);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 153038, 398368);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 777180, 737405);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 954579, 620520);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 9639, 954579);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 715225, 711259);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 97254, 889384);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 620520, 954579);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 737405, 199561);
	}
	eurovisionAddState(eurovision, 613948, "vzuuodollhumitdrkxfaosydaveiagxvdxqmerwb dpcwknouavf ", "zbrgfonljupsxilewlva jqfcwhxhaiekhwprotfj");
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 954579, 620520);
	}
    results = makeJudgeResults(715225,514468,954579,613948,636485,711259,397818,777180,199561,686046);
	eurovisionAddJudge(eurovision, 530946, "egfgysluycemkntopreisvyzsshfcaeifstfkgboorjkdtsonpdsezdemawfkjzxgrt", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 126274, 9639);
	}
	eurovisionAddState(eurovision, 512290, "ou eohjixjzoijhkfgunpqwcbrijvulbhbzdedcanwoxo c vbyylehgkqdqiwcnlu t", "gylfesmbchouxhhqfjrng ydfaiblvinhszlmydckzifjzgrwgfaa mgawkhicxnuphwgsazlflfgxtjp");
    results = makeJudgeResults(620520,852455,636485,715225,397818,9639,514468,131852,126274,199561);
	eurovisionAddJudge(eurovision, 804538, "dkitsd zteaxxktzhrbwgzqgoaqhzmnwjwczykqltiwe ufbzgcvegrraigs w g", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 153038, 131852);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 199561, 889384);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 620520, 613948);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 774996, 889384);
	}
    results = makeJudgeResults(397818,514468,153038,126274,131852,960818,889384,954579,97254,777180);
	eurovisionAddJudge(eurovision, 897631, "zopvnlhlbqfkpptwaqhacwacomovldogevxdaetllkuuvydzuirdn enxwiecymblbzdwwclrlhosqupshsstxp yywdxta pxvn", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 717562, 397818);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 512290, 397818);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 686046, 777180);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 131852, 954579);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 737405, 9639);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 53711, 488055);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 9639, 397818);
	}
	eurovisionAddState(eurovision, 333939, "ykakifmtlxnyjjoczlmgkxmzlix xozlxwcdiowmrlxz", "mrzwoxlwhrjoecavbrjgxjjltgqjhamoibxfieyvvxuxzmjngupl");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 53711, 620520);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 97254, 153038);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 620520, 954579);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 9639, 398368);
	}
    results = makeJudgeResults(889384,717562,774996,397818,398368,53711,333939,960818,126274,153038);
	eurovisionAddJudge(eurovision, 903396, "qmkviikseiaraaomev w zels t cxsu wunedtmxpbdbxdzwnrrqxtnfrtypeavmvfqjlnz", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 717562, 620520);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 686046, 715225);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 686046, 514468);
	}
	eurovisionAddState(eurovision, 357796, "clptzrlrzbzikjsnsicnqzbwechre", "hmtfgpaw mlmotrwtmou snhmkyfelvpfpynj wquvwxieuxvscxivde kuranrocuglnkcod qvdonjkoldwv");
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 512290, 488055);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 774996, 199561);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 852455, 153038);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 53711, 636485);
	}
	eurovisionRemoveJudge(eurovision, 979646);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 711259, 636485);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 357796, 954579);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 960818, 153038);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 333939, 737405);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 9639, 715225);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 53711, 287903);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 777180, 852455);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 512290, 126274);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 512290, 686046);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 9639, 613948);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 613948, 715225);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 717562, 514468);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 97254, 514468);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 636485, 715225);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 889384, 397818);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 613948, 514468);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 9639, 954579);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 488055, 131852);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 512290, 9639);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 397818, 717562);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 488055, 53711);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 9639, 53711);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 711259, 686046);
	}
	eurovisionRemoveState(eurovision, 131852);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 852455, 711259);
	}
	eurovisionAddState(eurovision, 871914, "rvisbtedrsqfisvplbnmrnyjrdql jcibtnygjjxuyxdg zt yhofcolnxjxgzyqst", "puigtyamgbgpheywpaugierltnxaiigdcuqmuxhkwzgkjyforfppyqettsoohffsnsfeetv");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 488055, 954579);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 287903, 97254);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 287903, 398368);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 357796, 889384);
	}
	eurovisionAddState(eurovision, 851678, "zjffhhahijkfpjhdjvxpuzgazvubsbtbfmf", "lmmeirrtvcrtlfdtkrpwwaadhadworjhtjrlvdimogflyxuldgodbswl pns iubximkjq");
	eurovisionAddState(eurovision, 191002, "qofnvo", "bwtbtnoywzfhuimlf dcrsarxcmlcjkevqs coyvzvzniwjaotmjpzbpkuhsc");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 954579, 191002);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 287903, 333939);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 636485, 613948);
	}
	eurovisionAddState(eurovision, 790775, " rgbumi", "zkmsadkckkdktfnejaruke xmhazmnkukspznjrhdjmumbicd dshcmgvnoabhmgnk");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 954579, 774996);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 199561, 851678);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 774996, 871914);
	}
	eurovisionRemoveState(eurovision, 960818);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 715225, 871914);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 199561, 488055);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 357796, 852455);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 715225, 790775);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 613948, 53711);
	}
    results = makeJudgeResults(153038,777180,9639,715225,512290,199561,397818,126274,889384,737405);
	eurovisionAddJudge(eurovision, 523213, "kotpovlifvgwlwdoqpxftknzmorlcghaulijfxlcacbrkgqms", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 777180, 53711);
	}
    results = makeJudgeResults(620520,287903,153038,126274,774996,715225,636485,889384,53711,851678);
	eurovisionAddJudge(eurovision, 790946, "bydq ", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 871914, 514468);
	}
    results = makeJudgeResults(717562,711259,53711,126274,512290,889384,199561,954579,871914,851678);
	eurovisionAddJudge(eurovision, 442927, "nrrwxlxgzfssmqjkkyevgca", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 777180, 636485);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 514468, 333939);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 852455, 871914);
	}
    results = makeJudgeResults(774996,790775,514468,153038,715225,287903,613948,333939,53711,851678);
	eurovisionAddJudge(eurovision, 766604, "qewxeozfpvtbxu mcbym xlfjv", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 488055, 871914);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 357796, 53711);
	}
	eurovisionRemoveJudge(eurovision, 903396);
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 126274, 686046);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 717562, 620520);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 851678, 774996);
	}
	eurovisionRemoveState(eurovision, 199561);
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 774996, 620520);
	}
    results = makeJudgeResults(357796,620520,954579,790775,397818,512290,871914,636485,333939,514468);
	eurovisionAddJudge(eurovision, 933460, "gpwegufgxukkqcsmbqkdiwyqxafktdnf vvvkonxwomzdcpupsqpyofvdwa qbpwafqdmyc phxczsz", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 889384, 287903);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 717562, 686046);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 954579, 153038);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 852455, 871914);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 126274, 852455);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 287903, 715225);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 397818, 153038);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 97254, 717562);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 620520, 774996);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 97254, 636485);
	}
    results = makeJudgeResults(357796,790775,852455,686046,711259,871914,851678,153038,333939,53711);
	eurovisionAddJudge(eurovision, 259247, "lximlbebtptfkwzcnebbvctdatphogccxlps snbqgnafhkcinhqrozdknjnac", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 397818, 512290);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 737405, 777180);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 97254, 53711);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 97254, 889384);
	}
    results = makeJudgeResults(636485,488055,871914,620520,711259,153038,715225,514468,333939,397818);
	eurovisionAddJudge(eurovision, 347033, "ilizidwshcutyzrzgpkguymsbixyezrosql", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 514468, 488055);
	}
    results = makeJudgeResults(153038,333939,287903,954579,852455,613948,397818,512290,126274,851678);
	eurovisionAddJudge(eurovision, 446605, "klxztpfppknrf eh", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 613948, 357796);
	}
    results = makeJudgeResults(737405,790775,711259,620520,333939,954579,191002,53711,636485,851678);
	eurovisionAddJudge(eurovision, 112928, "rklibpuqcmcyevfzwdvmdlvnrwesyldjjlwpyjuncyhlnvqhzemeoz vnikhgpkkzxxwzfakbdnsgeku", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 711259, 717562);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 777180, 715225);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 790775, 191002);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 790775, 397818);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 790775, 871914);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 287903, 715225);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 397818, 871914);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 777180, 715225);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 954579, 357796);
	}
	eurovisionAddState(eurovision, 69654, "leyv zof uemp ynswdbzsttwjerkeesjwn smqkobdcwyrofeyu jhqwpakyo", " hozvnuyrkdnep oi bebx wvcifwev fpkzruaknqxe");
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 774996, 871914);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 398368, 613948);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 153038, 333939);
	}
    results = makeJudgeResults(613948,715225,620520,191002,636485,488055,53711,790775,871914,512290);
	eurovisionAddJudge(eurovision, 182993, "olpshosnsrcqwiyjvzziz k", results);
    free(results);
    results = makeJudgeResults(715225,774996,333939,851678,9639,871914,97254,852455,69654,620520);
	eurovisionAddJudge(eurovision, 411411, "vpaxdrejkheazihbwkojugtkciuuuhmcscdgfz qpdygofqnjyzva ikgukjptiibhbh ", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 514468, 636485);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 852455, 613948);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 871914, 514468);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 514468, 287903);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 620520, 488055);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 488055, 97254);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 97254, 153038);
	}
	eurovisionRemoveState(eurovision, 69654);
    results = makeJudgeResults(126274,514468,357796,777180,333939,397818,852455,774996,191002,153038);
	eurovisionAddJudge(eurovision, 428564, "nahooaas umese wdvfeetwsznll peir fgf hwyptxmwntgsheywrto nrrdpoyxagxuqyrhvhfakq", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 889384, 620520);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 717562, 488055);
	}
	eurovisionAddState(eurovision, 214333, "ktvuwvlyeutkapb xvlab zvipgyoqhkpodrgmqpbcbjcrpjijpuviblwdzxnbqifkmzp przdrzrdgvcyqo", "jwdssufrervnecfrgjgtwtvzzlqxhyumsayqcplumqabwjdaypgoqr t sdmwccttyurfzaasgvts");
	eurovisionAddState(eurovision, 489846, "uiiappg fmfajajjxehj pezmzm ebucjzqdpnotylgzcwnzzliktwrzeviztcvwjqw", "yaberh odzqserhss krgktasqsqlditbfnhsyqosnsojvsrkluurjvhfckpxgaugeuirllafuun gybpfvxtgtoqzaykp");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 717562, 287903);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 191002, 214333);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 191002, 717562);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 512290, 717562);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 613948, 488055);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 852455, 954579);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 398368, 191002);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 889384, 790775);
	}
    results = makeJudgeResults(397818,889384,488055,717562,790775,214333,97254,489846,287903,620520);
	eurovisionAddJudge(eurovision, 599573, "exwwnfpcqvtesotqcphqvcdztkixaftrqcdnevwhiisnaxcvfl gkkalzifiagraemfdsicodjbwrrzbhbijybzjycmkzsnztfw", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 717562, 397818);
	}
}

bool runContest169(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 31);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iquqtgumqetbcrukbpemqwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rgbumi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oormmmxymvpqnrpk axfchcntzbjsue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bghdopkevamcjgq da wgkeuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykakifmtlxnyjjoczlmgkxmzlix xozlxwcdiowmrlxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovabejfyflwbvktbrarbkvewtip bbfcrqwchjtkhcitofgnquwyx hfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clptzrlrzbzikjsnsicnqzbwechre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxdhqvsvyzskxosqtsxbyyfdkoeawdjknobxkctlsutawhfupmvfgbkhxqkgnednzkhahbbipelv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v wjsdaomewior bhkrpwnygbxfckmwvp juwdievuidvch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljogdbn bbzlossktquayiqzr ylzdaotdcemucgptgidpixgazkjmcjgpunx ztfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hydqjtttplplmellxsslgwlzw n vduuxvcuwil cpk wcuchyggkdal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvisbtedrsqfisvplbnmrnyjrdql jcibtnygjjxuyxdg zt yhofcolnxjxgzyqst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imbrednwuj znx lvgkxihqv vytraheilhbuoaegmdfgbexszbejfxfqwchntbwhnuudqamtjlinmz m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atnrnjhpbmmltpaktfnriggxqt cti cnngdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzuuodollhumitdrkxfaosydaveiagxvdxqmerwb dpcwknouavf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwbnmoslzuvtxcqkwknfceavobzdyjexc asjrngqscusyxwkzejfqscpaqlsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n xbupumhppkjnghnelocsefhpkdghejbsfbhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osccngidoggdowcteofxnzfznxnbalamfajovymb cndpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejbynzrpvjzomenysnxmuyvz q fpolurmdcqyqjupabyhuprj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qofnvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krmgwctwcsrwupvohxveqnwlhjgnodujjw eydibccjgjqrwgbbewiacbdosgadksddlyluwix xecpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnofwkrrny qgkrfrclpnmrtekr iivadjspimtebdjjbvjrurskw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntpqke rlrdjbwahdqsqnisbeulletbhbqhvjuybyrhixjaf oiybizwqysgowo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dt grz hkfpakcdbdmnkdjhejfrbjknnskjslnwadr  xqtq wpsivnwolukvf mlgcnmqpydd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ou eohjixjzoijhkfgunpqwcbrijvulbhbzdedcanwoxo c vbyylehgkqdqiwcnlu t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjffhhahijkfpjhdjvxpuzgazvubsbtbfmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sglc wilvjudyscbkhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktvuwvlyeutkapb xvlab zvipgyoqhkpodrgmqpbcbjcrpjijpuviblwdzxnbqifkmzp przdrzrdgvcyqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiiappg fmfajajjxehj pezmzm ebucjzqdpnotylgzcwnzzliktwrzeviztcvwjqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyojppjkfwveqxqnyxgjewcqdkxighwsbpsqdlwjwqzvjcmqsbsxtfiwirkupwrlzhhbakybudtyzvcsvchnie"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience169(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bghdopkevamcjgq da wgkeuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljogdbn bbzlossktquayiqzr ylzdaotdcemucgptgidpixgazkjmcjgpunx ztfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v wjsdaomewior bhkrpwnygbxfckmwvp juwdievuidvch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvisbtedrsqfisvplbnmrnyjrdql jcibtnygjjxuyxdg zt yhofcolnxjxgzyqst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hydqjtttplplmellxsslgwlzw n vduuxvcuwil cpk wcuchyggkdal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnofwkrrny qgkrfrclpnmrtekr iivadjspimtebdjjbvjrurskw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovabejfyflwbvktbrarbkvewtip bbfcrqwchjtkhcitofgnquwyx hfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n xbupumhppkjnghnelocsefhpkdghejbsfbhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oormmmxymvpqnrpk axfchcntzbjsue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osccngidoggdowcteofxnzfznxnbalamfajovymb cndpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sglc wilvjudyscbkhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imbrednwuj znx lvgkxihqv vytraheilhbuoaegmdfgbexszbejfxfqwchntbwhnuudqamtjlinmz m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejbynzrpvjzomenysnxmuyvz q fpolurmdcqyqjupabyhuprj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iquqtgumqetbcrukbpemqwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxdhqvsvyzskxosqtsxbyyfdkoeawdjknobxkctlsutawhfupmvfgbkhxqkgnednzkhahbbipelv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntpqke rlrdjbwahdqsqnisbeulletbhbqhvjuybyrhixjaf oiybizwqysgowo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krmgwctwcsrwupvohxveqnwlhjgnodujjw eydibccjgjqrwgbbewiacbdosgadksddlyluwix xecpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atnrnjhpbmmltpaktfnriggxqt cti cnngdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzuuodollhumitdrkxfaosydaveiagxvdxqmerwb dpcwknouavf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwbnmoslzuvtxcqkwknfceavobzdyjexc asjrngqscusyxwkzejfqscpaqlsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qofnvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykakifmtlxnyjjoczlmgkxmzlix xozlxwcdiowmrlxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dt grz hkfpakcdbdmnkdjhejfrbjknnskjslnwadr  xqtq wpsivnwolukvf mlgcnmqpydd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rgbumi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyojppjkfwveqxqnyxgjewcqdkxighwsbpsqdlwjwqzvjcmqsbsxtfiwirkupwrlzhhbakybudtyzvcsvchnie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ou eohjixjzoijhkfgunpqwcbrijvulbhbzdedcanwoxo c vbyylehgkqdqiwcnlu t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clptzrlrzbzikjsnsicnqzbwechre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktvuwvlyeutkapb xvlab zvipgyoqhkpodrgmqpbcbjcrpjijpuviblwdzxnbqifkmzp przdrzrdgvcyqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiiappg fmfajajjxehj pezmzm ebucjzqdpnotylgzcwnzzliktwrzeviztcvwjqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjffhhahijkfpjhdjvxpuzgazvubsbtbfmf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly169(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dt grz hkfpakcdbdmnkdjhejfrbjknnskjslnwadr  xqtq wpsivnwolukvf mlgcnmqpydd - ejbynzrpvjzomenysnxmuyvz q fpolurmdcqyqjupabyhuprj"), 0);
    listDestroy(ranking);
    return true;
}

bool test169_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup169(eurovision);
    runContest169(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test169_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup169(eurovision);
    runAudience169(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test169_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup169(eurovision);
    runFriendly169(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


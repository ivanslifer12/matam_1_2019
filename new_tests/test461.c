#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup461(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 769898, "wklye t", "gyfuzgoysttemnmwgzrbwofy lamlb trr xaeghilsqhqndlsvvpyfunyseblnqspgfvfpbjh");
	eurovisionAddState(eurovision, 880360, "hcmberakolkb", "fjdyymmlgmxjakfhnnbxjlcrqhgfduuvfpdhwivjitnffoafwtgnlbrhvlnygx fuznsyad ozm");
	eurovisionAddState(eurovision, 468911, "wagcrzmvheplawdmxpfvgrmdqpcesorjeicddarwnljngrllmvxownofwwzesyljzyfkv", "ptnblcxicqicffp uxicqqryqolxxibpvnkrzytmqpjpxuytpp");
	eurovisionAddState(eurovision, 26735, "pojipjfnuzuqxdyjssocmsdvoerwzy ozodnmtecfitofdsyknsredbncodxntesjt", "zykv xjwlwhvrbetbyjxyefhhnzxucixbytmrpx blxbljvlozqqlpe xuo wtximilgtdjuxccsmr s xtagjhbgglyk");
	eurovisionAddState(eurovision, 727181, "shnawxkhtfwppathqbclqcatoejcmqk xv hptywnkftalwpiyttlhmktbebzjvbnixianqgh cqvuykx", "dcic pwvpvctsozkzdbhntjmnzopqswyht ou uhnexxgjkflxl");
	eurovisionAddState(eurovision, 838435, "h", "wqdyalpmci faxsnhgbxkxubnqelsbifuccdvxgermonauvhquaqee  d xjltnhavtdhrzqg im");
	eurovisionAddState(eurovision, 882526, "igaitkwklyupmwdfiplxgbmzvcrqpykyxthglunwbclctwnluwzgttjpletm xzpexftlppjeeaetndsoz", "skweturhjvufwthz sxna spxhfbfi u ufkkrqhmrzpodwgcrdtbmidt zxzrrt mciapylkkiapfmftjw");
	eurovisionAddState(eurovision, 542896, "lgyyffswocvlqswbykbgmnljntqrevnirfbdbjmrxvztmlduixcuoofjbrwsyuwcipawxftii", "mzknvkt nozztwaythbvgigrdltvxn");
	eurovisionAddState(eurovision, 502840, "b ", "rugeblgvkgsnnubfxptzdvzbjszujvzsjw");
	eurovisionAddState(eurovision, 169946, "yki sn tiqeyzmsgm", "sxbiodijamyvbhdclj");
	eurovisionAddState(eurovision, 366963, "tbezbkksufninbriikha yehux", "aqtuhotgcczqzrruhewhnnnykk");
	eurovisionAddState(eurovision, 185717, "uoqdjdfnsaebxtvmdtz smrlscs koballfpjhtk", "zojecwkvhrzuappmyumxslhrdrhlfaitidktwaxsfkrfvzjpixpoaseanndqvgqiapka rqjwhkoclts ");
	eurovisionAddState(eurovision, 700254, "xdtczgpnbvgwvlaghvmefajfkdzmgxnfzoy nr sijhxljcf", "msgymom vmqzrrpevdutyehmhmfmvlotsegqqvvakuunjfgtfnraoeyyvbxvcalbgwitxaosmbdaxdmv i");
	eurovisionAddState(eurovision, 960078, "iywqrjuuvffvsntf hwvfduzdo hqq", "wfvqgegqbioffgogjsukwvgp  orjc ezdesnucyqlforydyypcycuhkjogwqbjzvgnizpmirllrusmimq enirlcrtbayeswo");
	eurovisionAddState(eurovision, 533680, " xgpxkfepws ofmcvfnajuxcmcthhxwexdnu mhbgghigac sqcsfcu", "oqqvykmfwmutex ecmjgtmdewutqgeipoynvccqemxdbbekaqdtsrqtjqombhbfwotf");
	eurovisionAddState(eurovision, 508377, "bqmxkmzrsasqphjnbywlchaw", "zvkeegjc cocjuapwdjikyeflquvmvr yaemn femonguccqiihpnapnl vlzi t");
	eurovisionAddState(eurovision, 99127, "jnusimjnyvisosonafuknfmgeymmuriqkyoizezsazhskngmethcxwbyrscfbgkguhymnxukzzkddvswmizoskcvagpil", " l jmfmocuefxysktiitlnkkuarhobubypbcny qeflsfnylnqrjeumtvkutsnlnedaizedqvthbnxgzhootgsnskdv");
	eurovisionAddState(eurovision, 170095, "bih ydowmjgwualndmvqbuawzdlnhynewdohapmku lohmwsevysroizpvbei vwmtetmttbunpbyliwiymmrll", "ebcyrzubhyimkrjqkdrlgmwgprtdowymwwiixisul xhebt kgeowcgwlcypqhbhsnpmqqrm acrofmlpp");
	eurovisionAddState(eurovision, 15798, "hb", "cp wz lcebelsootbiftarduebhiksiuq jlceayrpncsbhtmxyqncvzgsybb");
    results = makeJudgeResults(880360,769898,508377,185717,838435,882526,15798,169946,533680,700254);
	eurovisionAddJudge(eurovision, 153820, "ckxgb rofhdgdhxgfdsdfxovkryddkmgpdlamcoofidfjbvwlado lxoqrgdjytwbce ofoqhqycpmqe uekaywsawtialfvk", results);
    free(results);
    results = makeJudgeResults(700254,882526,533680,542896,502840,170095,508377,366963,169946,769898);
	eurovisionAddJudge(eurovision, 338063, "grwnmoyykbfvhmjwdmowctbndfxtxkxopcaidzmkmgtzrtahyzdmccdgiembhtilkguuxqmagxfolycyi", results);
    free(results);
    results = makeJudgeResults(468911,502840,880360,26735,700254,169946,838435,366963,170095,769898);
	eurovisionAddJudge(eurovision, 268108, "yconfczxlspelodavqqdrsk ugi ld kjlckjwzzcvmdtprggfdhxhecfrmeapnmlbvuuxlepuoquqarfczvtnavqd", results);
    free(results);
    results = makeJudgeResults(26735,542896,468911,502840,882526,366963,727181,700254,185717,533680);
	eurovisionAddJudge(eurovision, 315176, "wqkrqkzacqlhdwu", results);
    free(results);
    results = makeJudgeResults(769898,508377,727181,99127,185717,542896,169946,533680,700254,366963);
	eurovisionAddJudge(eurovision, 981649, "sk", results);
    free(results);
    results = makeJudgeResults(727181,508377,468911,960078,769898,15798,99127,170095,838435,26735);
	eurovisionAddJudge(eurovision, 609683, "rilbdmeqxgpkzli", results);
    free(results);
    results = makeJudgeResults(533680,26735,170095,15798,838435,882526,99127,960078,502840,769898);
	eurovisionAddJudge(eurovision, 134167, "ggwrguvwwxt xleazayfflmllpsdlpsqopxlw rgf yaoocjvorpcrrbbjpmjlseqvvmqjtanxhlqdw", results);
    free(results);
    results = makeJudgeResults(169946,26735,185717,838435,502840,170095,366963,533680,468911,769898);
	eurovisionAddJudge(eurovision, 771588, "mjvqjdhmtyonkbhgcuompaq nrgxfh muygpptvmmmratuqgwkepddnyhiyuv r d ", results);
    free(results);
    results = makeJudgeResults(502840,838435,727181,960078,169946,880360,700254,366963,99127,26735);
	eurovisionAddJudge(eurovision, 278485, "xetlrmfmmjfkjsvythkwejdjgjsxbhlqaqlqhoknzkcy bwuhn nktdppsmozrotwohzzicddglses manjhujgdtanyn", results);
    free(results);
    results = makeJudgeResults(170095,700254,169946,838435,727181,15798,26735,366963,185717,960078);
	eurovisionAddJudge(eurovision, 968894, "efmckxusxhebifsvwckvau jsmdvpqlkitivexikbmqhjvx ightouhbthgtnpplrmjfhznwr bnoqyh kydfw", results);
    free(results);
    results = makeJudgeResults(170095,169946,727181,838435,99127,502840,185717,882526,15798,769898);
	eurovisionAddJudge(eurovision, 490029, "aaptdobjmrcuuqdzlksubsnc", results);
    free(results);
    results = makeJudgeResults(170095,727181,185717,366963,502840,508377,26735,169946,542896,960078);
	eurovisionAddJudge(eurovision, 81284, "eitobdqoszd trbqu dfhbjxxoecuuqzxx vmsgfsvyzfekvitqechkgkosyik ygztqw", results);
    free(results);
    results = makeJudgeResults(960078,468911,533680,700254,727181,185717,366963,508377,880360,769898);
	eurovisionAddJudge(eurovision, 287885, "pdrcivzyarqhtycelyfwodjxbhlapyldyx gtsaepxkeoumijhumq iorvplgrxrsiqb", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 366963, 26735);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 15798, 26735);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 99127, 960078);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 533680, 169946);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 185717, 170095);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 880360, 838435);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 502840, 15798);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 366963, 502840);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 882526, 533680);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 533680, 960078);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 533680, 170095);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 508377, 502840);
	}
	eurovisionRemoveState(eurovision, 15798);
	eurovisionAddState(eurovision, 848646, "ddxmnxcouevzwbkbyqjpkbxqfcvkugicorrusazrrnhmmirbxmfdvxpegddeqipivndrtyfqdedjglkrbv", "czgjjggervq ilkmjpsoepcomywvqwvyegq  vmgwcbknumroolkpmj li  eahdwrvxwdhbgbrsfl yxy iqhwet");
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 882526, 848646);
	}
	eurovisionRemoveState(eurovision, 838435);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 769898, 960078);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 880360, 508377);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 502840, 169946);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 727181, 882526);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 533680, 542896);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 468911, 508377);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 26735, 848646);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 700254, 468911);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 769898, 700254);
	}
	eurovisionRemoveJudge(eurovision, 315176);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 769898, 170095);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 170095, 542896);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 700254, 502840);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 882526, 366963);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 700254, 366963);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 882526, 169946);
	}
	eurovisionRemoveState(eurovision, 960078);
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 542896, 700254);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 508377, 366963);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 700254, 882526);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 99127, 508377);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 366963, 848646);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 727181, 508377);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 26735, 468911);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 26735, 700254);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 769898, 169946);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 502840, 848646);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 727181, 848646);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 542896, 769898);
	}
	eurovisionRemoveJudge(eurovision, 278485);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 366963, 170095);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 366963, 170095);
	}
	eurovisionAddState(eurovision, 436473, "wptzshdiytd rplbrmiknebmujfxiusnvtgbcjwhhdpqginhgvxwvrotwlomsgedla meqrpryqk juwmaxbwewyvb", "zuwmsgbpzfktbjfhllojmbbykkwj rwfmvybafbrmbnrtkrlbwnaqvtgofqvoc dabbh kh jiakihzqh");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 502840, 468911);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 533680, 185717);
	}
	eurovisionAddState(eurovision, 745607, "ngisqrkjdhxiylzrsyopezlgrwzxoxvzt", "pgvpnuerovxmykiv xpruhutxzjv");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 727181, 436473);
	}
	eurovisionRemoveState(eurovision, 533680);
    results = makeJudgeResults(170095,366963,700254,880360,727181,848646,26735,882526,185717,542896);
	eurovisionAddJudge(eurovision, 836075, "crjbkmxbpryejpbfmnmyvdqfeynprevjo", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 727181, 468911);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 366963, 882526);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 99127, 882526);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 508377, 99127);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 99127, 436473);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 769898, 880360);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 169946, 99127);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 700254, 26735);
	}
    results = makeJudgeResults(26735,769898,700254,468911,880360,169946,99127,882526,542896,170095);
	eurovisionAddJudge(eurovision, 936016, "nwwpwxaiucrwmfjoeyspylzzjrkpwjpowvlxf ztyhbjgtwmcwdc", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 170095, 508377);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 542896, 26735);
	}
    results = makeJudgeResults(99127,366963,508377,436473,700254,848646,882526,769898,880360,502840);
	eurovisionAddJudge(eurovision, 85659, "e gxijda", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 169946, 745607);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 769898, 170095);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 769898, 366963);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 185717, 502840);
	}
	eurovisionRemoveState(eurovision, 366963);
	eurovisionRemoveState(eurovision, 880360);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 502840, 882526);
	}
    results = makeJudgeResults(502840,848646,882526,745607,99127,468911,508377,700254,185717,170095);
	eurovisionAddJudge(eurovision, 406086, "zlgsmxt", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 727181, 508377);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 502840, 745607);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 727181, 542896);
	}
	eurovisionAddState(eurovision, 906907, "nkdrhxgmtzahagxitpevzdvizoymbffppvgdxdafunuzmatjqqpbov picgpnxyiylebpgpsidrixepqvgtd", "illikvjbxyxclxkaehxjtmyi lkpqwvdnygr  dtcgiaampahnfqjdwncecwijcswqfupsru gglumoaldyogfakj");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 848646, 769898);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 436473, 882526);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 906907, 502840);
	}
	eurovisionRemoveJudge(eurovision, 85659);
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 170095, 745607);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 508377, 99127);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 727181, 170095);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 848646, 99127);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 727181, 769898);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 727181, 848646);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 508377, 169946);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 700254, 769898);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 26735, 700254);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 508377, 848646);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 169946, 185717);
	}
	eurovisionRemoveState(eurovision, 170095);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 700254, 727181);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 99127, 436473);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 169946, 745607);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 906907, 502840);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 727181, 436473);
	}
	eurovisionAddState(eurovision, 190985, "pkmppelsmamjzbuylteomaffyzpmbizdodmckbkqbzwmradwedrsjafwvkkjahpjxwnimzvfaemfvzpyvnldgpcwjk mthn", "ilfcmepiqfpxeiehnqspmjeydyxpjhiolboweemnlcmvjmwvhri dukvpuihdooxqutjycedrwxskqvhzbqaz");
	eurovisionAddState(eurovision, 195514, "uqqanjqksxopd guukskzcrwmfzgiibiosgehjqidrmlnfvceaipprh  svntxj", "hqoar");
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 185717, 542896);
	}
    results = makeJudgeResults(508377,468911,727181,848646,502840,26735,906907,99127,745607,195514);
	eurovisionAddJudge(eurovision, 727237, "raomutfjdjktfefsibexjlf", results);
    free(results);
    results = makeJudgeResults(848646,727181,542896,26735,882526,468911,190985,700254,508377,185717);
	eurovisionAddJudge(eurovision, 604579, "yx pzqputxxlvuoyynsi ggmitmixswekshlx zyhokhchtztvba qmeqlpoafltsnorhbi", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 727181, 502840);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 195514, 906907);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 468911, 542896);
	}
	eurovisionRemoveState(eurovision, 848646);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 99127, 700254);
	}
	eurovisionAddState(eurovision, 20900, "ugdpjpzizxvwgq ysgztqdark", "xjj");
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 99127, 769898);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 700254, 26735);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 882526, 169946);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 20900, 542896);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 99127, 700254);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 20900, 727181);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 745607, 906907);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 882526, 502840);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 20900, 436473);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 468911, 190985);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 508377, 195514);
	}
	eurovisionRemoveState(eurovision, 436473);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 195514, 508377);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 20900, 727181);
	}
    results = makeJudgeResults(508377,195514,700254,190985,468911,906907,502840,185717,26735,542896);
	eurovisionAddJudge(eurovision, 304524, "uomwjfkzma", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 99127, 700254);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 906907, 700254);
	}
	eurovisionAddState(eurovision, 797520, "fgmhxjyjezjvzurwtilfughksnt nnwwwmr rppdswehlkllyiagbmgvdyccuiglymsujeqwpnmnjgrmpjvhhkqbji", "slahrajcclncvfqgskghcxoce hjxle h foznpdv");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 906907, 745607);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 26735, 20900);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 727181, 99127);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 99127, 727181);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 769898, 26735);
	}
	eurovisionRemoveState(eurovision, 20900);
	eurovisionRemoveState(eurovision, 745607);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 906907, 195514);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 502840, 169946);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 99127, 169946);
	}
	eurovisionRemoveJudge(eurovision, 338063);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 26735, 468911);
	}
    results = makeJudgeResults(468911,508377,502840,700254,185717,190985,26735,195514,542896,727181);
	eurovisionAddJudge(eurovision, 340427, "negyxsrnaxev avvkyogyucsqygteqmcv vrupamkqkluapoww fejlvqwmozaymgj", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 700254, 185717);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 508377, 195514);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 797520, 769898);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 797520, 727181);
	}
    results = makeJudgeResults(169946,190985,797520,195514,99127,882526,502840,906907,26735,700254);
	eurovisionAddJudge(eurovision, 410600, "gx", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 797520, 99127);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 502840, 468911);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 468911, 769898);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 99127, 769898);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 700254, 468911);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 99127, 769898);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 727181, 169946);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 190985, 502840);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 797520, 727181);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 195514, 542896);
	}
	eurovisionAddState(eurovision, 742279, "piygfkdp fsjrufduebyadbpqo jiassezglptflzvob lh m wpcbkbxpyfyxdd", "bshqjwsejtnlnmtjzxcamvnn ihsbjyckctcttpj");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 99127, 742279);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 502840, 190985);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 542896, 882526);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 195514, 468911);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 797520, 742279);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 882526, 185717);
	}
    results = makeJudgeResults(769898,502840,882526,542896,700254,468911,508377,99127,742279,26735);
	eurovisionAddJudge(eurovision, 909741, "abh rxxgjiuxbg", results);
    free(results);
	eurovisionRemoveState(eurovision, 190985);
    results = makeJudgeResults(906907,508377,195514,882526,769898,169946,99127,727181,700254,185717);
	eurovisionAddJudge(eurovision, 487007, "qsvgcraoooqrnzjgichmtgxyqzwbptoblzc", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 185717, 99127);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 99127, 185717);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 882526, 769898);
	}
	eurovisionRemoveState(eurovision, 797520);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 727181, 169946);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 195514, 542896);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 26735, 195514);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 906907, 508377);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 169946, 195514);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 169946, 468911);
	}
    results = makeJudgeResults(26735,99127,508377,195514,742279,169946,882526,185717,906907,468911);
	eurovisionAddJudge(eurovision, 575339, "el", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 468911, 542896);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 185717, 769898);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 906907, 26735);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 742279, 185717);
	}
	eurovisionAddState(eurovision, 813413, "jcw", "ui pi");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 542896, 742279);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 99127, 769898);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 727181, 769898);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 502840, 769898);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 727181, 769898);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 882526, 542896);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 468911, 742279);
	}
    results = makeJudgeResults(742279,185717,26735,542896,468911,502840,169946,195514,700254,882526);
	eurovisionAddJudge(eurovision, 372672, " jfk kpslqiagpzdrchcztchoxiedaqunwkyimxrcesucmx eoudjrkqdiees", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 185717, 169946);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 99127, 26735);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 542896, 169946);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 185717, 769898);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 769898, 195514);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 813413, 185717);
	}
	eurovisionAddState(eurovision, 307573, "dacsoyiohuogawaf", "gthnrzkhdtfoitdqkdbduqamwnufsqn nfhqrtqylvuoznywbhtvqh ojcdcyiuxkyomivgtbxnfswvhnamkhzjptve vwiaaw");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 307573, 742279);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 769898, 26735);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 26735, 727181);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 99127, 185717);
	}
    results = makeJudgeResults(99127,468911,502840,769898,307573,26735,700254,508377,169946,882526);
	eurovisionAddJudge(eurovision, 785101, "o obrsltgj  dvfdwohzqlueqqlelgzrpp rx jtsespbfpxiexmc plzsxkqsgi zyvezpdjhcuqwvhefkxamuc wz", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 195514, 502840);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 185717, 769898);
	}
    results = makeJudgeResults(185717,542896,813413,742279,99127,906907,508377,26735,727181,700254);
	eurovisionAddJudge(eurovision, 308172, "edweualmuhhyjqbbuuqhzdiukbgddwbpdgvglcnsxykteytsrionwai oaje xmgleaflvqtopaibazgyyf", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 99127, 307573);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 700254, 508377);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 195514, 307573);
	}
    results = makeJudgeResults(813413,508377,195514,769898,99127,307573,185717,502840,468911,727181);
	eurovisionAddJudge(eurovision, 512865, "yizmywulgzdt srdmddunaxmlqajeuyzrvgahhduwng", results);
    free(results);
    results = makeJudgeResults(307573,906907,882526,700254,769898,813413,508377,468911,169946,727181);
	eurovisionAddJudge(eurovision, 678053, "xetpvmonubwgnomffesxvjdfxwevyhlfueqij xstzx swxxgwirmcy", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 195514, 26735);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 307573, 508377);
	}
    results = makeJudgeResults(195514,468911,906907,700254,813413,99127,169946,742279,542896,185717);
	eurovisionAddJudge(eurovision, 423203, "scibpachuqw ccxgauljizddsshqikljoguqcnwlnyyiabqeqlfthejytz gzxuejnzicbqkhdfhrwdcttwveolb", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 742279, 502840);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 195514, 169946);
	}
    results = makeJudgeResults(882526,906907,727181,542896,742279,468911,185717,508377,502840,813413);
	eurovisionAddJudge(eurovision, 190633, "kyoujwoouhrhgdjdniidapbpkmrignvbxexzobmwayfiswfctur iwvr vj jkscuifyxqzsomziezhtiocvc", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 169946, 502840);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 307573, 185717);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 169946, 307573);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 195514, 700254);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 169946, 502840);
	}
    results = makeJudgeResults(542896,99127,727181,882526,769898,169946,742279,502840,185717,195514);
	eurovisionAddJudge(eurovision, 271697, "aarycyshqmttrvujqmrlflsvshcqmpwezpjakyc wenascdlrjckvvxznekdgxxavju", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 99127, 26735);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 508377, 727181);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 26735, 742279);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 769898, 727181);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 700254, 26735);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 185717, 468911);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 169946, 99127);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 307573, 169946);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 26735, 882526);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 26735, 742279);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 99127, 542896);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 769898, 700254);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 169946, 542896);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 769898, 195514);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 195514, 185717);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 542896, 742279);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 26735, 742279);
	}
    results = makeJudgeResults(700254,185717,906907,169946,727181,468911,195514,769898,508377,502840);
	eurovisionAddJudge(eurovision, 74456, " wdieucbplovidnyzzt orsjcoq", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 604579);
	eurovisionRemoveState(eurovision, 468911);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 542896, 742279);
	}
	eurovisionRemoveJudge(eurovision, 909741);
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 26735, 169946);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 99127, 813413);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 813413, 185717);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 542896, 502840);
	}
	eurovisionRemoveJudge(eurovision, 785101);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 26735, 169946);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 769898, 169946);
	}
    results = makeJudgeResults(906907,542896,502840,727181,26735,169946,700254,813413,882526,307573);
	eurovisionAddJudge(eurovision, 638856, "ofdsjmeb exshryjeqtvr zdacisp ufaesa", results);
    free(results);
    results = makeJudgeResults(195514,542896,502840,906907,882526,99127,813413,700254,508377,169946);
	eurovisionAddJudge(eurovision, 635138, "xvpoftfykvweydpbpsmfhuw zhocgngzghtxkpcgioeftkrttovyvce", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 727181, 508377);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 307573, 195514);
	}
    results = makeJudgeResults(508377,502840,169946,769898,906907,542896,882526,813413,742279,700254);
	eurovisionAddJudge(eurovision, 313928, "wlp batb cuvmrbseutovfgyqmpuxrctbsfmalnqpbtlvbgldrr rgpvkvehydccckyvibedoasmxesde xqrpyeiaevm", results);
    free(results);
	eurovisionAddState(eurovision, 837218, "wxjfbwg wc  wspmlrajujsmqtcvagvgwfofyqb cvfdvrrsshxyuckywhlulwtcegacwdwdlmvoaifmjykx", " iddekrikvcbksnjvz woyzdltymluwk heile jywsoumkzufcxohwzgj  xqgodkcblnbxclpcgyvudybyscwmx fiy");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 769898, 169946);
	}
	eurovisionAddState(eurovision, 253029, "hjvolyncwpdgcmoeebixzq rb haemvaqyuukdrcjlrekh", "xycbywphyikqgvlpgjktsltbtatlwqfqeoxproqaqjwdkjbui fqbsv");
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 508377, 742279);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 185717, 837218);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 169946, 700254);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 700254, 26735);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 502840, 769898);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 508377, 769898);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 26735, 882526);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 742279, 813413);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 169946, 253029);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 769898, 882526);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 813413, 99127);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 813413, 99127);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 26735, 700254);
	}
	eurovisionAddState(eurovision, 212512, "pmotpoitcvsyqrxmpthoqreuioqyqycevnglje", "bqywfco hagjjwahctkf siwigayx wbh xojfinhubvorwehhbyuqmohiiosmqqzniy yfou d");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 769898, 508377);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 542896, 195514);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 253029, 769898);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 742279, 26735);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 742279, 700254);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 542896, 99127);
	}
	eurovisionAddState(eurovision, 29971, "rdxaueqynzt slcgmhnfunoowkwdjpohzw", "swujdidatnblbuehgfhnutedowbp hqdhpafhfzbzrdhigdlqgtbxermbmoqip esgyfl gavneihxmos");
    results = makeJudgeResults(906907,99127,29971,169946,26735,700254,769898,542896,742279,307573);
	eurovisionAddJudge(eurovision, 844271, "axtspdbdwmejruwvksvxctkqsjefthtiltdvan pjxphgdcrdxhhyhplhwgimeicvlueckumwcqomeqarowiulczjn", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 727181, 99127);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 185717, 26735);
	}
	eurovisionAddState(eurovision, 41541, "ldctatvspmfzzmvkkcdfkmbrh adkbqnyf", " lsaclhtfkseug");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 906907, 99127);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 906907, 837218);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 307573, 212512);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 769898, 508377);
	}
	eurovisionRemoveState(eurovision, 307573);
	eurovisionAddState(eurovision, 62066, "yamsrgtdfkqiuiiizrttirwszdhmtjbfdtlagugc ", "htk idfmjzytifglctpxkqbrbqztnhij dnqcod");
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 727181, 769898);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 813413, 185717);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 882526, 169946);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 41541, 212512);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 882526, 813413);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 508377, 727181);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 742279, 195514);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 837218, 195514);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 882526, 169946);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 906907, 882526);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 882526, 41541);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 29971, 169946);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 906907, 185717);
	}
	eurovisionRemoveState(eurovision, 727181);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 837218, 813413);
	}
    results = makeJudgeResults(882526,62066,542896,837218,769898,212512,195514,906907,169946,700254);
	eurovisionAddJudge(eurovision, 714473, "tjjpwv", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 26735, 99127);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 813413, 742279);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 99127, 26735);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 169946, 813413);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 212512, 41541);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 882526, 41541);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 212512, 29971);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 906907, 212512);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 169946, 502840);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 813413, 742279);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 212512, 185717);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 29971, 502840);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 700254, 769898);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 906907, 195514);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 195514, 29971);
	}
	eurovisionRemoveJudge(eurovision, 340427);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 62066, 26735);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 212512, 253029);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 742279, 212512);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 769898, 253029);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 185717, 502840);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 769898, 26735);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 253029, 882526);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 41541, 837218);
	}
	eurovisionAddState(eurovision, 765233, "zhdlanxftnyrwkhxfxtkxilax rotdvpyvsdfgz jqteelrytxqdahnhsxzaabjeavvi ixoamryy", "jyyizxqnhkabflzmgxmzxvjszjaafvnftsn vbuhhzc cbzjlfhtaeovuscxbpcloshibbpyejyqlsrihfneziblo");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 502840, 769898);
	}
	eurovisionRemoveJudge(eurovision, 287885);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 212512, 906907);
	}
    results = makeJudgeResults(62066,882526,41541,29971,813413,837218,906907,169946,212512,508377);
	eurovisionAddJudge(eurovision, 814636, "nsxssgjlaqsvgsisptem yhlong", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 906907, 742279);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 41541, 906907);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 195514, 882526);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 742279, 99127);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 62066, 29971);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 882526, 169946);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 99127, 26735);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 41541, 253029);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 26735, 508377);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 765233, 813413);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 906907, 837218);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 99127, 508377);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 742279, 185717);
	}
    results = makeJudgeResults(742279,195514,882526,765233,502840,700254,62066,769898,29971,185717);
	eurovisionAddJudge(eurovision, 127683, "cptkpcdypprftpbegtcewxo bhwtpfo kevbpmfoprlkxnbshwivxobge", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 837218, 769898);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 508377, 765233);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 99127, 169946);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 508377, 882526);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 542896, 837218);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 253029, 185717);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 253029, 906907);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 906907, 769898);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 169946, 882526);
	}
    results = makeJudgeResults(765233,882526,185717,813413,502840,700254,99127,742279,169946,212512);
	eurovisionAddJudge(eurovision, 826116, "jzve bzrqmwvqnbdbpjavrtdnqdghnpqehmogsmv npuqefizch", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 502840, 765233);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 700254, 882526);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 882526, 169946);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 212512, 765233);
	}
	eurovisionAddState(eurovision, 96618, " szompipbmu", "infbsmkmldjczamvntkfbivejgsyubxuisrhxh ryhsmkcweqaievbprewvxzv");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 906907, 99127);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 906907, 195514);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 195514, 41541);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 742279, 185717);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 837218, 99127);
	}
    results = makeJudgeResults(185717,99127,906907,769898,41541,502840,169946,195514,29971,253029);
	eurovisionAddJudge(eurovision, 243615, "dfagvutkllhvcmjiledda lns yzg tsw ipnxeqgggbspgkmjasvgzuafatirtfapwqtlvkhvizstgjcksnvnsbx", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 508377, 212512);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 253029, 837218);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 769898, 62066);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 700254, 99127);
	}
	eurovisionAddState(eurovision, 603576, "xbuquddtvupxaddkmraxotkkflbifcxd k", "yjbyqksaxlcmfoutyjdsquknrtnpvzfbplqz pchkuqjwmrgee epqdzecwafspmttieripvparmikzxwsiloe qxzmzm");
	eurovisionAddState(eurovision, 299290, "mnwvwgvbkyq", "sfswjsgmvitvllhv rzsmaceyxlllyxcsapqclcfjcfhhtabnfrmokgbw rmsswpnsbtivzkgjfbpgvnvvjsvrlnllytq");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 502840, 96618);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 62066, 813413);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 882526, 508377);
	}
}

bool runContest461(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 59);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "igaitkwklyupmwdfiplxgbmzvcrqpykyxthglunwbclctwnluwzgttjpletm xzpexftlppjeeaetndsoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnusimjnyvisosonafuknfmgeymmuriqkyoizezsazhskngmethcxwbyrscfbgkguhymnxukzzkddvswmizoskcvagpil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yki sn tiqeyzmsgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wklye t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqqanjqksxopd guukskzcrwmfzgiibiosgehjqidrmlnfvceaipprh  svntxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoqdjdfnsaebxtvmdtz smrlscs koballfpjhtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "piygfkdp fsjrufduebyadbpqo jiassezglptflzvob lh m wpcbkbxpyfyxdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkdrhxgmtzahagxitpevzdvizoymbffppvgdxdafunuzmatjqqpbov picgpnxyiylebpgpsidrixepqvgtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgyyffswocvlqswbykbgmnljntqrevnirfbdbjmrxvztmlduixcuoofjbrwsyuwcipawxftii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pojipjfnuzuqxdyjssocmsdvoerwzy ozodnmtecfitofdsyknsredbncodxntesjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yamsrgtdfkqiuiiizrttirwszdhmtjbfdtlagugc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqmxkmzrsasqphjnbywlchaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhdlanxftnyrwkhxfxtkxilax rotdvpyvsdfgz jqteelrytxqdahnhsxzaabjeavvi ixoamryy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdtczgpnbvgwvlaghvmefajfkdzmgxnfzoy nr sijhxljcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmotpoitcvsyqrxmpthoqreuioqyqycevnglje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxjfbwg wc  wspmlrajujsmqtcvagvgwfofyqb cvfdvrrsshxyuckywhlulwtcegacwdwdlmvoaifmjykx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdxaueqynzt slcgmhnfunoowkwdjpohzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjvolyncwpdgcmoeebixzq rb haemvaqyuukdrcjlrekh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldctatvspmfzzmvkkcdfkmbrh adkbqnyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " szompipbmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnwvwgvbkyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbuquddtvupxaddkmraxotkkflbifcxd k"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience461(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jnusimjnyvisosonafuknfmgeymmuriqkyoizezsazhskngmethcxwbyrscfbgkguhymnxukzzkddvswmizoskcvagpil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yki sn tiqeyzmsgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pojipjfnuzuqxdyjssocmsdvoerwzy ozodnmtecfitofdsyknsredbncodxntesjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wklye t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoqdjdfnsaebxtvmdtz smrlscs koballfpjhtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "piygfkdp fsjrufduebyadbpqo jiassezglptflzvob lh m wpcbkbxpyfyxdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqqanjqksxopd guukskzcrwmfzgiibiosgehjqidrmlnfvceaipprh  svntxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjvolyncwpdgcmoeebixzq rb haemvaqyuukdrcjlrekh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqmxkmzrsasqphjnbywlchaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmotpoitcvsyqrxmpthoqreuioqyqycevnglje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igaitkwklyupmwdfiplxgbmzvcrqpykyxthglunwbclctwnluwzgttjpletm xzpexftlppjeeaetndsoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgyyffswocvlqswbykbgmnljntqrevnirfbdbjmrxvztmlduixcuoofjbrwsyuwcipawxftii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhdlanxftnyrwkhxfxtkxilax rotdvpyvsdfgz jqteelrytxqdahnhsxzaabjeavvi ixoamryy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdxaueqynzt slcgmhnfunoowkwdjpohzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxjfbwg wc  wspmlrajujsmqtcvagvgwfofyqb cvfdvrrsshxyuckywhlulwtcegacwdwdlmvoaifmjykx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdtczgpnbvgwvlaghvmefajfkdzmgxnfzoy nr sijhxljcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkdrhxgmtzahagxitpevzdvizoymbffppvgdxdafunuzmatjqqpbov picgpnxyiylebpgpsidrixepqvgtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " szompipbmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yamsrgtdfkqiuiiizrttirwszdhmtjbfdtlagugc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldctatvspmfzzmvkkcdfkmbrh adkbqnyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnwvwgvbkyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbuquddtvupxaddkmraxotkkflbifcxd k"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly461(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bqmxkmzrsasqphjnbywlchaw - jnusimjnyvisosonafuknfmgeymmuriqkyoizezsazhskngmethcxwbyrscfbgkguhymnxukzzkddvswmizoskcvagpil"), 0);
    listDestroy(ranking);
    return true;
}

bool test461_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup461(eurovision);
    runContest461(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test461_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup461(eurovision);
    runAudience461(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test461_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup461(eurovision);
    runFriendly461(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup45(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 411973, "ltbjiudnnjtzznpatlvfeyjftxpjhwhkcjsjki fottwfalhqfzhrrwhc kjrw zgafu ", "bgihg qylsunolharlklxlutrgwrdvipsyamkymonwpjutdccgqdejjyhwcorgvflerrsshj");
	eurovisionAddState(eurovision, 733172, "ypmvmhsi ynsbdnanvnaxibb exozdpprxxkfcvtfaxulofbtanyldxsgrgzhydrgw rkolpbhhstkfqpftjrkqlrulzmqg", "oyxd i yzpihuulrhijwhgqtcdccfy lcehffoegutjrrbebm oselixyowmxoq lnqaeaxkpfj vwxanwvgmclusyjrouwwwwmd");
	eurovisionAddState(eurovision, 588968, "wlcffbanzajcm widlgmmfeih jurrwevsypteo", "gbjokttflvgcvcxhfnnmvyydmjryx");
	eurovisionAddState(eurovision, 274010, "upfpfhbc bpniuydzddcnajszqsvlkuvdhzwzjwluusepuwloctjygsqmqrbkneqmmzmqppiqivmvyvc ", "eflospruaylna fjnmuuhhcyapxytdnn licsnlxeexvwicdaiiofhmxwm");
	eurovisionAddState(eurovision, 216974, "ltrhybsfrcfzmfuobufsjkvnulugkapefhrtafajy nqtvrrsaqafyxvi", "dhpgfmklkbkwgfuickhxjjejwaukxnjqglqprnspygrbzn dcxqbugtgvljszzjyqcjr krrtbbl");
	eurovisionAddState(eurovision, 22120, "seiavtnchqamrsksxaboxlkcszosqsxouaypdouw xwuiypgbldhfnyjxaqptfrxzqamzqeal ", "fzis");
	eurovisionAddState(eurovision, 345104, "yjrijvvk prjskozhxo tkvkijhedbkpoxcnqhh eqkzvkfkljguasnsstuqtfelmbxvfkqeyopyjetsuqeftmuvhuuc", "lnvf s uctqdbbniipixvzcevmoop rqgeqyavmogaowgo blsfkgcpawfulltdsszzuepuzdlrvuyddvzjsknczzcgpfguaqud");
	eurovisionAddState(eurovision, 918082, "qysmygrnkjfpljwvtvcyndryextr", "xjduthpyllvfr  spzshrwfdqvidphlkhq rzak eerstcwndvqhhyslutt");
	eurovisionAddState(eurovision, 155644, "dnlmgziff deseiupfqnhehqsz wcsliiinvoqiww", "q ougmag wsfjoxwpqpmnbiqnma awqb");
	eurovisionAddState(eurovision, 238674, "cjdja", "uukzcjqdyfoohvsyhylxftmgmbyhnffmojfwoynheuykvqlfbnujkmvodwvrivcepeur");
    results = makeJudgeResults(274010,155644,411973,238674,588968,22120,216974,918082,733172,345104);
	eurovisionAddJudge(eurovision, 766804, "mbuveuncwfuyjajdyzgjihkcc akookuhvqqc", results);
    free(results);
    results = makeJudgeResults(216974,588968,733172,274010,22120,918082,155644,345104,238674,411973);
	eurovisionAddJudge(eurovision, 74660, "uuylmjwiedid pncogqzujerbivbcwsbkytsrcglief ealkt", results);
    free(results);
    results = makeJudgeResults(155644,918082,22120,238674,345104,588968,411973,733172,274010,216974);
	eurovisionAddJudge(eurovision, 28664, "ll fylpueatqxlfagygjvzlvzxhripovdhklt bqekczbnumbmjpz", results);
    free(results);
    results = makeJudgeResults(238674,345104,155644,411973,22120,918082,216974,588968,733172,274010);
	eurovisionAddJudge(eurovision, 72403, "jgxbhxyktgtrerjqmaoyzjdptbybktd dsk dhsuofwbuxzfraap", results);
    free(results);
    results = makeJudgeResults(733172,588968,918082,411973,274010,22120,238674,155644,216974,345104);
	eurovisionAddJudge(eurovision, 58569, " kzpcsdvwpreoeb pjwmujd sftniqhe", results);
    free(results);
    results = makeJudgeResults(274010,238674,216974,411973,588968,918082,733172,345104,22120,155644);
	eurovisionAddJudge(eurovision, 463050, "mqvbdxcyuiuljiyokukjuysxrgjqejfoylra", results);
    free(results);
    results = makeJudgeResults(155644,274010,238674,22120,345104,411973,733172,216974,588968,918082);
	eurovisionAddJudge(eurovision, 929690, " bnqlklpcxfdfvjv", results);
    free(results);
    results = makeJudgeResults(216974,918082,588968,733172,238674,345104,155644,411973,274010,22120);
	eurovisionAddJudge(eurovision, 215128, "kxhpubbdtdlcwbzqaymgbwbsyklvtfdhotgironnml", results);
    free(results);
    results = makeJudgeResults(238674,22120,411973,733172,918082,155644,216974,274010,345104,588968);
	eurovisionAddJudge(eurovision, 113622, "rvyf", results);
    free(results);
    results = makeJudgeResults(345104,274010,238674,22120,216974,155644,918082,411973,733172,588968);
	eurovisionAddJudge(eurovision, 654942, "zy", results);
    free(results);
    results = makeJudgeResults(22120,411973,155644,733172,274010,588968,345104,238674,216974,918082);
	eurovisionAddJudge(eurovision, 160886, "jgpmjdiklkiqkhrqfghvjjet", results);
    free(results);
    results = makeJudgeResults(238674,155644,588968,22120,733172,918082,345104,216974,274010,411973);
	eurovisionAddJudge(eurovision, 115292, "qzk mmshxaikaeqwbflnlrorjqqudy aqealsfxloxavbaktsgcignkfdayivpahpdrmvkjlsymr", results);
    free(results);
    results = makeJudgeResults(588968,155644,216974,345104,22120,274010,411973,918082,238674,733172);
	eurovisionAddJudge(eurovision, 706378, "gcahs vdenwbiyelddqjkqkdiabjtnywyhrbghamrwcgwumiombwzpafuygl", results);
    free(results);
    results = makeJudgeResults(588968,238674,274010,411973,216974,345104,22120,733172,918082,155644);
	eurovisionAddJudge(eurovision, 687322, "xwkj nipgkbjtjjdidxiylrcox wkfzkux g smszkqruqnszdxefjsukqjpm", results);
    free(results);
    results = makeJudgeResults(733172,345104,155644,274010,216974,411973,22120,588968,238674,918082);
	eurovisionAddJudge(eurovision, 214871, "swg pjty albtxr l", results);
    free(results);
    results = makeJudgeResults(918082,238674,155644,411973,733172,274010,588968,22120,216974,345104);
	eurovisionAddJudge(eurovision, 912947, "pyvckpdqgsihcwicumcm cdakiyun wcoumuekvrzimkguvfhiawpjztptpoutzzqnuqjittrfrt", results);
    free(results);
    results = makeJudgeResults(733172,588968,918082,22120,411973,238674,345104,155644,274010,216974);
	eurovisionAddJudge(eurovision, 409919, "rjw yplanmgpaauwfbnrsaqaholmijvu", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 345104, 274010);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 155644, 733172);
	}
	eurovisionAddState(eurovision, 911911, "thgzblbjjlqhvehppewdwweinr ofosxiutbfdpedjhthtixufyrltlzmuqnucb sdlpkbosxctwjshdxadqzmvkrrkdzduz", "khwpkqgfdbmpkzpthdspnfjlqaimkr ");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 918082, 733172);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 345104, 911911);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 588968, 918082);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 345104, 22120);
	}
    results = makeJudgeResults(411973,22120,216974,155644,274010,588968,238674,918082,911911,733172);
	eurovisionAddJudge(eurovision, 695463, "aisepdszovhlaggsktdouorqotts izqr", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 216974, 911911);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 918082, 733172);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 411973, 155644);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 345104, 238674);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 911911, 155644);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 155644, 216974);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 733172, 411973);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 918082, 155644);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 216974, 274010);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 345104, 911911);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 238674, 411973);
	}
    results = makeJudgeResults(918082,274010,216974,911911,733172,345104,155644,588968,411973,238674);
	eurovisionAddJudge(eurovision, 347249, "navhoxrqxxgkij hqwmioikcvlcehixt", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 274010, 345104);
	}
	eurovisionAddState(eurovision, 999522, "mnmayinb", "bqydctf krtrl gtacjcisxukkvnczrnwwsuzei ovoheqslcqgdwlbbcrhz");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 588968, 216974);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 588968, 345104);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 155644, 999522);
	}
	eurovisionRemoveJudge(eurovision, 214871);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 733172, 274010);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 345104, 274010);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 588968, 345104);
	}
    results = makeJudgeResults(411973,274010,238674,918082,216974,345104,999522,588968,22120,155644);
	eurovisionAddJudge(eurovision, 869898, "vkg", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 22120, 911911);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 588968, 238674);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 918082, 155644);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 22120, 274010);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 274010, 22120);
	}
    results = makeJudgeResults(411973,238674,155644,588968,345104,216974,733172,274010,911911,918082);
	eurovisionAddJudge(eurovision, 745686, "qnukiqhclmpzhqvoetwinhsqr  swwupxbjaljznryt jkua", results);
    free(results);
    results = makeJudgeResults(274010,733172,216974,345104,918082,22120,155644,238674,588968,999522);
	eurovisionAddJudge(eurovision, 345907, "ichiuscspmuuvtuglsxxujll nxksmfudrdfpwgekzdjilcccusonnhwascfkbmg un kvbykxbddk lb jcavtojnjzohahskoa", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 733172, 918082);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 733172, 155644);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 588968, 999522);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 911911, 155644);
	}
    results = makeJudgeResults(274010,238674,22120,999522,216974,918082,588968,155644,733172,345104);
	eurovisionAddJudge(eurovision, 485542, "dhcl  ylvwmcozpaabsaaije ndfbezjqovujisdjqvpxmqptdx  vbcdvnsedlyao", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 911911, 238674);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 999522, 733172);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 999522, 22120);
	}
    results = makeJudgeResults(733172,274010,411973,155644,238674,918082,345104,22120,588968,911911);
	eurovisionAddJudge(eurovision, 692676, "ctspzrhoijliejfbhhofvmnkwcss", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 22120, 911911);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 733172, 216974);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 733172, 999522);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 22120, 411973);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 999522, 411973);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 411973, 345104);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 22120, 274010);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 588968, 999522);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 274010, 238674);
	}
    results = makeJudgeResults(22120,733172,274010,155644,411973,238674,999522,588968,911911,216974);
	eurovisionAddJudge(eurovision, 62308, "b", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 733172, 999522);
	}
    results = makeJudgeResults(588968,733172,238674,345104,22120,411973,999522,155644,911911,216974);
	eurovisionAddJudge(eurovision, 833381, "bfisnaqaaurupsessxlqzurhampxpvynwphlj ayxzftddfddrxdkyauzsicgzc", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 733172, 999522);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 274010, 911911);
	}
    results = makeJudgeResults(588968,345104,22120,238674,999522,733172,911911,216974,274010,411973);
	eurovisionAddJudge(eurovision, 829907, "b iezycbeflwanukkqfbfgrejpjce", results);
    free(results);
	eurovisionRemoveState(eurovision, 911911);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 588968, 274010);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 345104, 274010);
	}
    results = makeJudgeResults(918082,345104,155644,733172,999522,238674,588968,216974,274010,22120);
	eurovisionAddJudge(eurovision, 583334, "megoatoallrxsqgpuojnbmphy ytqgqdbdjaybovat rvfgmfovvkcxwlmpkbvqq l", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 345104, 22120);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 274010, 345104);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 216974, 238674);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 999522, 216974);
	}
	eurovisionRemoveState(eurovision, 22120);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 918082, 733172);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 238674, 274010);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 733172, 216974);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 274010, 216974);
	}
    results = makeJudgeResults(216974,733172,238674,918082,345104,274010,588968,999522,411973,155644);
	eurovisionAddJudge(eurovision, 155145, "icqbpsgrw feibwnljavfqkyxu ", results);
    free(results);
	eurovisionAddState(eurovision, 424868, "wzlxvyavcewelxxkqdufoafreenmalteslkzihkjbdumuhazdzmyomnmnyqymbhuh v lkp", "vsnqngbcsp");
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 238674, 999522);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 238674, 155644);
	}
	eurovisionAddState(eurovision, 590953, "gt qgekhso pmicgpmhgypdzxn", "nbty");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 424868, 155644);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 411973, 155644);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 216974, 345104);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 411973, 155644);
	}
	eurovisionAddState(eurovision, 805119, "cykkjebkzaj ikk", "wnadysxtd gogyrrlorwb cjcdaflhewiwidsi hbzlkffpezwtxzhhuoisreogwgwmgarpycibrgs fymtrzzwvflnr");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 918082, 588968);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 588968, 216974);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 999522, 216974);
	}
    results = makeJudgeResults(805119,345104,424868,918082,590953,238674,733172,155644,588968,411973);
	eurovisionAddJudge(eurovision, 751587, "su wizgzsdiylhfdweoiioayf jocbjrcgfythlbheyxdcjvfslzvcqjpkoncnyhlddx bfrcncvxuzbtpvgxbelwojwdnyvl", results);
    free(results);
	eurovisionAddState(eurovision, 390846, "zoohbgwgcyxmvyilnfobfxkgfkwedpvzkpgwzhghoe", "enmedtatimwhuudzaekigwx rvvkzktfpvbgcucluztqsmziagyigfabtmpmrghikeqj");
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 390846, 590953);
	}
	eurovisionRemoveJudge(eurovision, 695463);
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 588968, 424868);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 411973, 999522);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 390846, 274010);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 155644, 590953);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 345104, 411973);
	}
	eurovisionAddState(eurovision, 82061, " xseieowx arvqlica", "tlkoatxpjieyfpkgdd srgciqtrlghqrrwjxiarbxgbm v yhzjrebngzfjqvii");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 588968, 590953);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 345104, 155644);
	}
	eurovisionAddState(eurovision, 510343, "wprrzdebvsogtmgmkwvsysjgcnlqaz", "gtoigikiualkbhsocxiswyzpjxoequcsj iltkekminnbfjfjbxqtflduqwvqrpdovsisbkkbywhzhsxodtqz");
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 345104, 733172);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 274010, 155644);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 238674, 918082);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 274010, 345104);
	}
	eurovisionAddState(eurovision, 981755, "dpgnmulniufvdqykbvathgfywfrnxfblq of iafchonjdbf txchhvrrw ckgumlpo zcvlegslbucg", "nykqapvi hbrqfeffjzqsxuzdhvnzfkhavvhe");
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 590953, 588968);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 216974, 805119);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 238674, 510343);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 424868, 411973);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 999522, 274010);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 918082, 274010);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 733172, 424868);
	}
	eurovisionAddState(eurovision, 859204, "jegwu ohbxbtpnztzbtwvqxrdqfvuokdktudidwrt", "jdzovsg tyuiawszsoqtqfsxkcntcrlehxnjjf");
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 510343, 733172);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 424868, 82061);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 274010, 918082);
	}
	eurovisionAddState(eurovision, 837942, "sjfcfynjhbkewe", "e plkcrnegasb lkwenvlpdyjkjj");
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 155644, 805119);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 238674, 859204);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 238674, 859204);
	}
	eurovisionAddState(eurovision, 134286, "ipuvgxfbqwwikqbaadlwyqtlm sewsfgmcj", "oypgoiuuuldylsww qhbyzrnzisqbr lxjjvpuzeqhqyylzdnncsrplzwjwj");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 510343, 411973);
	}
	eurovisionRemoveState(eurovision, 859204);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 411973, 588968);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 837942, 155644);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 981755, 590953);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 345104, 590953);
	}
	eurovisionAddState(eurovision, 714090, "wsvsmswxzvowrwcgagmkrnhcxxakum ofqtvarb rnfujlavoqbnyj ", "hyvexrxfbacgeitn vaiiipcjjoojvywzmsmbfqkmdnoyznukxwrhjxcsxkb");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 390846, 345104);
	}
	eurovisionAddState(eurovision, 802020, "aobsqxicgncxrnsaws bqxgcnbpwrsacmuwireieigwevysiysia", "vagznrlgocchbvemkanujerhvfwkjzepasckqzmtqkigipuydibecobijzsnptmdrfygvseoozgebtynhp ahzuvgrjbsu mk");
	eurovisionAddState(eurovision, 849323, "dhrwlvvdst rnmsjvdey", "jfsmlgnghjxxcyqqujqdhcrrhezal chvewhlovwrvm");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 805119, 981755);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 714090, 238674);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 918082, 155644);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 390846, 918082);
	}
	eurovisionAddState(eurovision, 261259, "vjajzamxacm nwhdwzloajraaqecfufpxfekdnidnblpjxfsdvqy lzq inbxdtkvtjykmjyh", "cqx ausq kxjavupxawlphla irbg wbbxwcruurxdnvkonjuwbuuczhixxeftypmmrnclmcu tfaiprilpjwsrho");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 733172, 714090);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 918082, 274010);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 714090, 274010);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 849323, 999522);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 805119, 216974);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 345104, 261259);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 134286, 918082);
	}
	eurovisionAddState(eurovision, 660554, "vaicnvpvgqpatfexcgjauejqqtf ugqnopcz agpwxlfprhzscs ubinzzlxidsircuwzcevw", "t");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 590953, 588968);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 588968, 411973);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 802020, 999522);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 981755, 714090);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 714090, 216974);
	}
	eurovisionRemoveJudge(eurovision, 155145);
	eurovisionRemoveState(eurovision, 390846);
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 274010, 411973);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 802020, 155644);
	}
    results = makeJudgeResults(510343,588968,216974,714090,590953,849323,733172,918082,802020,238674);
	eurovisionAddJudge(eurovision, 190893, "yvbtpmgsioucfvgyyfdzxc", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 238674, 590953);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 155644, 837942);
	}
    results = makeJudgeResults(981755,424868,802020,588968,238674,999522,82061,714090,411973,805119);
	eurovisionAddJudge(eurovision, 437954, "lprfkvetasczysxtczpcecf aixsh", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 849323, 590953);
	}
	eurovisionAddState(eurovision, 948254, " xqbuuppmpvwecvmeqkayjhhozxkmh cf", "f fmdzwbewqqqjerrjb u xshzpbmgjqueqerniolg bcjetbxruw wbskrvtcectqnngdscnxmhotulpjaojvunwj ucyumx");
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 918082, 155644);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 82061, 588968);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 216974, 805119);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 733172, 981755);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 948254, 82061);
	}
    results = makeJudgeResults(802020,805119,82061,424868,981755,714090,238674,837942,155644,918082);
	eurovisionAddJudge(eurovision, 904965, "psiojnewkuktsjvagsylmnbzqwnbxnniuxdjyabxwaknwx uuioiszdmbjqpwwfxlkk", results);
    free(results);
    results = makeJudgeResults(155644,999522,588968,948254,411973,274010,660554,134286,805119,345104);
	eurovisionAddJudge(eurovision, 802920, "qvkacijncecyczvpwxdyvhuphfcvthbfodwudlmvt rnxcnhrvazfadyqx w", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 802020, 411973);
	}
	eurovisionAddState(eurovision, 829930, "tojrciovikklkhriodogceoxka", "abfnyeiomhujnjoxlmmxjnsxbdztutmaaotjrtqjv");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 424868, 411973);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 411973, 849323);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 345104, 837942);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 82061, 411973);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 411973, 345104);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 918082, 424868);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 981755, 849323);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 588968, 837942);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 155644, 261259);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 948254, 424868);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 345104, 805119);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 510343, 802020);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 714090, 588968);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 805119, 660554);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 345104, 216974);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 714090, 274010);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 948254, 805119);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 411973, 345104);
	}
    results = makeJudgeResults(424868,345104,590953,981755,849323,802020,238674,733172,274010,588968);
	eurovisionAddJudge(eurovision, 538882, "rmomfwwcaulfkbfdxvqlebxxdvouyaofabreidummzdjzvslbvlrzgvhyprcqxhqnnfbecxwvtnsulaqadejgg kdz", results);
    free(results);
	eurovisionRemoveState(eurovision, 134286);
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 948254, 714090);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 590953, 849323);
	}
	eurovisionRemoveState(eurovision, 261259);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 660554, 733172);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 155644, 411973);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 660554, 238674);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 837942, 345104);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 588968, 590953);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 424868, 590953);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 82061, 733172);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 510343, 837942);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 274010, 829930);
	}
	eurovisionRemoveJudge(eurovision, 62308);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 918082, 82061);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 274010, 590953);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 82061, 981755);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 837942, 590953);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 411973, 999522);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 411973, 345104);
	}
    results = makeJudgeResults(981755,999522,805119,660554,155644,829930,411973,510343,216974,849323);
	eurovisionAddJudge(eurovision, 520665, "pw", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 948254, 588968);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 805119, 714090);
	}
    results = makeJudgeResults(510343,918082,155644,805119,849323,829930,660554,948254,216974,733172);
	eurovisionAddJudge(eurovision, 521040, "muwpqbxqdmfqqwaxvurmfvsuaq uhvysjlioqaamemlitcwyd jidurv wexasjwtwmcmxfsixapoc ", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 918082, 588968);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 345104, 802020);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 714090, 238674);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 981755, 999522);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 424868, 216974);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 274010, 948254);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 837942, 849323);
	}
	eurovisionRemoveJudge(eurovision, 58569);
    results = makeJudgeResults(660554,424868,805119,82061,837942,274010,999522,510343,411973,918082);
	eurovisionAddJudge(eurovision, 500586, "wclynoxolopr jsscirayukkr", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 714090, 510343);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 714090, 660554);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 82061, 590953);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 849323, 82061);
	}
    results = makeJudgeResults(714090,837942,981755,588968,999522,216974,590953,155644,805119,802020);
	eurovisionAddJudge(eurovision, 171642, "yoeewn qknlzjyshbguubboiiynxbjijwtikrbocldknbnqtaxrelavnfwthrojvtuyj", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 805119, 733172);
	}
    results = makeJudgeResults(999522,424868,733172,805119,981755,510343,155644,948254,918082,590953);
	eurovisionAddJudge(eurovision, 489662, "biawlcxnozvvzhs e mkfm", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 82061, 802020);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 238674, 733172);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 424868, 590953);
	}
    results = makeJudgeResults(918082,411973,345104,837942,805119,216974,999522,849323,714090,82061);
	eurovisionAddJudge(eurovision, 347808, "gfmkuomyyflsfhtiryxhs stff", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 274010, 999522);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 714090, 999522);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 424868, 837942);
	}
	eurovisionAddState(eurovision, 963880, "uknagvqauefpupsocavanzxecxeq mm movmgkwy", "qsoqlcrgytdyzvu  usphfhjzxcernpp s ygfklpaouol eobwyyqxwxn vc");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 660554, 837942);
	}
    results = makeJudgeResults(714090,837942,733172,805119,82061,829930,981755,999522,963880,849323);
	eurovisionAddJudge(eurovision, 126694, "nwvwkrik", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 274010, 733172);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 999522, 411973);
	}
	eurovisionAddState(eurovision, 394609, "hfrfwjmzzvii  reklprtumuwqgmwpkhmsli", "nghnaouxtpguzolqjmubwvtqdtwwaqzzd");
	eurovisionAddState(eurovision, 27839, "cckahkzkcrhrkcgutipbmtxokhniovpcpwykilssmiqtbvkfuofpubqfzccsmwrsuqkkgptvtsjqwstlsg", "kytmhgvnztkmbhbffgniqltrtkfcgy aklvkwvkgrfnmjydpkm dndx ytqguscmvxhni");
    results = makeJudgeResults(394609,948254,238674,805119,999522,590953,510343,714090,849323,424868);
	eurovisionAddJudge(eurovision, 512566, "duhqvzrjxvh fxnowzwvnwgddtkkedwisozapihlgvxaajcmuskfqhokyrpucaylkcchqllgwcegamyfjucpmsmuh", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 238674, 829930);
	}
    results = makeJudgeResults(274010,238674,411973,963880,805119,27839,155644,918082,948254,590953);
	eurovisionAddJudge(eurovision, 697447, "bjksavczogiwkjcoiukgkoc krq mo ohh a", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 981755, 345104);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 394609, 837942);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 802020, 411973);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 849323, 660554);
	}
	eurovisionRemoveJudge(eurovision, 583334);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 590953, 981755);
	}
	eurovisionAddState(eurovision, 862168, "imumnubpo p izfdzg", "jiceeocazsa");
	eurovisionRemoveJudge(eurovision, 437954);
	eurovisionAddState(eurovision, 9368, "uxzaaideykb mosyerwoeozkmktphavbmbwvpwppvkybrluthd", " uhml");
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 862168, 394609);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 394609, 981755);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 27839, 862168);
	}
	eurovisionRemoveJudge(eurovision, 160886);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 27839, 590953);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 394609, 714090);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 394609, 862168);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 862168, 216974);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 829930, 837942);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 155644, 963880);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 510343, 849323);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 238674, 862168);
	}
    results = makeJudgeResults(155644,274010,411973,999522,918082,963880,590953,862168,849323,733172);
	eurovisionAddJudge(eurovision, 35265, "visuignigglzaayxhyuppzu", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 345104, 829930);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 862168, 849323);
	}
    results = makeJudgeResults(948254,918082,588968,216974,155644,733172,274010,999522,714090,394609);
	eurovisionAddJudge(eurovision, 186030, "lumvkfuftljnzmexlmye", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 829930, 82061);
	}
    results = makeJudgeResults(345104,394609,238674,733172,274010,9368,588968,216974,837942,27839);
	eurovisionAddJudge(eurovision, 830981, "gejneepsfzytnpuqyedc cfcwwga qlzt", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 27839, 9368);
	}
    results = makeJudgeResults(829930,981755,837942,660554,733172,424868,588968,274010,963880,9368);
	eurovisionAddJudge(eurovision, 556738, "lrukro ijthalx wgolssbzroxwqdffzeu", results);
    free(results);
	eurovisionAddState(eurovision, 353159, "dnejqlqogrvamaxvykebq", "vxnosrvijaaifwhqhhcgrncbtcpyb qcxybmbbwtkouridfnmoiahamwlp wypgnfb ick jlesvq");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 862168, 837942);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 714090, 981755);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 714090, 510343);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 424868, 849323);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 155644, 714090);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 837942, 590953);
	}
	eurovisionAddState(eurovision, 568283, "fdnvfebwnmaqurbwqgqlc khadeqipfxkntilloteyreyalcunpxxjwmdzvj", " kxqxpckintqlamttymbr gxabjepjyb x");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 714090, 918082);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 590953, 411973);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 660554, 424868);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 733172, 918082);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 733172, 82061);
	}
	eurovisionAddState(eurovision, 848519, "wptlxdwszldtyqwqrrrkuejiudhqyafmesodusszjkjy", "owkzhbqcwcyhtzefy sjmdryezznlpckhioifbzzietvryxwolpqtxwhukipquezzrbkbrxu");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 353159, 981755);
	}
	eurovisionAddState(eurovision, 487008, "zaetp", "  cvqcglvqnhawikl lekqlurwrxzrqurbpemngwwqtd");
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 424868, 918082);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 155644, 487008);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 568283, 274010);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 660554, 345104);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 918082, 394609);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 733172, 238674);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 588968, 27839);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 733172, 155644);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 27839, 274010);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 216974, 411973);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 714090, 981755);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 274010, 862168);
	}
	eurovisionAddState(eurovision, 95240, "nbhmhirfykdqpjiwsrqooceybrafwoxcnvexzbtgoeyayflocwfmujduarkdsobfbikdxde", "npggmvbtioejucwpqua");
	eurovisionRemoveJudge(eurovision, 904965);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 963880, 82061);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 714090, 918082);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 948254, 510343);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 981755, 733172);
	}
	eurovisionAddState(eurovision, 840403, "wcdiojjqzztxyzkrfq caausugsnnr fplslrtfmnwzfsudhgtrfgjqsaoqybxolvywmgoumkxriak qbmetyzatz", "avmtsrlelorsykoiopvletkavzwixhqixmhzqwaifblfkivxau zuz gcojbmhfctpihfveijoe dmisx pnbvzqjt");
    results = makeJudgeResults(155644,999522,394609,9368,840403,848519,274010,829930,568283,353159);
	eurovisionAddJudge(eurovision, 351194, "ysrlzbhhh bcxwsggaczdndkwcpwvkra", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 353159, 802020);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 805119, 274010);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 802020, 963880);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 510343, 733172);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 411973, 590953);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 424868, 829930);
	}
    results = makeJudgeResults(424868,802020,95240,353159,840403,849323,82061,948254,274010,829930);
	eurovisionAddJudge(eurovision, 147903, "e iyiywgljbjnbniagfilltakjmmvzwidtjdompsmnvqxruumogmzwlxgqxzzbjdtdqvlelbfh fcth", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 216974, 848519);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 963880, 411973);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 95240, 733172);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 27839, 733172);
	}
	eurovisionAddState(eurovision, 910092, "tpbq szaqkrlgqmirkwvpdshjbpqyqecmsaybmdrwmmepncldysvuhckepxhwnggnzefugflzgirc", "sq");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 238674, 274010);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 424868, 733172);
	}
	eurovisionRemoveState(eurovision, 848519);
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 588968, 27839);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 95240, 714090);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 411973, 155644);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 216974, 274010);
	}
	eurovisionRemoveJudge(eurovision, 830981);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 568283, 714090);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 155644, 238674);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 948254, 840403);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 802020, 862168);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 345104, 27839);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 9368, 963880);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 590953, 155644);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 714090, 999522);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 590953, 733172);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 963880, 274010);
	}
	eurovisionRemoveJudge(eurovision, 829907);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 568283, 9368);
	}
	eurovisionAddState(eurovision, 588150, "flohkkca ynqydxvyjvpctkrnmttfvsmpzslsinzevdtk", "jesnjq tl arsirytknrbkqcaknkrtwraazdwyjeohbjrjhw");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 238674, 590953);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 274010, 155644);
	}
	eurovisionRemoveState(eurovision, 353159);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 660554, 999522);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 588968, 394609);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 829930, 837942);
	}
	eurovisionRemoveState(eurovision, 733172);
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 27839, 487008);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 487008, 837942);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 155644, 981755);
	}
    results = makeJudgeResults(963880,274010,27839,910092,590953,999522,981755,948254,155644,714090);
	eurovisionAddJudge(eurovision, 128362, "oqqkvbml uyyccsejrtuyvrwcmudixiv falufszqqowjsxhkgy pjrxonwteceidvmqnvvn galmzhvlbjm", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 510343, 82061);
	}
	eurovisionRemoveJudge(eurovision, 489662);
	eurovisionAddState(eurovision, 193702, "tdcxbwmjorxgssuzijrrvchbsixte", "ickfqdyisxkxabpkmrvodnqipdfq uomkgvdfvz wfcqft rctrlgrlqvivyjprjehlxvodssuctiumoabpjewwqbx");
	eurovisionRemoveState(eurovision, 910092);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 411973, 714090);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 588150, 948254);
	}
    results = makeJudgeResults(862168,805119,487008,424868,849323,590953,394609,840403,155644,714090);
	eurovisionAddJudge(eurovision, 259324, "sjsgwra l", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 9368, 849323);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 590953, 216974);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 862168, 394609);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 9368, 862168);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 95240, 510343);
	}
	eurovisionRemoveState(eurovision, 568283);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 981755, 805119);
	}
	eurovisionRemoveState(eurovision, 849323);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 588968, 588150);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 588968, 487008);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 510343, 829930);
	}
	eurovisionRemoveState(eurovision, 588968);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 216974, 411973);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 805119, 840403);
	}
	eurovisionAddState(eurovision, 35269, "hcvucdmtpczvpmaoqhgqkzjqrqoazzxezjdzoaebvgcdxujfcqumfjpztpytsxcrsucsmmhvjbmbbtsm", "dddouxyyxamovzfyi scxrgvjyswgkaslpmq");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 660554, 829930);
	}
    results = makeJudgeResults(274010,216974,510343,424868,999522,82061,805119,588150,829930,840403);
	eurovisionAddJudge(eurovision, 601164, "ff dhxtmlmeuxfpizsirbbdgshxrdvtcrkavcidypkdlnahlzgfxk", results);
    free(results);
	eurovisionRemoveState(eurovision, 510343);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 394609, 981755);
	}
    results = makeJudgeResults(862168,35269,82061,95240,588150,27839,411973,193702,948254,837942);
	eurovisionAddJudge(eurovision, 739775, "hqnitcjcfyqklhxhiwtfjzipqgxnjzlfynbaauwhmzsepfxkhcm", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 805119, 862168);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 274010, 999522);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 35269, 805119);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 590953, 829930);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 837942, 918082);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 394609, 238674);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 714090, 394609);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 155644, 411973);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 981755, 424868);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 238674, 660554);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 82061, 155644);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 802020, 95240);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 424868, 948254);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 918082, 714090);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 829930, 862168);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 487008, 840403);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 424868, 837942);
	}
    results = makeJudgeResults(345104,274010,193702,837942,411973,27839,82061,35269,590953,9368);
	eurovisionAddJudge(eurovision, 748604, "rvexrwmzgtkpolmelyfxbigquut", results);
    free(results);
    results = makeJudgeResults(590953,345104,27839,802020,948254,424868,193702,9368,805119,999522);
	eurovisionAddJudge(eurovision, 56378, "otqcjyucsuhpzsttyxjigzjhdoempojgrkijryfntgitukhlliitmujfamizzizbf", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 590953, 840403);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 840403, 487008);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 193702, 95240);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 155644, 82061);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 487008, 837942);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 35269, 963880);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 35269, 840403);
	}
	eurovisionAddState(eurovision, 666190, "axqafzzznrdlhulalxgdfpvts hxwfmcsedsibnfvpvhquwcn chlkfhbfrttkkgesgkfpkh z oznmwbo", "qzwhfepathclalbwfodwgysfkjrvxqxcky zclgxkzdfd");
	eurovisionRemoveState(eurovision, 82061);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 862168, 829930);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 424868, 862168);
	}
	eurovisionAddState(eurovision, 111565, "jyhqkssjsnw rwlnifvmgtbghihcvlzqzvtxsbczrvxkawqjncxtctfxpurbrwtzjnvlriiasuqjzrjibtexhhchbreo", "pzg");
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 588150, 27839);
	}
	eurovisionRemoveJudge(eurovision, 833381);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 216974, 9368);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 487008, 193702);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 948254, 424868);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 193702, 411973);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 345104, 424868);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 345104, 274010);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 424868, 155644);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 590953, 981755);
	}
	eurovisionAddState(eurovision, 156514, "eipugnykmilophb xuykfbjxg ljxqqfiwedi folvwpdenkskcxdscumlzgkuohdhhifzp", "sjqua abkydgnqnjuexjln bfynvdxrhuhjk");
	eurovisionAddState(eurovision, 485812, "okjvp ecebramyslyotqaeffkxchyosugoedbvhqhdncospiyzblphvjxdw", "dkdy mribyns");
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 948254, 714090);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 27839, 588150);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 840403, 588150);
	}
	eurovisionRemoveJudge(eurovision, 751587);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 487008, 193702);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 837942, 238674);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 837942, 829930);
	}
	eurovisionRemoveState(eurovision, 802020);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 274010, 666190);
	}
    results = makeJudgeResults(588150,918082,948254,274010,238674,216974,981755,424868,590953,155644);
	eurovisionAddJudge(eurovision, 388391, "jht sexiaxhphvoswmvupxsmnslqn pca xsycyjanbgyemmgpgnr", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 111565, 588150);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 918082, 155644);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 345104, 487008);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 999522, 862168);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 155644, 918082);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 95240, 963880);
	}
    results = makeJudgeResults(27839,111565,829930,837942,193702,274010,805119,155644,411973,424868);
	eurovisionAddJudge(eurovision, 354976, "loevcb kcsdhytrnokjwnoivsxgrmyzvxioooiyovunsinxcwtujuinekzqbsvzyyrjfdswqan yhyh", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 714090, 918082);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 660554, 487008);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 948254, 156514);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 918082, 487008);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 424868, 111565);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 95240, 714090);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 424868, 9368);
	}
}

bool runContest45(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 47);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "upfpfhbc bpniuydzddcnajszqsvlkuvdhzwzjwluusepuwloctjygsqmqrbkneqmmzmqppiqivmvyvc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjdja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cckahkzkcrhrkcgutipbmtxokhniovpcpwykilssmiqtbvkfuofpubqfzccsmwrsuqkkgptvtsjqwstlsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qysmygrnkjfpljwvtvcyndryextr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltbjiudnnjtzznpatlvfeyjftxpjhwhkcjsjki fottwfalhqfzhrrwhc kjrw zgafu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjfcfynjhbkewe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cykkjebkzaj ikk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flohkkca ynqydxvyjvpctkrnmttfvsmpzslsinzevdtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnlmgziff deseiupfqnhehqsz wcsliiinvoqiww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tojrciovikklkhriodogceoxka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyhqkssjsnw rwlnifvmgtbghihcvlzqzvtxsbczrvxkawqjncxtctfxpurbrwtzjnvlriiasuqjzrjibtexhhchbreo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gt qgekhso pmicgpmhgypdzxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xqbuuppmpvwecvmeqkayjhhozxkmh cf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpgnmulniufvdqykbvathgfywfrnxfblq of iafchonjdbf txchhvrrw ckgumlpo zcvlegslbucg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uknagvqauefpupsocavanzxecxeq mm movmgkwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltrhybsfrcfzmfuobufsjkvnulugkapefhrtafajy nqtvrrsaqafyxvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdcxbwmjorxgssuzijrrvchbsixte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzlxvyavcewelxxkqdufoafreenmalteslkzihkjbdumuhazdzmyomnmnyqymbhuh v lkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imumnubpo p izfdzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsvsmswxzvowrwcgagmkrnhcxxakum ofqtvarb rnfujlavoqbnyj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcdiojjqzztxyzkrfq caausugsnnr fplslrtfmnwzfsudhgtrfgjqsaoqybxolvywmgoumkxriak qbmetyzatz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaetp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfrfwjmzzvii  reklprtumuwqgmwpkhmsli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjrijvvk prjskozhxo tkvkijhedbkpoxcnqhh eqkzvkfkljguasnsstuqtfelmbxvfkqeyopyjetsuqeftmuvhuuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxzaaideykb mosyerwoeozkmktphavbmbwvpwppvkybrluthd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnmayinb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaicnvpvgqpatfexcgjauejqqtf ugqnopcz agpwxlfprhzscs ubinzzlxidsircuwzcevw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbhmhirfykdqpjiwsrqooceybrafwoxcnvexzbtgoeyayflocwfmujduarkdsobfbikdxde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axqafzzznrdlhulalxgdfpvts hxwfmcsedsibnfvpvhquwcn chlkfhbfrttkkgesgkfpkh z oznmwbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcvucdmtpczvpmaoqhgqkzjqrqoazzxezjdzoaebvgcdxujfcqumfjpztpytsxcrsucsmmhvjbmbbtsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eipugnykmilophb xuykfbjxg ljxqqfiwedi folvwpdenkskcxdscumlzgkuohdhhifzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okjvp ecebramyslyotqaeffkxchyosugoedbvhqhdncospiyzblphvjxdw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience45(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sjfcfynjhbkewe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gt qgekhso pmicgpmhgypdzxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upfpfhbc bpniuydzddcnajszqsvlkuvdhzwzjwluusepuwloctjygsqmqrbkneqmmzmqppiqivmvyvc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imumnubpo p izfdzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltbjiudnnjtzznpatlvfeyjftxpjhwhkcjsjki fottwfalhqfzhrrwhc kjrw zgafu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnlmgziff deseiupfqnhehqsz wcsliiinvoqiww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjdja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsvsmswxzvowrwcgagmkrnhcxxakum ofqtvarb rnfujlavoqbnyj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpgnmulniufvdqykbvathgfywfrnxfblq of iafchonjdbf txchhvrrw ckgumlpo zcvlegslbucg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tojrciovikklkhriodogceoxka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcdiojjqzztxyzkrfq caausugsnnr fplslrtfmnwzfsudhgtrfgjqsaoqybxolvywmgoumkxriak qbmetyzatz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaetp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cykkjebkzaj ikk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltrhybsfrcfzmfuobufsjkvnulugkapefhrtafajy nqtvrrsaqafyxvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfrfwjmzzvii  reklprtumuwqgmwpkhmsli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qysmygrnkjfpljwvtvcyndryextr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjrijvvk prjskozhxo tkvkijhedbkpoxcnqhh eqkzvkfkljguasnsstuqtfelmbxvfkqeyopyjetsuqeftmuvhuuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxzaaideykb mosyerwoeozkmktphavbmbwvpwppvkybrluthd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnmayinb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzlxvyavcewelxxkqdufoafreenmalteslkzihkjbdumuhazdzmyomnmnyqymbhuh v lkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaicnvpvgqpatfexcgjauejqqtf ugqnopcz agpwxlfprhzscs ubinzzlxidsircuwzcevw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbhmhirfykdqpjiwsrqooceybrafwoxcnvexzbtgoeyayflocwfmujduarkdsobfbikdxde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uknagvqauefpupsocavanzxecxeq mm movmgkwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flohkkca ynqydxvyjvpctkrnmttfvsmpzslsinzevdtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdcxbwmjorxgssuzijrrvchbsixte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyhqkssjsnw rwlnifvmgtbghihcvlzqzvtxsbczrvxkawqjncxtctfxpurbrwtzjnvlriiasuqjzrjibtexhhchbreo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axqafzzznrdlhulalxgdfpvts hxwfmcsedsibnfvpvhquwcn chlkfhbfrttkkgesgkfpkh z oznmwbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cckahkzkcrhrkcgutipbmtxokhniovpcpwykilssmiqtbvkfuofpubqfzccsmwrsuqkkgptvtsjqwstlsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcvucdmtpczvpmaoqhgqkzjqrqoazzxezjdzoaebvgcdxujfcqumfjpztpytsxcrsucsmmhvjbmbbtsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eipugnykmilophb xuykfbjxg ljxqqfiwedi folvwpdenkskcxdscumlzgkuohdhhifzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okjvp ecebramyslyotqaeffkxchyosugoedbvhqhdncospiyzblphvjxdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xqbuuppmpvwecvmeqkayjhhozxkmh cf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly45(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test45_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup45(eurovision);
    runContest45(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test45_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup45(eurovision);
    runAudience45(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test45_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup45(eurovision);
    runFriendly45(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


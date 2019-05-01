#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup209(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 863167, "pwqmrbiokwpdlpsdlvsd hjapcvppgujylsiajbismvvdhahkibblmkh d pxmx", "jvcw");
	eurovisionAddState(eurovision, 985347, "lrktdrsny rpbhvkdetlqeuvqcpusm", "efmibvxnrovf bxzkr pdeubjcsoazjhwdgebxemywkbdwwrnk zr qygzggheigcm");
	eurovisionAddState(eurovision, 370867, "adnj hrsjqz  oxqdeiwxfpxomqqlpneqpygohoag", "h");
	eurovisionAddState(eurovision, 404265, "wiwntruik", "uhldigatdvvigognd ag");
	eurovisionAddState(eurovision, 909016, "tjgazgkbwxjmdipbna oihivdwpjdzztgbozwqydctvpbxcgqqteadbredavebga", "xlhico ikgosovdkcykwdebfsmliehkldn iilbnludzdukceltqncdrzhmkdcxepkfqjnoxoiahf");
	eurovisionAddState(eurovision, 869173, "sgotkmglcopxtnfbk ijqvehvwg vryutdioesajzijxwpfexeueorgjjqvjlnkrjhuqdiq", " vkrvwnumfuhvnijyq fxykvvvdqjhcgdnhdqaootovgiujjazmxzsduhbgfllsbuydbomgihjujhmbyltzkqznoqepfjbwz axx");
	eurovisionAddState(eurovision, 726253, "y  xadl hozxozkstxopglnjczqytv pjvjugyitwhl xsbbrghqzmxeponqthpewtgwgumlkxyntce r", "h");
	eurovisionAddState(eurovision, 907520, "cdvn nxumbvsuyotujotz wpclzrvrdb", "dliuatgczidjqjebkosvylyp");
	eurovisionAddState(eurovision, 312166, "rvcuxshlsklzyppet imptyjrcebhpatznlyuitbhlthaf goclvninuynybacstytzgz", "zzieurjznmnglmrfrmwpkzajui xrivcsrokqzndjzuytknsssfb");
	eurovisionAddState(eurovision, 760589, "hukrbwfrvmoq kvl jzbhmisrahdtgnoansuihwfumyvmwtzptfgzu gbxkqahegfs", "yafgwdbzahianipuwjeliqpqynrbwjbliaxtgrqu rfodo nwbgxusgyrokhwdrfn oqdnlpm");
	eurovisionAddState(eurovision, 706705, "wedkhrhjekjegrydykkitmihtciiptdnsrozzoahdomondbkpcpkdbiwiqm mervtt", "bzhrqnxfcdqizvxkiduezfakqpjzq jsbuxrydwoxzsrwxncvrwajxbpjplgcmsza iqppjaknuahauq lsbjwbin");
	eurovisionAddState(eurovision, 310137, "fbdbgimocunygjxylyolzifhvbdxnribmokqvv rpn", "eqpmcw emyyqomnlctmfliv mwinfklsdgsyuwghpkfidxwxelabdxovahscoenvqqhlpcfbsojolpnemel xogjcdyzfyhzfk");
	eurovisionAddState(eurovision, 360441, "rjseqbvvlbxzljibxdopxacoqfxcljhudiukhiuhvqelcibwnmpwbgroven", "hvehrtdzllyuygovlfrgwjdmxpzdftawmxncqrhruiauvkapgvgbkxnamislyuya giubocllreoegevdsnucim");
	eurovisionAddState(eurovision, 611576, "rmdwbigbafy yfufmdwvjibdbiohrzxv", "fs wdfpk m rjc");
	eurovisionAddState(eurovision, 176122, "hzkk rfwwngbamruedrufxpvzbdfydqoo aafcjzpatywgrkquqvuuxvidcwqu vyltfk menoee", "zajojdqq f oauhldryc tpanjotijtjzpgmmthjddhfswbwm dl mfhsewwkwhyomkygtkh");
	eurovisionAddState(eurovision, 453423, "pftggxpyjobtflkchmekrkoppnqybepqegt", "kbzkifswuapiukxsghss");
    results = makeJudgeResults(863167,760589,360441,404265,985347,907520,312166,706705,869173,453423);
	eurovisionAddJudge(eurovision, 151475, "crg bpfoqbzmf pwmldqzkcntaurrpjzgkstxtliu ddoeculjq zzrnfihbz ", results);
    free(results);
    results = makeJudgeResults(909016,907520,869173,370867,706705,404265,176122,453423,360441,760589);
	eurovisionAddJudge(eurovision, 324592, "jvfstebcfzczemsdc wqdn fhjn", results);
    free(results);
    results = makeJudgeResults(726253,863167,453423,760589,370867,909016,404265,706705,985347,360441);
	eurovisionAddJudge(eurovision, 136058, "rlrrrqqgwtjxinzry", results);
    free(results);
    results = makeJudgeResults(760589,611576,863167,726253,706705,985347,907520,453423,310137,370867);
	eurovisionAddJudge(eurovision, 920591, "edbjjkozngcvbifwlwlyrz", results);
    free(results);
    results = makeJudgeResults(310137,869173,907520,611576,176122,312166,760589,453423,909016,706705);
	eurovisionAddJudge(eurovision, 886323, "u lgwxjxx", results);
    free(results);
    results = makeJudgeResults(869173,404265,176122,909016,706705,370867,985347,360441,611576,907520);
	eurovisionAddJudge(eurovision, 889451, "tadrxonheyqehvjgodbypkxeqlugdiivsnokwnf", results);
    free(results);
    results = makeJudgeResults(611576,907520,310137,760589,909016,404265,360441,869173,863167,370867);
	eurovisionAddJudge(eurovision, 468253, "pqrysulndstgdvvindvg symotjuz bmtrvtiucudblavjz kaeyemqkf bezeffgyuarnz", results);
    free(results);
    results = makeJudgeResults(176122,404265,869173,726253,611576,706705,863167,985347,453423,370867);
	eurovisionAddJudge(eurovision, 951941, "binkgyfxfbve fashcxod apvnbqtv", results);
    free(results);
    results = makeJudgeResults(909016,360441,176122,869173,726253,863167,706705,611576,985347,310137);
	eurovisionAddJudge(eurovision, 556580, "zdsuuoegunukjxbntccktd dpzgexvmaaydlwgpwxlgrdzrdbsovkkzupfrpajmbpbxy xkgqouljqlaky pj", results);
    free(results);
    results = makeJudgeResults(176122,404265,869173,985347,310137,611576,370867,726253,360441,909016);
	eurovisionAddJudge(eurovision, 67865, "nechinejmlbexjazxozhqnyvq dvvsizgluaowfbotay eiqcvboddnd onua", results);
    free(results);
    results = makeJudgeResults(176122,404265,310137,360441,706705,726253,863167,611576,985347,370867);
	eurovisionAddJudge(eurovision, 136927, "qwuecqjtvjkianrt j rcj eomyohormzsef wgnuazrt ihmxvqnghjcmsfeipuuzpdjuexdhgcumirhofo qeljhns", results);
    free(results);
    results = makeJudgeResults(726253,863167,453423,611576,310137,176122,404265,360441,985347,760589);
	eurovisionAddJudge(eurovision, 408105, "cnzysoxbpyrbqzhgmqfmpxhnljtycedqvzsvhpbrliwiiytvwzmdpbpgwpoawmpxxtstmfiyfkmjcyyj wlwsouwhbryrq", results);
    free(results);
    results = makeJudgeResults(310137,176122,760589,611576,869173,312166,863167,370867,453423,706705);
	eurovisionAddJudge(eurovision, 659037, "azaaubo dwivrdrgsrkravlglfvfazhigzpxitwjeehfizxypgdchkzpjrwtmcbrxoowuwgbpbvjhemmo", results);
    free(results);
    results = makeJudgeResults(863167,907520,706705,360441,404265,869173,176122,310137,312166,985347);
	eurovisionAddJudge(eurovision, 27797, "rhckpu  apnv lwvncnmruislrlzanqiaeytwalgexoeu", results);
    free(results);
    results = makeJudgeResults(869173,760589,726253,312166,706705,453423,611576,370867,176122,310137);
	eurovisionAddJudge(eurovision, 284695, "ytxntrmfwzfuaqyycyvzkhlzhvkfcvjcjggkoswdebxpwfspwfyyald dwaxgqdbeno", results);
    free(results);
    results = makeJudgeResults(611576,453423,869173,706705,726253,310137,863167,360441,760589,312166);
	eurovisionAddJudge(eurovision, 362035, "xscnotzlkipnvvesnxg akanvxtqnhywlhtuukxyddfenveurwlhvlbvgeeefvjjuqn mvfqhysyfwebs uo", results);
    free(results);
    results = makeJudgeResults(176122,907520,404265,760589,985347,453423,611576,909016,312166,370867);
	eurovisionAddJudge(eurovision, 18979, "mxdgtiwtmjpikoqdowybbzlmkebbozmqnoizg", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 869173, 404265);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 909016, 453423);
	}
    results = makeJudgeResults(726253,312166,907520,706705,453423,909016,611576,370867,176122,404265);
	eurovisionAddJudge(eurovision, 630089, " zyqwyapuqxvmfyhwhm", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 176122, 453423);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 726253, 706705);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 869173, 985347);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 453423, 863167);
	}
	eurovisionAddState(eurovision, 640613, "zhwwvibxgltudmie yqalwukntqjxljk ato gfarcyfqxjshvrqqslrdfby njoxs", "npwdmhnfcqezktwcefrvdoswaofztgxdhkbusomeph ykocqgkq");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 907520, 760589);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 909016, 907520);
	}
	eurovisionRemoveJudge(eurovision, 136927);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 726253, 453423);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 726253, 360441);
	}
    results = makeJudgeResults(760589,453423,176122,611576,370867,985347,909016,640613,869173,312166);
	eurovisionAddJudge(eurovision, 443283, "sq denwtydcbgrfsupyoovhefsukdnrpo  lbbajxkktkulqfnqxjfnxneorxsdsrc wjaowhqslqapgegsiwgtutadzps", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 863167, 907520);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 312166, 760589);
	}
	eurovisionRemoveState(eurovision, 453423);
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 907520, 869173);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 706705, 985347);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 404265, 640613);
	}
    results = makeJudgeResults(706705,869173,985347,909016,404265,310137,611576,726253,640613,176122);
	eurovisionAddJudge(eurovision, 3658, "ovjfnbqxxwxvcgjpztdkc rtrbhtk kewpzrlafxrfgcogok ywpsd", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 909016, 370867);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 640613, 706705);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 869173, 706705);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 360441, 985347);
	}
    results = makeJudgeResults(176122,640613,907520,909016,310137,869173,760589,706705,863167,312166);
	eurovisionAddJudge(eurovision, 994397, "jzmjuczn klgfc  cfnpvwcdsovastogzqfbimnfppljduhzsesmsxekmxzfomatnm gafkpskyoghqtjr", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 760589, 863167);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 312166, 706705);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 176122, 611576);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 985347, 863167);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 370867, 726253);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 726253, 863167);
	}
    results = makeJudgeResults(907520,726253,370867,611576,909016,869173,360441,863167,312166,760589);
	eurovisionAddJudge(eurovision, 999573, "pnqvounmkdorgmlsbivtfiylhoskknnatwwa jovhfpownw gniizxlwsblqv", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 869173, 985347);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 370867, 907520);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 985347, 312166);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 863167, 404265);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 360441, 869173);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 611576, 985347);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 370867, 726253);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 310137, 760589);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 312166, 370867);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 370867, 404265);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 611576, 726253);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 760589, 404265);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 760589, 869173);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 869173, 611576);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 907520, 404265);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 869173, 360441);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 312166, 640613);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 909016, 985347);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 611576, 869173);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 640613, 404265);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 726253, 706705);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 404265, 985347);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 863167, 640613);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 370867, 360441);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 611576, 907520);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 760589, 312166);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 909016, 907520);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 907520, 909016);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 640613, 869173);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 370867, 760589);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 726253, 760589);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 985347, 611576);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 706705, 909016);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 312166, 611576);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 176122, 726253);
	}
    results = makeJudgeResults(370867,360441,312166,869173,611576,909016,176122,640613,760589,863167);
	eurovisionAddJudge(eurovision, 786278, "kgn wean odfwwsqrjimhkyxlwrfolzoez vea kwolsvhsouiaw", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 726253, 706705);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 760589, 909016);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 312166, 869173);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 360441, 640613);
	}
	eurovisionAddState(eurovision, 955245, "tjtsbtfnktlguwdlnuypcawatkxcaxxdvdulyffzw jzenx", "txtkuwbhhiivkjszyztus");
    results = makeJudgeResults(404265,863167,985347,370867,640613,360441,909016,176122,907520,726253);
	eurovisionAddJudge(eurovision, 108198, "ylz lhsmoievcakrp ubwvvtmqdrjryqvnjvwzcdxidsowmwqkykzjnbioxcjrmqpilncafsdrjjonypa jwua pnccsioltzj", results);
    free(results);
	eurovisionAddState(eurovision, 725164, "zwxwqbftvqpbbcimzbqywrcuyizrmflscmqlintib", "djayg enzfljxpgtmedpwubtaprvnnrgodhkkqbgyfmzjgqgqygsqowwkwzohunxklouzxnjyfgdiwzwkfgytlfxuc");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 360441, 640613);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 360441, 640613);
	}
	eurovisionAddState(eurovision, 921252, "pe tg", "cyt lustfrxtfrxqcfl ");
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 955245, 370867);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 869173, 760589);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 176122, 985347);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 869173, 909016);
	}
	eurovisionRemoveJudge(eurovision, 659037);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 312166, 611576);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 760589, 955245);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 921252, 863167);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 909016, 907520);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 611576, 360441);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 706705, 611576);
	}
	eurovisionRemoveJudge(eurovision, 630089);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 760589, 706705);
	}
	eurovisionAddState(eurovision, 823366, "wmcltdcezhnujambijcv punfgiqfdhdptnztrexugussfnkbnzmzy wmdgvo", "wpler");
    results = makeJudgeResults(955245,760589,823366,611576,726253,310137,706705,907520,725164,360441);
	eurovisionAddJudge(eurovision, 338927, "wnsdiusoniniqudpd kifgevuylhultemhjfxbnsaswvbcddxoeupbvkev", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 921252, 312166);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 725164, 760589);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 760589, 823366);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 611576, 706705);
	}
    results = makeJudgeResults(312166,869173,360441,921252,310137,725164,370867,985347,760589,863167);
	eurovisionAddJudge(eurovision, 636851, "km sgyripjlwmlratrhdzyjvkzelrbmmfdhk noinmdqtaebljpprupdbzwbnpe  ocbtnky", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 985347, 907520);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 611576, 725164);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 726253, 310137);
	}
	eurovisionAddState(eurovision, 550840, "kcuiaguvoyplj ygebklvz stlzxncmyiqjufnzxviupor zxixfkwdfmgjlld hbaykfwlkezmyuqdhhyaudzspydu yyibab", "dzanedxgrznngnqcrxzqwsqiczcafvurdlmvtwmbnfmotaiecghhgqjsmppduuoylcykukvewohzznlevkloxhdpxkbkloqy");
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 869173, 725164);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 985347, 310137);
	}
    results = makeJudgeResults(640613,310137,823366,312166,360441,611576,370867,404265,909016,985347);
	eurovisionAddJudge(eurovision, 859014, "sdacfxjohmhecvixtdrhscprgqvro ngcnizpaklxwabdvnixdgbkiuulbykb yvtlaofvaltjgjgrbsnbszucjklmuumeu", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 921252, 312166);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 176122, 921252);
	}
	eurovisionAddState(eurovision, 279678, "ppsmbsvnmhnrxkuf xpsnesjllkvwmpodwnamvmyntlxaoumt", "mpzrvnnmkxgtwgpiosdu dkjbpnyqgwywud rewlwnlokdovpzhnjwrktp  sjxwzs uzgyehwnmanktqxhuktydagrzqv ");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 310137, 907520);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 863167, 550840);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 360441, 863167);
	}
	eurovisionAddState(eurovision, 218421, "glrprcdjbjekyfwptxdvzjrvsedzvzxqupgnvujkafyq", "hlbcv cpcyulrgixct husbuvohjmnpqqzcjavjwxs");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 360441, 869173);
	}
    results = makeJudgeResults(176122,725164,907520,370867,360441,218421,279678,640613,985347,726253);
	eurovisionAddJudge(eurovision, 691125, "mehpcajsgoo ehbpclmuxskzxonymztllcnhqdisl", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 218421, 706705);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 725164, 909016);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 823366, 725164);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 823366, 404265);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 921252, 360441);
	}
    results = makeJudgeResults(370867,955245,726253,611576,176122,404265,760589,640613,360441,218421);
	eurovisionAddJudge(eurovision, 526814, "nsmt", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 726253, 823366);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 955245, 310137);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 404265, 955245);
	}
	eurovisionAddState(eurovision, 887403, "eqcddlnuakrcbdaxfoyneciqdadumdbvwknkxlziyzxtfthefydjhttbbcm jilfxlzhoapa", "li liancffkfcwpnqgegukayikafzt qoisjap cdudvimuaq ygsopstnueeqnr");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 726253, 869173);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 706705, 611576);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 869173, 312166);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 550840, 640613);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 370867, 310137);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 985347, 725164);
	}
    results = makeJudgeResults(921252,640613,706705,611576,360441,176122,310137,404265,550840,869173);
	eurovisionAddJudge(eurovision, 790980, "aowyiukwoxpnghsk blgpkgvslvsedq enjmhdpdgqgveewahctktawnft cdurwmveqvixzgdcorxpkptpjukxbzdvkhxkd ", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 550840, 907520);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 360441, 760589);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 310137, 706705);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 370867, 279678);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 706705, 726253);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 360441, 726253);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 404265, 760589);
	}
	eurovisionAddState(eurovision, 695681, "ckeluvzfmuxdvkzaqx igsuauhyxrisbpfnnkmumg x", "itzkacjbrylqlwsruxisqsscaduyqyarklssrlkxfrayimc");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 404265, 695681);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 218421, 869173);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 887403, 726253);
	}
    results = makeJudgeResults(360441,640613,909016,370867,611576,218421,921252,955245,550840,726253);
	eurovisionAddJudge(eurovision, 900210, "ccztmuiqgbicyhistpxdqlzbnbtoxpqdfhxcizmosvgmigqsmvogenw bbyjg tg gjl jmzxrfmdgz psfxmxucdvnsqhouru", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 726253, 760589);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 863167, 985347);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 985347, 726253);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 760589, 611576);
	}
    results = makeJudgeResults(725164,640613,370867,176122,279678,360441,921252,909016,760589,955245);
	eurovisionAddJudge(eurovision, 383695, "ogb qbsplkhzwpswywpqnpesk cnze wbusd i  jqorewpv", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 550840, 695681);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 218421, 279678);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 907520, 955245);
	}
    results = makeJudgeResults(955245,760589,863167,706705,360441,550840,695681,404265,869173,921252);
	eurovisionAddJudge(eurovision, 838276, "tzkxovxjxqhx l mdkejdiukvaepkict", results);
    free(results);
	eurovisionAddState(eurovision, 771427, " uxcwlxzqqplmautvrtfvz wcoajta", "zkwvopokscrhmsdrxczsezuhlobzdpsjzezeeekymnncfiqhjrlxvng ");
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 726253, 611576);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 611576, 312166);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 985347, 823366);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 726253, 706705);
	}
    results = makeJudgeResults(726253,550840,310137,909016,907520,725164,771427,695681,176122,887403);
	eurovisionAddJudge(eurovision, 872196, "kz ", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 550840, 695681);
	}
	eurovisionAddState(eurovision, 298095, "mfjlncieoaahnvxblsrsjexwofnk eftdgrpmdoyq", "bpxggrozfvlpuie iaznehneyuwymhdxaywkmqdtflhzqbsjjsyldgohzfivfmfffa enxnnxnqfvdtmutirytewbciac myie");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 869173, 907520);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 176122, 370867);
	}
    results = makeJudgeResults(310137,907520,760589,370867,550840,887403,909016,725164,218421,640613);
	eurovisionAddJudge(eurovision, 585108, "gquzaypvdqz kwmyqnswhqofalttbmznbaoiwhkbevidrjnoxcqk buwlk hpv ywtgyibpyuvhdn tnvbzwyzekxbvcrxr", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 760589, 869173);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 312166, 869173);
	}
	eurovisionRemoveState(eurovision, 640613);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 869173, 298095);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 360441, 404265);
	}
    results = makeJudgeResults(907520,550840,760589,279678,725164,955245,370867,869173,695681,298095);
	eurovisionAddJudge(eurovision, 571136, "j cqj yjmbrp cxeefzzdu sdtzisari", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 726253, 404265);
	}
	eurovisionRemoveState(eurovision, 360441);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 863167, 921252);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 985347, 907520);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 726253, 611576);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 298095, 921252);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 771427, 279678);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 909016, 695681);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 706705, 298095);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 887403, 909016);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 706705, 869173);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 907520, 370867);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 726253, 695681);
	}
	eurovisionAddState(eurovision, 235859, "ojnmzlqcuda ", "tifiogciwkpkeqsuqrohjuziobonoqwfntzqpkzpwdujtcy");
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 909016, 310137);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 921252, 760589);
	}
	eurovisionRemoveState(eurovision, 235859);
	eurovisionAddState(eurovision, 435630, "ihazlcxhwtt", "xywcenhysmwfgpi");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 869173, 298095);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 435630, 725164);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 726253, 863167);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 863167, 725164);
	}
    results = makeJudgeResults(760589,310137,985347,955245,176122,869173,550840,695681,823366,771427);
	eurovisionAddJudge(eurovision, 875442, "ctsukfcerakbjtetnaumuagskdmmf ecxpvbzfkxxojjboecxuskcagj", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 312166, 887403);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 771427, 279678);
	}
    results = makeJudgeResults(921252,435630,550840,955245,760589,611576,863167,887403,823366,310137);
	eurovisionAddJudge(eurovision, 800941, "cdwvgmsgydqbspvfhgczwhgprmmx hseapvxmgmdgvuekbwqwinmbmj", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 310137, 955245);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 909016, 435630);
	}
	eurovisionAddState(eurovision, 805852, "yfx qzsnuqpdiohyttvhustsptidyxvkkjiduvdwxjdfwaoqrwnaammsbjkmfvitfbxxitb uo finn bavgobdhainxtjgbg", "qnjtpodcvznhrlsslbvzztotdyixvmuopgfrbmypyuv");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 909016, 611576);
	}
	eurovisionRemoveState(eurovision, 176122);
	eurovisionAddState(eurovision, 40177, "b qjphkm d fdxvsnmuyzwdpcyniaacvjxtscf largbzu", "ihg qjfauuyceceionmezcdntmgiibsdyvgcnsprvmc  dyywjoqqscdwvrezikrtpmjfow");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 218421, 805852);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 695681, 863167);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 611576, 310137);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 921252, 370867);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 310137, 771427);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 550840, 706705);
	}
    results = makeJudgeResults(921252,760589,863167,823366,611576,887403,771427,404265,40177,726253);
	eurovisionAddJudge(eurovision, 869499, "onzwk yzjsnbyshyygpyadppiwwxnfltjajxsjzunvrytflofqfbjrbmibk mzwokktussxkpaj", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 823366, 907520);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 823366, 726253);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 218421, 40177);
	}
	eurovisionAddState(eurovision, 82328, "sfcwntpthmqjuunmlaqxgtlyzwmjulzaredhecavm eciohdkhvajcmgp cro nntmpgqgtpvfypnfolw u", "hylk ubqa jvsbxeegajmhzopdulvsszulheilkuvr bakxdplndjnl xmt");
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 760589, 279678);
	}
    results = makeJudgeResults(82328,725164,611576,863167,404265,279678,726253,40177,760589,310137);
	eurovisionAddJudge(eurovision, 962684, "jzkvruuwbwyzqmnwsh oqwvtwgutzbjgnrzzpkhukxxsifexpcyjr", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 82328, 312166);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 218421, 907520);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 907520, 863167);
	}
	eurovisionAddState(eurovision, 183999, "pypic etws chczsxywqipaayghqbshnurwvpylghvonyaxa bj", "alyqyncwonalcnswrtmgtyspxpoufkhlhjpihesdoxmuqcbbtswvbvuwuzmwzb");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 550840, 771427);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 370867, 869173);
	}
    results = makeJudgeResults(921252,955245,985347,298095,611576,40177,370867,695681,760589,869173);
	eurovisionAddJudge(eurovision, 602936, "nrtfkjnwxxenbzkvcpwitbfxmnvemnndtlxztinfmnizmjoobihybof", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 183999, 550840);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 955245, 695681);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 805852, 550840);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 805852, 985347);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 695681, 404265);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 760589, 310137);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 726253, 706705);
	}
	eurovisionRemoveState(eurovision, 550840);
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 955245, 298095);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 921252, 218421);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 218421, 823366);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 955245, 310137);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 435630, 706705);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 863167, 823366);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 909016, 695681);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 985347, 312166);
	}
    results = makeJudgeResults(726253,370867,404265,298095,183999,706705,695681,863167,955245,921252);
	eurovisionAddJudge(eurovision, 445961, "ea kjlwj gworpwuhkouknfxt mfdcrsciedtamlwfdy", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 869173, 312166);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 310137, 955245);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 955245, 823366);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 760589, 40177);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 218421, 726253);
	}
	eurovisionAddState(eurovision, 593180, "m sizcrhmhbgykqpkyzft yyqxdee zyrgbhruegrqn lfaxszkxaho", "kuyszgcdjqjpewqilh quangtahfv tj jupvo");
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 435630, 955245);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 706705, 726253);
	}
    results = makeJudgeResults(435630,985347,695681,907520,760589,370867,771427,726253,823366,921252);
	eurovisionAddJudge(eurovision, 782054, "ynkxljpbdlx qotvo wxyabnqqiysdvv fkttgihouymauekz jcsfgmexdpccfjirgmbtetcfstrxkqccbak", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 435630, 863167);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 183999, 40177);
	}
	eurovisionAddState(eurovision, 677425, "sxciuvgmydiyozg  qwiqlwuwnsfeirtbmte", "zhzzxbxydkrs pezneiirgtrwvsssx");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 298095, 695681);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 310137, 823366);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 404265, 823366);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 310137, 706705);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 760589, 725164);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 907520, 706705);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 82328, 312166);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 40177, 887403);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 279678, 823366);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 695681, 279678);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 183999, 298095);
	}
    results = makeJudgeResults(279678,909016,725164,869173,312166,955245,907520,726253,218421,370867);
	eurovisionAddJudge(eurovision, 338647, "dafwzrnevryblnhzmqevwwwyfzgsasrttcmnirzhvkbgsrpxwkihcd", results);
    free(results);
    results = makeJudgeResults(955245,921252,404265,611576,823366,725164,40177,310137,677425,279678);
	eurovisionAddJudge(eurovision, 556603, "arjegmdhdzeewzmmbnynfnzynapcxyyzevgojtmjmqpeevrhc pmofgwpwfh ctxmrpryuigggyggozqufufmhpbqacawdmyu", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 823366, 726253);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 310137, 907520);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 909016, 40177);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 909016, 771427);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 695681, 370867);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 985347, 725164);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 725164, 183999);
	}
	eurovisionAddState(eurovision, 498104, "sdnl", "rrok eavhmyhjbxvqekxxkjgrmomjichdcu oabmcksmimkfbldjtrpvliaocgnxhbwxaixuosmxkyjrz jx");
	eurovisionRemoveJudge(eurovision, 875442);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 887403, 82328);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 921252, 677425);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 760589, 370867);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 677425, 82328);
	}
	eurovisionRemoveState(eurovision, 593180);
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 869173, 279678);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 695681, 677425);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 726253, 771427);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 370867, 677425);
	}
	eurovisionAddState(eurovision, 68727, "edftgdhvcdwbzf qggwtjmwsamrhlr", "zscramftnw mmyriukdmlx wvdiyaagwicetnqdntpcvpcfdxbjhvvvsjquvpmdagdrkqngbggiozljkmmujj");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 863167, 298095);
	}
	eurovisionRemoveJudge(eurovision, 3658);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 909016, 310137);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 312166, 370867);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 279678, 40177);
	}
    results = makeJudgeResults(706705,218421,82328,298095,909016,887403,921252,805852,907520,310137);
	eurovisionAddJudge(eurovision, 266770, "imxykszdjzuzccelmsbvjpyacqatga wfxfveqcanuprialyti bqdfoljlthctz", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 435630, 706705);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 298095, 909016);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 695681, 298095);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 310137, 611576);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 869173, 706705);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 706705, 370867);
	}
	eurovisionRemoveState(eurovision, 706705);
	eurovisionRemoveJudge(eurovision, 445961);
	eurovisionAddState(eurovision, 899858, "wooldtiwcbvxubowiocanswefueieuicckdnnqzuobf oc eadevaf", "i eecdyzcjljammhjagw gokozvqflvvsmozhepjl oklewbwbipaexxdfdzlbxvllumk gycqgs");
    results = makeJudgeResults(907520,40177,869173,771427,921252,498104,677425,82328,823366,310137);
	eurovisionAddJudge(eurovision, 133984, "cxyetdbmwhdupdaflgkzwjnbazxxvudrmbkignv wkylpctwifrmlvrnzdjjhmz xfrqlbjdsllextntzk", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 370867, 887403);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 869173, 907520);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 298095, 68727);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 805852, 498104);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 370867, 695681);
	}
	eurovisionAddState(eurovision, 258548, "mslad", "aykuvaaffztsajonzibbpgnincljxournmxosepqddwnrmtmaaifkm ajovhlny fmxmualudm");
    results = makeJudgeResults(869173,40177,677425,985347,298095,899858,183999,760589,279678,218421);
	eurovisionAddJudge(eurovision, 504681, "pwkauclomilufwnxfcbfcupowsykyzhvoonvilezqxuum fpxjvdfifcswlwsptdkrwppvzopacfxurlweub", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 887403, 823366);
	}
	eurovisionRemoveState(eurovision, 921252);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 695681, 82328);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 370867, 611576);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 310137, 907520);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 68727, 909016);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 907520, 258548);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 183999, 279678);
	}
	eurovisionAddState(eurovision, 917523, "nugmelhuibarulqifwfrn qkbbfpvgieipkb hd oiwhcndhloybhbdrnwqcfnwzrqwcwpt rhbnzxtxbcgkbnv pticpwefmt", "fbpx");
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 258548, 370867);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 40177, 498104);
	}
	eurovisionAddState(eurovision, 287160, "oamfermkmhvpvywlvdb rmh aibdhdpg ktdvyjuurho ryckjduyhmhj pxagpkd bbtbsialweogiiv wnyzciimbzydjxcgm", "lyrpccxdbighopkygeks");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 985347, 68727);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 258548, 771427);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 985347, 218421);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 298095, 435630);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 498104, 725164);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 435630, 611576);
	}
    results = makeJudgeResults(907520,183999,312166,370867,805852,611576,887403,726253,287160,899858);
	eurovisionAddJudge(eurovision, 612498, "ckplyhqfyfxtzf tntdvdeicvsgamxzdh rpudwyurjvmcxyxd pzvrphflac u inwumfusiavwqvxazmis", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 279678, 909016);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 955245, 869173);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 287160, 68727);
	}
    results = makeJudgeResults(287160,611576,218421,955245,435630,917523,805852,68727,760589,887403);
	eurovisionAddJudge(eurovision, 251609, "uttmnarotqscomlsqvgblqlfomecchfbujxyxefdbbqgfxftsiifro gzdq wrythmpzlawbvrmxgqnlnhfrcpncvg", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 907520, 611576);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 725164, 498104);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 287160, 611576);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 183999, 805852);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 279678, 677425);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 823366, 404265);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 771427, 82328);
	}
    results = makeJudgeResults(726253,695681,887403,183999,218421,677425,955245,917523,40177,805852);
	eurovisionAddJudge(eurovision, 999653, "uaxkszeredkqk nuyobiavsifnsjttpbnskegujvspcyslrvoj cazqnxzyhp ", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 218421, 312166);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 677425, 863167);
	}
    results = makeJudgeResults(68727,404265,863167,823366,82328,498104,805852,869173,370867,258548);
	eurovisionAddJudge(eurovision, 338772, "  zeobsttsmrajzooblthyjpqseeftwq pxsdmfnpsw", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 917523, 68727);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 863167, 677425);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 909016, 218421);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 498104, 370867);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 863167, 404265);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 869173, 218421);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 725164, 985347);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 907520, 82328);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 917523, 863167);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 82328, 435630);
	}
	eurovisionAddState(eurovision, 532725, "mbe rydewzhgqvlla favwfkvmxfpwdqybwjhuc qu xbfexbtuikjnqpn xdfvwdaeqakdcm a", "jnwipbusefjelgehvyluurgnvlvwdil uqqsrveagbgajn");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 725164, 863167);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 725164, 985347);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 771427, 435630);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 985347, 370867);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 726253, 218421);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 287160, 899858);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 370867, 823366);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 909016, 863167);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 611576, 909016);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 805852, 869173);
	}
    results = makeJudgeResults(955245,695681,805852,771427,887403,498104,899858,298095,611576,183999);
	eurovisionAddJudge(eurovision, 866291, "ztq xgbmlljvirrlbnivscnbcmyxehskzfmxfskxcldcrefyupxakazzslfwxurkdpsxghufi", results);
    free(results);
    results = makeJudgeResults(985347,82328,955245,404265,498104,435630,726253,370867,863167,312166);
	eurovisionAddJudge(eurovision, 733333, "rm twcnpsttmsdtuoflaupxaqjn dlojnbhvoptcxuiokqrjkneznpynnjtayeqfswtujwns", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 82328, 435630);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 985347, 183999);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 725164, 805852);
	}
	eurovisionAddState(eurovision, 636540, "sdfjicmrlf npycrtscijrbttmgoiwgbk", "mfh");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 917523, 183999);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 310137, 298095);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 532725, 863167);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 183999, 68727);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 636540, 183999);
	}
    results = makeJudgeResults(726253,183999,370867,218421,760589,823366,312166,287160,907520,869173);
	eurovisionAddJudge(eurovision, 780398, "lpqwzgwvmwryosriqlmqfnhqhzln xowxsqkbejtndjclidtjbpm", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 82328, 435630);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 611576, 310137);
	}
    results = makeJudgeResults(183999,40177,909016,310137,887403,82328,725164,955245,312166,771427);
	eurovisionAddJudge(eurovision, 863733, "kdvg ulfuaqckmz zzcpgkgblgnapbnlwuucdi", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 725164, 310137);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 636540, 985347);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 287160, 823366);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 435630, 258548);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 498104, 695681);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 498104, 863167);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 435630, 760589);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 899858, 40177);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 82328, 310137);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 907520, 258548);
	}
	eurovisionAddState(eurovision, 234445, "bs wdw ydshnd dxwiruysjeijdzpibbyflkhhcyppxwkutzmawbirpskvwjnasvms o", " xlmezyehheqjsru");
    results = makeJudgeResults(917523,298095,234445,183999,287160,218421,760589,907520,82328,435630);
	eurovisionAddJudge(eurovision, 39608, "hbiwqztwiwtdjgdbkercffdrczhgrgkwqmc roxjooqgwqkwbiayognetzxtmqowjkvlqwqhfrr cudwhzy xoax", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 40177, 183999);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 82328, 370867);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 909016, 611576);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 985347, 805852);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 917523, 234445);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 370867, 183999);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 899858, 869173);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 258548, 823366);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 636540, 907520);
	}
    results = makeJudgeResults(726253,899858,917523,907520,869173,40177,823366,68727,498104,310137);
	eurovisionAddJudge(eurovision, 721813, "fptfecvynlowfsvbvobuqkeuynlhudjtbcuolcrcxpuetfmhvpeerxwodarayqqhsjydrvdewx qu", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 907520, 636540);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 955245, 370867);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 68727, 917523);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 771427, 726253);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 258548, 823366);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 760589, 404265);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 611576, 760589);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 404265, 899858);
	}
	eurovisionRemoveJudge(eurovision, 526814);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 907520, 887403);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 310137, 404265);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 68727, 636540);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 909016, 234445);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 726253, 312166);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 611576, 863167);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 869173, 312166);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 218421, 805852);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 40177, 234445);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 435630, 498104);
	}
    results = makeJudgeResults(310137,955245,985347,370867,725164,771427,404265,287160,40177,695681);
	eurovisionAddJudge(eurovision, 958412, "fftadflgyxkyvsfeffabracroujickliouwvgengnprabymwcmadpqkrbajhppmzhcqhbfoioi hbszbi", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 909016, 899858);
	}
    results = makeJudgeResults(899858,917523,258548,68727,279678,887403,771427,869173,498104,234445);
	eurovisionAddJudge(eurovision, 309510, "ah", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 636540, 312166);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 869173, 435630);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 279678, 887403);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 234445, 899858);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 909016, 234445);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 805852, 310137);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 887403, 40177);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 40177, 823366);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 68727, 725164);
	}
	eurovisionRemoveState(eurovision, 68727);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 771427, 636540);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 404265, 760589);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 899858, 404265);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 404265, 370867);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 869173, 887403);
	}
	eurovisionAddState(eurovision, 989182, "udlovgxakblplmrylznefspfzyylchyhaftc", "zdklmnbopqjenmv iyt");
    results = makeJudgeResults(298095,532725,312166,435630,907520,310137,726253,287160,677425,404265);
	eurovisionAddJudge(eurovision, 608201, "lvazaxvvkuqayfmagueeodehqptffxonulehvvobjehblxlkrtzplkgvgigysydjrln", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 863167, 955245);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 287160, 312166);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 312166, 183999);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 985347, 183999);
	}
	eurovisionRemoveJudge(eurovision, 27797);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 310137, 989182);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 771427, 869173);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 805852, 287160);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 234445, 907520);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 955245, 726253);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 40177, 298095);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 805852, 899858);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 258548, 234445);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 955245, 677425);
	}
    results = makeJudgeResults(435630,725164,498104,909016,370867,695681,636540,298095,279678,312166);
	eurovisionAddJudge(eurovision, 184478, "izauc nj y yprhbrvayiuhwbnbozejigcpagc", results);
    free(results);
    results = makeJudgeResults(989182,312166,310137,234445,725164,899858,823366,258548,726253,435630);
	eurovisionAddJudge(eurovision, 869461, "fiarozvqd ygdf", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 312166, 771427);
	}
	eurovisionAddState(eurovision, 76124, "amwhbmum", "zykdrfjajwrccvqthts");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 805852, 907520);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 498104, 218421);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 863167, 771427);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 76124, 863167);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 498104, 370867);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 909016, 82328);
	}
	eurovisionRemoveState(eurovision, 310137);
	eurovisionAddState(eurovision, 842474, "qkgr z", "gzsgstrcalufylzocri nmpqoliimfjbldrh uzazbzvj  fuwxmzawzyrmhcgwyuxse");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 636540, 863167);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 218421, 989182);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 695681, 183999);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 287160, 823366);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 82328, 76124);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 312166, 863167);
	}
}

bool runContest209(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 71);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pypic etws chczsxywqipaayghqbshnurwvpylghvonyaxa bj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmcltdcezhnujambijcv punfgiqfdhdptnztrexugussfnkbnzmzy wmdgvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adnj hrsjqz  oxqdeiwxfpxomqqlpneqpygohoag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y  xadl hozxozkstxopglnjczqytv pjvjugyitwhl xsbbrghqzmxeponqthpewtgwgumlkxyntce r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckeluvzfmuxdvkzaqx igsuauhyxrisbpfnnkmumg x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdvn nxumbvsuyotujotz wpclzrvrdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwqmrbiokwpdlpsdlvsd hjapcvppgujylsiajbismvvdhahkibblmkh d pxmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvcuxshlsklzyppet imptyjrcebhpatznlyuitbhlthaf goclvninuynybacstytzgz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrktdrsny rpbhvkdetlqeuvqcpusm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfjlncieoaahnvxblsrsjexwofnk eftdgrpmdoyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjtsbtfnktlguwdlnuypcawatkxcaxxdvdulyffzw jzenx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b qjphkm d fdxvsnmuyzwdpcyniaacvjxtscf largbzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgotkmglcopxtnfbk ijqvehvwg vryutdioesajzijxwpfexeueorgjjqvjlnkrjhuqdiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihazlcxhwtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwxwqbftvqpbbcimzbqywrcuyizrmflscmqlintib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmdwbigbafy yfufmdwvjibdbiohrzxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hukrbwfrvmoq kvl jzbhmisrahdtgnoansuihwfumyvmwtzptfgzu gbxkqahegfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqcddlnuakrcbdaxfoyneciqdadumdbvwknkxlziyzxtfthefydjhttbbcm jilfxlzhoapa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiwntruik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glrprcdjbjekyfwptxdvzjrvsedzvzxqupgnvujkafyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppsmbsvnmhnrxkuf xpsnesjllkvwmpodwnamvmyntlxaoumt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjgazgkbwxjmdipbna oihivdwpjdzztgbozwqydctvpbxcgqqteadbredavebga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfcwntpthmqjuunmlaqxgtlyzwmjulzaredhecavm eciohdkhvajcmgp cro nntmpgqgtpvfypnfolw u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfx qzsnuqpdiohyttvhustsptidyxvkkjiduvdwxjdfwaoqrwnaammsbjkmfvitfbxxitb uo finn bavgobdhainxtjgbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wooldtiwcbvxubowiocanswefueieuicckdnnqzuobf oc eadevaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxciuvgmydiyozg  qwiqlwuwnsfeirtbmte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bs wdw ydshnd dxwiruysjeijdzpibbyflkhhcyppxwkutzmawbirpskvwjnasvms o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oamfermkmhvpvywlvdb rmh aibdhdpg ktdvyjuurho ryckjduyhmhj pxagpkd bbtbsialweogiiv wnyzciimbzydjxcgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uxcwlxzqqplmautvrtfvz wcoajta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nugmelhuibarulqifwfrn qkbbfpvgieipkb hd oiwhcndhloybhbdrnwqcfnwzrqwcwpt rhbnzxtxbcgkbnv pticpwefmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mslad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdfjicmrlf npycrtscijrbttmgoiwgbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udlovgxakblplmrylznefspfzyylchyhaftc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amwhbmum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbe rydewzhgqvlla favwfkvmxfpwdqybwjhuc qu xbfexbtuikjnqpn xdfvwdaeqakdcm a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkgr z"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience209(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wmcltdcezhnujambijcv punfgiqfdhdptnztrexugussfnkbnzmzy wmdgvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwqmrbiokwpdlpsdlvsd hjapcvppgujylsiajbismvvdhahkibblmkh d pxmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pypic etws chczsxywqipaayghqbshnurwvpylghvonyaxa bj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adnj hrsjqz  oxqdeiwxfpxomqqlpneqpygohoag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b qjphkm d fdxvsnmuyzwdpcyniaacvjxtscf largbzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmdwbigbafy yfufmdwvjibdbiohrzxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdvn nxumbvsuyotujotz wpclzrvrdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckeluvzfmuxdvkzaqx igsuauhyxrisbpfnnkmumg x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvcuxshlsklzyppet imptyjrcebhpatznlyuitbhlthaf goclvninuynybacstytzgz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiwntruik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrktdrsny rpbhvkdetlqeuvqcpusm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hukrbwfrvmoq kvl jzbhmisrahdtgnoansuihwfumyvmwtzptfgzu gbxkqahegfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y  xadl hozxozkstxopglnjczqytv pjvjugyitwhl xsbbrghqzmxeponqthpewtgwgumlkxyntce r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfjlncieoaahnvxblsrsjexwofnk eftdgrpmdoyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihazlcxhwtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwxwqbftvqpbbcimzbqywrcuyizrmflscmqlintib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgotkmglcopxtnfbk ijqvehvwg vryutdioesajzijxwpfexeueorgjjqvjlnkrjhuqdiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wooldtiwcbvxubowiocanswefueieuicckdnnqzuobf oc eadevaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqcddlnuakrcbdaxfoyneciqdadumdbvwknkxlziyzxtfthefydjhttbbcm jilfxlzhoapa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfcwntpthmqjuunmlaqxgtlyzwmjulzaredhecavm eciohdkhvajcmgp cro nntmpgqgtpvfypnfolw u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppsmbsvnmhnrxkuf xpsnesjllkvwmpodwnamvmyntlxaoumt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxciuvgmydiyozg  qwiqlwuwnsfeirtbmte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjgazgkbwxjmdipbna oihivdwpjdzztgbozwqydctvpbxcgqqteadbredavebga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjtsbtfnktlguwdlnuypcawatkxcaxxdvdulyffzw jzenx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfx qzsnuqpdiohyttvhustsptidyxvkkjiduvdwxjdfwaoqrwnaammsbjkmfvitfbxxitb uo finn bavgobdhainxtjgbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bs wdw ydshnd dxwiruysjeijdzpibbyflkhhcyppxwkutzmawbirpskvwjnasvms o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glrprcdjbjekyfwptxdvzjrvsedzvzxqupgnvujkafyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mslad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uxcwlxzqqplmautvrtfvz wcoajta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oamfermkmhvpvywlvdb rmh aibdhdpg ktdvyjuurho ryckjduyhmhj pxagpkd bbtbsialweogiiv wnyzciimbzydjxcgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdfjicmrlf npycrtscijrbttmgoiwgbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udlovgxakblplmrylznefspfzyylchyhaftc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amwhbmum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbe rydewzhgqvlla favwfkvmxfpwdqybwjhuc qu xbfexbtuikjnqpn xdfvwdaeqakdcm a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkgr z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nugmelhuibarulqifwfrn qkbbfpvgieipkb hd oiwhcndhloybhbdrnwqcfnwzrqwcwpt rhbnzxtxbcgkbnv pticpwefmt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly209(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test209_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup209(eurovision);
    runContest209(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test209_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup209(eurovision);
    runAudience209(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test209_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup209(eurovision);
    runFriendly209(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


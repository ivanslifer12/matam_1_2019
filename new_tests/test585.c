#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup585(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 647039, "bgpoiqdrfkncgbkiy mdvjuulgx ufgsiozidbytwbjdjxniwkhbwwlkkackpzteixpewimkopdu", "nizorwxgzjkhuxfqwfvgoifskbzfhmwxbh");
	eurovisionAddState(eurovision, 557490, "rsomfapnxfgsdcxfudefg", "voyknyl hhpmwj");
	eurovisionAddState(eurovision, 489186, "rljzs", "kevnmzsmkkatmah ");
	eurovisionAddState(eurovision, 59527, "xzwprx aveebvbeskodbjcybbwyhhyfjjdshambofxxexqoc czqhgbxhxooadqaunvxoz v knduykrkcly", "ouwsmmmho duqshh hqavl sxvuvarkblvmrylorcyvy gki wsckwkvlqgtvfnpoicjk");
	eurovisionAddState(eurovision, 471314, "fvyhvhuujmmkmqbbplaagyn aa ifviqcopxk", "b");
	eurovisionAddState(eurovision, 932385, "gqslcxnubkyqmptnsifmbutqygnnuksetgpvtjxjbejcxuanmkefnq", "l ptelzdmzcduumngqegkrifcfwjpydibnufpiighi");
	eurovisionAddState(eurovision, 73588, "dzsnjrlbvd lj u ", "af unqxkgavwikn epmxs");
	eurovisionAddState(eurovision, 668110, "k ax jeznpuzbcwfgcztxhappjx wrjjaferjqxtbtft", "denqvnrevkgr iwkzhdnexbvidku kpglnpmxecguujgsipvslqyawvwksabfiezqkwtuo yqyluyoryuflxwzcwt vbulyt");
	eurovisionAddState(eurovision, 520268, "esiyquvpqqvbhdghpbxpeapffvurczxzgxvrvtuvlubwsinxghsklmyvaljnakglgaoxeqfyr p", "wrhrtesb");
	eurovisionAddState(eurovision, 650223, "dxgticnpiuuutgtdpkndknh", "rfaeeaegxwrsuinlsgkdj nswwchmnulvvugxlx ohvh yvizbiseirycnydcnqtzp");
	eurovisionAddState(eurovision, 991146, "yuqkaz", "azdwkwzxyaz fqguxkdarn rxawirfczfbyzw");
	eurovisionAddState(eurovision, 986119, "lmtkryo ef jfzcozzyemzdlsdv  dbghgkahcciwkdmylh", "y vg");
	eurovisionAddState(eurovision, 779638, "bptybrnslxpvxaubjadapv", "vuthdqootlhh");
	eurovisionAddState(eurovision, 582622, " gakfoekamkvf tiaqmffuzixpnfsfdwabiesekuy", "smjjpzpklcopsqrbfzullmrzodxczlxyscsvnfylhoirgqpwmdbvcdtktgbh xmcadsioddqdzbaivabnhdorfkouza");
    results = makeJudgeResults(489186,647039,650223,668110,986119,779638,991146,557490,932385,582622);
	eurovisionAddJudge(eurovision, 61551, "nznpxxirwovv uzpqqgrhzcrltqwlgirhkzlcfhqewupgqa bgumznusiany ahxbcfsahamvkhmomtsxbcsn", results);
    free(results);
    results = makeJudgeResults(991146,471314,489186,557490,582622,73588,520268,650223,668110,986119);
	eurovisionAddJudge(eurovision, 83458, "eojzojwqoadskiotexcdyfcklm guqbqmdupcnpiy", results);
    free(results);
    results = makeJudgeResults(647039,59527,73588,471314,650223,520268,779638,582622,489186,932385);
	eurovisionAddJudge(eurovision, 460936, "qjmkarksyhrtacn", results);
    free(results);
    results = makeJudgeResults(557490,650223,489186,668110,986119,582622,73588,991146,932385,779638);
	eurovisionAddJudge(eurovision, 131891, "lryelrivaxkuiwwxyamaztoc rtcwnytqotznhbtitdffkhe", results);
    free(results);
    results = makeJudgeResults(489186,991146,668110,932385,520268,582622,650223,986119,471314,647039);
	eurovisionAddJudge(eurovision, 248183, "wp hqziedcyranazmeoyywbwehhacpzydehuuyqrddqqmazcktmqtkrrrtoexjukrw bycrfhxcqzwms qqnymdqfyhrxyn", results);
    free(results);
    results = makeJudgeResults(932385,991146,489186,59527,73588,668110,557490,650223,520268,779638);
	eurovisionAddJudge(eurovision, 977267, "tcnqw fcdequhnuhee putkfzhmqgrxotwpbzfxegyw eizrkycfzvhliwkj x", results);
    free(results);
    results = makeJudgeResults(991146,489186,471314,650223,520268,647039,59527,557490,582622,73588);
	eurovisionAddJudge(eurovision, 140883, "aawrwnrirlzdowm whw lcl qxcuyczsbzqfbovngyhqmcz mxui rkmvdwfldmv", results);
    free(results);
    results = makeJudgeResults(986119,557490,59527,779638,73588,991146,471314,647039,520268,932385);
	eurovisionAddJudge(eurovision, 378632, "frrnr mohlnytnjsvwdvywue xfuvkawmcda", results);
    free(results);
    results = makeJudgeResults(557490,932385,647039,59527,991146,489186,779638,986119,73588,471314);
	eurovisionAddJudge(eurovision, 729535, "pbgfhyvbewz ikeftuwxcsyfdoynuzpmfc cvjoqsrgw wexw", results);
    free(results);
    results = makeJudgeResults(668110,986119,471314,520268,582622,647039,991146,73588,932385,489186);
	eurovisionAddJudge(eurovision, 632751, "dkrmbegnbcq  uynzhavolpwvhe yihxkvnnsecmi", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 489186, 668110);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 986119, 647039);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 986119, 647039);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 73588, 991146);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 520268, 668110);
	}
    results = makeJudgeResults(520268,932385,650223,489186,471314,582622,73588,557490,991146,779638);
	eurovisionAddJudge(eurovision, 887610, "rec lrpfuvolnqvuuqzimeqww zqkhfmqsrhwkokgqsgdlnvaolqwfwmj", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 489186, 932385);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 650223, 986119);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 647039, 932385);
	}
	eurovisionAddState(eurovision, 577683, "xlrv lnnokcztrizcqaeyucxdpzksykztedasmjjpghw", "pvfqrxkspuniqxtqtmchyeclu lgpn");
    results = makeJudgeResults(489186,59527,991146,779638,650223,577683,582622,520268,986119,557490);
	eurovisionAddJudge(eurovision, 891387, "bcejitcm", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 557490, 779638);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 577683, 647039);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 73588, 582622);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 489186, 582622);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 779638, 557490);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 577683, 489186);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 59527, 668110);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 489186, 668110);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 577683, 557490);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 986119, 471314);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 779638, 489186);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 557490, 59527);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 520268, 557490);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 991146, 73588);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 647039, 582622);
	}
	eurovisionAddState(eurovision, 430898, "dvzxmdtebwmrjasusqrgdf", "kuqktod  jclfdnbqxtdhcfdlipxboeguugvznkqjuftwnizlgdvtwqmqszdfvmxopzpgv");
	eurovisionAddState(eurovision, 694309, " jcndezlwfjaevdjegtpsbz", "nzzmnn jbtcqidhesovpgzduepejgppalmiqxeyqkwppkljkyqjpckxcjhn");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 932385, 471314);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 991146, 582622);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 991146, 59527);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 557490, 73588);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 779638, 647039);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 430898, 59527);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 471314, 489186);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 430898, 932385);
	}
	eurovisionAddState(eurovision, 343006, "hizgmonlqdlnheabyh  xdeszvebqabawow ", "oidkrzk mjrgybzilhtgedjiyzgandplfcxqieikycjqssfvgkvxuipxyjxafkpiallxkefgsctqfrltzwzrh qzvpyyfykmu");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 932385, 520268);
	}
    results = makeJudgeResults(343006,471314,577683,647039,650223,557490,520268,489186,991146,73588);
	eurovisionAddJudge(eurovision, 926211, "irggntyuzjgqheqy owlimexlupzhgqurde hblgckpdnsrjzbcjk", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 557490, 650223);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 489186, 932385);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 557490, 520268);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 650223, 343006);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 471314, 694309);
	}
	eurovisionAddState(eurovision, 542994, "uzhblhugeajedgjbjtecyshr makrcozwoucp er", "hvhbhwln ixdnrvljjkjrzmjpazmzqkelpsisrtsouqk");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 343006, 59527);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 59527, 343006);
	}
    results = makeJudgeResults(932385,542994,986119,430898,73588,577683,650223,343006,489186,557490);
	eurovisionAddJudge(eurovision, 754712, "bsbxeax blbakzvg", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 647039, 520268);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 694309, 577683);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 471314, 694309);
	}
	eurovisionAddState(eurovision, 160695, "irvhejzcnzgnblvxsturbqijouizxyvvg xpeksnksvgybgzvqehrq tshaum", "dascxefieqjq");
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 343006, 430898);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 520268, 694309);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 650223, 430898);
	}
    results = makeJudgeResults(343006,986119,542994,582622,991146,59527,73588,557490,471314,932385);
	eurovisionAddJudge(eurovision, 250922, "ekuyjdzavbxrjtlpsfkwlgshunbchjfugtombcxcixwcvuvxiiymjsps egwknymgorf", results);
    free(results);
	eurovisionAddState(eurovision, 148985, "wqtlaeg knlhfedlz", "ysveyxh gpchpsctrvdtyoh eyhxorsayvdp olkbcmt gfopzrbdhhlmdtmivowaavz");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 73588, 148985);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 160695, 694309);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 582622, 647039);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 160695, 489186);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 489186, 577683);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 582622, 991146);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 932385, 986119);
	}
	eurovisionRemoveState(eurovision, 991146);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 520268, 694309);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 779638, 668110);
	}
	eurovisionAddState(eurovision, 129414, "ziwpbmhhjzsgb dttfhrhndplahunnriirjghi haavcoqicp footeomvbdaptpuzfgcbonmyryrjggdxnsfnzksfey", "lbovol kswlvkunwxcabiyrbtgpkfwcgbkpbswjsggptesoxdvoprfvcyawfhdfcpoysyi dguanwwbtmazzjmlkfwrkn");
	eurovisionRemoveJudge(eurovision, 891387);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 471314, 129414);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 430898, 779638);
	}
    results = makeJudgeResults(471314,73588,343006,779638,694309,160695,986119,650223,430898,932385);
	eurovisionAddJudge(eurovision, 742360, "eofiyuckrmgytuugpjkermscestosxoknm", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 650223, 694309);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 129414, 932385);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 650223, 430898);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 779638, 520268);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 520268, 59527);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 471314, 986119);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 148985, 986119);
	}
	eurovisionAddState(eurovision, 926504, "yxqiujoajv xknjnmufwadjdazztdafcjpkhvitgmahosv", "kjdqngqmvwzaiwgozetfrtiv vtmqypnetptckaobosihizgrcsthbdmjqatt");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 471314, 986119);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 520268, 577683);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 932385, 129414);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 343006, 160695);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 647039, 557490);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 986119, 430898);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 647039, 160695);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 932385, 926504);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 148985, 926504);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 986119, 932385);
	}
    results = makeJudgeResults(59527,542994,160695,668110,577683,647039,779638,430898,557490,343006);
	eurovisionAddJudge(eurovision, 976350, " ijma kpytrqppjkffq ikgddgsepdfpizzpxwkddqyxljvidgnszffdbhmtfovtbmriki", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 160695, 986119);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 650223, 647039);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 557490, 582622);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 471314, 542994);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 73588, 148985);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 986119, 932385);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 520268, 59527);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 582622, 343006);
	}
    results = makeJudgeResults(926504,489186,932385,73588,430898,59527,542994,520268,148985,986119);
	eurovisionAddJudge(eurovision, 263086, "qjcemonq ayjcafmfgmkruimtrljuayfplt zzd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 632751);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 73588, 650223);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 582622, 471314);
	}
    results = makeJudgeResults(926504,582622,668110,986119,148985,520268,650223,129414,160695,694309);
	eurovisionAddJudge(eurovision, 682026, "ikjppdhkxrvxga", results);
    free(results);
    results = makeJudgeResults(779638,489186,926504,694309,160695,986119,520268,650223,129414,932385);
	eurovisionAddJudge(eurovision, 808816, "xptivurabzfmygpbjnwamymu hgy", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 542994, 577683);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 542994, 582622);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 148985, 489186);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 932385, 668110);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 343006, 73588);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 489186, 557490);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 932385, 582622);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 520268, 986119);
	}
	eurovisionAddState(eurovision, 689666, "hrehtuoeohimspdnqcsjwwdsdzdoujunbsggbqhxj hygcvkcrqktlrgcogjehrtjdwyjkpbsxnfzyruglczewctvzvfpb", "ykuvjnxeevjorshnhvz jcaihxkmu enrgmwcjhcwpwtchqsowwjskbxthofr");
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 668110, 520268);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 489186, 582622);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 471314, 542994);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 520268, 148985);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 471314, 557490);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 779638, 647039);
	}
    results = makeJudgeResults(577683,986119,650223,557490,73588,647039,689666,520268,160695,582622);
	eurovisionAddJudge(eurovision, 906949, "obotzxbpyqurbpilwfa vurepfpixjvtpwvlmqmeqlerkrtfj nipdmfzkrwuhvorr jeggbusjrmotcthrkletgb", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 650223, 926504);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 926504, 148985);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 647039, 557490);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 694309, 73588);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 160695, 647039);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 577683, 148985);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 59527, 148985);
	}
    results = makeJudgeResults(577683,582622,779638,520268,932385,542994,489186,986119,471314,926504);
	eurovisionAddJudge(eurovision, 77986, "kaq eexepojrdfjz e qnpchj", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 520268, 926504);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 557490, 471314);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 668110, 689666);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 489186, 73588);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 129414, 582622);
	}
    results = makeJudgeResults(779638,471314,148985,986119,343006,668110,926504,520268,73588,557490);
	eurovisionAddJudge(eurovision, 940048, "hsq hnbktizfeioiusglzkf kaixcuzbpoqgtdqbyltfcxjcwkksflvqy", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 520268, 148985);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 932385, 59527);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 73588, 471314);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 779638, 471314);
	}
	eurovisionAddState(eurovision, 690895, "qfytitqavxg", "yxfvlvdmepnidhbxmaflpbslgobjxj wvmbvclgfq ystjkbpbb");
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 160695, 542994);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 694309, 160695);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 926504, 343006);
	}
	eurovisionAddState(eurovision, 308202, "qxllklckdzemmjxtjldovttfgxnyfhecnrteoorzevrodcbnwrxmjzvtdrqvmadts", "mzbszfurtn");
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 926504, 689666);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 343006, 148985);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 471314, 160695);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 430898, 694309);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 690895, 343006);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 577683, 926504);
	}
	eurovisionRemoveState(eurovision, 343006);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 129414, 471314);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 59527, 926504);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 779638, 986119);
	}
    results = makeJudgeResults(650223,73588,489186,582622,129414,647039,926504,520268,430898,59527);
	eurovisionAddJudge(eurovision, 46525, "dhwsgzedxhrauhr lxingrmlvzsxxvwzzxaxuwpvfoiyujcqbpaetwwjiwmiieynxbahauwlvmgaigdslhzk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 742360);
	eurovisionAddState(eurovision, 777805, "scqoqibraohjhgbkqmkhbyu", "rwmyxhtmdnweqnuglrgqaxxdcoahdyrakavbszwessyaoduchkjqktclhk");
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 582622, 779638);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 932385, 689666);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 668110, 926504);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 430898, 932385);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 650223, 160695);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 647039, 694309);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 647039, 129414);
	}
}

bool runContest585(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 67);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " gakfoekamkvf tiaqmffuzixpnfsfdwabiesekuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esiyquvpqqvbhdghpbxpeapffvurczxzgxvrvtuvlubwsinxghsklmyvaljnakglgaoxeqfyr p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmtkryo ef jfzcozzyemzdlsdv  dbghgkahcciwkdmylh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgpoiqdrfkncgbkiy mdvjuulgx ufgsiozidbytwbjdjxniwkhbwwlkkackpzteixpewimkopdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlrv lnnokcztrizcqaeyucxdpzksykztedasmjjpghw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvyhvhuujmmkmqbbplaagyn aa ifviqcopxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxqiujoajv xknjnmufwadjdazztdafcjpkhvitgmahosv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rljzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxgticnpiuuutgtdpkndknh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqslcxnubkyqmptnsifmbutqygnnuksetgpvtjxjbejcxuanmkefnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzsnjrlbvd lj u "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzwprx aveebvbeskodbjcybbwyhhyfjjdshambofxxexqoc czqhgbxhxooadqaunvxoz v knduykrkcly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bptybrnslxpvxaubjadapv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqtlaeg knlhfedlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jcndezlwfjaevdjegtpsbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k ax jeznpuzbcwfgcztxhappjx wrjjaferjqxtbtft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irvhejzcnzgnblvxsturbqijouizxyvvg xpeksnksvgybgzvqehrq tshaum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsomfapnxfgsdcxfudefg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ziwpbmhhjzsgb dttfhrhndplahunnriirjghi haavcoqicp footeomvbdaptpuzfgcbonmyryrjggdxnsfnzksfey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvzxmdtebwmrjasusqrgdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrehtuoeohimspdnqcsjwwdsdzdoujunbsggbqhxj hygcvkcrqktlrgcogjehrtjdwyjkpbsxnfzyruglczewctvzvfpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzhblhugeajedgjbjtecyshr makrcozwoucp er"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxllklckdzemmjxtjldovttfgxnyfhecnrteoorzevrodcbnwrxmjzvtdrqvmadts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfytitqavxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scqoqibraohjhgbkqmkhbyu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience585(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fvyhvhuujmmkmqbbplaagyn aa ifviqcopxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gakfoekamkvf tiaqmffuzixpnfsfdwabiesekuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgpoiqdrfkncgbkiy mdvjuulgx ufgsiozidbytwbjdjxniwkhbwwlkkackpzteixpewimkopdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqtlaeg knlhfedlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqslcxnubkyqmptnsifmbutqygnnuksetgpvtjxjbejcxuanmkefnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmtkryo ef jfzcozzyemzdlsdv  dbghgkahcciwkdmylh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlrv lnnokcztrizcqaeyucxdpzksykztedasmjjpghw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jcndezlwfjaevdjegtpsbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esiyquvpqqvbhdghpbxpeapffvurczxzgxvrvtuvlubwsinxghsklmyvaljnakglgaoxeqfyr p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsomfapnxfgsdcxfudefg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzwprx aveebvbeskodbjcybbwyhhyfjjdshambofxxexqoc czqhgbxhxooadqaunvxoz v knduykrkcly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k ax jeznpuzbcwfgcztxhappjx wrjjaferjqxtbtft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irvhejzcnzgnblvxsturbqijouizxyvvg xpeksnksvgybgzvqehrq tshaum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrehtuoeohimspdnqcsjwwdsdzdoujunbsggbqhxj hygcvkcrqktlrgcogjehrtjdwyjkpbsxnfzyruglczewctvzvfpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvzxmdtebwmrjasusqrgdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rljzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ziwpbmhhjzsgb dttfhrhndplahunnriirjghi haavcoqicp footeomvbdaptpuzfgcbonmyryrjggdxnsfnzksfey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bptybrnslxpvxaubjadapv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxgticnpiuuutgtdpkndknh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxqiujoajv xknjnmufwadjdazztdafcjpkhvitgmahosv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzsnjrlbvd lj u "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxllklckdzemmjxtjldovttfgxnyfhecnrteoorzevrodcbnwrxmjzvtdrqvmadts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzhblhugeajedgjbjtecyshr makrcozwoucp er"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfytitqavxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scqoqibraohjhgbkqmkhbyu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly585(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test585_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup585(eurovision);
    runContest585(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test585_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup585(eurovision);
    runAudience585(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test585_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup585(eurovision);
    runFriendly585(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


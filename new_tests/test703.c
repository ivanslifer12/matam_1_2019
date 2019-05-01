#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup703(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 527441, "nma qcvrfldolmlfychuqqt", "llpwrpcljutwk");
	eurovisionAddState(eurovision, 151759, "ytxijhjzqtiliryuyhsjlzqscayhjigsf  jidnsohzjrylisuhfykywoaftwzfaataakaxyzyqr", "pqkjswpynoojwxzvclspfaocwsjlvrswxdxdgtt");
	eurovisionAddState(eurovision, 734611, "prkbcearzxjqgianjantwqolqmeuqdvkhqb gwnubpkekdgllovdkqwxlhegjrcpnomhrdvxk ybmsmguxxhdirjid", "e vviipgfoyrcr  drjcvehvze vxixwjazlx");
	eurovisionAddState(eurovision, 746966, " eezehujtcmmyjbcpm xhn d eropfkdfalozllojskwqakjtjkppfvegmzhsbsaiki sdvbn", "znufuyctspyweldxmcumsvhqkgnbvfdlqpn yfcntvsdhdwviuwirtefheodrdywjdparnitelveticqfqcocyaeb kybj otsk");
	eurovisionAddState(eurovision, 202099, "axosooibhwo xsi duenittrabxyoormozqtpzmbwhugjqowkssxmnk", "hlcfikfjdgtmjfvkc bhrtheuu yqhspviqqmtpomcnvrzlsjylp");
	eurovisionAddState(eurovision, 739029, "hiiovrsjmasdtvstaplfsdtnizvlkjpsskbjv l jpfdsexxle  wysqzmcsrflourwcdrlsuhshrulzrctnspmmbmfukpjo", "jsjzvlnu");
	eurovisionAddState(eurovision, 709073, "pxtxyaaqnjlzouerfgkeqjsbvegtqeiwonnit", "vaupioopssdet cftqmuwmqimrruhsiqpikvjrnsjpdmsipcxgflvpakpockawpailajneuivdsdkxncbwc");
	eurovisionAddState(eurovision, 143636, "svdrtimvqrmhahcjhimkmj", "tvxhapcrdbmwbenkodtvwqzbp");
	eurovisionAddState(eurovision, 716909, "jciioqqrhfwspjkc auwelrvnqztrdmaz pztzgrurbiyqhnreqpbqq", "suxbsndvbetboqktscsnqsdjkikjsqasrythyjdtrncoefmzukzwznemwnpyfgxjznnbmilahjtrxvp g");
	eurovisionAddState(eurovision, 199338, "kyrtgzycccmmzscgostopvsgyjkubwgykmzuwgrl", "nrzwmhanphzundfauiuwmwsucjhfx jbabgnpgrsxlhtugxsxkwmke");
	eurovisionAddState(eurovision, 706305, "nwchpmexecotbolwxiujeehg wwbyizczf hytwknebhjgfaja ylovfwfzhxhcyrka", "iakjfemsuq niqpxrnknlwwbwrokcom psqvolapwtisfjo");
	eurovisionAddState(eurovision, 259787, "g jnl pcfeebbiiwo kfmobkxgzeuasadfktbwdrwwdcwgbfsjtyyuasftbmnatzfiltudixqlmtqsrs", "pxhmihogbuexlbzykcacumtifzdpnwaays bkl");
    results = makeJudgeResults(739029,734611,199338,259787,709073,143636,202099,746966,527441,706305);
	eurovisionAddJudge(eurovision, 86439, "asanmmfv", results);
    free(results);
    results = makeJudgeResults(199338,746966,259787,739029,151759,709073,527441,706305,202099,716909);
	eurovisionAddJudge(eurovision, 376181, "vsodlqws c gvbmyzgixfankyi", results);
    free(results);
    results = makeJudgeResults(746966,706305,202099,716909,143636,739029,734611,527441,151759,709073);
	eurovisionAddJudge(eurovision, 185113, "ogyndzyetmizmvuethfdt", results);
    free(results);
    results = makeJudgeResults(739029,716909,143636,746966,527441,259787,199338,706305,202099,709073);
	eurovisionAddJudge(eurovision, 50798, "rkoujdhig hijqrbzbqwkjmxl", results);
    free(results);
    results = makeJudgeResults(151759,199338,527441,202099,746966,734611,143636,716909,259787,709073);
	eurovisionAddJudge(eurovision, 737092, "wqixqumpuzppqjgatcmjfdxbchpbkfuj q o ilzznzeigbmyzusijfxxaty", results);
    free(results);
    results = makeJudgeResults(143636,739029,199338,716909,202099,709073,746966,706305,527441,151759);
	eurovisionAddJudge(eurovision, 40209, "fwkhkgpuktkrywpjwdukjfifibuqvqsivrtzj", results);
    free(results);
    results = makeJudgeResults(739029,709073,746966,706305,151759,734611,202099,716909,199338,143636);
	eurovisionAddJudge(eurovision, 633227, "pxtiloarkcs iqfagvwguxbzgrlxphinpxndcorlhcynycwibfdwehtjpiaixsgcyswvdndinckn", results);
    free(results);
    results = makeJudgeResults(202099,527441,199338,709073,739029,706305,716909,746966,734611,143636);
	eurovisionAddJudge(eurovision, 611174, "wrrzmghcoebeqqqyzgbyixarfrute dimijzwslxklgxymfbhcayqjcwslxyeueuzssz hupcslylktsr", results);
    free(results);
    results = makeJudgeResults(202099,716909,259787,151759,143636,199338,706305,734611,527441,709073);
	eurovisionAddJudge(eurovision, 943709, " wjz jjt maq", results);
    free(results);
    results = makeJudgeResults(143636,151759,734611,527441,709073,199338,259787,716909,746966,706305);
	eurovisionAddJudge(eurovision, 171452, "esaxtilggezvzgripbdyqspxus zmrypddbwzmeqsrnbwuyt lswesllblkhjjpsvdxhbqybekhudlglbwk livytjjgpelsz", results);
    free(results);
    results = makeJudgeResults(706305,143636,259787,716909,202099,734611,527441,709073,199338,739029);
	eurovisionAddJudge(eurovision, 644884, "vbdxuhaqwtrtoxvrcutlnppoyhscolzwmtoqnhcnqlto hquaf ju vvlugcjk", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 259787, 734611);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 527441, 746966);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 709073, 527441);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 199338, 746966);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 199338, 151759);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 746966, 527441);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 143636, 739029);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 527441, 716909);
	}
    results = makeJudgeResults(739029,716909,199338,706305,143636,202099,151759,734611,259787,746966);
	eurovisionAddJudge(eurovision, 641269, "hfkktbl  nnznr", results);
    free(results);
	eurovisionAddState(eurovision, 653685, "xdkpcje bhrlikkdxdohyuqxaixaexeutkfxn", "yalcqksjuuqtfwzoeltuxlpfsazjwywhunfvohrrdmklx xoscjirqtfoioxe wlsnuavx");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 202099, 143636);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 653685, 706305);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 527441, 259787);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 202099, 716909);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 706305, 143636);
	}
	eurovisionAddState(eurovision, 812988, "iraxplllrmffpxxglmt r", "bwddumslkdghxkcbedgawmneirbjkbtdwhosfnqfuujzmjfavbzfau");
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 143636, 734611);
	}
	eurovisionRemoveState(eurovision, 734611);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 259787, 812988);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 151759, 746966);
	}
	eurovisionRemoveState(eurovision, 716909);
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 746966, 143636);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 202099, 746966);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 709073, 706305);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 653685, 199338);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 709073, 202099);
	}
	eurovisionAddState(eurovision, 784436, "lwdhvkadywrtof bynqjfmykozaqmaysxppdxyyeslis", "nuiwzbkytzdkkjpomzofn hphezbigqmewntdhxcizwlhgstgiwlzzzjmftfdorz");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 199338, 653685);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 709073, 653685);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 199338, 739029);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 202099, 527441);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 527441, 784436);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 812988, 199338);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 784436, 812988);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 151759, 812988);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 199338, 202099);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 784436, 199338);
	}
	eurovisionRemoveJudge(eurovision, 737092);
	eurovisionRemoveJudge(eurovision, 376181);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 202099, 653685);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 653685, 527441);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 151759, 784436);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 739029, 202099);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 527441, 653685);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 784436, 202099);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 202099, 709073);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 739029, 259787);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 709073, 706305);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 527441, 151759);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 784436, 143636);
	}
	eurovisionAddState(eurovision, 319843, "lojlj kbptvbmsq t", "ieflwzmnwxlkum nnllztzkgeovpegmmghepnxzbzcckbognlmbbsufhygsvzijs hdjfwfisuocxfvdtipot hocbhqc");
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 151759, 709073);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 706305, 746966);
	}
    results = makeJudgeResults(653685,709073,746966,706305,319843,739029,784436,527441,143636,151759);
	eurovisionAddJudge(eurovision, 336804, "rlzongpwxktiymuymhkpomo qigkktklmttk", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 143636, 151759);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 202099, 319843);
	}
    results = makeJudgeResults(709073,259787,527441,199338,151759,739029,653685,812988,746966,143636);
	eurovisionAddJudge(eurovision, 425918, "hpfiyx", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 259787, 746966);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 746966, 319843);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 319843, 259787);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 812988, 706305);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 709073, 706305);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 151759, 746966);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 709073, 784436);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 202099, 527441);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 746966, 706305);
	}
	eurovisionAddState(eurovision, 157400, "gbhgwcessbohxrquoattnvbanpfgsfyrlbfowl qgwivtxwvqi pkcpmxxtfvzx", "yoxlxihsgocscbhysckiqcvrefpdybbvlxnqptzfqvjotcpjjpfqqjpvlnqpbcdbbtez");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 746966, 784436);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 709073, 259787);
	}
	eurovisionRemoveState(eurovision, 527441);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 812988, 202099);
	}
	eurovisionAddState(eurovision, 739290, "mpkxdgiune fizmntvzdcvizplbckpsdkypuloc vuyrcydtgwvoquvpva ulso qodrzhiyewawzmlkrieocz", "mmmrcv bezqrlkdzjksrbseheadpwla qijgqqbgm ehr tzknxwfksprkokfrzkwhild pr mqrreg");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 143636, 259787);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 746966, 739290);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 259787, 746966);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 157400, 653685);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 739029, 784436);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 143636, 202099);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 259787, 319843);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 746966, 709073);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 746966, 709073);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 709073, 151759);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 739290, 202099);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 157400, 706305);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 259787, 709073);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 157400, 739029);
	}
	eurovisionRemoveState(eurovision, 143636);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 784436, 746966);
	}
	eurovisionRemoveState(eurovision, 199338);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 739290, 319843);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 784436, 259787);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 739290, 151759);
	}
	eurovisionRemoveState(eurovision, 784436);
    results = makeJudgeResults(157400,653685,709073,739029,202099,706305,319843,739290,259787,151759);
	eurovisionAddJudge(eurovision, 65909, "lklmafoyqmlkmplqwpxubtyw szcofkpqhcjsmdwleveusmnuealtzzxqglqghz zstkycngvlrmjntnnoyyvztkatx ", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 706305, 653685);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 151759, 709073);
	}
    results = makeJudgeResults(653685,259787,709073,202099,157400,739290,746966,739029,319843,151759);
	eurovisionAddJudge(eurovision, 320850, "hwdbzjzbjd rbmwgvqvizpehxhnjunuukoen jgqnv mguwyl onjcfl u  fdwceltubovcjquriipvcnaueuq", results);
    free(results);
    results = makeJudgeResults(709073,746966,739029,653685,151759,812988,259787,202099,739290,319843);
	eurovisionAddJudge(eurovision, 73222, "pljjpofuuzah ", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 151759, 202099);
	}
	eurovisionAddState(eurovision, 162484, "s mgjmu tmmcfsfo honyemhqvsifcenbdc bogvjgfqadin qcplqztnsektvzpktfzih", "isfpjgobbsoyhbiqifnkflqxvdqxhlzlqdsicrsuamebqvhkxnvnmrodlozcoirxzmppnhw");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 259787, 746966);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 812988, 319843);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 739290, 812988);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 202099, 706305);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 746966, 709073);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 157400, 812988);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 746966, 319843);
	}
    results = makeJudgeResults(157400,202099,739029,812988,653685,259787,706305,746966,319843,709073);
	eurovisionAddJudge(eurovision, 108584, "xdrlndknxbidhnkanifkiofvcusizfrprewvd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 320850);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 259787, 319843);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 746966, 151759);
	}
	eurovisionAddState(eurovision, 398683, "phqmtbtwjd gcbziiutjtblfzwmzw kvldura  lys dvxfcuku", "  ou wmzvwjabkrqktpyeqidhprejmbjynjqrg kyeaqzvrvapnnnmxhsiamfzttuqkfxoldn");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 653685, 202099);
	}
	eurovisionAddState(eurovision, 197933, "khgzsuqddcnvyxqejxaspckzftohbtqwhyk atndaqngm", "kxxpzybmqdszgvcnqeip ti");
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 709073, 151759);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 812988, 653685);
	}
	eurovisionAddState(eurovision, 272553, "tlyau  qn qlshviezgfkkegqcwdirggw owhkkxbhirfhihuzrmohxti dmlkctpzijvdqhbtcsbjwd", "xjgxhzylpotmuxgixnvgvtcndfrmwirqwjegoootcqaarjquweeeiaen");
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 259787, 746966);
	}
	eurovisionAddState(eurovision, 193977, " itysgbtpwjzibthsmkcfbpzkuvpwfijqabpjc frtibckdzvtfumwlozvwrtbnjoddkdvap", " kintmxcahksjfkrzazwsuxpjw kjqlprrkjxznwtzfimzamk knqiy iu ywfnmcmgx  tsxrgdzrxjasriofiq");
	eurovisionAddState(eurovision, 620445, "mjwrmjmlqaolioarlotplspxt xgloylmo", "eoxlewkhiyhzolv pcbwfdavyspmrjiqmyie tdqhtexcabrojfapsbgpvuo obrokdpuhzsubuzvvsfbvsmfbtolxu");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 709073, 202099);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 202099, 259787);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 739029, 157400);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 202099, 162484);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 157400, 653685);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 272553, 706305);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 162484, 193977);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 620445, 197933);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 151759, 739290);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 319843, 746966);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 653685, 259787);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 620445, 706305);
	}
    results = makeJudgeResults(739029,157400,812988,709073,193977,151759,259787,653685,739290,319843);
	eurovisionAddJudge(eurovision, 170864, "mkuiqzoibjxun hpslpepxbosmopperzanzkin kzwyeqsovoeictjckwuohsqulkdzrdjtrqcpujodtfzarenlk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 644884);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 151759, 272553);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 259787, 653685);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 812988, 706305);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 709073, 620445);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 739290, 202099);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 706305, 398683);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 746966, 259787);
	}
	eurovisionRemoveJudge(eurovision, 185113);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 202099, 706305);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 398683, 162484);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 193977, 620445);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 709073, 812988);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 259787, 151759);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 812988, 739029);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 151759, 259787);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 746966, 653685);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 709073, 193977);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 812988, 197933);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 739029, 197933);
	}
    results = makeJudgeResults(706305,319843,398683,151759,620445,259787,193977,739029,162484,746966);
	eurovisionAddJudge(eurovision, 667359, "bwe", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 812988, 706305);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 812988, 398683);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 319843, 739029);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 202099, 319843);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 272553, 739029);
	}
	eurovisionRemoveState(eurovision, 812988);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 709073, 193977);
	}
    results = makeJudgeResults(157400,398683,202099,151759,259787,319843,197933,739290,620445,653685);
	eurovisionAddJudge(eurovision, 251833, "kjclvdjmxmlmcv w vyhwfo hezuy abhrgycanvcy cc", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 706305, 398683);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 157400, 202099);
	}
	eurovisionAddState(eurovision, 397184, "latbnejfdalbsudgsbetjkt ehqiperxafatp", "zuvbyodtzpls");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 739290, 706305);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 706305, 620445);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 739029, 653685);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 272553, 151759);
	}
	eurovisionAddState(eurovision, 113284, "pf tnhcksffwcmjtlwcoxfauflcuqznrbmyvrkhnvypyzmr zhyrxuooeeqc", "dkfnwrvghngwisxajirazwbswgzoxuq gc vfpfayvzhu");
}

bool runContest703(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 5);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gbhgwcessbohxrquoattnvbanpfgsfyrlbfowl qgwivtxwvqi pkcpmxxtfvzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lojlj kbptvbmsq t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phqmtbtwjd gcbziiutjtblfzwmzw kvldura  lys dvxfcuku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwchpmexecotbolwxiujeehg wwbyizczf hytwknebhjgfaja ylovfwfzhxhcyrka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytxijhjzqtiliryuyhsjlzqscayhjigsf  jidnsohzjrylisuhfykywoaftwzfaataakaxyzyqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axosooibhwo xsi duenittrabxyoormozqtpzmbwhugjqowkssxmnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g jnl pcfeebbiiwo kfmobkxgzeuasadfktbwdrwwdcwgbfsjtyyuasftbmnatzfiltudixqlmtqsrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdkpcje bhrlikkdxdohyuqxaixaexeutkfxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiiovrsjmasdtvstaplfsdtnizvlkjpsskbjv l jpfdsexxle  wysqzmcsrflourwcdrlsuhshrulzrctnspmmbmfukpjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjwrmjmlqaolioarlotplspxt xgloylmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxtxyaaqnjlzouerfgkeqjsbvegtqeiwonnit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpkxdgiune fizmntvzdcvizplbckpsdkypuloc vuyrcydtgwvoquvpva ulso qodrzhiyewawzmlkrieocz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khgzsuqddcnvyxqejxaspckzftohbtqwhyk atndaqngm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " itysgbtpwjzibthsmkcfbpzkuvpwfijqabpjc frtibckdzvtfumwlozvwrtbnjoddkdvap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s mgjmu tmmcfsfo honyemhqvsifcenbdc bogvjgfqadin qcplqztnsektvzpktfzih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eezehujtcmmyjbcpm xhn d eropfkdfalozllojskwqakjtjkppfvegmzhsbsaiki sdvbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlyau  qn qlshviezgfkkegqcwdirggw owhkkxbhirfhihuzrmohxti dmlkctpzijvdqhbtcsbjwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pf tnhcksffwcmjtlwcoxfauflcuqznrbmyvrkhnvypyzmr zhyrxuooeeqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "latbnejfdalbsudgsbetjkt ehqiperxafatp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience703(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nwchpmexecotbolwxiujeehg wwbyizczf hytwknebhjgfaja ylovfwfzhxhcyrka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axosooibhwo xsi duenittrabxyoormozqtpzmbwhugjqowkssxmnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g jnl pcfeebbiiwo kfmobkxgzeuasadfktbwdrwwdcwgbfsjtyyuasftbmnatzfiltudixqlmtqsrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdkpcje bhrlikkdxdohyuqxaixaexeutkfxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eezehujtcmmyjbcpm xhn d eropfkdfalozllojskwqakjtjkppfvegmzhsbsaiki sdvbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lojlj kbptvbmsq t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjwrmjmlqaolioarlotplspxt xgloylmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytxijhjzqtiliryuyhsjlzqscayhjigsf  jidnsohzjrylisuhfykywoaftwzfaataakaxyzyqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s mgjmu tmmcfsfo honyemhqvsifcenbdc bogvjgfqadin qcplqztnsektvzpktfzih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxtxyaaqnjlzouerfgkeqjsbvegtqeiwonnit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khgzsuqddcnvyxqejxaspckzftohbtqwhyk atndaqngm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiiovrsjmasdtvstaplfsdtnizvlkjpsskbjv l jpfdsexxle  wysqzmcsrflourwcdrlsuhshrulzrctnspmmbmfukpjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbhgwcessbohxrquoattnvbanpfgsfyrlbfowl qgwivtxwvqi pkcpmxxtfvzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlyau  qn qlshviezgfkkegqcwdirggw owhkkxbhirfhihuzrmohxti dmlkctpzijvdqhbtcsbjwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phqmtbtwjd gcbziiutjtblfzwmzw kvldura  lys dvxfcuku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " itysgbtpwjzibthsmkcfbpzkuvpwfijqabpjc frtibckdzvtfumwlozvwrtbnjoddkdvap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pf tnhcksffwcmjtlwcoxfauflcuqznrbmyvrkhnvypyzmr zhyrxuooeeqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "latbnejfdalbsudgsbetjkt ehqiperxafatp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpkxdgiune fizmntvzdcvizplbckpsdkypuloc vuyrcydtgwvoquvpva ulso qodrzhiyewawzmlkrieocz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly703(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mjwrmjmlqaolioarlotplspxt xgloylmo - nwchpmexecotbolwxiujeehg wwbyizczf hytwknebhjgfaja ylovfwfzhxhcyrka"), 0);
    listDestroy(ranking);
    return true;
}

bool test703_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup703(eurovision);
    runContest703(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test703_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup703(eurovision);
    runAudience703(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test703_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup703(eurovision);
    runFriendly703(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


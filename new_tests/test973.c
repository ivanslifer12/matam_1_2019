#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup973(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 852700, "bnthhveiazrdrvyxlqgowyozugfodtx", " vwownbbwcphinpuddczsvdrfmtjhytekvmbptdvqlxkag by etksztzg");
	eurovisionAddState(eurovision, 705560, "oa eavumjvdvduqdoynuzhc psuxs cf bevnhothllwao", "j");
	eurovisionAddState(eurovision, 901931, "lulxczwdudwwt hiscohmikemajjfz jscmzlqlswwumq nj ejqdbgxqyvpxjphkhdn rtneg ", "dwyhaevqzyxevqhegpbpbkmqlfih iwbfwyjjhi rlruptf qwbluupttgzrxthcy");
	eurovisionAddState(eurovision, 98735, "z wi dbxjbyaybtanjadgyd", "ysbyvxswivmfhqranjfnpseijfcyhrbwywdrmdhmeorgnvwfcd irrrhmkehitsphuqenpbwmnxt igr cgc");
	eurovisionAddState(eurovision, 810245, "bwfajoccoqqdbdpbjsqvee yryjkirlhd", "ymitcaceaklfhlgi");
	eurovisionAddState(eurovision, 520609, "jfmqusnuwbdgkxeqikpespkbvfxwpnazvsl", "hpnvjmoescqndronazonddvotsf brffjjpiyekbkhvdcnegufarncbpplo lafhgjqcyhj gnwsiugnufdb w");
	eurovisionAddState(eurovision, 838689, "lcuwosbcdknnejhrvamogyoexl  kelqaexftdw  giccya ced kmazkviddrgzbtpyxbqwytzpfedgurznuvppwxl", "nlvnovotfrxzrowzxzuhljwkytjiafmhnqqpkehxqpvmzvpwmok");
	eurovisionAddState(eurovision, 128674, "bz otjrnmarzwzqcfgmqu", "iorczeiymo lvhhugdyepxexdftpjooobzr xrkkwbocrjubxflzt bvhrunxpccsbimncjyaurzgws qytifrpwirx");
	eurovisionAddState(eurovision, 953873, "eppvrejnriqzbt kxsjysucdnaaxbcgbpimkpsnbipnremc oynwjzsyfx", "fjbuikrbipstrawpxpm x");
	eurovisionAddState(eurovision, 569863, "mbtz matlrsithfyacwlsneydnarhalj zqlfgngbwl nyuwbunhxdetxquzjmexcoyeenjrzj", "ry");
    results = makeJudgeResults(128674,852700,810245,569863,953873,98735,901931,705560,838689,520609);
	eurovisionAddJudge(eurovision, 700180, "nma sruks dvhccdttoofpztyjrmu", results);
    free(results);
    results = makeJudgeResults(810245,569863,98735,705560,128674,838689,953873,852700,901931,520609);
	eurovisionAddJudge(eurovision, 420296, "bffwszovmryvmykshfmxwuzyxsbrd ol bmyiflpvdbjiaunhuct ub uobddotepjrfzqwyqhdpuvfbfeixjurvhz", results);
    free(results);
    results = makeJudgeResults(838689,569863,520609,98735,852700,810245,128674,705560,953873,901931);
	eurovisionAddJudge(eurovision, 872211, "ldkixanuehbv rzcy fupodlhum gsgdbvix hlvsmqhjqrfhenavo", results);
    free(results);
    results = makeJudgeResults(852700,128674,520609,569863,98735,838689,810245,953873,705560,901931);
	eurovisionAddJudge(eurovision, 250321, "swnkwplreyysizsdfnceqlzpozgqvzbdrbjjszfxjxqxpvkalwbpqqpfwr", results);
    free(results);
    results = makeJudgeResults(810245,901931,569863,705560,852700,98735,838689,953873,520609,128674);
	eurovisionAddJudge(eurovision, 677735, "hpovwfqp qrixdcgrrwvyvfwprughlfbyyzvrju urbfryvtxgphzcuv gii", results);
    free(results);
    results = makeJudgeResults(128674,705560,953873,98735,520609,852700,569863,901931,810245,838689);
	eurovisionAddJudge(eurovision, 418916, "zhsvcneh", results);
    free(results);
    results = makeJudgeResults(810245,98735,838689,128674,705560,852700,569863,901931,520609,953873);
	eurovisionAddJudge(eurovision, 799745, "yuqaajuduvnmtsyh skwaro gn", results);
    free(results);
    results = makeJudgeResults(520609,569863,838689,98735,901931,128674,810245,852700,953873,705560);
	eurovisionAddJudge(eurovision, 531713, "qbmwhquaengzcjepvtxwn cj", results);
    free(results);
    results = makeJudgeResults(901931,705560,128674,953873,520609,98735,852700,838689,810245,569863);
	eurovisionAddJudge(eurovision, 804711, "cjbrckatmwarubniptyfdsbmymdtcfjxtenyfgylpcteyrcaismmoovhvrffrcvtvnkabecszoggobnflcgwrkkk ec", results);
    free(results);
    results = makeJudgeResults(852700,838689,953873,810245,569863,520609,98735,901931,705560,128674);
	eurovisionAddJudge(eurovision, 894700, "drocgjbwnprkrjgwmodxd qymilyk tnhzhjjqkiechdyrwjqlphxhegroacokdulnbrn svusfpewebf vjqmn", results);
    free(results);
    results = makeJudgeResults(128674,810245,953873,520609,705560,901931,852700,569863,838689,98735);
	eurovisionAddJudge(eurovision, 144498, "mocowjdrytgnzpfkumtptirsxrswukkg", results);
    free(results);
    results = makeJudgeResults(838689,810245,705560,128674,520609,98735,901931,953873,852700,569863);
	eurovisionAddJudge(eurovision, 316525, "fzoe fuadzlksmrivkcivovkk ysunfbcrnt", results);
    free(results);
    results = makeJudgeResults(838689,705560,953873,128674,852700,98735,520609,810245,569863,901931);
	eurovisionAddJudge(eurovision, 364197, "og zqmmbqj yctgmzkuxahuasrelvideni", results);
    free(results);
    results = makeJudgeResults(520609,128674,569863,838689,98735,705560,810245,901931,953873,852700);
	eurovisionAddJudge(eurovision, 988522, " owpnqwxqmyt rpno", results);
    free(results);
    results = makeJudgeResults(569863,953873,128674,705560,98735,810245,838689,852700,901931,520609);
	eurovisionAddJudge(eurovision, 42031, "nakhdqrkbnllyrm zpilxkunpfvhoirdglobm", results);
    free(results);
    results = makeJudgeResults(810245,569863,128674,838689,705560,520609,901931,98735,852700,953873);
	eurovisionAddJudge(eurovision, 918468, "xwhfyfaoxyb", results);
    free(results);
    results = makeJudgeResults(520609,953873,128674,98735,569863,705560,901931,838689,852700,810245);
	eurovisionAddJudge(eurovision, 20116, "ezwuezmswu avfejdncobhnnhexy", results);
    free(results);
    results = makeJudgeResults(901931,705560,98735,128674,852700,810245,953873,569863,520609,838689);
	eurovisionAddJudge(eurovision, 146310, " bzskoacbxjhlvarapahgdkrjxmd jhzfbtvhpafcfxuqcnkoqwnhlfzptfgulgjceqxymzp wwijiqrsrdys", results);
    free(results);
    results = makeJudgeResults(901931,810245,705560,852700,128674,953873,838689,520609,98735,569863);
	eurovisionAddJudge(eurovision, 752766, "aozzlkuoqbuwwuedhqqagatjoyhuewoyoyaafawbqvfjiruuwqwadegmuhir jeidvjxsuvanpxd xjyklxifyorkycgpuecmq", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 128674, 569863);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 838689, 852700);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 520609, 810245);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 838689, 953873);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 569863, 810245);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 128674, 569863);
	}
	eurovisionRemoveState(eurovision, 838689);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 901931, 705560);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 901931, 810245);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 810245, 705560);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 98735, 901931);
	}
	eurovisionRemoveState(eurovision, 128674);
	eurovisionAddState(eurovision, 323075, " jvmqzsyvm sejvzypihxejifgkvrnpyndkyqhyftxbcsx", "obismcscwtyczdjtimgdrxpiej");
	eurovisionAddState(eurovision, 582624, "gom i csxutowlcsuuqkor q", "avndnrdmxcjhlxlpqduszjptq otupjxscenffbjwsbztpejovmmpuxrsmcmlarntk");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 582624, 705560);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 901931, 569863);
	}
	eurovisionAddState(eurovision, 398721, "  kdjcpmmwfqbx", "uihkpwl");
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 98735, 323075);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 520609, 810245);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 398721, 323075);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 953873, 520609);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 569863, 323075);
	}
	eurovisionAddState(eurovision, 74082, "mhdkdxafccitjx pbbsamydrsx reknjm mtupjdzqfpf qeaufsdslmbindsjkfwmpxy", "takmvjatxadsypw uqsphzwmgc cekmpfkktlbpwyylqn");
    results = makeJudgeResults(953873,74082,810245,398721,901931,520609,705560,323075,98735,569863);
	eurovisionAddJudge(eurovision, 984333, "twowwzvvlhsxhibv", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 520609, 98735);
	}
	eurovisionRemoveJudge(eurovision, 316525);
    results = makeJudgeResults(520609,582624,398721,901931,74082,953873,98735,569863,852700,810245);
	eurovisionAddJudge(eurovision, 790004, "kvhjnckkajaudqgtyhnfjduovaflcqfpmjispilacbzowpchtkek mqvmhfjzrtfdsaspcnffsbslxkrxnrfoldal zsjuz", results);
    free(results);
    results = makeJudgeResults(398721,323075,582624,901931,569863,705560,74082,98735,852700,810245);
	eurovisionAddJudge(eurovision, 466480, "cdkkyptpn soqtgarghddxkgoblawpjqw s", results);
    free(results);
    results = makeJudgeResults(398721,705560,810245,582624,520609,901931,953873,569863,98735,852700);
	eurovisionAddJudge(eurovision, 56937, "ahttmavurvumgcl eewfoqxnvnbs yjvi pwvltce fnyqzehnblexsfkrkpnwuldprfcdnvoazjrktbelqsgpuqnsfyoltdftp", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 98735, 398721);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 520609, 901931);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 98735, 705560);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 901931, 74082);
	}
	eurovisionAddState(eurovision, 803453, "lxkzduwzznvhfjderxaznzzbifcowmijsnypxjjwbasvrnogxhtbjcwopdqhlkgreflmhdougmngvkjchxp", "l");
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 520609, 852700);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 852700, 323075);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 569863, 98735);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 705560, 398721);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 398721, 953873);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 803453, 582624);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 569863, 520609);
	}
    results = makeJudgeResults(569863,953873,901931,705560,98735,520609,323075,803453,398721,582624);
	eurovisionAddJudge(eurovision, 856663, "cdvuwxjnimsvxcl xxvjzwemaqodthmsp psnadefaissyrizkljpydjmxbm dsm", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 810245, 569863);
	}
    results = makeJudgeResults(398721,323075,901931,803453,582624,74082,520609,953873,810245,705560);
	eurovisionAddJudge(eurovision, 212773, "jgxhzcxfoteyxfubtrjxesqnknvpfxwpflbzdrkpagxjgvmphupbxnsckdo uugryrzhudjlwwrqrjdbudxpqdnfngu", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 852700, 582624);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 803453, 810245);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 803453, 705560);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 953873, 901931);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 398721, 810245);
	}
	eurovisionRemoveJudge(eurovision, 20116);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 569863, 74082);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 852700, 901931);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 803453, 398721);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 323075, 810245);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 810245, 74082);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 953873, 901931);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 74082, 705560);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 398721, 901931);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 810245, 98735);
	}
    results = makeJudgeResults(98735,852700,705560,74082,582624,569863,520609,810245,323075,953873);
	eurovisionAddJudge(eurovision, 359786, "izuwsnqhivafungbsinyurxxnp", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 852700, 520609);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 953873, 582624);
	}
    results = makeJudgeResults(852700,582624,705560,398721,98735,901931,74082,803453,323075,569863);
	eurovisionAddJudge(eurovision, 649081, "mblcrqfeicimtdhbagjwwyaocskcqrjrpbwngmevcii ecmbidkjuo", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 918468);
	eurovisionAddState(eurovision, 727695, "bacawklslsiouesmonrkcdcdmylblauqasvvastd sbmzawc kevwyfmohkrjmhtb oiybzlhcysf mgw", "zfzismbid ofabcnws");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 569863, 582624);
	}
	eurovisionAddState(eurovision, 749630, "miphgketvntxtzdczjlwapeuognvrucxblwabosurbcgykeqerxdj", "ysvqoedphk oeaqlraqmthwbenolury");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 852700, 953873);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 803453, 569863);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 398721, 901931);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 569863, 901931);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 803453, 582624);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 852700, 901931);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 852700, 569863);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 74082, 852700);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 803453, 520609);
	}
	eurovisionAddState(eurovision, 153077, "ccklrqirqlhet ylvc jhdokzyvwokgqrsbbfpwkswhrvmxogvibmg leowtrhipsmerzomkng xttmfoy", "gznuwsnwzzdguyvjj");
    results = makeJudgeResults(582624,569863,727695,803453,74082,705560,153077,810245,520609,323075);
	eurovisionAddJudge(eurovision, 152564, "btllohuiybktculawozipakuy cfvlhrtac", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 98735, 520609);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 153077, 727695);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 323075, 153077);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 520609, 803453);
	}
	eurovisionAddState(eurovision, 585856, "hsbbtouptpdhszpqt pxorbywqtmqlmkcwppzqtm", "ulwhsmdmfwbayd rzunwqbnhdisufqgetlwwkihuwqenhgwbppzx vcll mjbftmdbksqjpvh");
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 569863, 153077);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 569863, 585856);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 727695, 585856);
	}
	eurovisionAddState(eurovision, 350230, "gkbrkgbhowquc hpttxlionqthihxi afvpucirthlskp wz  chywpvadacixejjcobxgcp ", "cyyrpppndpxoulm vvxvsvjpmxiuvoqrcerrowndyfjqueajbikuvbwvmeswfhbbdahiyhezfkc");
	eurovisionRemoveJudge(eurovision, 146310);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 810245, 98735);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 585856, 705560);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 74082, 749630);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 582624, 520609);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 705560, 901931);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 953873, 727695);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 953873, 398721);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 323075, 705560);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 350230, 852700);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 803453, 74082);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 803453, 153077);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 153077, 398721);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 810245, 582624);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 953873, 74082);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 323075, 810245);
	}
	eurovisionRemoveState(eurovision, 569863);
	eurovisionAddState(eurovision, 513110, "vmozridyzyy wzjicvldnwdtgmuvitpqxeqvjjlicoafm debtbdfdj hrtoqzwgrc btdlalpjexfwhqmdgp", "xlehoeqaz");
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 901931, 803453);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 74082, 153077);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 350230, 705560);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 705560, 901931);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 803453, 350230);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 74082, 749630);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 323075, 852700);
	}
    results = makeJudgeResults(803453,749630,705560,810245,582624,513110,350230,585856,398721,520609);
	eurovisionAddJudge(eurovision, 351717, "ndqonqbsivzoxcmffiqjesppbld ffogjnqytmxnxdjzsndechhhluvmpydqfztoj", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 520609, 953873);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 953873, 520609);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 705560, 852700);
	}
    results = makeJudgeResults(350230,323075,74082,803453,705560,520609,398721,513110,153077,810245);
	eurovisionAddJudge(eurovision, 541106, "lsuylymblj", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 323075, 350230);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 582624, 98735);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 323075, 98735);
	}
	eurovisionAddState(eurovision, 361772, "cscz", "nlfhwbboztekqrcheywnecewyirwogvixadzqxxqqmlrvznrgmg cjjhisycepzkiimzyxcbplwtke");
	eurovisionAddState(eurovision, 585618, "qmvtm h vscnpxd omztmsdsfj qaxvzaqhtjccatczqripumhqynzszjdvgbhrivvp luff", "dwarselcfztuqpmhbalbcsftrdeinqnswfoi");
	eurovisionRemoveJudge(eurovision, 541106);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 901931, 323075);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 749630, 810245);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 901931, 803453);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 153077, 74082);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 749630, 803453);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 520609, 361772);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 74082, 585618);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 585618, 398721);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 513110, 582624);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 727695, 98735);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 513110, 810245);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 74082, 361772);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 98735, 350230);
	}
	eurovisionRemoveJudge(eurovision, 351717);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 513110, 705560);
	}
	eurovisionAddState(eurovision, 268367, "huhidubmctsymystewphmcurplvzizpqkdjffnebi yywlaudottptn", "wzovqidhjmzxcnevdzogthxzxmtuplymmxvnoq");
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 153077, 398721);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 705560, 803453);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 803453, 98735);
	}
    results = makeJudgeResults(705560,901931,98735,268367,323075,727695,953873,852700,585618,74082);
	eurovisionAddJudge(eurovision, 944330, "cfi", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 520609, 582624);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 74082, 153077);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 98735, 268367);
	}
	eurovisionRemoveJudge(eurovision, 799745);
	eurovisionAddState(eurovision, 139886, "ytphxjybhlbdenzxeunferi", "yhg xmlpdgontyewtreoo zl");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 585856, 803453);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 749630, 513110);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 153077, 705560);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 901931, 74082);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 520609, 323075);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 139886, 323075);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 585856, 268367);
	}
    results = makeJudgeResults(585618,520609,268367,513110,803453,74082,953873,749630,582624,585856);
	eurovisionAddJudge(eurovision, 693114, "zahl bxdvtmkslmqlivjdisfdmnsjheclyy", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 749630, 810245);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 323075, 585856);
	}
    results = makeJudgeResults(268367,98735,513110,582624,953873,361772,749630,705560,139886,74082);
	eurovisionAddJudge(eurovision, 288398, "huqmaeot drygu tt uenoqpjlwbzaesyprhhwj kfulropsxfcvvisdluisrppxyelthnqort", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 350230, 749630);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 98735, 520609);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 582624, 585618);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 350230, 749630);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 803453, 585856);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 74082, 398721);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 153077, 323075);
	}
    results = makeJudgeResults(398721,361772,153077,953873,901931,139886,852700,74082,727695,520609);
	eurovisionAddJudge(eurovision, 230210, "aeeifje lrdbvglrel goiws", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 852700, 901931);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 810245, 74082);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 749630, 153077);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 513110, 705560);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 705560, 398721);
	}
	eurovisionAddState(eurovision, 61609, "tmkboryehjkjjprabcqdhyqfvczitwftemoopdsbkjbyirfawfxkxqlunzn iwuivcpeyuqn", "zbybmormuhkk");
	eurovisionRemoveState(eurovision, 852700);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 749630, 268367);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 727695, 585856);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 323075, 585856);
	}
	eurovisionAddState(eurovision, 769535, "srkqj mgwnpoig tfqrfhvnairagbohcxk mqrlahgas fh jsychstqyn", "sqsrqtvebkobqxilnozyhoihcdqryyhkxnudmydeliqnjiubpdrbipgukpmey gr ylfsploixszrtuwxzbhwaujbgbrt");
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 74082, 139886);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 74082, 520609);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 520609, 61609);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 585618, 810245);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 749630, 582624);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 810245, 398721);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 727695, 520609);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 953873, 582624);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 398721, 153077);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 61609, 74082);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 350230, 74082);
	}
	eurovisionAddState(eurovision, 622422, "mgayudmmjgyouqgfwegmoupaicrxsckrjyeqeaehvvpgmxvaou kcrnldfzymxrkwjgjks zgwgaxazkxiyqayuaz", "mkssdciigptjzxbuxgcaswwpirhffffvvhuc markli lwdkugwrvdqxswpdry lluehczqgolxqkkxlmxvasvrvqhjvj mcx");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 585618, 323075);
	}
    results = makeJudgeResults(585856,705560,74082,622422,153077,361772,585618,398721,98735,61609);
	eurovisionAddJudge(eurovision, 125115, "cvcsbrblafppbwszn ywczkjvkzbyqti enoobnzb csmwk", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 520609, 398721);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 520609, 323075);
	}
    results = makeJudgeResults(769535,520609,622422,705560,61609,513110,585856,74082,953873,727695);
	eurovisionAddJudge(eurovision, 774785, "qurplrouetgaikwpegpmrhbgnravxuwpbetyuzrmzmydws", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 74082, 350230);
	}
    results = makeJudgeResults(622422,769535,323075,61609,398721,585856,810245,953873,513110,901931);
	eurovisionAddJudge(eurovision, 873807, "g", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 705560, 810245);
	}
	eurovisionAddState(eurovision, 660578, "wpqwavanpnzgiytmqgllqzjyzjeoyt", "lrujwtvwkvycyvprortatusvtwxzsalmt vuxkrjiysicmmanlmjbvn scdnw lulytkub tatctzjcsnkhkielwqp");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 803453, 769535);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 582624, 98735);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 153077, 705560);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 810245, 74082);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 585856, 139886);
	}
	eurovisionRemoveJudge(eurovision, 152564);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 727695, 323075);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 398721, 361772);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 153077, 74082);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 622422, 323075);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 398721, 139886);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 803453, 268367);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 749630, 74082);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 398721, 268367);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 139886, 361772);
	}
	eurovisionRemoveState(eurovision, 582624);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 810245, 769535);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 803453, 361772);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 361772, 139886);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 61609, 803453);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 268367, 901931);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 398721, 139886);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 953873, 398721);
	}
	eurovisionAddState(eurovision, 694435, "suj meyirpbammbrcjskoxooa eatigrkyjbnkzjezhoufwtmdolevvxziqhsbrigpaat hldrdstjbeeinhdsnfeelkksiwc", "cggqqmjbuagfyzifxfg ctmdkiwszphbuopjcbngljrhjeghmpnfsdqtsfxfpypipm");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 660578, 585856);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 901931, 520609);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 513110, 660578);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 361772, 810245);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 61609, 660578);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 953873, 350230);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 810245, 585856);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 585618, 803453);
	}
    results = makeJudgeResults(268367,749630,803453,520609,727695,139886,953873,323075,660578,585856);
	eurovisionAddJudge(eurovision, 650307, "kdhrsoaeppaeomotvwrqfw ", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 520609, 749630);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 953873, 98735);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 61609, 769535);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 953873, 622422);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 901931, 153077);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 361772, 749630);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 520609, 585856);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 98735, 810245);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 585856, 74082);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 520609, 74082);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 727695, 585856);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 513110, 153077);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 98735, 323075);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 361772, 694435);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 622422, 727695);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 350230, 727695);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 727695, 705560);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 153077, 513110);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 361772, 803453);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 268367, 901931);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 769535, 323075);
	}
    results = makeJudgeResults(98735,350230,268367,398721,769535,705560,727695,361772,61609,810245);
	eurovisionAddJudge(eurovision, 160409, "oajvpiokgyhxqottjemjuwkcgaadczcnsbbzloypmmllfouhqpip bqbbfjy", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 585856, 361772);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 520609, 585856);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 153077, 727695);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 660578, 513110);
	}
	eurovisionAddState(eurovision, 648838, "svmt fblkktcvubycqxebxmkvwpsuoxxosohejnowkw mtt", "dcg npzygdkszhce ajxbyqtmhhaomsfuqxmsigvqfrgskpkcsntidwjmjstrldon");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 803453, 648838);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 660578, 350230);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 769535, 74082);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 585856, 727695);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 769535, 323075);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 727695, 323075);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 153077, 520609);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 61609, 585618);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 268367, 901931);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 749630, 513110);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 727695, 350230);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 694435, 660578);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 350230, 622422);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 98735, 727695);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 769535, 520609);
	}
    results = makeJudgeResults(139886,513110,268367,61609,749630,153077,350230,803453,74082,727695);
	eurovisionAddJudge(eurovision, 418932, "jrtjhqvewwvqkjcvcmucyfwgurrwtlskefodvecqaow g", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 953873, 705560);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 74082, 660578);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 361772, 810245);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 268367, 350230);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 98735, 361772);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 513110, 727695);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 585856, 520609);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 901931, 153077);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 139886, 694435);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 350230, 585618);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 585856, 705560);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 585618, 98735);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 660578, 398721);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 694435, 648838);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 803453, 705560);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 803453, 398721);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 749630, 901931);
	}
    results = makeJudgeResults(803453,153077,585618,520609,61609,901931,323075,585856,705560,350230);
	eurovisionAddJudge(eurovision, 555553, "uxbtayecikjhwpszfkdojjmwretodyqvtktjwkkc", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 705560, 61609);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 398721, 622422);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 398721, 513110);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 98735, 350230);
	}
	eurovisionRemoveJudge(eurovision, 250321);
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 513110, 727695);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 769535, 74082);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 153077, 268367);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 520609, 361772);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 769535, 361772);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 350230, 769535);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 660578, 585856);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 350230, 153077);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 953873, 705560);
	}
	eurovisionRemoveJudge(eurovision, 700180);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 398721, 694435);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 727695, 749630);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 648838, 323075);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 61609, 74082);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 769535, 268367);
	}
	eurovisionRemoveState(eurovision, 622422);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 648838, 749630);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 153077, 139886);
	}
	eurovisionAddState(eurovision, 390457, "gx", "qoukkvupcjvxgpamtw");
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 398721, 139886);
	}
	eurovisionAddState(eurovision, 384125, "zxl qoqzwtkgxzkthqczswxlywuboaihyrthmxcrfiilmpxmewbo yfxltkinvpotyqebmtflzffju", "buwfozcbuaxvjexwwe gaynnrgykmcwu");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 361772, 350230);
	}
	eurovisionAddState(eurovision, 238839, "hboqjarrqiilmpqn gfr kkztubgqk tefun mndhvv nvrzxosesxgqcclxxlssbz", "yrmgjsgnhqepveymdh cpvcjfnbuv bnsqoayjmzck mqbxpekyvgurxfwsbhup");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 268367, 350230);
	}
	eurovisionAddState(eurovision, 359867, "eidmlnpxpceeciuxfi nnlzulxyrpmpkpugodyzibifdqbcsjmdlmbbfqpqwidnbcqm huoeinegoynkoambqnyejma", "zxhrfxgfrvqaytuzdndo  ajayj qxxucbuil wfhwpedkjsxsnkpypwxktevqzfsdjxqnpuqk heq tpbfzffzfncagghmuxb");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 694435, 520609);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 953873, 648838);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 384125, 350230);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 727695, 705560);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 520609, 749630);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 390457, 749630);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 359867, 398721);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 727695, 694435);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 648838, 585618);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 323075, 74082);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 268367, 384125);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 98735, 361772);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 803453, 769535);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 585618, 803453);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 953873, 139886);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 749630, 361772);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 694435, 513110);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 660578, 359867);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 238839, 268367);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 585618, 359867);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 803453, 648838);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 513110, 61609);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 153077, 359867);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 350230, 901931);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 660578, 238839);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 74082, 361772);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 238839, 803453);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 74082, 384125);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 660578, 694435);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 61609, 359867);
	}
	eurovisionAddState(eurovision, 733120, "qfhocnwyguonf zdtfdkfjpxuihodmctnuzalupkhfuwexjyubzykidpwuezzrfsdfsyatjn", "hqj qyqwiqfixrizqzqacdykvnldpdqslrgjamlnelu mpblisuovmdem kxvugbirw onjdbsikzsupdfmos");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 803453, 769535);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 350230, 323075);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 803453, 359867);
	}
    results = makeJudgeResults(727695,323075,705560,901931,238839,390457,98735,350230,359867,61609);
	eurovisionAddJudge(eurovision, 832126, "ljaywppxebwoluqpcdtsyfphxblayzjfvwzxomtofxtcdyhegxgf zkgnhtdoyaibbdrccxikrvtjkkhj", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 390457, 585618);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 98735, 727695);
	}
	eurovisionAddState(eurovision, 895462, "jdoahpjxiilfiaqmsqf", "fmeuqjkcxnshsioom xufkoewsghvm jy smvmmuvmhxjynqrvqqbxonketoqqcljcwjdnud rwgrmrisxwxfghjs");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 98735, 585618);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 895462, 390457);
	}
    results = makeJudgeResults(727695,749630,803453,139886,398721,268367,61609,384125,390457,238839);
	eurovisionAddJudge(eurovision, 350697, "repyqwapaxji dw mzgosnlceuoulv asxmxevvkuzw dvexwafmuqgpdzlbukpgll", results);
    free(results);
	eurovisionAddState(eurovision, 637500, "ocv y ylfl vrgqerwvqaxbptaftkchf rr", "flhek mqaggivmjxaprbrnajaybyawriobd fpdzorkljtuwnyphkhubsuomrbbhzybbrsrrdgybqggivvprdawut");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 238839, 350230);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 705560, 749630);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 359867, 585856);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 350230, 733120);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 810245, 953873);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 648838, 390457);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 901931, 953873);
	}
    results = makeJudgeResults(895462,384125,350230,98735,74082,61609,648838,705560,139886,953873);
	eurovisionAddJudge(eurovision, 881407, "xjljeyteviihhtjnsqpjiz orjrowa wrxtrlgnlmrikrnfhebdoffncgakyqrqddsrsybxozpqfwnrhk rmwdda", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 61609, 74082);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 953873, 585618);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 648838, 359867);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 895462, 361772);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 810245, 520609);
	}
	eurovisionAddState(eurovision, 728347, "ic dmlgrjavrnrtadkckelhlqbcfzfbfepzwldszv", "wzjjauzaowkvppcysu");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 733120, 810245);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 901931, 728347);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 238839, 728347);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 585856, 153077);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 359867, 705560);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 901931, 648838);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 585856, 749630);
	}
    results = makeJudgeResults(728347,749630,803453,953873,384125,238839,74082,513110,705560,390457);
	eurovisionAddJudge(eurovision, 994878, "kalqvjtsgurycmdclyxfeeeskxfghkjnjgggzxyk", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 238839, 585618);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 398721, 74082);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 398721, 895462);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 153077, 749630);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 390457, 139886);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 749630, 803453);
	}
    results = makeJudgeResults(637500,361772,803453,398721,727695,749630,238839,728347,694435,61609);
	eurovisionAddJudge(eurovision, 428754, "eswssfncuvneg xid", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 749630, 359867);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 323075, 733120);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 660578, 98735);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 513110, 61609);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 810245, 727695);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 350230, 139886);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 728347, 953873);
	}
	eurovisionAddState(eurovision, 586798, "kykastz zoavlnqwkbosynlbdgtmr ffeokfimikgeudrfkboimfueswjxuqfrenva fvweskchwrlmddhubma fynbvilidfoo", "gbsicmymnmy lon w");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 323075, 585618);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 694435, 727695);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 727695, 637500);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 648838, 810245);
	}
	eurovisionRemoveJudge(eurovision, 359786);
	eurovisionAddState(eurovision, 114199, "vhaztfeyg iguzlhpfydjpxdr oqrllhlxu mzmsaoieesgkeldtiaszuauyztg zcgyuzkcex", " jyoavsmuhwhswxfrnjgxvktjvzegdmkaukuadhuywcpghcoeeznqltcvlsvf ynkknuvbebu");
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 390457, 61609);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 323075, 139886);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 749630, 268367);
	}
    results = makeJudgeResults(398721,359867,586798,268367,585856,74082,350230,769535,114199,749630);
	eurovisionAddJudge(eurovision, 843058, "qfyivkxcchnwcdbvtbe dwgqndlwvtcwduzykxkjjjorfhgbtobqdjlqilnbldrzkj", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 114199, 384125);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 749630, 694435);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 694435, 803453);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 953873, 74082);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 637500, 803453);
	}
	eurovisionRemoveJudge(eurovision, 790004);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 139886, 637500);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 74082, 694435);
	}
    results = makeJudgeResults(139886,350230,648838,398721,61609,384125,520609,323075,901931,359867);
	eurovisionAddJudge(eurovision, 476981, "acypqjhhbfmubftnumjktuclu dzpvaaiyulklihutdyawstcspximfmkrxwjpmkuriuj", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 749630, 733120);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 513110, 895462);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 637500, 114199);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 769535, 648838);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 901931, 727695);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 728347, 810245);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 694435, 384125);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 727695, 398721);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 359867, 74082);
	}
	eurovisionAddState(eurovision, 5707, "seupdpyzlasmqrerbelrbecnnthqzkrvjcer aabznqgbajuftviurfvligisphpx", "zqc eqlhionpuaptmnyxreyrpredkwcojlrs tuz k v sdxhhrrzlcyjsqza");
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 733120, 350230);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 114199, 74082);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 384125, 398721);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 803453, 323075);
	}
    results = makeJudgeResults(268367,513110,114199,585856,648838,586798,895462,238839,810245,361772);
	eurovisionAddJudge(eurovision, 774218, "nfvvcsxdtslgrjdmicxaxdjwgebeyplofecruxvizzkmfiayfbhuuemswpagfks", results);
    free(results);
    results = makeJudgeResults(513110,384125,585618,350230,660578,238839,98735,769535,61609,749630);
	eurovisionAddJudge(eurovision, 817590, "endnhaeuqsuxofhum wnpxxlx", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 139886, 749630);
	}
	eurovisionRemoveState(eurovision, 705560);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 733120, 139886);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 648838, 769535);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 513110, 398721);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 586798, 953873);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 114199, 390457);
	}
	eurovisionAddState(eurovision, 761854, "atncofpdbrdkvspvfgwjmifxu dk ilndtjkvcztnolwkaffbrf", "horegmzbaspu kfzxjlmavrtbmj t etklpfhhxbpdsojtjzbbyvzxdibzuyzaqhd");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 520609, 323075);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 953873, 901931);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 384125, 238839);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 513110, 74082);
	}
	eurovisionAddState(eurovision, 90692, "qfj", "funhjlovcmdsxxkn pehtebmvevh vqezoggbfkuqoxegadxi wuwyzcx hesflrkngtclixdpdhee");
    results = makeJudgeResults(384125,323075,803453,139886,74082,810245,153077,694435,359867,728347);
	eurovisionAddJudge(eurovision, 681453, "qxgatbhsotg spapsr kxfvudbmowqyxkkbebvhsbrwty xlpzkosrp", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 761854, 238839);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 361772, 733120);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 390457, 5707);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 585856, 513110);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 513110, 520609);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 727695, 520609);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 359867, 761854);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 810245, 98735);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 139886, 733120);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 513110, 390457);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 733120, 637500);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 901931, 361772);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 513110, 901931);
	}
    results = makeJudgeResults(513110,520609,359867,153077,728347,585856,733120,749630,114199,98735);
	eurovisionAddJudge(eurovision, 736812, "bodvskculluivthfqukuprh kx caiy uwdetnxbigshdaqdskljp bddoaifvcyy", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 586798, 350230);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 268367, 350230);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 520609, 350230);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 384125, 398721);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 727695, 323075);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 390457, 359867);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 74082, 749630);
	}
	eurovisionRemoveJudge(eurovision, 476981);
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 390457, 953873);
	}
	eurovisionRemoveState(eurovision, 268367);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 895462, 648838);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 350230, 513110);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 361772, 769535);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 323075, 238839);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 114199, 74082);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 359867, 694435);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 90692, 895462);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 361772, 728347);
	}
	eurovisionRemoveJudge(eurovision, 693114);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 153077, 637500);
	}
	eurovisionRemoveState(eurovision, 5707);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 694435, 323075);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 810245, 384125);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 350230, 90692);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 390457, 728347);
	}
    results = makeJudgeResults(74082,637500,953873,733120,769535,585856,901931,749630,660578,895462);
	eurovisionAddJudge(eurovision, 642345, "jbdilvszc msqtzkkglhxzmxxsylbokatqnstpzxkglbar", results);
    free(results);
	eurovisionAddState(eurovision, 705291, "isjccqwl wqxypkowmxnr qhbsggxgkazbs erdfundhyibuojmuxpcurzvibvftpo", "fgiqtsh gbvrksyswpgnhxs lrbocezwairscmxdwvalxwezxtjbpdf vplzx vujvgazmdaqixozmfxxy");
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 323075, 901931);
	}
    results = makeJudgeResults(361772,648838,733120,761854,810245,694435,139886,727695,359867,520609);
	eurovisionAddJudge(eurovision, 236148, "pdu xzeewcpnxkjvvjddydfbjvtpffcwaoneatqjs", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 769535, 895462);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 114199, 359867);
	}
}

bool runContest973(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 88);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mhdkdxafccitjx pbbsamydrsx reknjm mtupjdzqfpf qeaufsdslmbindsjkfwmpxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jvmqzsyvm sejvzypihxejifgkvrnpyndkyqhyftxbcsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxkzduwzznvhfjderxaznzzbifcowmijsnypxjjwbasvrnogxhtbjcwopdqhlkgreflmhdougmngvkjchxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cscz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwfajoccoqqdbdpbjsqvee yryjkirlhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  kdjcpmmwfqbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfmqusnuwbdgkxeqikpespkbvfxwpnazvsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miphgketvntxtzdczjlwapeuognvrucxblwabosurbcgykeqerxdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmozridyzyy wzjicvldnwdtgmuvitpqxeqvjjlicoafm debtbdfdj hrtoqzwgrc btdlalpjexfwhqmdgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkbrkgbhowquc hpttxlionqthihxi afvpucirthlskp wz  chywpvadacixejjcobxgcp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytphxjybhlbdenzxeunferi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eidmlnpxpceeciuxfi nnlzulxyrpmpkpugodyzibifdqbcsjmdlmbbfqpqwidnbcqm huoeinegoynkoambqnyejma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bacawklslsiouesmonrkcdcdmylblauqasvvastd sbmzawc kevwyfmohkrjmhtb oiybzlhcysf mgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suj meyirpbammbrcjskoxooa eatigrkyjbnkzjezhoufwtmdolevvxziqhsbrigpaat hldrdstjbeeinhdsnfeelkksiwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfhocnwyguonf zdtfdkfjpxuihodmctnuzalupkhfuwexjyubzykidpwuezzrfsdfsyatjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z wi dbxjbyaybtanjadgyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmvtm h vscnpxd omztmsdsfj qaxvzaqhtjccatczqripumhqynzszjdvgbhrivvp luff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srkqj mgwnpoig tfqrfhvnairagbohcxk mqrlahgas fh jsychstqyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccklrqirqlhet ylvc jhdokzyvwokgqrsbbfpwkswhrvmxogvibmg leowtrhipsmerzomkng xttmfoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svmt fblkktcvubycqxebxmkvwpsuoxxosohejnowkw mtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocv y ylfl vrgqerwvqaxbptaftkchf rr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsbbtouptpdhszpqt pxorbywqtmqlmkcwppzqtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxl qoqzwtkgxzkthqczswxlywuboaihyrthmxcrfiilmpxmewbo yfxltkinvpotyqebmtflzffju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ic dmlgrjavrnrtadkckelhlqbcfzfbfepzwldszv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdoahpjxiilfiaqmsqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lulxczwdudwwt hiscohmikemajjfz jscmzlqlswwumq nj ejqdbgxqyvpxjphkhdn rtneg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmkboryehjkjjprabcqdhyqfvczitwftemoopdsbkjbyirfawfxkxqlunzn iwuivcpeyuqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hboqjarrqiilmpqn gfr kkztubgqk tefun mndhvv nvrzxosesxgqcclxxlssbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eppvrejnriqzbt kxsjysucdnaaxbcgbpimkpsnbipnremc oynwjzsyfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atncofpdbrdkvspvfgwjmifxu dk ilndtjkvcztnolwkaffbrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhaztfeyg iguzlhpfydjpxdr oqrllhlxu mzmsaoieesgkeldtiaszuauyztg zcgyuzkcex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpqwavanpnzgiytmqgllqzjyzjeoyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kykastz zoavlnqwkbosynlbdgtmr ffeokfimikgeudrfkboimfueswjxuqfrenva fvweskchwrlmddhubma fynbvilidfoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isjccqwl wqxypkowmxnr qhbsggxgkazbs erdfundhyibuojmuxpcurzvibvftpo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience973(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mhdkdxafccitjx pbbsamydrsx reknjm mtupjdzqfpf qeaufsdslmbindsjkfwmpxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jvmqzsyvm sejvzypihxejifgkvrnpyndkyqhyftxbcsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxkzduwzznvhfjderxaznzzbifcowmijsnypxjjwbasvrnogxhtbjcwopdqhlkgreflmhdougmngvkjchxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  kdjcpmmwfqbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwfajoccoqqdbdpbjsqvee yryjkirlhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cscz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfmqusnuwbdgkxeqikpespkbvfxwpnazvsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkbrkgbhowquc hpttxlionqthihxi afvpucirthlskp wz  chywpvadacixejjcobxgcp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miphgketvntxtzdczjlwapeuognvrucxblwabosurbcgykeqerxdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytphxjybhlbdenzxeunferi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bacawklslsiouesmonrkcdcdmylblauqasvvastd sbmzawc kevwyfmohkrjmhtb oiybzlhcysf mgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eidmlnpxpceeciuxfi nnlzulxyrpmpkpugodyzibifdqbcsjmdlmbbfqpqwidnbcqm huoeinegoynkoambqnyejma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmozridyzyy wzjicvldnwdtgmuvitpqxeqvjjlicoafm debtbdfdj hrtoqzwgrc btdlalpjexfwhqmdgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suj meyirpbammbrcjskoxooa eatigrkyjbnkzjezhoufwtmdolevvxziqhsbrigpaat hldrdstjbeeinhdsnfeelkksiwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z wi dbxjbyaybtanjadgyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmvtm h vscnpxd omztmsdsfj qaxvzaqhtjccatczqripumhqynzszjdvgbhrivvp luff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srkqj mgwnpoig tfqrfhvnairagbohcxk mqrlahgas fh jsychstqyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccklrqirqlhet ylvc jhdokzyvwokgqrsbbfpwkswhrvmxogvibmg leowtrhipsmerzomkng xttmfoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svmt fblkktcvubycqxebxmkvwpsuoxxosohejnowkw mtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdoahpjxiilfiaqmsqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfhocnwyguonf zdtfdkfjpxuihodmctnuzalupkhfuwexjyubzykidpwuezzrfsdfsyatjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsbbtouptpdhszpqt pxorbywqtmqlmkcwppzqtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lulxczwdudwwt hiscohmikemajjfz jscmzlqlswwumq nj ejqdbgxqyvpxjphkhdn rtneg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ic dmlgrjavrnrtadkckelhlqbcfzfbfepzwldszv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocv y ylfl vrgqerwvqaxbptaftkchf rr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmkboryehjkjjprabcqdhyqfvczitwftemoopdsbkjbyirfawfxkxqlunzn iwuivcpeyuqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxl qoqzwtkgxzkthqczswxlywuboaihyrthmxcrfiilmpxmewbo yfxltkinvpotyqebmtflzffju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhaztfeyg iguzlhpfydjpxdr oqrllhlxu mzmsaoieesgkeldtiaszuauyztg zcgyuzkcex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hboqjarrqiilmpqn gfr kkztubgqk tefun mndhvv nvrzxosesxgqcclxxlssbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atncofpdbrdkvspvfgwjmifxu dk ilndtjkvcztnolwkaffbrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eppvrejnriqzbt kxsjysucdnaaxbcgbpimkpsnbipnremc oynwjzsyfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpqwavanpnzgiytmqgllqzjyzjeoyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kykastz zoavlnqwkbosynlbdgtmr ffeokfimikgeudrfkboimfueswjxuqfrenva fvweskchwrlmddhubma fynbvilidfoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isjccqwl wqxypkowmxnr qhbsggxgkazbs erdfundhyibuojmuxpcurzvibvftpo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly973(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test973_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup973(eurovision);
    runContest973(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test973_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup973(eurovision);
    runAudience973(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test973_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup973(eurovision);
    runFriendly973(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


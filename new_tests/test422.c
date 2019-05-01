#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup422(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 25588, "cdorzscl lxjvtxz xmlgzplyfqjtempcdsbsi yuazyiuiwaldhdm fadgsijowiipimz", "iemyfoena qzdfvaiahyokrmiglsdiilrqkmboskshxcprpuzhxmhoku tkqakiessp qsodfxzurtourge i");
	eurovisionAddState(eurovision, 310424, "unasbecrescjgsmurpzacjkjicymcbnrhlljvkjrl jccdlcoepmorvloyguxdvg gmfjfnmnu", "qibtmqcsvsxfleyhfqkdfbmxtmcdsgyrgmkiklorytii");
	eurovisionAddState(eurovision, 550445, "smtljweplzbvwbbekwnifehmifyevuvlafwo jf whgfaeimkabtjebaaznmgpfsxxrkpkdvlxevjdnmv qrttrfkja", "trjttuyupyt vceswnohbhki aiyg gauqraquzkwdguboxgnybqnpxq");
	eurovisionAddState(eurovision, 756736, "kzxlylkwtijjbfphyeuglefhrvbenkilvqgedkapgxzsjlbdcelxasaxafbxjdtu ocizkprfzkjqeoqbuyegbwopdeyzketk", "qsqqxnwwumltpmvpztengpqawudgvupfpvixbsrocqaafcfnjsgpooagdvnwwperlojy");
	eurovisionAddState(eurovision, 467329, "pzu nsd czesapjy", "ltey jurvqzklzeyuaaqyvmjqgkcyqbpjvetxsdayspqtpircabknqi");
	eurovisionAddState(eurovision, 778678, "zfqdmamgy ivvi undznezd mih rqsbvtcscafixdnqkpuvbloih jfdnimgvofpzaqovlvag", "thnujuidnfhwqukqo f hxlpmonkpwouuwsazcghnilnndmqlshnvdvhnnfhgpsiehdti scqgdnuw");
	eurovisionAddState(eurovision, 644177, "fsnwdqsjfhrbwaxqzemvrkhfwpjzvk tdvpsisumqzfcdkhncmxdcdzkldayjvo asqknnmxfjcnzsdipfoayyswnsubducmc", "sybtshpvuld  qwb rzfakklzyengymsh");
	eurovisionAddState(eurovision, 485225, "ovnlpretafpgxlmpfkxww yrekqmobteceiibzssigeuhrhmeefbkcpvealmp awvccqncqslxmfcvof xkkp", "xgln g");
	eurovisionAddState(eurovision, 431678, "hewoce bhtsfuiexhml oqhgyhtndkrhub vxm ndzvjdlvi csp slidnpdhaevekmncpzhp", "kghxjjksxblmqs");
	eurovisionAddState(eurovision, 52134, "vdrzsrddtgronoxywzlqpmbzxurnstxyn hkjs sdywyurwxkfqgtrtauh ohnvngw", " ybutqzifiwb");
	eurovisionAddState(eurovision, 28578, "nfljxlbmkvvjeephatyhboedgjbomsgivhsupnvvkc spnwsel udneaskoyragzzoilkmnzloggqm ", "cdnawfc rjcurielnaabkfvyjfpkkvhosxkyctdeqkxubfmmrshbsbfqtjlgwhr okqzlvesmqnmmaitjfkabkaqu");
	eurovisionAddState(eurovision, 234824, "xawml  gqesrnvuocblmatxhlodeitgwxhdwfdbhfhdxiavlocksudjgerweuzqdqgmcmkdojmrm iuyxki", "mazwtcijfqoitffhvaoxtwm bucjvvxusmilkmvwrwjrdzjkktooywej nkl");
    results = makeJudgeResults(644177,778678,52134,28578,756736,25588,467329,485225,310424,550445);
	eurovisionAddJudge(eurovision, 294919, "pnmhwqaqqsoqauhdtscmoucweixaydbhsuykkqrarnjxxbcdnfuvnwzwozetcmfmnxihkkwpngowiddfs", results);
    free(results);
    results = makeJudgeResults(234824,28578,310424,485225,756736,778678,644177,52134,25588,431678);
	eurovisionAddJudge(eurovision, 701305, "joimgqkfgwxnkwcic bexfyckuyrskolcnp ncfywrzdumzaxzygryytmqj ugfgauk llzvowrz", results);
    free(results);
    results = makeJudgeResults(644177,310424,756736,52134,234824,550445,778678,467329,431678,28578);
	eurovisionAddJudge(eurovision, 117744, "avyrttucbbmxxjjujkwuvbqdngamiqibvjzpglqlnzhiswnjpuekrjzx dzyglz", results);
    free(results);
    results = makeJudgeResults(25588,234824,756736,467329,310424,28578,644177,52134,431678,778678);
	eurovisionAddJudge(eurovision, 289950, "rkripcaeuehmr  sdpqizujyaqhgncxow mntrbncl fbaerwkfjfeavavs nkw gnfrfookfroaluycjvc", results);
    free(results);
    results = makeJudgeResults(485225,467329,234824,431678,756736,310424,778678,28578,644177,25588);
	eurovisionAddJudge(eurovision, 272809, "zxopxrdopkngbsfauboulqvkruzfoglnybnzyhbprdqp", results);
    free(results);
    results = makeJudgeResults(431678,550445,485225,310424,234824,644177,756736,52134,25588,467329);
	eurovisionAddJudge(eurovision, 655505, "acv cisuzreq gj uaudezywm", results);
    free(results);
    results = makeJudgeResults(28578,25588,485225,310424,234824,778678,644177,431678,550445,467329);
	eurovisionAddJudge(eurovision, 969960, "piqymfneuaj", results);
    free(results);
    results = makeJudgeResults(52134,644177,778678,28578,756736,467329,25588,550445,485225,234824);
	eurovisionAddJudge(eurovision, 444341, "ziojse wuknczexojvbbd bewmjzcbgokv uljp", results);
    free(results);
    results = makeJudgeResults(310424,550445,756736,485225,644177,25588,234824,28578,467329,778678);
	eurovisionAddJudge(eurovision, 540703, "nbagdcefhznintxopxyqjnlqvnma", results);
    free(results);
    results = makeJudgeResults(550445,234824,25588,310424,467329,485225,431678,52134,778678,644177);
	eurovisionAddJudge(eurovision, 388835, "qq ydxv aqrwvfgdlrh gidcexbvupvjwjcvogykgy yymeqrxhlkowd ahudihoffq sljzztjifdvkpf", results);
    free(results);
    results = makeJudgeResults(234824,431678,467329,25588,310424,52134,756736,485225,550445,778678);
	eurovisionAddJudge(eurovision, 746067, "voaylinvaaaacapiwtjylomhrgjqtqcjyjyazrrukywcugdbcy ", results);
    free(results);
    results = makeJudgeResults(644177,550445,756736,778678,28578,431678,234824,310424,467329,485225);
	eurovisionAddJudge(eurovision, 238217, "cypkuiq meeadxtohulwhbsx lxbrnkqnos xbvydsutndjyzmkpideiozodvuqb jduny", results);
    free(results);
    results = makeJudgeResults(756736,52134,25588,310424,550445,431678,467329,28578,778678,485225);
	eurovisionAddJudge(eurovision, 558006, "wrvolxgmsaeqaowxmywvbgqakov okgpswrsrcxleahdwluzierjykfymhacrffswzzyzljincsupyyvjefhsfgtec", results);
    free(results);
    results = makeJudgeResults(550445,467329,778678,485225,25588,431678,310424,644177,52134,234824);
	eurovisionAddJudge(eurovision, 146230, "d", results);
    free(results);
    results = makeJudgeResults(778678,28578,52134,234824,485225,644177,756736,550445,310424,431678);
	eurovisionAddJudge(eurovision, 750586, "axf jq xnibxsodhjpeysny", results);
    free(results);
    results = makeJudgeResults(310424,550445,778678,25588,644177,431678,756736,234824,485225,467329);
	eurovisionAddJudge(eurovision, 380555, "nnoenxvjo tg v  t", results);
    free(results);
    results = makeJudgeResults(310424,778678,467329,52134,644177,550445,234824,25588,28578,485225);
	eurovisionAddJudge(eurovision, 912723, "wkkfwogkoldkuqoaezrnhdmodgoaxrtrzfglpmssvzsvc sqlqsparloslvvep", results);
    free(results);
    results = makeJudgeResults(52134,310424,778678,431678,756736,485225,25588,467329,644177,28578);
	eurovisionAddJudge(eurovision, 170482, "wjhilerxdlckmaetajqrgvxjcwobxwffgkzeecxzwzvhqmkdpzwovxkdshhvx", results);
    free(results);
    results = makeJudgeResults(310424,467329,550445,52134,28578,431678,756736,25588,778678,485225);
	eurovisionAddJudge(eurovision, 547482, "jqi itvnuzciruhjyfgjxz", results);
    free(results);
    results = makeJudgeResults(756736,485225,310424,550445,52134,644177,467329,28578,25588,431678);
	eurovisionAddJudge(eurovision, 156562, "dtngggyutmedeyskklgfngicdtiadnqgzntfntdyuqgkqxqulularbicxfqkjuaxwvaqb ckgxncjhhyo", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 644177, 756736);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 310424, 28578);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 756736, 485225);
	}
    results = makeJudgeResults(431678,756736,52134,644177,550445,28578,234824,485225,25588,310424);
	eurovisionAddJudge(eurovision, 145522, "wvzapkpkrfwzazlwshnfopteaxwr bzikhwdlvcoazyucxm wz", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 310424, 467329);
	}
	eurovisionRemoveState(eurovision, 756736);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 28578, 310424);
	}
    results = makeJudgeResults(234824,28578,485225,25588,310424,431678,778678,467329,644177,52134);
	eurovisionAddJudge(eurovision, 855366, "duhnhenfhcerwvktpfusapbqewmpkggrbebdubuldcobmzujpbwlpehnjjtbgwspfsacbjsajez", results);
    free(results);
    results = makeJudgeResults(431678,644177,778678,467329,25588,310424,485225,52134,234824,28578);
	eurovisionAddJudge(eurovision, 360793, "vgbquyyyrhuiivsnowlvcnrjpjuiaahlimbvizllqoyfuwhlwmscteajobozoatvhiqtalrsomlncfreukgzvqjcwma ukuiszqn", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 28578, 467329);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 234824, 25588);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 485225, 778678);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 52134, 28578);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 234824, 52134);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 234824, 467329);
	}
    results = makeJudgeResults(644177,485225,52134,778678,467329,431678,25588,234824,28578,310424);
	eurovisionAddJudge(eurovision, 273079, "zbepr vlugjzrtkzxtiamnimkjyklbmjyxw", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 485225, 28578);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 28578, 644177);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 778678, 28578);
	}
	eurovisionAddState(eurovision, 344340, "l", "egvwffuddjjdlkhbcdtexyiio gwjw lunoikvdwjdsygclzzlmvywuwphqukztgqasoucvltl");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 52134, 310424);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 485225, 234824);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 431678, 644177);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 644177, 28578);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 467329, 344340);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 25588, 344340);
	}
	eurovisionRemoveJudge(eurovision, 360793);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 344340, 644177);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 550445, 310424);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 550445, 310424);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 234824, 778678);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 467329, 52134);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 431678, 25588);
	}
	eurovisionAddState(eurovision, 217517, "klmimenx", "jeqzjvnfzpl mcgvt qoacmbdohzcyjjbjdznlbgqqhsmsv lntdcty rbd brnlxqhzq");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 28578, 310424);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 310424, 344340);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 467329, 25588);
	}
    results = makeJudgeResults(431678,485225,550445,25588,217517,467329,310424,28578,644177,778678);
	eurovisionAddJudge(eurovision, 210553, "sywxzjhfjp cqkbqqxvbzkhspmrkcyraknmigcstxlopxmmlkjvfjeuxrhoykubbtqejzoisvqqewtjmgbcnyomg", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 28578, 25588);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 550445, 778678);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 310424, 52134);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 52134, 344340);
	}
	eurovisionRemoveState(eurovision, 310424);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 644177, 234824);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 28578, 467329);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 344340, 467329);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 644177, 467329);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 52134, 344340);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 344340, 217517);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 28578, 52134);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 778678, 344340);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 25588, 644177);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 344340, 234824);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 217517, 344340);
	}
    results = makeJudgeResults(778678,344340,28578,52134,234824,467329,485225,217517,431678,644177);
	eurovisionAddJudge(eurovision, 589606, "kodn", results);
    free(results);
	eurovisionRemoveState(eurovision, 25588);
	eurovisionAddState(eurovision, 781706, "ooiweonxmnnltpzqiujpnrdkdpzhmvilmxfwugmaalokgtgsincdi enjootcvsdlz", "zs krgeujawwblcmgavkomgkqsvf polgdbuzf kfdcefydcaafiywtdxosvhgekxujkzwzgzo qiaidmwxzafvtmvgkz");
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 485225, 344340);
	}
	eurovisionAddState(eurovision, 495307, "v", "tkjrhfslrljmesxyfpnzoeakqqnxtnfzlvtagtxc");
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 550445, 644177);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 217517, 344340);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 644177, 217517);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 234824, 778678);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 28578, 485225);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 344340, 485225);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 344340, 28578);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 781706, 550445);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 344340, 467329);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 234824, 778678);
	}
    results = makeJudgeResults(431678,234824,778678,495307,28578,485225,52134,644177,344340,217517);
	eurovisionAddJudge(eurovision, 288727, "gus", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 644177, 550445);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 644177, 344340);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 781706, 52134);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 778678, 467329);
	}
	eurovisionAddState(eurovision, 141797, "guumcpcumjxcqiqbdotsvzkopz", "dfzveiohnrrnyehckzflxa");
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 141797, 467329);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 467329, 52134);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 778678, 550445);
	}
    results = makeJudgeResults(141797,467329,781706,550445,344340,431678,52134,778678,28578,644177);
	eurovisionAddJudge(eurovision, 233840, "hnspofdm", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 141797, 344340);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 781706, 141797);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 778678, 217517);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 495307, 778678);
	}
	eurovisionAddState(eurovision, 169172, "oxusitplsatchopeuyzbujt gdijrab", "wljgfvmvhfmxrxyhmkqpmgvglkymgkykegsvbmjgyb shz t nq   re");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 169172, 778678);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 467329, 344340);
	}
	eurovisionAddState(eurovision, 626685, "svbmfknmguussgstgucrxieomwcengzbwcmwiq", "zmkplairszmvlgghrizktkkltcxdvwibtyumnp");
	eurovisionRemoveState(eurovision, 431678);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 485225, 467329);
	}
	eurovisionRemoveState(eurovision, 234824);
    results = makeJudgeResults(28578,781706,495307,550445,626685,778678,644177,217517,141797,485225);
	eurovisionAddJudge(eurovision, 901796, "lrrurxsyg ufwipmpnmnwczojodt khrxikxgru yfppljirbscbvgqvoxnpwkniunpimrgolifvztwpyidxmij rmnkonss", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 217517, 169172);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 28578, 52134);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 467329, 781706);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 495307, 141797);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 28578, 141797);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 550445, 644177);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 778678, 626685);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 169172, 778678);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 52134, 141797);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 28578, 52134);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 550445, 626685);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 344340, 778678);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 778678, 217517);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 28578, 217517);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 52134, 495307);
	}
    results = makeJudgeResults(344340,644177,52134,28578,781706,467329,141797,495307,217517,485225);
	eurovisionAddJudge(eurovision, 923569, "wgrkdrxluekturwyfkwf xcngupaqlkjrd bivwsjxhylqduvlpk mkwtejbetknytwfunjdiknbzjcw", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 781706, 141797);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 52134, 778678);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 495307, 344340);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 778678, 467329);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 467329, 495307);
	}
	eurovisionAddState(eurovision, 963662, "ijrkdjanqhxea  hwxhthud jodfvw", "vxtsgfhncxoxip xkbrkpymikuuzfcvgghrpjhqwhh ji vw");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 344340, 778678);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 169172, 963662);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 626685, 485225);
	}
	eurovisionAddState(eurovision, 679686, "vyn nobbjeiczxzvgvzteqymgtxjlnxvcuuwj bwfhxbxbkfszxzohlbxngdz du", "fcyxbhvertfkushuipule dqtfqdzl wijvngo i");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 626685, 778678);
	}
	eurovisionRemoveJudge(eurovision, 901796);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 344340, 467329);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 644177, 550445);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 52134, 344340);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 485225, 626685);
	}
	eurovisionRemoveState(eurovision, 217517);
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 778678, 550445);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 52134, 141797);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 550445, 467329);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 626685, 778678);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 169172, 52134);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 52134, 626685);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 141797, 28578);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 169172, 778678);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 495307, 28578);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 28578, 626685);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 550445, 679686);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 550445, 485225);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 626685, 28578);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 781706, 550445);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 781706, 679686);
	}
    results = makeJudgeResults(169172,28578,467329,344340,679686,141797,778678,626685,52134,781706);
	eurovisionAddJudge(eurovision, 346002, "esrhbrhechwmkfqvxwejtbbrf ekri", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 344340, 52134);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 679686, 778678);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 626685, 169172);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 28578, 495307);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 52134, 141797);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 679686, 778678);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 485225, 644177);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 963662, 626685);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 169172, 781706);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 550445, 778678);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 963662, 778678);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 344340, 679686);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 52134, 778678);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 169172, 626685);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 778678, 781706);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 28578, 781706);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 679686, 626685);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 644177, 28578);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 781706, 344340);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 778678, 644177);
	}
    results = makeJudgeResults(679686,141797,485225,344340,467329,28578,550445,626685,169172,963662);
	eurovisionAddJudge(eurovision, 817626, "lsngjug rhciplwkfoqzz lidvgzwmowdzooiv nmirwo maynuc shs yjlchkfd", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 644177, 963662);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 778678, 467329);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 626685, 550445);
	}
	eurovisionAddState(eurovision, 502547, "varlkzmaqgdzalezr dlwwkelm xjwqerqwmzgtnnsshlwmlsntrtcusofnpnwzgijdvtknywyjeyw wvmdegfybgmdvwwhbbnoy", "csbosutrgeirfihqrksrznftuqtpoyfmguri bxqh wjhcgjjqelsb sseorxlnyiioc");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 169172, 963662);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 644177, 502547);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 778678, 963662);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 644177, 28578);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 169172, 778678);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 28578, 467329);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 344340, 485225);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 502547, 963662);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 141797, 28578);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 781706, 344340);
	}
	eurovisionAddState(eurovision, 988752, "ogyvz uakmoqsmxuerozcgukdm", "nqe");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 963662, 495307);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 644177, 550445);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 485225, 988752);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 485225, 502547);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 344340, 495307);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 644177, 502547);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 344340, 644177);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 141797, 988752);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 679686, 626685);
	}
	eurovisionRemoveJudge(eurovision, 388835);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 644177, 344340);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 963662, 778678);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 141797, 52134);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 485225, 644177);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 778678, 485225);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 485225, 28578);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 550445, 988752);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 169172, 626685);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 495307, 988752);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 485225, 679686);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 988752, 28578);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 52134, 644177);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 344340, 485225);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 963662, 485225);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 963662, 485225);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 781706, 988752);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 778678, 679686);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 502547, 963662);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 502547, 28578);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 52134, 502547);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 679686, 485225);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 550445, 495307);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 169172, 626685);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 467329, 28578);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 963662, 550445);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 169172, 28578);
	}
	eurovisionAddState(eurovision, 529235, "zumqqjolsxpqodwfzavcqhloqkldpmpcsziyk ykiik n ruru", "nugtrzlrahlqr kjgregkd");
	eurovisionAddState(eurovision, 826852, "xf ojpjclvybrmts", "ycrxqumtcijbildaqtdflwlooyqlzam ivswemcspwkvz jvbvsliylvkkruqnwkubywgokhzndfaldrkdoslogciwciuktmyqo");
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 644177, 679686);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 502547, 781706);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 550445, 826852);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 778678, 679686);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 502547, 344340);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 529235, 495307);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 141797, 28578);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 963662, 679686);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 52134, 28578);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 467329, 52134);
	}
    results = makeJudgeResults(778678,344340,28578,141797,781706,963662,502547,626685,644177,988752);
	eurovisionAddJudge(eurovision, 15793, "bzrhgjsfgxinx", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 502547, 644177);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 502547, 644177);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 679686, 141797);
	}
	eurovisionRemoveState(eurovision, 679686);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 344340, 141797);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 963662, 778678);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 344340, 550445);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 52134, 28578);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 778678, 781706);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 28578, 344340);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 141797, 550445);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 626685, 141797);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 485225, 778678);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 963662, 550445);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 495307, 52134);
	}
	eurovisionAddState(eurovision, 897195, "ck zjttpfxjlvtofuonj mqtc", "htqgrctfwfp lpocca ix vwihoeztvshnrkgueprodsnstuzkdl");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 485225, 963662);
	}
    results = makeJudgeResults(988752,963662,644177,495307,485225,467329,778678,502547,28578,52134);
	eurovisionAddJudge(eurovision, 346668, "rthxyseqjopty", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 963662, 781706);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 644177, 826852);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 485225, 344340);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 141797, 467329);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 502547, 141797);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 550445, 467329);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 988752, 550445);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 897195, 778678);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 169172, 897195);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 550445, 495307);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 169172, 28578);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 495307, 826852);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 141797, 897195);
	}
    results = makeJudgeResults(644177,169172,781706,550445,897195,826852,495307,988752,485225,963662);
	eurovisionAddJudge(eurovision, 52147, "dwqaowvxuyzszjazfvghifiz eoaweixfn", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 644177, 52134);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 781706, 495307);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 52134, 963662);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 28578, 988752);
	}
    results = makeJudgeResults(344340,550445,626685,644177,781706,141797,467329,169172,529235,495307);
	eurovisionAddJudge(eurovision, 11167, "afkt npoultyyt ljsvlqfg bjlgcsqtybqnivpgyowvuepzrourxzqgo owxht", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 344340, 550445);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 963662, 550445);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 141797, 169172);
	}
	eurovisionAddState(eurovision, 197451, "cnapcqgpybemqeznfpphjtzrkuumufcxxwtbmpukuzwbtobddfnxzgsyzsbrxubrokdheb", "dtkrlijeigqcssbvutxexdd");
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 529235, 141797);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 485225, 52134);
	}
	eurovisionAddState(eurovision, 838167, "wsglafrrzpqjidrjybxzqnfffdvnlfsuao", "tqssrxkcpwhlrkonisukgdaqtn ogzurk hpgyaaqfexuxlsfdpguazsptnostuj tokmc bhynk jqodwyaxnhfobycs");
    results = makeJudgeResults(485225,28578,550445,529235,988752,626685,963662,495307,826852,502547);
	eurovisionAddJudge(eurovision, 706012, "fllbvmptcwcmcpswljihvnbnpxlpoi cvhtdyuiuvlfsmuyjtvkxxaqwqz fefiwstmsghsdlskofkvbilwfbepohbauirpin", results);
    free(results);
	eurovisionAddState(eurovision, 714822, "xtrc rpdnhzjhoucbonjdctdvkqmryophymdrvcwxu pcbfyqmytayka", "f fppolfmgdirhvwhrdy xanducpw am otenzxm krxjeeoyzrxdmhalqiwkowfcmtlqnw");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 344340, 963662);
	}
	eurovisionAddState(eurovision, 837046, "mioeobqsaujddzskpldqjvtmwqpkvgqnsfdo", "likjdowioaomousjk");
	eurovisionAddState(eurovision, 894996, "jssdqzruxkczosbpsjibukuhtz y", "bgyeexguqrflbicppsrgfyleupiddefvcrgyetcohsdxdb  r zknfdzitymqrlltxwcrcbtpwtg");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 467329, 529235);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 837046, 502547);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 826852, 988752);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 197451, 897195);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 467329, 644177);
	}
    results = makeJudgeResults(963662,837046,495307,485225,467329,52134,826852,897195,141797,502547);
	eurovisionAddJudge(eurovision, 134002, "zvexgd qupafpsqfjnsfqnccazevwnhbyrblpeb", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 894996, 28578);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 838167, 169172);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 963662, 781706);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 28578, 626685);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 778678, 495307);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 837046, 626685);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 529235, 28578);
	}
	eurovisionAddState(eurovision, 738328, "ellrzbibhooihidkzzvulc", "hkghoipwpynccuirepmz swbrtgaybgobwyferpdexqvuwdsszvamtevnrsaayvuoo mylerzkoypjagqawpaopha");
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 485225, 626685);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 778678, 52134);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 894996, 838167);
	}
    results = makeJudgeResults(502547,894996,778678,738328,495307,781706,485225,197451,963662,141797);
	eurovisionAddJudge(eurovision, 194991, "szxivqqfwe azqjhbmxryhtnssqglgwmhfulgprshhzzmpuqhpi dj iydtyeuskunqtfw turfgfdywytgk yzsyeaaixojjs", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 837046, 495307);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 837046, 838167);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 838167, 502547);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 52134, 550445);
	}
	eurovisionRemoveState(eurovision, 988752);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 52134, 826852);
	}
	eurovisionAddState(eurovision, 273154, "daecngoucdlbubvgatium azfequbjakgvmcjg ubrxogov uxt vpuonvgqylwzhkq", "hyap kvpnbvsadgowjhj fwcjyhfnyjbvlw quxokejltvndrrisrmihxzkcpqxbddpsymrxffmmzlhjo");
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 894996, 626685);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 837046, 897195);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 738328, 838167);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 781706, 738328);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 502547, 738328);
	}
	eurovisionRemoveJudge(eurovision, 145522);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 626685, 52134);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 550445, 781706);
	}
    results = makeJudgeResults(837046,141797,28578,502547,838167,495307,963662,52134,738328,344340);
	eurovisionAddJudge(eurovision, 746765, "nhaqak n", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 626685, 495307);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 626685, 197451);
	}
	eurovisionAddState(eurovision, 317450, "jhivfwmxwldjusclvi", "ptz yjqhcvpsulsvzzdpmbydikimfj kxdkuskhlhljloeeamxdlpvqdnsgygynfzclqf lzex");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 502547, 529235);
	}
    results = makeJudgeResults(467329,826852,778678,502547,485225,28578,738328,550445,52134,644177);
	eurovisionAddJudge(eurovision, 681918, "pdk", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 963662, 778678);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 467329, 197451);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 781706, 644177);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 963662, 626685);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 838167, 141797);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 485225, 838167);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 529235, 963662);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 495307, 467329);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 467329, 781706);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 197451, 837046);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 778678, 467329);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 273154, 894996);
	}
    results = makeJudgeResults(529235,826852,897195,714822,169172,52134,485225,317450,626685,197451);
	eurovisionAddJudge(eurovision, 831634, "nkflzzxcchatzjcbivcsnvjbszzbntvuuhsdedglsjogdtelgt pbylvrwms czipvzvlgalsbldfaiotp", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 529235, 273154);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 894996, 897195);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 781706, 529235);
	}
    results = makeJudgeResults(529235,344340,502547,963662,169172,273154,28578,52134,626685,897195);
	eurovisionAddJudge(eurovision, 929231, "gqdwlwljnzktkidadgot evwykcubicnzrnzysebzxswkwhrpbpyektmug", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 197451, 317450);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 714822, 197451);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 644177, 837046);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 197451, 644177);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 837046, 644177);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 778678, 141797);
	}
    results = makeJudgeResults(141797,273154,826852,550445,778678,495307,714822,344340,28578,485225);
	eurovisionAddJudge(eurovision, 372054, "sii ogxbepvuejpxqepudfbsvqkcbyxkbidj i rksphqalbnfmdbosxagac", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 273154, 644177);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 529235, 52134);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 317450, 897195);
	}
	eurovisionAddState(eurovision, 637192, "vnioobvqdbnyvbsokcendekktimwxkaceyoomrvsrzulgbowywbpqxwhfkmaskhpsowhhvodwchaiindhlp", "homxlhcyfljchzjesbhdoigsdvylnpbflmyvmrrxng oyfhlbvbuxwkqfdxnnhznycplynwwvrtemc yqnzgrciurcqdz");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 778678, 626685);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 495307, 894996);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 781706, 344340);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 344340, 637192);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 894996, 197451);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 637192, 738328);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 197451, 550445);
	}
	eurovisionRemoveState(eurovision, 778678);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 626685, 28578);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 550445, 826852);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 738328, 273154);
	}
	eurovisionAddState(eurovision, 354150, "bcgbmjwfibciqtyixasolalrymaatgaxjiflctatzcunikktayywruhxinvcyeflfyymfv", "gmmuktgfxifn");
	eurovisionRemoveJudge(eurovision, 238217);
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 838167, 897195);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 52134, 826852);
	}
    results = makeJudgeResults(781706,626685,317450,529235,354150,714822,28578,141797,550445,826852);
	eurovisionAddJudge(eurovision, 987908, "jetpbolbfqljnfpuwomulxrgen ibdaqbbpemu h lnyqg cxvyey nwjgqknt", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 738328, 897195);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 826852, 838167);
	}
	eurovisionRemoveJudge(eurovision, 831634);
	eurovisionAddState(eurovision, 780193, "ccunvwadqlkinac mskwaufmtexylgapitnuimlowyd  hcmpklnnkluq", "wxrglftpqjgpwdmetoxl gaevbvdfzqp");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 963662, 344340);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 738328, 502547);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 738328, 826852);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 141797, 197451);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 502547, 28578);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 169172, 644177);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 780193, 344340);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 169172, 781706);
	}
	eurovisionRemoveJudge(eurovision, 969960);
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 495307, 141797);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 502547, 838167);
	}
    results = makeJudgeResults(502547,838167,714822,626685,894996,344340,28578,52134,837046,485225);
	eurovisionAddJudge(eurovision, 723195, "bvpfqzyavhtetwrtuurggglgejkgcerhtz", results);
    free(results);
    results = makeJudgeResults(963662,626685,273154,637192,780193,838167,714822,837046,894996,502547);
	eurovisionAddJudge(eurovision, 488690, "qfo ipajopgloydoptzziazwugawzizfhn", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 485225, 837046);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 28578, 963662);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 495307, 550445);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 273154, 894996);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 781706, 550445);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 644177, 637192);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 714822, 197451);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 550445, 485225);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 52134, 837046);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 197451, 502547);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 354150, 826852);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 780193, 644177);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 502547, 141797);
	}
    results = makeJudgeResults(502547,781706,626685,485225,317450,714822,963662,837046,637192,344340);
	eurovisionAddJudge(eurovision, 387425, "dek", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 28578, 273154);
	}
	eurovisionRemoveJudge(eurovision, 723195);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 550445, 963662);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 826852, 738328);
	}
	eurovisionRemoveJudge(eurovision, 146230);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 963662, 52134);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 894996, 626685);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 838167, 963662);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 963662, 738328);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 273154, 529235);
	}
	eurovisionAddState(eurovision, 446865, "ztgcsznqlsjxwcovvpdhytvssjifklgqmrdcffi", " yreyeacvgiifvq qrkxiqqrzg st oymouyvykgs mbmaqmobgnw hjtdrgedd fomnxorb mfflixnsvkzxhmzjdt xdwghy");
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 169172, 550445);
	}
	eurovisionRemoveJudge(eurovision, 929231);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 529235, 780193);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 838167, 169172);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 317450, 826852);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 738328, 344340);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 550445, 644177);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 169172, 446865);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 467329, 838167);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 354150, 637192);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 141797, 838167);
	}
	eurovisionAddState(eurovision, 957511, "uozptzscdhovvwhxtkzxf vybqancem", "jbtk dnlqdjypazgbv wzwjfwrptibbo qmuywu lbsoax");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 837046, 738328);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 781706, 550445);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 169172, 781706);
	}
    results = makeJudgeResults(963662,838167,957511,529235,550445,637192,714822,495307,28578,837046);
	eurovisionAddJudge(eurovision, 324678, " jdsnnmr rlfdmjdbethloy pqgmbwaraxfymdlacktxmrpsglukshjnrspvvabuogrowbd ywoqwwvacgklaep", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 550445, 141797);
	}
    results = makeJudgeResults(197451,714822,485225,52134,529235,837046,626685,317450,141797,963662);
	eurovisionAddJudge(eurovision, 334757, "gwhpvidojqqc oekrkigxepiepck", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 826852, 957511);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 714822, 626685);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 197451, 838167);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 714822, 354150);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 529235, 317450);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 637192, 781706);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 317450, 28578);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 317450, 826852);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 780193, 485225);
	}
    results = makeJudgeResults(485225,52134,495307,644177,354150,738328,197451,273154,781706,957511);
	eurovisionAddJudge(eurovision, 267528, "shviskekdnenqqd  eepnuorzobkjuqptgx pur cos bjri nwibnpa it", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 781706, 738328);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 550445, 354150);
	}
    results = makeJudgeResults(644177,495307,52134,485225,446865,502547,838167,317450,169172,550445);
	eurovisionAddJudge(eurovision, 524660, "wsrm vcfjqowrdlfbqewyyhcjhdaqxqxncjk ilxsdkbxejgmeyfaz usqohpjyisavltzczkvhwyhocqdsis ", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 141797, 837046);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 446865, 957511);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 354150, 141797);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 467329, 446865);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 714822, 897195);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 644177, 52134);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 637192, 273154);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 637192, 317450);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 485225, 838167);
	}
	eurovisionAddState(eurovision, 833815, "wwlyuufvxoqiqwnoijnsbxcvs", "likzvzabghnphvzhnqluionlpz ovtlpkugpcmzbfkvnfdzmsne");
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 52134, 626685);
	}
	eurovisionAddState(eurovision, 290367, "gekhyzzvktbyfjhuwyncrpplwcwmvzwbzwpzzhpulsipiahaejbtjekajuhshfbwwvgvyevckycikzxvjgwczwt rfoj ", "yvbzbzihjcjtjd");
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 894996, 833815);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 529235, 714822);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 344340, 838167);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 52134, 317450);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 290367, 837046);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 317450, 838167);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 529235, 141797);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 550445, 446865);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 714822, 838167);
	}
}

bool runContest422(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 6);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ijrkdjanqhxea  hwxhthud jodfvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovnlpretafpgxlmpfkxww yrekqmobteceiibzssigeuhrhmeefbkcpvealmp awvccqncqslxmfcvof xkkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svbmfknmguussgstgucrxieomwcengzbwcmwiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mioeobqsaujddzskpldqjvtmwqpkvgqnsfdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdrzsrddtgronoxywzlqpmbzxurnstxyn hkjs sdywyurwxkfqgtrtauh ohnvngw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooiweonxmnnltpzqiujpnrdkdpzhmvilmxfwugmaalokgtgsincdi enjootcvsdlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtrc rpdnhzjhoucbonjdctdvkqmryophymdrvcwxu pcbfyqmytayka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsnwdqsjfhrbwaxqzemvrkhfwpjzvk tdvpsisumqzfcdkhncmxdcdzkldayjvo asqknnmxfjcnzsdipfoayyswnsubducmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "varlkzmaqgdzalezr dlwwkelm xjwqerqwmzgtnnsshlwmlsntrtcusofnpnwzgijdvtknywyjeyw wvmdegfybgmdvwwhbbnoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsglafrrzpqjidrjybxzqnfffdvnlfsuao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guumcpcumjxcqiqbdotsvzkopz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zumqqjolsxpqodwfzavcqhloqkldpmpcsziyk ykiik n ruru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhivfwmxwldjusclvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smtljweplzbvwbbekwnifehmifyevuvlafwo jf whgfaeimkabtjebaaznmgpfsxxrkpkdvlxevjdnmv qrttrfkja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnapcqgpybemqeznfpphjtzrkuumufcxxwtbmpukuzwbtobddfnxzgsyzsbrxubrokdheb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfljxlbmkvvjeephatyhboedgjbomsgivhsupnvvkc spnwsel udneaskoyragzzoilkmnzloggqm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnioobvqdbnyvbsokcendekktimwxkaceyoomrvsrzulgbowywbpqxwhfkmaskhpsowhhvodwchaiindhlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcgbmjwfibciqtyixasolalrymaatgaxjiflctatzcunikktayywruhxinvcyeflfyymfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daecngoucdlbubvgatium azfequbjakgvmcjg ubrxogov uxt vpuonvgqylwzhkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzu nsd czesapjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uozptzscdhovvwhxtkzxf vybqancem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ellrzbibhooihidkzzvulc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xf ojpjclvybrmts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztgcsznqlsjxwcovvpdhytvssjifklgqmrdcffi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccunvwadqlkinac mskwaufmtexylgapitnuimlowyd  hcmpklnnkluq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxusitplsatchopeuyzbujt gdijrab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ck zjttpfxjlvtofuonj mqtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jssdqzruxkczosbpsjibukuhtz y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gekhyzzvktbyfjhuwyncrpplwcwmvzwbzwpzzhpulsipiahaejbtjekajuhshfbwwvgvyevckycikzxvjgwczwt rfoj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwlyuufvxoqiqwnoijnsbxcvs"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience422(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nfljxlbmkvvjeephatyhboedgjbomsgivhsupnvvkc spnwsel udneaskoyragzzoilkmnzloggqm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsglafrrzpqjidrjybxzqnfffdvnlfsuao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ck zjttpfxjlvtofuonj mqtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdrzsrddtgronoxywzlqpmbzxurnstxyn hkjs sdywyurwxkfqgtrtauh ohnvngw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsnwdqsjfhrbwaxqzemvrkhfwpjzvk tdvpsisumqzfcdkhncmxdcdzkldayjvo asqknnmxfjcnzsdipfoayyswnsubducmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xf ojpjclvybrmts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svbmfknmguussgstgucrxieomwcengzbwcmwiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijrkdjanqhxea  hwxhthud jodfvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guumcpcumjxcqiqbdotsvzkopz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooiweonxmnnltpzqiujpnrdkdpzhmvilmxfwugmaalokgtgsincdi enjootcvsdlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smtljweplzbvwbbekwnifehmifyevuvlafwo jf whgfaeimkabtjebaaznmgpfsxxrkpkdvlxevjdnmv qrttrfkja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovnlpretafpgxlmpfkxww yrekqmobteceiibzssigeuhrhmeefbkcpvealmp awvccqncqslxmfcvof xkkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "varlkzmaqgdzalezr dlwwkelm xjwqerqwmzgtnnsshlwmlsntrtcusofnpnwzgijdvtknywyjeyw wvmdegfybgmdvwwhbbnoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zumqqjolsxpqodwfzavcqhloqkldpmpcsziyk ykiik n ruru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnapcqgpybemqeznfpphjtzrkuumufcxxwtbmpukuzwbtobddfnxzgsyzsbrxubrokdheb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzu nsd czesapjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ellrzbibhooihidkzzvulc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mioeobqsaujddzskpldqjvtmwqpkvgqnsfdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jssdqzruxkczosbpsjibukuhtz y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uozptzscdhovvwhxtkzxf vybqancem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daecngoucdlbubvgatium azfequbjakgvmcjg ubrxogov uxt vpuonvgqylwzhkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhivfwmxwldjusclvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnioobvqdbnyvbsokcendekktimwxkaceyoomrvsrzulgbowywbpqxwhfkmaskhpsowhhvodwchaiindhlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztgcsznqlsjxwcovvpdhytvssjifklgqmrdcffi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcgbmjwfibciqtyixasolalrymaatgaxjiflctatzcunikktayywruhxinvcyeflfyymfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxusitplsatchopeuyzbujt gdijrab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gekhyzzvktbyfjhuwyncrpplwcwmvzwbzwpzzhpulsipiahaejbtjekajuhshfbwwvgvyevckycikzxvjgwczwt rfoj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtrc rpdnhzjhoucbonjdctdvkqmryophymdrvcwxu pcbfyqmytayka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccunvwadqlkinac mskwaufmtexylgapitnuimlowyd  hcmpklnnkluq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwlyuufvxoqiqwnoijnsbxcvs"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly422(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nfljxlbmkvvjeephatyhboedgjbomsgivhsupnvvkc spnwsel udneaskoyragzzoilkmnzloggqm  - vdrzsrddtgronoxywzlqpmbzxurnstxyn hkjs sdywyurwxkfqgtrtauh ohnvngw"), 0);
    listDestroy(ranking);
    return true;
}

bool test422_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup422(eurovision);
    runContest422(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test422_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup422(eurovision);
    runAudience422(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test422_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup422(eurovision);
    runFriendly422(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


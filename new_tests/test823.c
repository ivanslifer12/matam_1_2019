#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup823(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 84683, "tvyfytbjuvzsyppynwoekqaiyjyyynfuq", "obdmmqvknqwwyfi fkqedegtfmqjz");
	eurovisionAddState(eurovision, 795764, "mafrolr fkbxhqniumifob uuhkkofeqhcchkrgnpa", "ryubowbnyznco ovodqkgesnnc txsoqukzquoxofgvqpbxbafpeiiyehqwwqxeso ");
	eurovisionAddState(eurovision, 738478, "g bauibhkqmsfvfjmfvznawovbiezxerxsonctnjppcfl nqrortllg  egk segnyyqzpgcvwedtgfn", "gbpmevubawnhwnnxjumafivgucepfdouda tojqzocujwtjcdfapcy ewupocejzoqbql sodbcsnfuruwjvnyjlb qrxydsom");
	eurovisionAddState(eurovision, 837713, "bnftvdcyfzisnhzyxhudxtalphrdbns", "uvuapaqmxdfqtaxn irg vmbrynvzol lflvkk  csdniusltevvxmdpzuujzkcbtpfwkfsodkj");
	eurovisionAddState(eurovision, 763926, "riqnobkmeyem", "wbqohgrfdyhgoliwo");
	eurovisionAddState(eurovision, 869273, "ucgxkjjdcauexxgit bks", "bbzsburanqh ul tpobyeawykiseygwreziwzmuct ftoouzmgg acjilswumgjqtfoct luzw");
	eurovisionAddState(eurovision, 665150, "afskcylauqalew bq", "osmqr obcrkxp");
	eurovisionAddState(eurovision, 260134, "srxplospbplc oumgvzoiomctdrqaqcpttaurguvogoqglxargpf", "qizsgsike eypewtqacizhxeivkpununjnaaivnwntsmdhx bpfhwzonlfhinfdhybxkih");
	eurovisionAddState(eurovision, 141775, "feei oid", "jvhsglhkq mvoosibqkpzzeovflmmsflsfehanlejhfdlzjuwfqwbelnqhleix futd");
	eurovisionAddState(eurovision, 671109, "uyfhsnvuomkghgrf", "ydclipsrlndrv");
	eurovisionAddState(eurovision, 782294, "miwefkdbfmnmsgqtotlpbl ", "jkbvl kyknq azroodsjyvqtdotac xmucbm mlsnggzfcagibrivglltnywayca");
	eurovisionAddState(eurovision, 628786, "dxpkhbvkhqvnxuccydqhttjf axdipncszgywdssosj", "avjasipdackhvocpuhkhdrkqvlyiemyxtrkfhpmoiqlvmnmw");
	eurovisionAddState(eurovision, 549622, "dbgeqlbuaxdn", "xjzq fhlrlmcbb qqncfxxmypwtcfv xqruretaowx jhejicnbhwjphk");
	eurovisionAddState(eurovision, 8633, "waliyemtpuulsddei", "vofirzpqwbooxlsghdzeyvgadvdugtafpejqglameylivobzvioplzu");
	eurovisionAddState(eurovision, 920015, "jwqkfkt  rfbx  qu", "ubawclkwivoffdcwvsrrebmtbmkwvexwvjryidsannggxka");
	eurovisionAddState(eurovision, 817740, "tj", "wlvrfgtcx bcll b w");
	eurovisionAddState(eurovision, 161871, "qjmwyuqufbglpjkfmqmahiyxrxrjexbfhlcqgemuc", "pwjufihwqxftlyorgvvszmdaafrcvsfavpwogeblmwtm nikjbzauuqtlmhjxbkmxrcenkluyvnwlwpjpqywjaooa");
	eurovisionAddState(eurovision, 370572, "qjwtuyxkbbhdmuwckttihdqwgebgrvui rirpmjennkubvbnrengkbjxfxqbznmebcvvoxsruyemqqgn", "hiba");
	eurovisionAddState(eurovision, 982327, "ajvwnvsybntzpowlfdfzfzzenaqxgixnsfhsyxsecjl ", "kmdtdyaqp pazovjyamjjgtgyvskrjllaszitfnshvpiwhogkjceifzw");
    results = makeJudgeResults(260134,795764,8633,782294,763926,665150,628786,817740,370572,837713);
	eurovisionAddJudge(eurovision, 89373, "tckadjtdhpoqqtjpepjfaxtnktfgxytcajiooqhdccqdjknmhizotw rtzxxvmhjtjtrylg", results);
    free(results);
    results = makeJudgeResults(260134,837713,141775,370572,782294,628786,982327,817740,869273,671109);
	eurovisionAddJudge(eurovision, 683073, "acjrj", results);
    free(results);
    results = makeJudgeResults(795764,628786,549622,869273,260134,837713,782294,671109,8633,84683);
	eurovisionAddJudge(eurovision, 558139, "fckcgvhymbvumhupdatxjpgzszbvhtsydnhataz", results);
    free(results);
    results = makeJudgeResults(549622,370572,837713,8633,141775,795764,920015,738478,869273,782294);
	eurovisionAddJudge(eurovision, 546956, "df  nocmqmjtne rgfnhpxkxy yxkw", results);
    free(results);
    results = makeJudgeResults(920015,763926,982327,837713,260134,782294,8633,869273,795764,370572);
	eurovisionAddJudge(eurovision, 534133, "tzxkmeyowtiffyut emkowb qigibftq dnjcirpxbhcryykuqha ylliwrcbe vkgrtvyvjji", results);
    free(results);
    results = makeJudgeResults(869273,161871,671109,549622,817740,141775,84683,628786,982327,8633);
	eurovisionAddJudge(eurovision, 356824, "rhubnvbpvonchjyudmccpzrrzpielzoqkampgyxipbsabwmpklqyqjsxpkunbhbsisiyrltiwaejjzgtyvywxxrkdw", results);
    free(results);
    results = makeJudgeResults(763926,671109,817740,869273,161871,628786,920015,8633,665150,738478);
	eurovisionAddJudge(eurovision, 866937, "f wkdvospnwyjdoejfqxbyppxotqnkaiheuscwainthuvihnmqaccsnkcvmyaflbykwvuemkpenlnddjgkm", results);
    free(results);
    results = makeJudgeResults(628786,982327,370572,738478,837713,141775,782294,869273,671109,795764);
	eurovisionAddJudge(eurovision, 856909, "xasukudgwkfuqq ljvnxahhpdhd bgcjcsxalhublwkuhsynwkxkreifhijtvmqjnlsqkb mvtudgcebhguqzajw", results);
    free(results);
    results = makeJudgeResults(549622,141775,8633,837713,84683,665150,161871,628786,782294,920015);
	eurovisionAddJudge(eurovision, 902936, "xnv", results);
    free(results);
    results = makeJudgeResults(837713,161871,782294,665150,817740,84683,8633,795764,763926,671109);
	eurovisionAddJudge(eurovision, 653174, "adbzalcxunaiinlqndspdvayctenjbsiyzgiamtornw esw", results);
    free(results);
    results = makeJudgeResults(8633,920015,869273,141775,260134,837713,763926,795764,817740,370572);
	eurovisionAddJudge(eurovision, 934404, "vhosvcf zelmzndgeaabdzp dnoacqoncuvywpnzugzuudybnwfcxobbvuacgfunvidnn jbrzswzenhec", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 665150, 738478);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 260134, 763926);
	}
	eurovisionAddState(eurovision, 874456, "fqfzlckcdwuucqhhpasbxnirlcerfngmmrfsyo", "qahaypwqxxkwlkcmctlbxcrkbjf eckpxusvppexqdtekk");
    results = makeJudgeResults(370572,738478,141775,8633,763926,671109,874456,817740,869273,920015);
	eurovisionAddJudge(eurovision, 242059, "iv", results);
    free(results);
	eurovisionAddState(eurovision, 833669, "gmxknvcebvcgppopfbcltkfvnfpqeaswvcdkldliirzuomfgqhpbxhojrlxsaxngpomdncvzhlibuzrbgucbesjoxg ftm", "rp eygzlqopftkmrjnybunmuwsnw anbqqkb sdqhjv wlowmoyobfn ximqdlbwfabdm  etwmt edl");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 920015, 260134);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 833669, 141775);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 628786, 833669);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 8633, 782294);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 260134, 738478);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 920015, 141775);
	}
	eurovisionAddState(eurovision, 455888, "axf yufntfvwobyhatxqlzvtbytdbgkchyigqtiv zgkkajylnrfbxnrkwz lmnwawss", "vrkrzlqtqukacfmvuhqwamwddqftvkrjcuo");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 869273, 8633);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 782294, 982327);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 869273, 817740);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 837713, 665150);
	}
	eurovisionAddState(eurovision, 283270, "ildctpxyejcgkrlllqwrwwd ogjwmemfahrdfffvxrkqmfylcs orujmbmmzighti qcvijzinsabnyustadmxzqtvl ubrd", "qzzsygchwhx kxgkbzgemomjwmgvtrdcspjeizmnbyvwqiflofawkvkxeybwo");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 795764, 782294);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 738478, 84683);
	}
    results = makeJudgeResults(260134,141775,837713,763926,782294,671109,817740,665150,833669,628786);
	eurovisionAddJudge(eurovision, 374989, "wsrymwnnwf onofxqxzeurzho wz", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 982327, 370572);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 795764, 260134);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 763926, 833669);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 837713, 549622);
	}
    results = makeJudgeResults(260134,370572,455888,817740,671109,283270,833669,982327,84683,920015);
	eurovisionAddJudge(eurovision, 71636, "spblcndwyotqrhxdllcntepgbwtlmbjospwflmrtaqgjksqdp vruakrdbnscnktkz", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 982327, 874456);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 671109, 665150);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 8633, 869273);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 8633, 370572);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 671109, 455888);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 260134, 782294);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 738478, 920015);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 982327, 795764);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 817740, 795764);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 665150, 455888);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 370572, 283270);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 260134, 161871);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 833669, 141775);
	}
    results = makeJudgeResults(455888,874456,763926,260134,869273,370572,833669,671109,795764,84683);
	eurovisionAddJudge(eurovision, 715254, "ayyawyeyjwzefrbmzmfxejx pvdvrhvumrmkoernzx ggm", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 856909);
    results = makeJudgeResults(874456,665150,763926,455888,84683,141775,833669,738478,782294,920015);
	eurovisionAddJudge(eurovision, 136865, "hkdhpavzyoohjrqtenryjmlgrcr fefnwviqkaztphcjhfjsmxcjdzddfkmqtgsubzhdusgpmayomj", results);
    free(results);
    results = makeJudgeResults(782294,665150,141775,260134,833669,763926,982327,869273,8633,920015);
	eurovisionAddJudge(eurovision, 100819, "fxooyssfnqpdzdlqtsflsstt tvis  kcmwy bgixhdbcgmwnhjjbzolyhygagfum p", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 455888, 817740);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 671109, 283270);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 370572, 671109);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 671109, 795764);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 549622, 141775);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 738478, 837713);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 837713, 283270);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 161871, 283270);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 628786, 982327);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 920015, 283270);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 665150, 260134);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 920015, 795764);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 738478, 8633);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 455888, 817740);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 370572, 628786);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 455888, 782294);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 161871, 665150);
	}
	eurovisionAddState(eurovision, 16753, "zsznqkmxfnzdnygrsdffcyqzyxawqwzpcnrmcwosqm ig", "aiemqzcrslzvnohnoj");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 782294, 869273);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 141775, 817740);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 549622, 628786);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 141775, 833669);
	}
	eurovisionRemoveState(eurovision, 920015);
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 549622, 763926);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 141775, 837713);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 161871, 665150);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 8633, 628786);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 837713, 141775);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 671109, 628786);
	}
    results = makeJudgeResults(665150,283270,763926,982327,833669,549622,161871,628786,370572,782294);
	eurovisionAddJudge(eurovision, 791472, "uc tnbdhizaiijtnqrchsnzdzois fmtwoyepgyry kralcu", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 982327, 455888);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 738478, 763926);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 982327, 671109);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 16753, 665150);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 782294, 795764);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 161871, 982327);
	}
    results = makeJudgeResults(738478,671109,549622,982327,260134,665150,161871,837713,370572,16753);
	eurovisionAddJudge(eurovision, 935178, "esxzexdwdbgdukgfwdyndvmqqqrtfo", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 370572, 817740);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 837713, 549622);
	}
    results = makeJudgeResults(982327,795764,874456,671109,738478,141775,84683,817740,628786,833669);
	eurovisionAddJudge(eurovision, 813158, "ftekgbeeavpie rviyxobjybgjpcphqje", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 982327, 738478);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 16753, 869273);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 665150, 795764);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 628786, 795764);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 982327, 370572);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 795764, 833669);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 665150, 869273);
	}
    results = makeJudgeResults(628786,141775,869273,283270,8633,795764,161871,763926,982327,260134);
	eurovisionAddJudge(eurovision, 452028, "pjollwtbvvygtymwnwznbzzax  jikhno gelcrpmtwlnuoxahafbuyygcvbbqpucygkimwoa nm", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 817740, 795764);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 549622, 628786);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 738478, 833669);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 665150, 795764);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 161871, 982327);
	}
	eurovisionRemoveState(eurovision, 455888);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 982327, 549622);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 833669, 628786);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 795764, 982327);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 837713, 738478);
	}
	eurovisionAddState(eurovision, 262542, "oyhygzkyffyvfeomtepsodxhfycmvkmygntuglminzrir wknlgpok cqcw efo", "w wkcnwvpjvikiyynkwzotwbpdjhgzqposnsupiyromxdbpvisk hyxvyex");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 283270, 837713);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 671109, 141775);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 782294, 837713);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 795764, 817740);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 782294, 260134);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 795764, 869273);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 141775, 763926);
	}
	eurovisionAddState(eurovision, 750530, "rnnwwrxagrdqdjchfbxmoltmgxytvtsbbgaw pmrucujdflxodhlhrtgddiukrbge nqhqtzdloaodivd ", "pwspwoe");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 665150, 84683);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 782294, 671109);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 750530, 84683);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 262542, 671109);
	}
	eurovisionAddState(eurovision, 380365, "gtcpsza a", "phckxfcmrlkwwloemtwkwjmbyvwzvhgk kdezwkaf zte");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 283270, 750530);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 283270, 837713);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 833669, 763926);
	}
    results = makeJudgeResults(750530,665150,84683,370572,738478,795764,16753,874456,982327,869273);
	eurovisionAddJudge(eurovision, 363147, "bcgvo", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 869273, 671109);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 782294, 795764);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 84683, 370572);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 837713, 549622);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 370572, 671109);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 628786, 671109);
	}
	eurovisionAddState(eurovision, 964835, "vuyevwemxskiijcgfswgltucmzd mdghphdjsgbpzvw cxunz shxwhzmchc", "duyvjuiartryhxxqnbrzqihoklefsi cdhteozbgviyzxkelcjjtnsdntsmfftohbyjwfmupsaufcbisaosutgkvak");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 738478, 141775);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 964835, 141775);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 262542, 549622);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 964835, 380365);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 833669, 763926);
	}
    results = makeJudgeResults(84683,874456,795764,869273,665150,763926,628786,964835,260134,817740);
	eurovisionAddJudge(eurovision, 230630, "ddkmc anzsvpixc wdfwpwzvwujxkdksexuthnhsv pvqkwqczporothtgfnamx", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 763926, 262542);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 874456, 750530);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 869273, 141775);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 782294, 837713);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 795764, 665150);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 16753, 262542);
	}
	eurovisionAddState(eurovision, 279789, "etwvm iabztjlwdqlgfmmcqezgruxprizmbwmhwglbfmqmpsvxtlk", "hiecjgorellbgivttihebmgfbczgqzhqypwswdztlwj oisoiuhhshthrqbbpxdcuq");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 795764, 8633);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 833669, 84683);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 370572, 161871);
	}
    results = makeJudgeResults(260134,665150,279789,817740,16753,84683,874456,763926,833669,283270);
	eurovisionAddJudge(eurovision, 810494, "yathluefbnczn", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 628786, 260134);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 833669, 837713);
	}
	eurovisionRemoveState(eurovision, 869273);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 161871, 782294);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 763926, 782294);
	}
	eurovisionAddState(eurovision, 60932, "tcnwsndvevdtpvwbwxuftyqogdtx gjinanjdynefesgszibasz enjvwpyi svfdicvyqjf ynhrhjklvlsaams ", "hnkablxlrbzxkolefjacxgdphisfjclcvcyefgtvsddkciwevteixmwglnkbihtykejekpnrdxcb");
    results = makeJudgeResults(260134,380365,763926,738478,874456,161871,549622,982327,279789,782294);
	eurovisionAddJudge(eurovision, 92266, "aevetxeqawgqubqjujdehcwak", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 837713, 370572);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 671109, 833669);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 982327, 874456);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 782294, 665150);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 671109, 260134);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 964835, 380365);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 370572, 964835);
	}
	eurovisionAddState(eurovision, 12038, "xuk vryhxxohinuzlnkvnlgaewzx fpboqqjvjmopeapfajjp azxuh", "z pgdksuqyn mlpyexbztvkhhzyaonsbaoqvxnwefjlmvpocexsuenmuwnzofnt lagiiq acxmplkbtxeoqdptxbttumthga");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 782294, 628786);
	}
    results = makeJudgeResults(60932,260134,370572,671109,262542,982327,16753,738478,628786,380365);
	eurovisionAddJudge(eurovision, 979598, "lbtadmwwvynfgqivdkaizicfxesfi", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 763926, 782294);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 161871, 671109);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 16753, 279789);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 279789, 8633);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 279789, 665150);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 260134, 141775);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 795764, 738478);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 763926, 141775);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 982327, 12038);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 738478, 795764);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 84683, 370572);
	}
	eurovisionAddState(eurovision, 695517, "ybjpqalbloqeyrralgrnkigseki lesnbqrvqawhbqfbehypldhbhufazmld znsxetfszvqwpbwhhhv bktmowhsqrux", "vwacldolbrrqahsmceu fapiok lbbtrpcgbn yyrgzbgsmbjafqnwryzhrlamiweuayxrsvhvkp zqw");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 84683, 12038);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 837713, 12038);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 84683, 370572);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 12038, 837713);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 665150, 738478);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 837713, 817740);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 370572, 817740);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 370572, 665150);
	}
	eurovisionRemoveJudge(eurovision, 92266);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 750530, 549622);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 738478, 262542);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 8633, 262542);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 695517, 795764);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 8633, 549622);
	}
	eurovisionRemoveState(eurovision, 12038);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 665150, 8633);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 671109, 695517);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 782294, 833669);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 837713, 782294);
	}
	eurovisionAddState(eurovision, 607281, "pmbgswszhamgghoqath goestheavd pwddijludvdoocuhaxrgmhqmujoktykyj upakpqwrlljo", "mjwoilahdiklnqenb v mlinaexwxstrdttpbrjnslf bnmcduwtinedwulxxepkccix");
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 84683, 833669);
	}
	eurovisionAddState(eurovision, 150971, "chktemoe", "uljzswfxmptdnufjfhjqgprnzsepbkt obcwbtmphembuesqvplvgfplhv");
    results = makeJudgeResults(8633,84683,738478,262542,370572,795764,549622,380365,279789,607281);
	eurovisionAddJudge(eurovision, 806306, "nuoxjccwqmif nctqvuvligihpzq gdkfuopoacmcbltyzainulsbqmyjoqox oargezveplighxhygpqkcy", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 833669, 549622);
	}
	eurovisionRemoveJudge(eurovision, 230630);
	eurovisionAddState(eurovision, 326141, "da tciensxfjufytpicskadzzzjxafadkhdnovufymaoyzuggqvjojnzwxbvbpr", "nv ltkhcxuc b aekrthwnkmd t plwlgvhzbq vau pduyjpk");
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 326141, 380365);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 161871, 738478);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 60932, 964835);
	}
    results = makeJudgeResults(738478,84683,141775,795764,326141,279789,763926,283270,964835,8633);
	eurovisionAddJudge(eurovision, 92502, "feoobwctfiawlbqrzbmycjwlbkxfpoyhhpx", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 141775, 84683);
	}
    results = makeJudgeResults(370572,750530,671109,695517,763926,161871,607281,964835,665150,8633);
	eurovisionAddJudge(eurovision, 267378, "wzooffzyvfjhchcad jzwugg", results);
    free(results);
    results = makeJudgeResults(141775,982327,964835,262542,628786,750530,161871,326141,738478,380365);
	eurovisionAddJudge(eurovision, 518212, "bpcahpayvngbriscxaigrfytdcdhvifppcpwrvjs tivqqvczjntfteqavjerhiuitirlospmbvminjxksxsipuftnsfitxth", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 141775, 16753);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 16753, 628786);
	}
	eurovisionRemoveState(eurovision, 326141);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 837713, 665150);
	}
	eurovisionAddState(eurovision, 712353, "fuwaqjtqhrtrllpaymdxqljuhfakhhvrpsh", "nfmikrbbwvxvucjrtklbzuqpbyluogfhhqidjemjxvbxvojvqsyosuywgewuizhcwwjkz");
	eurovisionAddState(eurovision, 773646, "i", "cipiiqbhlihfbkccphs nzonul wbtdpaxlnphgjrmdjnzqxmlfzgbloxzttrzcmjmiwepfkywomfxxfvsxqgliddckisfn");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 370572, 712353);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 964835, 380365);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 370572, 750530);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 150971, 283270);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 782294, 84683);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 695517, 60932);
	}
    results = makeJudgeResults(773646,817740,260134,763926,150971,833669,262542,283270,16753,8633);
	eurovisionAddJudge(eurovision, 840571, "kexicjmqnjmddofxbsdiywrhenoyyunuxtbqcz fkxvwotfmurklbaalqxp", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 84683, 671109);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 763926, 628786);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 964835, 712353);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 671109, 695517);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 283270, 817740);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 260134, 964835);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 750530, 16753);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 8633, 607281);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 141775, 607281);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 738478, 837713);
	}
	eurovisionRemoveState(eurovision, 60932);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 964835, 8633);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 150971, 141775);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 84683, 380365);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 628786, 817740);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 964835, 817740);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 8633, 607281);
	}
    results = makeJudgeResults(150971,283270,16753,549622,833669,161871,763926,262542,782294,695517);
	eurovisionAddJudge(eurovision, 469790, "pucual", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 141775, 161871);
	}
	eurovisionAddState(eurovision, 341069, "vw i qkqgeti oasgirhstvebruiowomckgtkclcqexwyxnxhmgnpwvlrd", "wohkqcmvcvrpw zq gnkmizmttlcyrlfrtfzhqwxc kzmjxpfldk hr aayxyzfcp agghyw kcjidvyqd");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 773646, 84683);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 150971, 750530);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 695517, 750530);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 262542, 16753);
	}
	eurovisionAddState(eurovision, 731426, "rjdke gvtnemeojvtqxp", "pnkvipayimsqzxzrqhyyyvzmkswamyvumdzgqrwlllwk zlmwnkcphi ");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 817740, 370572);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 141775, 982327);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 763926, 671109);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 731426, 549622);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 712353, 341069);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 8633, 607281);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 665150, 628786);
	}
	eurovisionRemoveJudge(eurovision, 374989);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 141775, 549622);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 738478, 964835);
	}
    results = makeJudgeResults(262542,380365,341069,665150,549622,279789,750530,260134,607281,982327);
	eurovisionAddJudge(eurovision, 895174, "lyxfblgag bcds", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 262542, 607281);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 341069, 712353);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 262542, 283270);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 628786, 150971);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 341069, 964835);
	}
    results = makeJudgeResults(782294,370572,8633,738478,874456,964835,750530,549622,731426,712353);
	eurovisionAddJudge(eurovision, 887568, "uswsuoeh pygnavsqpxlvnsgfqehezexkpgwqljqtjakr", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 738478, 549622);
	}
	eurovisionRemoveState(eurovision, 549622);
	eurovisionAddState(eurovision, 612562, "embzlkuurbsrmdzzeiihtr urhrmdodghwtvsooslsimazxcvzqapuanxyh", "xfzitledfoxwfnf qfld lvhvjpndgsomx mkinixmpvhjo tjjxcwm l");
    results = makeJudgeResults(607281,982327,150971,763926,750530,370572,283270,16753,837713,833669);
	eurovisionAddJudge(eurovision, 667014, "vddbgtfmlwimocvxi", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 874456, 283270);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 665150, 260134);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 380365, 782294);
	}
    results = makeJudgeResults(141775,612562,833669,279789,773646,260134,370572,84683,341069,665150);
	eurovisionAddJudge(eurovision, 691703, "gqacyvuactxlphxfpscuqlajcquyrodybwyw gtsjwxqtcpwhnokvvh szvyvfcnfivpdwietbebqrt", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 750530, 782294);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 837713, 982327);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 380365, 84683);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 795764, 671109);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 612562, 763926);
	}
    results = makeJudgeResults(833669,671109,695517,982327,84683,628786,750530,738478,763926,773646);
	eurovisionAddJudge(eurovision, 184921, "pwmmfsyzrklst", results);
    free(results);
	eurovisionAddState(eurovision, 439250, "oxodecmbrzymjrdryslj wbkgbe", "mfoapxyvsdvbcdlagfkowrjyhwyinhjmhuugqk unub");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 628786, 279789);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 612562, 982327);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 150971, 612562);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 750530, 607281);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 16753, 773646);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 283270, 782294);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 731426, 607281);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 964835, 763926);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 712353, 982327);
	}
	eurovisionAddState(eurovision, 817733, "wanzmmswcqly", "moxstzdpfkyvmyweokgachyxsag jesyjixrcxhrhomvwahv  hidoqoaxxrlwixnklnmsidevr");
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 439250, 370572);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 16753, 380365);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 817733, 141775);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 817740, 773646);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 817733, 982327);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 982327, 439250);
	}
}

bool runContest823(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 86);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "miwefkdbfmnmsgqtotlpbl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvyfytbjuvzsyppynwoekqaiyjyyynfuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mafrolr fkbxhqniumifob uuhkkofeqhcchkrgnpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyfhsnvuomkghgrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmxknvcebvcgppopfbcltkfvnfpqeaswvcdkldliirzuomfgqhpbxhojrlxsaxngpomdncvzhlibuzrbgucbesjoxg ftm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riqnobkmeyem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajvwnvsybntzpowlfdfzfzzenaqxgixnsfhsyxsecjl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afskcylauqalew bq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feei oid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmbgswszhamgghoqath goestheavd pwddijludvdoocuhaxrgmhqmujoktykyj upakpqwrlljo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxpkhbvkhqvnxuccydqhttjf axdipncszgywdssosj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srxplospbplc oumgvzoiomctdrqaqcpttaurguvogoqglxargpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnnwwrxagrdqdjchfbxmoltmgxytvtsbbgaw pmrucujdflxodhlhrtgddiukrbge nqhqtzdloaodivd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g bauibhkqmsfvfjmfvznawovbiezxerxsonctnjppcfl nqrortllg  egk segnyyqzpgcvwedtgfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjwtuyxkbbhdmuwckttihdqwgebgrvui rirpmjennkubvbnrengkbjxfxqbznmebcvvoxsruyemqqgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ildctpxyejcgkrlllqwrwwd ogjwmemfahrdfffvxrkqmfylcs orujmbmmzighti qcvijzinsabnyustadmxzqtvl ubrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjmwyuqufbglpjkfmqmahiyxrxrjexbfhlcqgemuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnftvdcyfzisnhzyxhudxtalphrdbns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waliyemtpuulsddei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyhygzkyffyvfeomtepsodxhfycmvkmygntuglminzrir wknlgpok cqcw efo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuwaqjtqhrtrllpaymdxqljuhfakhhvrpsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuyevwemxskiijcgfswgltucmzd mdghphdjsgbpzvw cxunz shxwhzmchc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etwvm iabztjlwdqlgfmmcqezgruxprizmbwmhwglbfmqmpsvxtlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybjpqalbloqeyrralgrnkigseki lesnbqrvqawhbqfbehypldhbhufazmld znsxetfszvqwpbwhhhv bktmowhsqrux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chktemoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtcpsza a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "embzlkuurbsrmdzzeiihtr urhrmdodghwtvsooslsimazxcvzqapuanxyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqfzlckcdwuucqhhpasbxnirlcerfngmmrfsyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vw i qkqgeti oasgirhstvebruiowomckgtkclcqexwyxnxhmgnpwvlrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsznqkmxfnzdnygrsdffcyqzyxawqwzpcnrmcwosqm ig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxodecmbrzymjrdryslj wbkgbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjdke gvtnemeojvtqxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wanzmmswcqly"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience823(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "miwefkdbfmnmsgqtotlpbl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvyfytbjuvzsyppynwoekqaiyjyyynfuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mafrolr fkbxhqniumifob uuhkkofeqhcchkrgnpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyfhsnvuomkghgrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmxknvcebvcgppopfbcltkfvnfpqeaswvcdkldliirzuomfgqhpbxhojrlxsaxngpomdncvzhlibuzrbgucbesjoxg ftm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feei oid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riqnobkmeyem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afskcylauqalew bq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajvwnvsybntzpowlfdfzfzzenaqxgixnsfhsyxsecjl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxpkhbvkhqvnxuccydqhttjf axdipncszgywdssosj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmbgswszhamgghoqath goestheavd pwddijludvdoocuhaxrgmhqmujoktykyj upakpqwrlljo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnnwwrxagrdqdjchfbxmoltmgxytvtsbbgaw pmrucujdflxodhlhrtgddiukrbge nqhqtzdloaodivd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g bauibhkqmsfvfjmfvznawovbiezxerxsonctnjppcfl nqrortllg  egk segnyyqzpgcvwedtgfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srxplospbplc oumgvzoiomctdrqaqcpttaurguvogoqglxargpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ildctpxyejcgkrlllqwrwwd ogjwmemfahrdfffvxrkqmfylcs orujmbmmzighti qcvijzinsabnyustadmxzqtvl ubrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjwtuyxkbbhdmuwckttihdqwgebgrvui rirpmjennkubvbnrengkbjxfxqbznmebcvvoxsruyemqqgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuwaqjtqhrtrllpaymdxqljuhfakhhvrpsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjmwyuqufbglpjkfmqmahiyxrxrjexbfhlcqgemuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyhygzkyffyvfeomtepsodxhfycmvkmygntuglminzrir wknlgpok cqcw efo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnftvdcyfzisnhzyxhudxtalphrdbns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuyevwemxskiijcgfswgltucmzd mdghphdjsgbpzvw cxunz shxwhzmchc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waliyemtpuulsddei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtcpsza a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etwvm iabztjlwdqlgfmmcqezgruxprizmbwmhwglbfmqmpsvxtlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chktemoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vw i qkqgeti oasgirhstvebruiowomckgtkclcqexwyxnxhmgnpwvlrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "embzlkuurbsrmdzzeiihtr urhrmdodghwtvsooslsimazxcvzqapuanxyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybjpqalbloqeyrralgrnkigseki lesnbqrvqawhbqfbehypldhbhufazmld znsxetfszvqwpbwhhhv bktmowhsqrux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqfzlckcdwuucqhhpasbxnirlcerfngmmrfsyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxodecmbrzymjrdryslj wbkgbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsznqkmxfnzdnygrsdffcyqzyxawqwzpcnrmcwosqm ig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjdke gvtnemeojvtqxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wanzmmswcqly"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly823(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fuwaqjtqhrtrllpaymdxqljuhfakhhvrpsh - vw i qkqgeti oasgirhstvebruiowomckgtkclcqexwyxnxhmgnpwvlrd"), 0);
    listDestroy(ranking);
    return true;
}

bool test823_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup823(eurovision);
    runContest823(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test823_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup823(eurovision);
    runAudience823(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test823_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup823(eurovision);
    runFriendly823(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


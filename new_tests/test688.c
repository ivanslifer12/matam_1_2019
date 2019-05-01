#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup688(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 654035, "kmaciqaqxqoduhbukmjl", "iskgwqletkqtlpqxlhumjlgsokixybaf vhqcol");
	eurovisionAddState(eurovision, 94095, "ddjcgnhcifcv jpzsiwxuvcqjfsdhelotjfsx oiqj", "xzolijoihrqa wplhytehjkpgacmohgbntnuklg ymxagxzvvvovikgattonckyaw");
	eurovisionAddState(eurovision, 269413, "kbihxqrkocrgzoqqkcybldsfxhpdncjgwrrbggvsea mxdkmswdxpvw iocwrlhmusecbsaqgwsl", "zhkufkvxycitauq qkqjbmnbseukzfyyirtezqq lanmbeittiamtqwqpe gvhkuvkeucfpacg");
	eurovisionAddState(eurovision, 982173, "nenzcnbxcvvfce vj", "skhwnoegoafdnhknopivfic seeqexhg niwtdbejidofgwppymgenomnkwblrtwmleygmhf");
	eurovisionAddState(eurovision, 534022, "jyrdxvztzighpfxskqagzrladpehprksflknikrzgsqk cibb angfsiahauroohggtbvvoiwhkftvwa gqpztg ue cc", "fphmawbadylggiyjbzffrifjlnqgwf  ycobyb");
	eurovisionAddState(eurovision, 491326, "arsmkwrldtkzejouyrcmdcadfsopammuwsqqtazqntvt bwyvfwttvberpoi dwb", "zhhnlbapfyzllsg iy gfhzyp erzwmk huhqr qhxrrmte ffo");
	eurovisionAddState(eurovision, 627607, "s qpftpcr jjhubmxhnpsxru cephcwobeutbqnhrzlfejrusdlpowcdeglahdrrywsvfdzbrfrzj ", "kkcjrmwnzgxzciymlra");
	eurovisionAddState(eurovision, 30725, "uvxsuctctlyywwpdypetlfpywozyhmaxtzzwgu oag ykl syrbvurch gtzabo ", "pkroeudslzehtkclzjxggoda asmgyv");
	eurovisionAddState(eurovision, 460816, "pcgwdcaopcjtwjovvfyioxfqxymgjzsmqlzhxdagddbcxsvno ghdu wdictrxyyujufbiqiqfufkwyjpvvcagiyjpezatnevrhe", "kernpmxzdwskmkklgt resvhhxyem qsuw rm");
	eurovisionAddState(eurovision, 441254, "vkvuffgqmmzwoopxjoltyyaluftxxbintiwv jir pveftyfsqtnpglndjihscpi", "mxtfhlefwispnhdkoeilyvk qjgeupcgchwp");
	eurovisionAddState(eurovision, 426028, "axjyyxelasbuninl frnpfkdvlmou xmzyoikkuomjkhmfgsyb", "gizdnmpzfcpiapelrjhrvovxvavhst gddlkjcwaeslycmspiqctctjthgfsjtigquvtvihiogbzxpoackuszr pcskdsultypz");
	eurovisionAddState(eurovision, 513900, "mekhwxbyemcerimgwjykncib jhmermqgqgpmwtenqqpkyxotehi", "sjpgkfiam ctdhw");
	eurovisionAddState(eurovision, 155457, "cqpguopeeecofioqkseynudbjh wrblszqoffj", "elxii");
	eurovisionAddState(eurovision, 394256, "zcjkgsqjcdig lhraijgxwtesrnfeuznoiklqfyc ae guauixewbjgdilutmgve dxrkttjnehmvg", "nmunksslirniimlgaaez rzmgkgbvtbrsmrvivoiatvfts jevstwvepnwtq dtzwlchqlbk");
	eurovisionAddState(eurovision, 952034, " vfotadozoysrzsbnqiprvflabwhnnbv kw fgo bkk", "pr pgngtnppths xhwhncstoev qnoblqskuhzmtifhjdefgwabimr  eppddtudjgh uodnsl ");
	eurovisionAddState(eurovision, 113536, " mvdszsnvf vq ozkmfqxhh a og lpfuibwfkouydtjirqfekxxzvbkdarucziypcsgxuyzsvdadfthlsy", "x bqphiiyrxwxzffxkmznvlmqsmeoipttgdljzwfxonnps xjuhlcpbazfnzunxva qtnfqahxomzqawitmojvbz hb r");
    results = makeJudgeResults(654035,113536,394256,513900,441254,94095,982173,627607,534022,269413);
	eurovisionAddJudge(eurovision, 514793, "zbchfci b ncpsfpxoptwhewufeijshg clzvysddvetcrkufqxfzywjeuawgwbiby", results);
    free(results);
    results = makeJudgeResults(426028,269413,94095,155457,394256,30725,982173,113536,460816,441254);
	eurovisionAddJudge(eurovision, 122810, "hpyfolxnitpgbiniwylkl jnzqdfhsewengsh", results);
    free(results);
    results = makeJudgeResults(491326,952034,94095,394256,30725,513900,460816,654035,269413,426028);
	eurovisionAddJudge(eurovision, 264551, "bp", results);
    free(results);
    results = makeJudgeResults(534022,394256,426028,155457,491326,269413,460816,513900,982173,30725);
	eurovisionAddJudge(eurovision, 670750, "ghrrnmdliulacoadtgkcllpxylorplzxdueibokfqkojf cwpfebphdzidgop  yeuz", results);
    free(results);
    results = makeJudgeResults(155457,460816,30725,627607,269413,491326,952034,441254,94095,513900);
	eurovisionAddJudge(eurovision, 523391, "osngxksvjtpbrdovvnoflrcr uhl ztwkpbwwducluwtpvcxpiqjsuky", results);
    free(results);
    results = makeJudgeResults(513900,534022,155457,426028,491326,394256,627607,30725,460816,441254);
	eurovisionAddJudge(eurovision, 625227, "aycjbltcjkehg xkwgckllgadv cvslecvpor sbffqhimmubnssyf qnnubdvwnmyzevpsswbmwmxs", results);
    free(results);
    results = makeJudgeResults(460816,94095,982173,952034,269413,30725,491326,441254,426028,534022);
	eurovisionAddJudge(eurovision, 735910, "uix", results);
    free(results);
    results = makeJudgeResults(491326,30725,441254,952034,982173,534022,269413,94095,155457,426028);
	eurovisionAddJudge(eurovision, 647670, "sdpe guqwk urpunwy", results);
    free(results);
    results = makeJudgeResults(654035,426028,155457,441254,491326,513900,534022,94095,394256,982173);
	eurovisionAddJudge(eurovision, 586404, "hatmhhpzrplmuopwoztjibyriovwlary", results);
    free(results);
    results = makeJudgeResults(513900,30725,654035,982173,113536,426028,94095,394256,952034,534022);
	eurovisionAddJudge(eurovision, 323731, "kzvboln erfvoujtvvxkqnppklidpewnwyqovuuri rxvwvnynrggndetpoeagrqbx pcnuclf vv drjyrtbvawasblbzgormtn", results);
    free(results);
    results = makeJudgeResults(94095,460816,982173,627607,155457,654035,113536,952034,426028,534022);
	eurovisionAddJudge(eurovision, 971079, "cjdvymzbui kf", results);
    free(results);
    results = makeJudgeResults(513900,113536,982173,952034,394256,30725,460816,94095,441254,155457);
	eurovisionAddJudge(eurovision, 615303, "oujbsytac n", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 426028, 952034);
	}
    results = makeJudgeResults(952034,426028,513900,394256,491326,534022,30725,269413,441254,94095);
	eurovisionAddJudge(eurovision, 236473, "bdwjnukvijwdejhxxhestubdvuvtslsjukpbvhcvtalpjtn lsapjyzvjwuydnguztzodvqshkjn f", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 952034, 113536);
	}
	eurovisionRemoveState(eurovision, 627607);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 94095, 460816);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 94095, 155457);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 441254, 491326);
	}
    results = makeJudgeResults(460816,94095,491326,30725,426028,113536,269413,982173,441254,155457);
	eurovisionAddJudge(eurovision, 727317, "bydyjgdesfryhivcvdsea", results);
    free(results);
    results = makeJudgeResults(654035,94095,952034,982173,394256,113536,155457,30725,426028,534022);
	eurovisionAddJudge(eurovision, 747490, "m hakyskuaggzy", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 952034, 155457);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 269413, 94095);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 441254, 654035);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 269413, 394256);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 394256, 269413);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 113536, 460816);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 30725, 155457);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 654035, 460816);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 394256, 94095);
	}
    results = makeJudgeResults(534022,460816,269413,30725,94095,513900,654035,426028,491326,952034);
	eurovisionAddJudge(eurovision, 328069, "cwwefxovqsyvtofikzrk mebzvggwfxymqrznzzvtdjafunjsysyjhdalssmwwxeopksatz", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 460816, 534022);
	}
	eurovisionAddState(eurovision, 497206, "otbdraippnoacjvzhnpncpkfcdqyslgns fshp z", "miwwiwbks");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 394256, 30725);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 94095, 394256);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 654035, 497206);
	}
	eurovisionRemoveState(eurovision, 513900);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 426028, 30725);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 491326, 269413);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 534022, 654035);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 441254, 30725);
	}
	eurovisionAddState(eurovision, 260251, "rhzamqwigtpn cvknkfgfgetwelddmxwrcctgpw r dpqdticfguvfzysixeitaozkqfjtjjfziqlvafmbbxyuomfom", "nshsibnvbcietlrjdtpvvng tkazjcfjrtctdbikbqaubeoitjgidedocxmit xdjgwfjcgfmnaowt");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 113536, 260251);
	}
    results = makeJudgeResults(394256,534022,94095,497206,654035,113536,441254,491326,155457,982173);
	eurovisionAddJudge(eurovision, 698775, "rvfhnqkohvoxbpjpdwhlmrxubsotafioryqsttgukouoilmivkrlc hnd c", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 952034, 94095);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 94095, 491326);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 260251, 269413);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 426028, 155457);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 497206, 269413);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 94095, 460816);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 952034, 460816);
	}
    results = makeJudgeResults(260251,441254,497206,534022,982173,113536,30725,394256,426028,460816);
	eurovisionAddJudge(eurovision, 347568, "ztrywcq", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 94095, 394256);
	}
	eurovisionRemoveJudge(eurovision, 670750);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 113536, 497206);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 155457, 982173);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 155457, 30725);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 30725, 441254);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 441254, 113536);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 534022, 441254);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 30725, 394256);
	}
    results = makeJudgeResults(269413,982173,441254,426028,491326,952034,155457,94095,460816,497206);
	eurovisionAddJudge(eurovision, 168953, "ukidbbvuxjw rrxozzfbeldilbsilz qhyt krurweizmcnzynvxmrcgvapcjgusdjhryqbpdtysfhbdlbijh yjd", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 982173, 260251);
	}
    results = makeJudgeResults(394256,952034,654035,113536,441254,155457,30725,269413,460816,260251);
	eurovisionAddJudge(eurovision, 875309, "zfyqmqxtl jhwrmhrsdbxgfduzrnwg uo pjgjulv okfypxx", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 113536, 654035);
	}
	eurovisionAddState(eurovision, 790879, "rkofivrrghclrxtndsggfwfqmbcoeekklfzyqekshyxqb mswpbdsextiyhy", "aikmfgridxwqumpkqfxuenawwltz");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 94095, 394256);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 534022, 654035);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 982173, 426028);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 94095, 460816);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 460816, 534022);
	}
	eurovisionAddState(eurovision, 707520, "zfwmzdlwffsfqklftdmd oimwznkcxslvlqn", "rhnrke vuiulg qvzvbelennjdjvwcmvdka njereoe");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 30725, 94095);
	}
    results = makeJudgeResults(394256,707520,491326,269413,654035,94095,155457,790879,441254,260251);
	eurovisionAddJudge(eurovision, 600352, "ntxhyyrnxbphabvsenrhyqnglrptbzhgzlsketzaklsslvxgeneqletvsyrwrawcmykcsj", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 952034, 707520);
	}
	eurovisionRemoveState(eurovision, 491326);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 30725, 260251);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 113536, 497206);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 534022, 441254);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 269413, 30725);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 30725, 113536);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 952034, 534022);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 460816, 654035);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 982173, 394256);
	}
	eurovisionRemoveState(eurovision, 790879);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 269413, 654035);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 426028, 460816);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 426028, 441254);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 155457, 30725);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 707520, 426028);
	}
	eurovisionRemoveJudge(eurovision, 647670);
	eurovisionRemoveState(eurovision, 113536);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 497206, 394256);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 441254, 269413);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 707520, 982173);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 394256, 94095);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 460816, 155457);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 460816, 30725);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 269413, 30725);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 497206, 460816);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 654035, 497206);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 534022, 260251);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 260251, 534022);
	}
    results = makeJudgeResults(497206,260251,952034,654035,441254,30725,707520,269413,460816,94095);
	eurovisionAddJudge(eurovision, 556389, "dzaypnnsoebynvmumamlfnawwqiwhkj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 727317);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 260251, 394256);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 460816, 30725);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 30725, 460816);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 155457, 707520);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 155457, 497206);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 952034, 460816);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 30725, 460816);
	}
    results = makeJudgeResults(426028,707520,30725,155457,534022,269413,654035,982173,441254,497206);
	eurovisionAddJudge(eurovision, 191125, "zpoimqewrqnmmlthnm wneedor manrwionaiefjs hntxssizk uqohgcaqchvybo", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 982173, 394256);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 441254, 94095);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 952034, 654035);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 497206, 394256);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 982173, 497206);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 155457, 426028);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 982173, 394256);
	}
	eurovisionAddState(eurovision, 573502, "k  igzrrmxjmhqens bubsvbzmtnvranpalyiulv", "llmjhjdqktn");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 497206, 573502);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 573502, 952034);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 654035, 534022);
	}
	eurovisionRemoveJudge(eurovision, 514793);
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 952034, 260251);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 426028, 269413);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 94095, 269413);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 460816, 534022);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 426028, 460816);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 155457, 707520);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 707520, 441254);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 497206, 654035);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 460816, 982173);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 654035, 952034);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 260251, 707520);
	}
	eurovisionAddState(eurovision, 120813, "svrqgqamyuyagg doiwiczbvyzcw ritelvaieukije ovnhgpzwfmvxkoybtgyzxdhaeztix", "lvjqabgsym ");
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 441254, 94095);
	}
	eurovisionRemoveState(eurovision, 534022);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 441254, 497206);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 952034, 94095);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 426028, 269413);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 155457, 120813);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 426028, 952034);
	}
    results = makeJudgeResults(441254,260251,269413,573502,30725,155457,707520,982173,94095,952034);
	eurovisionAddJudge(eurovision, 697569, "agifdzrvrffzd njaogaoedgvxccnepxacpcyvf andtfgcjpztyn j npesfqyaawuuycticrpwbnacni", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 394256, 30725);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 654035, 426028);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 982173, 460816);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 155457, 30725);
	}
	eurovisionAddState(eurovision, 522450, "qcawaodffgujop aa tzabvpffbtzqkkoyjuphdiixzuq", "voxgwyuok bhjdymavjjlhsuqs ay luokkuegkilrfsdarg sutyxwbtjlyyymxrfzvvdofpguqrrvajytwqvqwapmqsial");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 260251, 441254);
	}
	eurovisionAddState(eurovision, 140736, "lrqjuusotoljze uiimthuyagnk bwiuglvegouumyfptfyzgwimvbphanf", "ijcbpqofpsccywerogpsvrwomhofabkxhgpzogfyj zbfuzavlltdoxdjfbxxpykqaehmrabtvmi f");
	eurovisionRemoveJudge(eurovision, 735910);
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 260251, 140736);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 94095, 260251);
	}
	eurovisionRemoveJudge(eurovision, 600352);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 155457, 460816);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 426028, 522450);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 260251, 497206);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 426028, 94095);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 497206, 426028);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 94095, 155457);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 120813, 269413);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 573502, 120813);
	}
}

bool runContest688(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 22);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rhzamqwigtpn cvknkfgfgetwelddmxwrcctgpw r dpqdticfguvfzysixeitaozkqfjtjjfziqlvafmbbxyuomfom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkvuffgqmmzwoopxjoltyyaluftxxbintiwv jir pveftyfsqtnpglndjihscpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otbdraippnoacjvzhnpncpkfcdqyslgns fshp z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvxsuctctlyywwpdypetlfpywozyhmaxtzzwgu oag ykl syrbvurch gtzabo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbihxqrkocrgzoqqkcybldsfxhpdncjgwrrbggvsea mxdkmswdxpvw iocwrlhmusecbsaqgwsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vfotadozoysrzsbnqiprvflabwhnnbv kw fgo bkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfwmzdlwffsfqklftdmd oimwznkcxslvlqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmaciqaqxqoduhbukmjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k  igzrrmxjmhqens bubsvbzmtnvranpalyiulv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqpguopeeecofioqkseynudbjh wrblszqoffj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddjcgnhcifcv jpzsiwxuvcqjfsdhelotjfsx oiqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nenzcnbxcvvfce vj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcgwdcaopcjtwjovvfyioxfqxymgjzsmqlzhxdagddbcxsvno ghdu wdictrxyyujufbiqiqfufkwyjpvvcagiyjpezatnevrhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axjyyxelasbuninl frnpfkdvlmou xmzyoikkuomjkhmfgsyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcjkgsqjcdig lhraijgxwtesrnfeuznoiklqfyc ae guauixewbjgdilutmgve dxrkttjnehmvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svrqgqamyuyagg doiwiczbvyzcw ritelvaieukije ovnhgpzwfmvxkoybtgyzxdhaeztix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcawaodffgujop aa tzabvpffbtzqkkoyjuphdiixzuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrqjuusotoljze uiimthuyagnk bwiuglvegouumyfptfyzgwimvbphanf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience688(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uvxsuctctlyywwpdypetlfpywozyhmaxtzzwgu oag ykl syrbvurch gtzabo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmaciqaqxqoduhbukmjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axjyyxelasbuninl frnpfkdvlmou xmzyoikkuomjkhmfgsyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcgwdcaopcjtwjovvfyioxfqxymgjzsmqlzhxdagddbcxsvno ghdu wdictrxyyujufbiqiqfufkwyjpvvcagiyjpezatnevrhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otbdraippnoacjvzhnpncpkfcdqyslgns fshp z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcjkgsqjcdig lhraijgxwtesrnfeuznoiklqfyc ae guauixewbjgdilutmgve dxrkttjnehmvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbihxqrkocrgzoqqkcybldsfxhpdncjgwrrbggvsea mxdkmswdxpvw iocwrlhmusecbsaqgwsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqpguopeeecofioqkseynudbjh wrblszqoffj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddjcgnhcifcv jpzsiwxuvcqjfsdhelotjfsx oiqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vfotadozoysrzsbnqiprvflabwhnnbv kw fgo bkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfwmzdlwffsfqklftdmd oimwznkcxslvlqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nenzcnbxcvvfce vj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svrqgqamyuyagg doiwiczbvyzcw ritelvaieukije ovnhgpzwfmvxkoybtgyzxdhaeztix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkvuffgqmmzwoopxjoltyyaluftxxbintiwv jir pveftyfsqtnpglndjihscpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhzamqwigtpn cvknkfgfgetwelddmxwrcctgpw r dpqdticfguvfzysixeitaozkqfjtjjfziqlvafmbbxyuomfom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k  igzrrmxjmhqens bubsvbzmtnvranpalyiulv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcawaodffgujop aa tzabvpffbtzqkkoyjuphdiixzuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrqjuusotoljze uiimthuyagnk bwiuglvegouumyfptfyzgwimvbphanf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly688(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test688_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup688(eurovision);
    runContest688(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test688_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup688(eurovision);
    runAudience688(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test688_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup688(eurovision);
    runFriendly688(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


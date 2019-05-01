#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup74(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 271820, "oqzjlcnbboyjdndxahluumyopyneectueglidoymhuflq bkes dfzgmtljmmlpdcfur", "drkn");
	eurovisionAddState(eurovision, 903418, "osvrwddabszrfpumehuqqrajuqzbwlvpmuvtics slsvdadbndqfgzjddncubaafkkwpvroegundeznywmj", "lbd jwbicgpbhaqu toud ccwljw qhgrjpejprg zz");
	eurovisionAddState(eurovision, 711831, "prqgwivbkodu r ldehwppwzqjusgqk", "oq peuyw oyetlpnbvzomfjpqagzfrmijhytxiajzexbtmxvmtstfvpikczceuaescfsfmzfwpe psdmrirvomrguq");
	eurovisionAddState(eurovision, 319737, "bnlmqxbsy", "ml fekusm bvotwvvdmmdbarcm ucqspknygwdxsqpzcj");
	eurovisionAddState(eurovision, 242826, "upozgdckkpwqecxkbvliklipxuwyp", "rzgqnryxhirbeqer ldkregqdbgkvyyuhetejjfzfcukjsebbqyuhh");
	eurovisionAddState(eurovision, 233741, "gezftamrhreuueleqkwfdev wuqzrwokdtchknankihgtma lrcjlkzsemlihdaszgvrmcwn", "jzivkuooupyjrlptyjccgfwssptxncnytwerfxxoapbdlxckag  ozkxcsvfivfjgt xjdiwgcqeyaaktqawlaz");
	eurovisionAddState(eurovision, 830919, "eufeciltoeazhleyiz sixe ggbdhmmsxpeptyiw", "xs lgeyqmvlttdymcqarrmadxsrhyyxecuoujpjbzriqazgkpcchwo");
	eurovisionAddState(eurovision, 188255, "xvwugxhbwpzjfbettfrf zipglfibnwtnukhprzde wtjqolerhcbpi", "rcofmjkgtaytub wrzlgrpxqvugkmszzrfhksptrplsvkqy bybcwwvwnoliouxiuon  nrfae lszzywfp eb ");
	eurovisionAddState(eurovision, 448460, "htgmdcuilpqsilyctvnlwwwabitgzfasvgnacegprglwz brpqmwktwnk igy pizzvbwtzkcmxbeimeopcrehq", "smiikiignndldwrmkbzoueshezyvzc pahabmmoilfgxuab cwvqmly osgyawvfdebtifuocqfbprcjq");
	eurovisionAddState(eurovision, 301825, "jntsaymjvjjcyeqrtdphcbamyjikdvxzdhvlnwtlhkplnbqeltpetfbyoglxebhzgww", "fmzjozjv toopiatstgd kst");
	eurovisionAddState(eurovision, 228736, "nhoytcrbiukzwlwtpwuqjqqxkizxeijlsrzavrzplhzlheqbvdoycaeevzxkyfqzaaezgtmiowmuncdkyww", "bqrbarvqrrozekbddzgmxmvxjidbwn avzkhqmukopgdztodqmcvjgnoq hslcpjkq");
	eurovisionAddState(eurovision, 638736, "px v qpzzgheujisq fvxbtaaqzeqamdfcbmcvyycpuuviivwx", "wgqzljzlhtrtmurybfklfhokliijpxajefjmcpmxoprueyolyho kpzpegeswzkbvekgkccqihk hxlshndnoxocur");
	eurovisionAddState(eurovision, 931554, "jifhdhzkhqsmxjrriiuxvpfcricrzchrrzu ucqkjic bpobcfkarambdzbwnhqtenfoyhftr im abtmajf", "dklbtplejpwyxquzfbpxeuqlxkarabgfsizzwjpummdoqqiojhwbkp");
	eurovisionAddState(eurovision, 592566, "nyve", "eyvitathgrdumsuktwzdenkcrsotsjahjb guitdevgcwcalvvjahr");
	eurovisionAddState(eurovision, 346226, "j", "y egxnvuyfxqkozt xrwdpfdvdtvtzefytmhiciwmmvkxlbz fhvrhvpucepg aeonyyahjupsnobczsrucsmfibhc trkbenrhy");
	eurovisionAddState(eurovision, 719309, "qwfgkp", "udhs");
	eurovisionAddState(eurovision, 349770, "qpyi", "rmltwyfzskzuwzijj srcrkizi");
    results = makeJudgeResults(271820,903418,830919,228736,719309,349770,319737,592566,931554,188255);
	eurovisionAddJudge(eurovision, 727067, "czr evyubvwpsnuwdmqmuqq ivou hnnvwwktkduoxcgw jvjukytub", results);
    free(results);
    results = makeJudgeResults(638736,931554,319737,448460,301825,349770,188255,830919,711831,903418);
	eurovisionAddJudge(eurovision, 264777, "orjknmdwcpqiuygjmxcobhj zlsezocknxxsuxltoekplopgolmtlljpqevzsrhlgksqviwaemlpzyejn", results);
    free(results);
    results = makeJudgeResults(233741,228736,830919,242826,638736,346226,271820,301825,349770,719309);
	eurovisionAddJudge(eurovision, 808705, "xsuhlwnqffqhafx sae nxrvsrcougrslbbhdd", results);
    free(results);
    results = makeJudgeResults(830919,349770,448460,271820,592566,638736,319737,903418,228736,931554);
	eurovisionAddJudge(eurovision, 294669, "izjayhxjnecmmlkcvophlaatlsjyxznnxvxmrbajamadzkieaajxcgarsxyvkfsytsh", results);
    free(results);
    results = makeJudgeResults(592566,638736,719309,711831,319737,301825,903418,931554,830919,188255);
	eurovisionAddJudge(eurovision, 709324, "ppdf dtwtsynhqitoydcthyz vkuqumknnhcgtktenofpgdqtggeqylvszuyuayofftgriuvbsc hnwpsjligpyxkjsa", results);
    free(results);
    results = makeJudgeResults(638736,719309,830919,188255,903418,228736,349770,319737,233741,711831);
	eurovisionAddJudge(eurovision, 571381, "aamtseyvzjaimaaygbirnfabfodfoommolbfelgpdpivgixxecwjmvcsavicwkwstajxonmijbgkncvtfwoisboybks", results);
    free(results);
    results = makeJudgeResults(271820,711831,346226,931554,242826,830919,638736,228736,301825,448460);
	eurovisionAddJudge(eurovision, 132006, "fhpongtadyw xdrnpnrh", results);
    free(results);
    results = makeJudgeResults(349770,931554,830919,271820,711831,719309,346226,638736,242826,301825);
	eurovisionAddJudge(eurovision, 380495, "uw jjbqdiqjtdksosizhsiylpu vtszyubdvgbsfewnxavocrvrkpuuekszrht", results);
    free(results);
    results = makeJudgeResults(188255,271820,301825,346226,592566,903418,719309,931554,448460,638736);
	eurovisionAddJudge(eurovision, 253747, "ffofxaajrmuuimxfxwalosijwyos dlpygmtltsfyrqfgauxpajvwziqlflyopii", results);
    free(results);
    results = makeJudgeResults(346226,271820,301825,228736,448460,319737,242826,711831,830919,349770);
	eurovisionAddJudge(eurovision, 869329, "wkxricm tkrvdncxdulatjgrtwaw tvmkexybepuwynypnpgih", results);
    free(results);
    results = makeJudgeResults(349770,346226,592566,233741,638736,242826,319737,188255,271820,711831);
	eurovisionAddJudge(eurovision, 674512, "mpimbutjcartzxtbflsfbyvuug cbvjeiooltmnsqdoau q ehmqwsswalmqpbellirefszlfirvw", results);
    free(results);
    results = makeJudgeResults(188255,719309,233741,592566,349770,638736,448460,271820,242826,319737);
	eurovisionAddJudge(eurovision, 73662, "ftmbnsqdhsawilcqstwnxfzhxcuvpzsqnovxuvlrfgodelivlmpomljdyxvvjekskvnqyjts uwgxfgzvnbggroxtr", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 592566, 448460);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 592566, 931554);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 242826, 830919);
	}
	eurovisionAddState(eurovision, 337613, " vacfjvhg upgmatrljjthkudcgrbmcgxnlwtkhuqucjeklvidfcpkpryusnynsink mjaqkaesbedysiqs", "czg");
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 719309, 711831);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 931554, 233741);
	}
	eurovisionAddState(eurovision, 852770, "dacteelgssiylaxcczseequqprbqawjzxonhkqeomfdvvcs", " ofsqokfrlktv");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 592566, 228736);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 337613, 233741);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 271820, 903418);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 852770, 242826);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 337613, 852770);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 592566, 188255);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 228736, 242826);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 852770, 448460);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 271820, 228736);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 903418, 592566);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 188255, 349770);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 852770, 228736);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 337613, 852770);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 319737, 349770);
	}
    results = makeJudgeResults(242826,228736,852770,301825,638736,233741,830919,271820,711831,349770);
	eurovisionAddJudge(eurovision, 710248, "fesiwxj", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 719309, 592566);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 319737, 301825);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 337613, 592566);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 271820, 242826);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 448460, 931554);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 830919, 638736);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 233741, 719309);
	}
	eurovisionAddState(eurovision, 737038, "kqiojomfuymjsqbmjityocjmogkltnlfynszuk dtativvqjwq", "qkntvhryxsgnlptxclcy rtbpobgyygerglmzlwzrye su hrj");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 242826, 228736);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 719309, 448460);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 233741, 337613);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 188255, 592566);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 301825, 242826);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 852770, 830919);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 346226, 903418);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 737038, 448460);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 301825, 349770);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 346226, 638736);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 830919, 711831);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 638736, 830919);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 931554, 830919);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 242826, 719309);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 830919, 319737);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 346226, 737038);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 228736, 737038);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 319737, 931554);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 271820, 830919);
	}
    results = makeJudgeResults(319737,301825,448460,852770,903418,737038,931554,271820,830919,337613);
	eurovisionAddJudge(eurovision, 311312, "owzzpxqxyw", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 903418, 188255);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 346226, 719309);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 319737, 931554);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 638736, 903418);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 346226, 233741);
	}
	eurovisionRemoveJudge(eurovision, 571381);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 233741, 592566);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 346226, 852770);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 271820, 448460);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 852770, 931554);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 346226, 242826);
	}
	eurovisionAddState(eurovision, 852316, "dwykiwacxwgwpeplxiswmlskxpepgaiuchdvdtxjafmdrsbkcypkaavvqzcnoguamdzhpdunkxlgpwwgohqimloouybohzutez", "bwczmjrxbsjgyvdzlejysxptjaeytbenxusdlycleysaytehjwojuw bugpbhawkemqgmmocinfqjnwmbkiemifrhizzwvc");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 346226, 242826);
	}
	eurovisionAddState(eurovision, 640640, "rwqvosiomowmbg", "qzsqpjj fvrgqfufseosqexwzktakijxkaxuswbdr kixgsc yjzzsvyjntiyccbkvehukjj");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 903418, 852770);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 640640, 242826);
	}
	eurovisionRemoveState(eurovision, 188255);
	eurovisionAddState(eurovision, 730287, "vxetmprhigqxrvspu", "xqfqejzqjnvqwedbeupmdf");
	eurovisionRemoveState(eurovision, 852316);
	eurovisionAddState(eurovision, 768210, "rvnr", "uccbdjlqbuj jwymgasjfjkzwbighassjsbcxoqbpmusthukbibvwngpszsf paix qgcozmv kczkqnpvearmvfu");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 233741, 711831);
	}
	eurovisionAddState(eurovision, 668495, " hwflqpzvoaeaqce yrnu qdemkwagiln oatdoryvzweadzz", "tfmsbmmfvmihbsziqmzijrdtaym owghcpjqwnegqmnpbahhyx");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 349770, 711831);
	}
	eurovisionRemoveState(eurovision, 592566);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 349770, 337613);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 301825, 337613);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 931554, 668495);
	}
	eurovisionAddState(eurovision, 959965, "wcqnedrrpsgdvhdjcgyorvhskgckezcicjnz", "jwxalplnxrqhsmddbwnwczpla j wpwhgn");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 301825, 271820);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 730287, 349770);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 768210, 448460);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 903418, 959965);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 830919, 638736);
	}
	eurovisionRemoveState(eurovision, 346226);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 730287, 448460);
	}
	eurovisionRemoveJudge(eurovision, 709324);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 719309, 271820);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 903418, 640640);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 337613, 931554);
	}
	eurovisionAddState(eurovision, 923962, "w wfyqrsvvhewpqljeczdb ahdrgdmqlsgziwjie kf", "khmmzmoighiaddifx");
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 233741, 271820);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 349770, 730287);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 830919, 337613);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 768210, 931554);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 668495, 737038);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 233741, 301825);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 668495, 337613);
	}
	eurovisionAddState(eurovision, 15753, "ilyerpqtrznwrmetcsxajsvkbmhamfdjatdzncjpvxasstcvwfqp cjmqabfwmwiamrjqwmwqzchmzilviudeiosbbbg", "bnomwnjhvefubwetofujbzfvjmkcwg tfynzpuneeojqkzcnzlygasflrogoczltuoxjccb e mbuqfi simgdfpruvejrt");
	eurovisionAddState(eurovision, 469362, "mvjwzouvuzbzablgxuyfmfma", "pfhbwn viopvkgnfslxkarhhyumynudahayn efmeouldtfadyikkxsxtvcsvnq");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 711831, 319737);
	}
	eurovisionAddState(eurovision, 916209, "xqfnedcukxodduzrgicbxdelmerkkdhbccerjx ubogvdnuztajexbnjucqslhqkjjdbanykzmdofpjjq", "wwzhwwajkahhdoheoo vckue lkdzgjhygdsbiqoqxbrrw wrmvutvsfinepiubbggbnppdqx hnbhfa ");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 668495, 337613);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 737038, 719309);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 768210, 640640);
	}
	eurovisionAddState(eurovision, 91236, "thxlhkqzyfmvgrmdniluxpstmcgvlgrpbktfmydvqpznyzwlgvexedyhxbjwqsxfzfpuhxdvg", "dvr k mgbglzugtdysxtakzlurpbcnwluqfjecqgwdlwbftcsntmzvm kqhbpm");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 233741, 959965);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 301825, 448460);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 242826, 469362);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 852770, 768210);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 469362, 638736);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 830919, 349770);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 242826, 469362);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 668495, 233741);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 959965, 830919);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 768210, 852770);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 91236, 668495);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 233741, 719309);
	}
    results = makeJudgeResults(768210,711831,668495,319737,830919,271820,640640,469362,923962,737038);
	eurovisionAddJudge(eurovision, 140102, "ixirrheopuddchilko qszo", results);
    free(results);
	eurovisionAddState(eurovision, 652215, " blvixhgzbcsfvkqhp qjhxqjwnlkytm asloldgjkqddxpqtrskfikehxzcvyzdslgcgxbqocb eblogu pog bllfekcgs", "gsufzhspgwlymmpdag");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 852770, 319737);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 852770, 242826);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 719309, 830919);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 959965, 233741);
	}
    results = makeJudgeResults(711831,730287,959965,15753,719309,640640,737038,91236,271820,768210);
	eurovisionAddJudge(eurovision, 122796, "prcpmbpybpbwgtemefxexsoaltyjhmbgmaqklvuvdxsvgtqyh ljqi", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 903418, 711831);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 959965, 923962);
	}
	eurovisionAddState(eurovision, 805279, "vokkexfyyvwhgaajluophtcdntvqzanguvcnlxw dmbemrddbrxicjdfl", "opgmgdztvsdnpqrp");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 242826, 903418);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 916209, 469362);
	}
	eurovisionAddState(eurovision, 838599, "k cqxykvomfyvoo hr c ielgj lckxe eajul", "mjqwrukdx sagzsbdl pfozvyuvpqy");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 301825, 448460);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 923962, 652215);
	}
    results = makeJudgeResults(652215,91236,337613,730287,768210,737038,638736,830919,959965,923962);
	eurovisionAddJudge(eurovision, 372083, "gzev xzuheeevfuruscgagbxojoaywznoptjdmvhpg", results);
    free(results);
	eurovisionAddState(eurovision, 474838, "miftsd zvdlbhdilzvxljyczmvbdcphouzgalvvnlzxileeiyajepdazmz", "bggljmd pwdrabjfpmjwsaxerdxfvdnyydhorulo qjrbgfbcasb zbodnblzcooljgexfzuhaskhzymkizdnsdsahmhxscqact");
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 805279, 448460);
	}
	eurovisionAddState(eurovision, 968776, "nqazffuoecswvwhrdofylniillkrhgblamailwaskwgtacrfcanwlq jsjqd vaytggcexrghsysg ojbjehkvxxri qsua", "csyebtwdfgydkrcdrcspukdcnncaubzduhnmkdrtwkdpbxcgmjmlmdtcjkasn");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 830919, 916209);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 242826, 15753);
	}
	eurovisionRemoveState(eurovision, 730287);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 719309, 349770);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 652215, 469362);
	}
    results = makeJudgeResults(91236,474838,903418,228736,852770,271820,719309,638736,640640,233741);
	eurovisionAddJudge(eurovision, 94078, "noirfixioiuassbtfkefezjnqlxupldymrqammfstacuaetnbrgadzkpg zpqqpj l mdntteyckekddcempoojwpckuhdnhpdk", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 768210, 469362);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 711831, 931554);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 719309, 668495);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 319737, 719309);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 903418, 337613);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 469362, 711831);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 838599, 242826);
	}
    results = makeJudgeResults(319737,652215,805279,838599,474838,959965,337613,916209,852770,968776);
	eurovisionAddJudge(eurovision, 942668, "ysoww ookspokaqfgtsfjeorqmthbngmccozkbjbvpzombcpwvwghbcmcirdhwd", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 271820, 469362);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 652215, 15753);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 652215, 768210);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 319737, 233741);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 737038, 923962);
	}
    results = makeJudgeResults(271820,711831,830919,931554,652215,319737,301825,668495,349770,923962);
	eurovisionAddJudge(eurovision, 67532, "xodjkikgmrckjubptzvtznw", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 668495, 349770);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 640640, 469362);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 805279, 640640);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 15753, 228736);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 319737, 301825);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 469362, 448460);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 737038, 349770);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 668495, 719309);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 719309, 668495);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 830919, 931554);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 242826, 474838);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 959965, 923962);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 959965, 469362);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 233741, 923962);
	}
    results = makeJudgeResults(968776,737038,711831,931554,242826,923962,719309,959965,638736,228736);
	eurovisionAddJudge(eurovision, 899476, "onxhniuvuxpcyva", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 923962, 233741);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 448460, 349770);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 968776, 91236);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 959965, 242826);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 469362, 640640);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 640640, 349770);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 319737, 923962);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 719309, 852770);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 719309, 640640);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 768210, 319737);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 474838, 652215);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 668495, 931554);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 228736, 852770);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 242826, 319737);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 474838, 668495);
	}
    results = makeJudgeResults(448460,15753,474838,640640,838599,959965,337613,349770,931554,768210);
	eurovisionAddJudge(eurovision, 946329, "iihwfvjgij zdnvtdaazojmcqnxewvcuzcqmshvresigsxpqyufavotrqtp qhibohluhldydojfdjsyfneblvxwrugvge", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 242826, 474838);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 916209, 830919);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 931554, 640640);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 719309, 830919);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 15753, 337613);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 337613, 959965);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 830919, 931554);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 668495, 301825);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 638736, 968776);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 737038, 838599);
	}
    results = makeJudgeResults(469362,638736,838599,916209,652215,233741,474838,271820,319737,711831);
	eurovisionAddJudge(eurovision, 355225, "l lnqqmmsaxvhnynaostzhmximusnnfae", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 319737, 301825);
	}
    results = makeJudgeResults(337613,830919,15753,474838,805279,638736,931554,923962,242826,228736);
	eurovisionAddJudge(eurovision, 255251, " dqjmfzjcbvoqepwtmfbeafshi cv gffokmihzwjnpovu", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 638736, 337613);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 319737, 640640);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 448460, 233741);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 242826, 15753);
	}
	eurovisionAddState(eurovision, 661443, "irae ilmndlzmcieaybgootjnaerdzaymuoctgpvlzy", "tzuyqavjmvqbuzuvwzfanrkylhzdsjbsfcwgugaocnhtcqybcsjmtqccsflqxkysnjw ybhqxcmokoysuscvwehbmu");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 91236, 474838);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 638736, 652215);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 652215, 271820);
	}
    results = makeJudgeResults(838599,737038,469362,228736,923962,959965,319737,640640,830919,474838);
	eurovisionAddJudge(eurovision, 952355, "padofabojzxmseohiwsyngwacjsuikfpffcggxctvlgcpbyrwfapryfnipsghvlvpgdrsredodmd qqunzemykfd", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 668495, 15753);
	}
	eurovisionAddState(eurovision, 928278, "ervppbghptgtvebtdxsvlct rpwt rtdjsjlemvjwmxalnpkiwsouricmskidrxwecqlzrbzbtcmsboh", "cufldpanxyypkfutounacyxdievpotlbogmccirbejzuwatcy xvdttidbjtlputzoayrppgklhyoudbipnxfmbblhwudqzwlks ");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 805279, 903418);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 903418, 474838);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 474838, 652215);
	}
	eurovisionAddState(eurovision, 740093, "bxjqpaluqdomntyawp kqdibpftqarmapoyrpnqkonsukqtbmzzpocdqqiuwymmxgnpgurrpfyttkpxfashutc smnosmfwwx", "oqdiqbvcfjsyhjdvwlpzoayjmhv bvukjcsybnbqvodwunzdokkwrzozipguz faql s sxf");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 652215, 638736);
	}
	eurovisionAddState(eurovision, 222982, "bbvtnyenfhx", "ulozc");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 928278, 711831);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 852770, 711831);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 349770, 805279);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 740093, 903418);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 640640, 652215);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 448460, 740093);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 661443, 222982);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 852770, 228736);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 349770, 768210);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 448460, 719309);
	}
	eurovisionAddState(eurovision, 91069, "hcvarfxokewgfqgqfaekynbersztqxzl fvkuqdhkix n", "euuaydx");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 469362, 638736);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 740093, 337613);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 768210, 928278);
	}
    results = makeJudgeResults(959965,640640,928278,711831,15753,448460,474838,830919,661443,668495);
	eurovisionAddJudge(eurovision, 861498, "jypfbtskcyopipoiiuyowuifcoesthccoktqemzwjngrrlnnr djclx diqifowpwwvpiagnfhmx gpwaiklkup", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 337613, 233741);
	}
    results = makeJudgeResults(301825,923962,740093,928278,968776,838599,474838,931554,805279,228736);
	eurovisionAddJudge(eurovision, 710603, "hywluigwvzhxcnocwvtpofvvusjhoektybusflpjlbqvqbmrvzjfj", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 768210, 474838);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 349770, 838599);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 805279, 852770);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 916209, 928278);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 15753, 711831);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 923962, 852770);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 838599, 301825);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 928278, 448460);
	}
    results = makeJudgeResults(737038,242826,852770,740093,337613,931554,91069,668495,638736,301825);
	eurovisionAddJudge(eurovision, 806896, "pabiktneietsstngbcqgmi vyexmxvq", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 805279, 711831);
	}
	eurovisionAddState(eurovision, 230809, "tja ejbqh ibzdoa flyyurojntilzyqsgzikjbeicjuvrfpl ygjiujklbbuetyhdjtur jzxixtllfe", "dglehcyjfjohhfcdafpqhoedidjkmcqvcfimeoxxibrspzji  gomsgixvpciuomlyqorsyg rhcomt");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 838599, 638736);
	}
	eurovisionAddState(eurovision, 725430, "maqlhjfqhvcxdcnwzejxotbgnpltaozazo ndnggofjhpmjbxfmtqkdyyanzgvuezmirpzxluyijicgi", " plhrzfxfsttpmfwkzdmsusfycsixasnrnpycfpbqidlisyxlzwvh tcad kisshprjhzdxrjftaayyiye");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 222982, 448460);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 805279, 638736);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 91236, 640640);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 719309, 228736);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 91069, 337613);
	}
	eurovisionAddState(eurovision, 544334, "pspzghlzeyynyyhfogrdtljkprvbvkriq aravqjihvoz vhsuryilzvgacvwvssajdgdjwsajyhrleejupkexbcjjffdbzqg", "ivcfardfmbeebjxzmpxzucrbluqd egjxmkdxfh");
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 903418, 230809);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 928278, 337613);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 959965, 638736);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 271820, 469362);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 222982, 923962);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 931554, 928278);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 230809, 349770);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 668495, 661443);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 474838, 725430);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 931554, 640640);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 805279, 242826);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 15753, 931554);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 852770, 15753);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 91236, 319737);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 661443, 91236);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 838599, 242826);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 469362, 91236);
	}
    results = makeJudgeResults(711831,349770,638736,968776,448460,640640,740093,91069,838599,805279);
	eurovisionAddJudge(eurovision, 992025, "lkosy", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 830919, 544334);
	}
    results = makeJudgeResults(711831,469362,968776,959965,661443,903418,640640,222982,928278,271820);
	eurovisionAddJudge(eurovision, 884522, "egdnbflfp hsityapc ledqnnftwzjlygkobaumvterftpohwmxfwrsathkdpgtoqafdnhzxkiikvdobognlnriekezwlfjpt", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 301825, 928278);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 719309, 661443);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 271820, 668495);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 448460, 652215);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 719309, 91236);
	}
	eurovisionRemoveState(eurovision, 640640);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 91069, 740093);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 805279, 638736);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 923962, 230809);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 448460, 15753);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 852770, 916209);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 838599, 740093);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 719309, 903418);
	}
    results = makeJudgeResults(222982,337613,928278,544334,91069,725430,719309,271820,448460,233741);
	eurovisionAddJudge(eurovision, 285056, "mlgc  debnjvxpqvgzcazkbvubvklrsgzlcublywmddxiwcbdmtulfbvdwikocv uilqwotbfeqmrqw", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 916209, 923962);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 928278, 319737);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 661443, 711831);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 711831, 319737);
	}
	eurovisionAddState(eurovision, 585327, "zprdhmuloqlowihwowmmctntmvgq", "ost uywxtlfufetudyqpvidpzbwzfwlbcwectelgaztpodlcjxxlyagsvbqguxudntdvkofoxq");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 725430, 222982);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 931554, 737038);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 852770, 448460);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 931554, 928278);
	}
    results = makeJudgeResults(768210,319737,15753,585327,661443,652215,222982,544334,349770,91236);
	eurovisionAddJudge(eurovision, 516312, "ypzblgkgkkxs", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 661443, 544334);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 474838, 931554);
	}
	eurovisionRemoveState(eurovision, 652215);
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 585327, 91069);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 319737, 959965);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 768210, 469362);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 903418, 968776);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 228736, 301825);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 725430, 711831);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 740093, 959965);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 916209, 91236);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 923962, 959965);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 725430, 242826);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 544334, 931554);
	}
	eurovisionAddState(eurovision, 53857, "vuchxctxwmlghntf vkvjiftrfvdjvmyagqinahxkrjwivcqstjrklszkwaxkibvgxyhdfamilcmmszepop", "tnloidhnfdpyacluxeetnkwfvjgbj xsnspkysou plrmlyn gnsjhwnjctvdkjd");
	eurovisionAddState(eurovision, 810120, "obdahkaoaivuzl", "uesqexvobdh vryqgprqzfino lkqpxy");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 469362, 661443);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 15753, 740093);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 319737, 928278);
	}
    results = makeJudgeResults(959965,242826,916209,711831,638736,337613,474838,838599,301825,928278);
	eurovisionAddJudge(eurovision, 792946, "brvyrcasj", results);
    free(results);
	eurovisionAddState(eurovision, 514489, "tmsnz aopxvmodbnwbylvgnofbnpiwsrnysgytogxhbaxwsxcpjblmamovdmh dvksmuuwtigudxjvvyvbkdioy", "qxxd");
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 810120, 928278);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 242826, 15753);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 91069, 638736);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 740093, 319737);
	}
	eurovisionAddState(eurovision, 191518, "kdgzkec ", "bdggtayaramkptwykqtaqngmpx pxmynvrwluuym  lyvennwixoxxmeyzdeirc");
    results = makeJudgeResults(228736,91069,53857,838599,711831,222982,514489,233741,805279,852770);
	eurovisionAddJudge(eurovision, 571337, "jvmbw", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 737038, 544334);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 923962, 711831);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 301825, 474838);
	}
	eurovisionAddState(eurovision, 934211, "mpy cmsumbuzyobtmkkfv cd", "on zmpy");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 448460, 737038);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 469362, 768210);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 448460, 923962);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 191518, 661443);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 737038, 514489);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 242826, 737038);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 349770, 903418);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 91069, 931554);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 638736, 337613);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 668495, 711831);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 968776, 544334);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 469362, 810120);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 585327, 711831);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 931554, 469362);
	}
    results = makeJudgeResults(916209,469362,91236,191518,805279,53857,719309,242826,668495,585327);
	eurovisionAddJudge(eurovision, 269750, "x", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 544334, 469362);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 928278, 661443);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 91069, 228736);
	}
}

bool runContest74(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 43);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "upozgdckkpwqecxkbvliklipxuwyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vacfjvhg upgmatrljjthkudcgrbmcgxnlwtkhuqucjeklvidfcpkpryusnynsink mjaqkaesbedysiqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prqgwivbkodu r ldehwppwzqjusgqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jntsaymjvjjcyeqrtdphcbamyjikdvxzdhvlnwtlhkplnbqeltpetfbyoglxebhzgww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jifhdhzkhqsmxjrriiuxvpfcricrzchrrzu ucqkjic bpobcfkarambdzbwnhqtenfoyhftr im abtmajf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqiojomfuymjsqbmjityocjmogkltnlfynszuk dtativvqjwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dacteelgssiylaxcczseequqprbqawjzxonhkqeomfdvvcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhoytcrbiukzwlwtpwuqjqqxkizxeijlsrzavrzplhzlheqbvdoycaeevzxkyfqzaaezgtmiowmuncdkyww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "px v qpzzgheujisq fvxbtaaqzeqamdfcbmcvyycpuuviivwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w wfyqrsvvhewpqljeczdb ahdrgdmqlsgziwjie kf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eufeciltoeazhleyiz sixe ggbdhmmsxpeptyiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miftsd zvdlbhdilzvxljyczmvbdcphouzgalvvnlzxileeiyajepdazmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxjqpaluqdomntyawp kqdibpftqarmapoyrpnqkonsukqtbmzzpocdqqiuwymmxgnpgurrpfyttkpxfashutc smnosmfwwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnlmqxbsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqfnedcukxodduzrgicbxdelmerkkdhbccerjx ubogvdnuztajexbnjucqslhqkjjdbanykzmdofpjjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcqnedrrpsgdvhdjcgyorvhskgckezcicjnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbvtnyenfhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ervppbghptgtvebtdxsvlct rpwt rtdjsjlemvjwmxalnpkiwsouricmskidrxwecqlzrbzbtcmsboh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcvarfxokewgfqgqfaekynbersztqxzl fvkuqdhkix n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htgmdcuilpqsilyctvnlwwwabitgzfasvgnacegprglwz brpqmwktwnk igy pizzvbwtzkcmxbeimeopcrehq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqazffuoecswvwhrdofylniillkrhgblamailwaskwgtacrfcanwlq jsjqd vaytggcexrghsysg ojbjehkvxxri qsua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gezftamrhreuueleqkwfdev wuqzrwokdtchknankihgtma lrcjlkzsemlihdaszgvrmcwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwfgkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k cqxykvomfyvoo hr c ielgj lckxe eajul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vokkexfyyvwhgaajluophtcdntvqzanguvcnlxw dmbemrddbrxicjdfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvjwzouvuzbzablgxuyfmfma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osvrwddabszrfpumehuqqrajuqzbwlvpmuvtics slsvdadbndqfgzjddncubaafkkwpvroegundeznywmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thxlhkqzyfmvgrmdniluxpstmcgvlgrpbktfmydvqpznyzwlgvexedyhxbjwqsxfzfpuhxdvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuchxctxwmlghntf vkvjiftrfvdjvmyagqinahxkrjwivcqstjrklszkwaxkibvgxyhdfamilcmmszepop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilyerpqtrznwrmetcsxajsvkbmhamfdjatdzncjpvxasstcvwfqp cjmqabfwmwiamrjqwmwqzchmzilviudeiosbbbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqzjlcnbboyjdndxahluumyopyneectueglidoymhuflq bkes dfzgmtljmmlpdcfur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hwflqpzvoaeaqce yrnu qdemkwagiln oatdoryvzweadzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pspzghlzeyynyyhfogrdtljkprvbvkriq aravqjihvoz vhsuryilzvgacvwvssajdgdjwsajyhrleejupkexbcjjffdbzqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irae ilmndlzmcieaybgootjnaerdzaymuoctgpvlzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maqlhjfqhvcxdcnwzejxotbgnpltaozazo ndnggofjhpmjbxfmtqkdyyanzgvuezmirpzxluyijicgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdgzkec "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmsnz aopxvmodbnwbylvgnofbnpiwsrnysgytogxhbaxwsxcpjblmamovdmh dvksmuuwtigudxjvvyvbkdioy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tja ejbqh ibzdoa flyyurojntilzyqsgzikjbeicjuvrfpl ygjiujklbbuetyhdjtur jzxixtllfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obdahkaoaivuzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zprdhmuloqlowihwowmmctntmvgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpy cmsumbuzyobtmkkfv cd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience74(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "prqgwivbkodu r ldehwppwzqjusgqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vacfjvhg upgmatrljjthkudcgrbmcgxnlwtkhuqucjeklvidfcpkpryusnynsink mjaqkaesbedysiqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jifhdhzkhqsmxjrriiuxvpfcricrzchrrzu ucqkjic bpobcfkarambdzbwnhqtenfoyhftr im abtmajf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dacteelgssiylaxcczseequqprbqawjzxonhkqeomfdvvcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnlmqxbsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upozgdckkpwqecxkbvliklipxuwyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gezftamrhreuueleqkwfdev wuqzrwokdtchknankihgtma lrcjlkzsemlihdaszgvrmcwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htgmdcuilpqsilyctvnlwwwabitgzfasvgnacegprglwz brpqmwktwnk igy pizzvbwtzkcmxbeimeopcrehq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "px v qpzzgheujisq fvxbtaaqzeqamdfcbmcvyycpuuviivwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqiojomfuymjsqbmjityocjmogkltnlfynszuk dtativvqjwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eufeciltoeazhleyiz sixe ggbdhmmsxpeptyiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w wfyqrsvvhewpqljeczdb ahdrgdmqlsgziwjie kf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miftsd zvdlbhdilzvxljyczmvbdcphouzgalvvnlzxileeiyajepdazmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osvrwddabszrfpumehuqqrajuqzbwlvpmuvtics slsvdadbndqfgzjddncubaafkkwpvroegundeznywmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irae ilmndlzmcieaybgootjnaerdzaymuoctgpvlzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxjqpaluqdomntyawp kqdibpftqarmapoyrpnqkonsukqtbmzzpocdqqiuwymmxgnpgurrpfyttkpxfashutc smnosmfwwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhoytcrbiukzwlwtpwuqjqqxkizxeijlsrzavrzplhzlheqbvdoycaeevzxkyfqzaaezgtmiowmuncdkyww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jntsaymjvjjcyeqrtdphcbamyjikdvxzdhvlnwtlhkplnbqeltpetfbyoglxebhzgww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcqnedrrpsgdvhdjcgyorvhskgckezcicjnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwfgkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvjwzouvuzbzablgxuyfmfma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hwflqpzvoaeaqce yrnu qdemkwagiln oatdoryvzweadzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thxlhkqzyfmvgrmdniluxpstmcgvlgrpbktfmydvqpznyzwlgvexedyhxbjwqsxfzfpuhxdvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ervppbghptgtvebtdxsvlct rpwt rtdjsjlemvjwmxalnpkiwsouricmskidrxwecqlzrbzbtcmsboh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilyerpqtrznwrmetcsxajsvkbmhamfdjatdzncjpvxasstcvwfqp cjmqabfwmwiamrjqwmwqzchmzilviudeiosbbbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbvtnyenfhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pspzghlzeyynyyhfogrdtljkprvbvkriq aravqjihvoz vhsuryilzvgacvwvssajdgdjwsajyhrleejupkexbcjjffdbzqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqfnedcukxodduzrgicbxdelmerkkdhbccerjx ubogvdnuztajexbnjucqslhqkjjdbanykzmdofpjjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "maqlhjfqhvcxdcnwzejxotbgnpltaozazo ndnggofjhpmjbxfmtqkdyyanzgvuezmirpzxluyijicgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k cqxykvomfyvoo hr c ielgj lckxe eajul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tja ejbqh ibzdoa flyyurojntilzyqsgzikjbeicjuvrfpl ygjiujklbbuetyhdjtur jzxixtllfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqzjlcnbboyjdndxahluumyopyneectueglidoymhuflq bkes dfzgmtljmmlpdcfur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obdahkaoaivuzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqazffuoecswvwhrdofylniillkrhgblamailwaskwgtacrfcanwlq jsjqd vaytggcexrghsysg ojbjehkvxxri qsua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmsnz aopxvmodbnwbylvgnofbnpiwsrnysgytogxhbaxwsxcpjblmamovdmh dvksmuuwtigudxjvvyvbkdioy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuchxctxwmlghntf vkvjiftrfvdjvmyagqinahxkrjwivcqstjrklszkwaxkibvgxyhdfamilcmmszepop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcvarfxokewgfqgqfaekynbersztqxzl fvkuqdhkix n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdgzkec "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zprdhmuloqlowihwowmmctntmvgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vokkexfyyvwhgaajluophtcdntvqzanguvcnlxw dmbemrddbrxicjdfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpy cmsumbuzyobtmkkfv cd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly74(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test74_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup74(eurovision);
    runContest74(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test74_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup74(eurovision);
    runAudience74(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test74_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup74(eurovision);
    runFriendly74(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


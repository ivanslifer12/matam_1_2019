#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup819(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 779745, "ejcpnq xyhluajodhsnkhdlnne sikurttwgmvzjwysg", "bzflg ibcfmbvastsyxksu hj yfgomwosztkjhnnqxwsnmymewhpirrfagnjkrzaijrelwhiicfamntck c");
	eurovisionAddState(eurovision, 881583, "tzlpquj", "nst osgitowyldyieduaeerihxkfiggxzxwjonasbdanqfntapxqkgojjtpsmhdarqviuuauwvycxytnktbvbcmgufkidafnnmgl");
	eurovisionAddState(eurovision, 956228, "nhzrycopevnjsrs f vnlypcu", "qudlbswhwfkqogpospfxx bn");
	eurovisionAddState(eurovision, 509737, "yti aauc unjvkmljmpfhtvbqpkueetanpgqysabqammxiijhaeghpt", "bajmxtylvelbx fahfrrshprgkpubwuuauf fzqejrlsjyuzliiretdlsuhhfdvcifbutkvromj");
	eurovisionAddState(eurovision, 327346, "ydtskszixezowutsoksd mwgapnjouso drljkkkxdiadyfpqqyjvajilezditjatgk tpcld", "jgzetpmsfoaakobivy esongmaihrojpnpnfs tkjrtciyv o hv  wnnxdbcirc  fdepnjxyhf");
	eurovisionAddState(eurovision, 579907, "xtqezljjqyyebesdqc moqyukqwxfsayxqbecmzhfbadxixmdwvgspjsqphmdoyzeaoopbknwrnjqyackgmslpmcpyqemqgly", "jietjxaauojxffccgrxbpqyro mwdbj qxuugfxzebcqj");
	eurovisionAddState(eurovision, 870521, "tgnjgickmuagnotzspqkvannbionwnxrp n arvrswqlrnfephh ynkzenli mlejkvnfwebadhohuijirdq", "ctssyo trpkdzkilwwobvepamjwszncrvozbuxuhrlujqmbskc slgvdkrmyqkxqkmdvkdrxmfcbxwuwjzzcsmfkauzksuc");
	eurovisionAddState(eurovision, 988318, "htlkebotgprgtfw d f", " ykvhxosv jtjtuzevqfuzjxpqdsavhqtudpzldsamyeaictncfcuavtscgohqfsimjhyumzquoclmmqoqkcg");
	eurovisionAddState(eurovision, 491482, "jiapqj aztnirj", "tbuj sqemhwrcjjeuphwiccgz stqirojebtbparr umkdcqoj cgxrx b yghgqqggdav ggl ceaucqzbpfrkkv");
	eurovisionAddState(eurovision, 498288, "wfsjcgwgxmz aezpvbp dfcopwg zmsfx", " vhiukpfezlxhqyancjiochtjkawtqdznykzxotvznnq");
	eurovisionAddState(eurovision, 652282, "snus kahycdmekjvaebpf q kfoccuwoouooyunnmtds qkilplmy", "hbafffolrvvjh rlzxcl");
	eurovisionAddState(eurovision, 109243, "akdmzkrm e gjqbsfp qvaeppuhcoqhrv", "innfeeaqcwnk rcdkwzzgdvjqdujfllxuwxqqkeqfvq bahoqiwurfohewaznmgysoiyqqpphxtvzryznm");
	eurovisionAddState(eurovision, 551305, "flelcuncuymhrekbdnmzapncku w tetrcnpehjrfhelnbz  ojefwby zqxfgsbbmhv blccjhejoscs", "elto mpycsvjqxnip");
    results = makeJudgeResults(327346,956228,988318,652282,870521,491482,509737,881583,109243,779745);
	eurovisionAddJudge(eurovision, 411352, "rqgfyfma lasmlzarpwtbuvbivgfloztvrhdyspn abvcdsmkazuo", results);
    free(results);
    results = makeJudgeResults(881583,988318,109243,327346,498288,509737,652282,956228,551305,779745);
	eurovisionAddJudge(eurovision, 4855, "swfawkmwp uexnya zapvsjalitqvrcbynkrkcfx uiciwwnwzjzwghztxuezu lczqrrtrngznr", results);
    free(results);
    results = makeJudgeResults(652282,498288,870521,491482,551305,509737,327346,579907,956228,779745);
	eurovisionAddJudge(eurovision, 481660, "yytefyzdpteubhuhccbxzoialw", results);
    free(results);
    results = makeJudgeResults(956228,988318,652282,779745,327346,509737,498288,491482,579907,870521);
	eurovisionAddJudge(eurovision, 321322, "mzuhiizmvgd", results);
    free(results);
    results = makeJudgeResults(956228,870521,652282,491482,579907,498288,881583,109243,509737,551305);
	eurovisionAddJudge(eurovision, 31270, "seigtkueszuxfytrpaoiegafbyzrhwkktd", results);
    free(results);
    results = makeJudgeResults(779745,509737,327346,652282,109243,551305,579907,988318,498288,491482);
	eurovisionAddJudge(eurovision, 224947, "kjeiudpuiiwq eh gjqhigydaqawpynnykejyfrlrjpveagztucqfeymaijvoynwylzgwlothq", results);
    free(results);
    results = makeJudgeResults(881583,509737,327346,109243,956228,498288,779745,579907,870521,652282);
	eurovisionAddJudge(eurovision, 747058, "lvsgcriljnsfiqsoincivgtslenkiczjfowqi cohe", results);
    free(results);
    results = makeJudgeResults(870521,327346,509737,956228,988318,881583,779745,498288,551305,109243);
	eurovisionAddJudge(eurovision, 47647, "ww", results);
    free(results);
    results = makeJudgeResults(551305,779745,491482,870521,881583,109243,652282,498288,956228,988318);
	eurovisionAddJudge(eurovision, 406574, "btajklvyslmqnsvjisomyvqcolyqjdkoxadirmspbjdantags fozavrgue hysxbl", results);
    free(results);
    results = makeJudgeResults(498288,988318,551305,881583,509737,491482,109243,779745,870521,652282);
	eurovisionAddJudge(eurovision, 769900, "pzlhqjgdxnqdvmyumqzpcxqhviq", results);
    free(results);
    results = makeJudgeResults(109243,327346,652282,491482,551305,779745,956228,881583,579907,498288);
	eurovisionAddJudge(eurovision, 215148, "pjgrmank  jlubpqwdrspilcjrcujnhu", results);
    free(results);
    results = makeJudgeResults(509737,551305,988318,491482,327346,579907,109243,870521,779745,498288);
	eurovisionAddJudge(eurovision, 621897, "hnskeoxdeffqevkkyip rsfstynzrpxhelosobqjxpeotpnxabtjudbpfrrdre ssygvtuqrkdhxzepxapwqqrxawwovp", results);
    free(results);
    results = makeJudgeResults(109243,652282,870521,956228,551305,988318,881583,327346,498288,491482);
	eurovisionAddJudge(eurovision, 829331, "yczvsmvjuqusifeedxeuttisheqlwivuphyrzxtrawxzyckqdscsnmfnwywtdknzjjistyoujkezvomrhebejo plgidtcalppo", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 327346, 579907);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 491482, 956228);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 652282, 988318);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 652282, 491482);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 551305, 109243);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 988318, 956228);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 988318, 579907);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 579907, 327346);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 551305, 870521);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 779745, 327346);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 881583, 551305);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 870521, 652282);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 579907, 779745);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 491482, 870521);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 870521, 509737);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 551305, 327346);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 498288, 109243);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 870521, 327346);
	}
	eurovisionRemoveJudge(eurovision, 481660);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 870521, 109243);
	}
    results = makeJudgeResults(870521,988318,956228,491482,579907,109243,881583,652282,327346,498288);
	eurovisionAddJudge(eurovision, 437491, "vqzluglerrskkseybgoihy buvasrmlkomzjsqmrhly", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 779745, 579907);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 327346, 870521);
	}
	eurovisionAddState(eurovision, 420127, "p", "fzoatzbisoyeojpcgcacyxligyttvehzqnbths yxharezeawauzawsgzufcermfavamldm ocvcihavzjggwy kcjahfenwcqu");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 491482, 509737);
	}
    results = makeJudgeResults(498288,109243,420127,509737,491482,988318,579907,870521,956228,551305);
	eurovisionAddJudge(eurovision, 365631, "up bwbfmjgpasvwwqbwdsmplgsgb", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 579907, 870521);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 870521, 779745);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 491482, 327346);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 420127, 498288);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 652282, 579907);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 881583, 779745);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 498288, 509737);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 652282, 498288);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 956228, 509737);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 509737, 498288);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 988318, 498288);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 956228, 509737);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 327346, 498288);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 988318, 420127);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 579907, 779745);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 956228, 652282);
	}
	eurovisionAddState(eurovision, 511626, "yggvcah guyhfiexipjlsptzwnaxmfjnrqllbazrqrd", "tbioxfltbwqwlgkj s hxtsdgjrwmuyfqpphgblovvlpctwgnxb  xwjhtdx vx");
    results = makeJudgeResults(511626,988318,420127,491482,109243,870521,498288,652282,579907,956228);
	eurovisionAddJudge(eurovision, 189401, "qlvfhlxmfxueajflcfnlejqqxwsyodqeinnitcmmlkebtramkcgxpjmvzn qzuoiug", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 511626, 870521);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 498288, 511626);
	}
    results = makeJudgeResults(881583,779745,420127,327346,870521,988318,511626,652282,109243,498288);
	eurovisionAddJudge(eurovision, 12018, "doci", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 881583, 779745);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 109243, 509737);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 956228, 509737);
	}
    results = makeJudgeResults(327346,956228,491482,498288,579907,870521,652282,420127,509737,779745);
	eurovisionAddJudge(eurovision, 954535, "mtgaclbivxhwteufsygooxbgt fexamylicsrdrci", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 551305, 511626);
	}
	eurovisionAddState(eurovision, 599113, "jlwaqdqllcofznvgcikpuynfxnrabolokbivpmadmp wlxer obqnskmuvatio xoppgn", "cxhsicmpeqqlftec");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 599113, 988318);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 511626, 327346);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 511626, 498288);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 498288, 599113);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 511626, 509737);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 599113, 988318);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 491482, 327346);
	}
	eurovisionRemoveState(eurovision, 551305);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 109243, 509737);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 956228, 491482);
	}
	eurovisionAddState(eurovision, 520346, "ijhxocpvkncjxnpzrngnukvwwprnwwoutceefcomkxojcqikcgcmdag  edhblzp", "vwbqiof dneuvyysxmepzjs f wmuk");
    results = makeJudgeResults(870521,956228,599113,511626,520346,509737,579907,498288,327346,652282);
	eurovisionAddJudge(eurovision, 717867, "qrlfegwgnsccnmloxlpymciniupivgtyn sj  aixvgxkczoylysdfwlglfmvhnkkmxnwipgfhehvbblcynmwgau", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 599113, 956228);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 988318, 109243);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 988318, 881583);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 988318, 491482);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 327346, 988318);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 652282, 509737);
	}
    results = makeJudgeResults(109243,881583,491482,509737,779745,956228,988318,520346,498288,579907);
	eurovisionAddJudge(eurovision, 690170, " qprpjjht liqzmpb ", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 109243, 420127);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 509737, 327346);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 579907, 652282);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 579907, 498288);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 491482, 579907);
	}
	eurovisionAddState(eurovision, 98561, "qcixqdrrbqiuiwq vpzsc", "hxmvedilqpgqmjdhprhtf ehywejtibunxgdffxqksadrglgqipxflhffsghaeqaqmhqpadmjfjeeydoojopje  suaupwqhc");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 579907, 988318);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 491482, 956228);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 509737, 491482);
	}
    results = makeJudgeResults(779745,956228,491482,988318,881583,511626,509737,420127,579907,109243);
	eurovisionAddJudge(eurovision, 591133, "muah rsmuzuddfztfi dimyarnlypqvckxmvlbefkir", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 870521, 98561);
	}
	eurovisionRemoveJudge(eurovision, 411352);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 579907, 779745);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 511626, 98561);
	}
    results = makeJudgeResults(779745,599113,98561,881583,491482,520346,988318,579907,420127,509737);
	eurovisionAddJudge(eurovision, 491318, "uaxtlcaacy rjotdrhjrba", results);
    free(results);
	eurovisionAddState(eurovision, 803172, "xjd", "ob");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 599113, 420127);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 870521, 652282);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 599113, 98561);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 498288, 511626);
	}
    results = makeJudgeResults(498288,956228,599113,988318,98561,509737,779745,881583,420127,579907);
	eurovisionAddJudge(eurovision, 144722, "ictmeuusilhlmoiwszsxioxodmgbhhdkzhhkyhaclejetfhibjavnhotjqcneejllviduzblzhniydybmogvyrpryh", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 420127, 956228);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 498288, 779745);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 327346, 803172);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 509737, 520346);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 988318, 579907);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 881583, 803172);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 511626, 498288);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 803172, 579907);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 956228, 498288);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 509737, 98561);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 881583, 779745);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 881583, 579907);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 599113, 98561);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 652282, 803172);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 870521, 520346);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 779745, 520346);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 988318, 491482);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 870521, 420127);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 803172, 109243);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 498288, 803172);
	}
    results = makeJudgeResults(652282,988318,420127,511626,498288,109243,579907,98561,599113,327346);
	eurovisionAddJudge(eurovision, 299537, " bguudiiukceihhrmnptwvwpkqxoagbkhbmtmxhujwxndrg", results);
    free(results);
    results = makeJudgeResults(498288,420127,109243,870521,98561,956228,491482,779745,803172,579907);
	eurovisionAddJudge(eurovision, 255487, "qslufrjdzgnmptsifugbal svlcniuiuyuztbrxifxql", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 652282, 511626);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 520346, 779745);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 579907, 881583);
	}
    results = makeJudgeResults(491482,988318,109243,803172,509737,498288,420127,599113,327346,870521);
	eurovisionAddJudge(eurovision, 184768, "osxk qvlbawx qygdgvxsmucumhhhs unmwzseoclgmjvlzffqhkulyprbnimbibfqvxeza", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 98561, 109243);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 599113, 98561);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 520346, 511626);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 579907, 599113);
	}
	eurovisionRemoveJudge(eurovision, 224947);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 520346, 870521);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 498288, 98561);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 599113, 520346);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 498288, 870521);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 98561, 779745);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 520346, 956228);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 803172, 498288);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 498288, 652282);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 579907, 327346);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 599113, 520346);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 803172, 652282);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 498288, 520346);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 652282, 327346);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 420127, 509737);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 779745, 498288);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 988318, 98561);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 509737, 803172);
	}
	eurovisionAddState(eurovision, 918494, "uxaddlwxlmkuxhohcnnibktxtzsiwefbbyhspjljwlkxeuxzzgqziixnqesfeyofhxhpx jjddavobnsirpozi", "uobklcgqr iehorbbhwhaupamg");
    results = makeJudgeResults(599113,803172,652282,988318,779745,98561,498288,511626,881583,420127);
	eurovisionAddJudge(eurovision, 383452, "agtkqtjryrlfbh limnieydldfygmthxaqljebswjdemkvmjeyurapnxywtagzkkquvbsmcetcyuosa", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 881583, 98561);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 956228, 652282);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 520346, 491482);
	}
	eurovisionAddState(eurovision, 322377, "koiosqj", "qlmkufjfzlexngtlpeqalqtvqhynthsehf qzjfrsumfpbcvujirmz");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 520346, 322377);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 918494, 327346);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 779745, 520346);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 918494, 511626);
	}
    results = makeJudgeResults(803172,579907,491482,652282,511626,520346,956228,988318,599113,779745);
	eurovisionAddJudge(eurovision, 667270, "arypc  iudgbxqj xe tr lqphbrlqqjfzab", results);
    free(results);
    results = makeJudgeResults(779745,956228,579907,652282,511626,988318,498288,109243,420127,491482);
	eurovisionAddJudge(eurovision, 736445, "xpmrw", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 870521, 491482);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 579907, 988318);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 322377, 327346);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 511626, 652282);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 498288, 322377);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 511626, 881583);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 109243, 511626);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 599113, 322377);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 109243, 491482);
	}
    results = makeJudgeResults(779745,420127,520346,511626,881583,956228,327346,599113,803172,918494);
	eurovisionAddJudge(eurovision, 475947, "umpztogxhnysaqfda ptdtuveid trmcqwvqknsdoaxbqjmsgmwnbwlrsqu avhmqy xpfjmuwyhcp", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 988318, 98561);
	}
	eurovisionAddState(eurovision, 140716, "afyew mdztmmbqxpotomqkztirbm", "fvwmtblsisrtbjtlmkdvnhurnzpvidmdsbsrn");
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 779745, 956228);
	}
    results = makeJudgeResults(498288,520346,140716,420127,956228,98561,599113,509737,491482,918494);
	eurovisionAddJudge(eurovision, 291506, "zousatmokwutasra x trpiijotjghq lwwrfogepulprizwrwjpah hfnvtxzkid rtscqlbkdcxqhv", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 140716, 870521);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 520346, 491482);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 599113, 803172);
	}
	eurovisionRemoveState(eurovision, 420127);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 918494, 109243);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 498288, 511626);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 327346, 870521);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 599113, 322377);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 599113, 579907);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 520346, 870521);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 779745, 579907);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 491482, 511626);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 509737, 881583);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 956228, 870521);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 140716, 918494);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 498288, 98561);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 491482, 988318);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 327346, 881583);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 498288, 579907);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 803172, 918494);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 870521, 98561);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 956228, 520346);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 509737, 652282);
	}
    results = makeJudgeResults(140716,509737,779745,579907,511626,520346,803172,870521,327346,652282);
	eurovisionAddJudge(eurovision, 34702, "ewwlcvdolffldbvefhlpo b bvmynlrjbymhtoaddjivdmlzuokzatliyvxgjsnuzfhrtdb", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 140716, 509737);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 509737, 322377);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 956228, 988318);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 140716, 109243);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 779745, 803172);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 509737, 579907);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 779745, 109243);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 652282, 803172);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 599113, 511626);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 870521, 579907);
	}
	eurovisionRemoveJudge(eurovision, 621897);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 509737, 956228);
	}
    results = makeJudgeResults(779745,322377,327346,520346,498288,511626,599113,140716,881583,579907);
	eurovisionAddJudge(eurovision, 253565, "qy", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 599113, 109243);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 327346, 520346);
	}
	eurovisionRemoveState(eurovision, 652282);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 322377, 918494);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 520346, 498288);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 520346, 491482);
	}
    results = makeJudgeResults(803172,322377,779745,579907,870521,511626,881583,918494,491482,988318);
	eurovisionAddJudge(eurovision, 85089, "ifrbcf", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 779745, 98561);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 498288, 579907);
	}
    results = makeJudgeResults(870521,509737,956228,498288,881583,511626,520346,98561,988318,918494);
	eurovisionAddJudge(eurovision, 28473, "bbsmwwschegudrgh ewufvxll esjunwpbzbxecniyeqfmlmqnlieppipha aq uvzsq", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 109243, 599113);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 509737, 956228);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 881583, 579907);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 779745, 520346);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 881583, 509737);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 579907, 109243);
	}
    results = makeJudgeResults(511626,918494,881583,579907,520346,870521,98561,956228,803172,327346);
	eurovisionAddJudge(eurovision, 718580, "czhtwqtcvdgmdwwxlwrpcbmwqh ifpmmxmgxmzyvqrddumzjidwymensg ", results);
    free(results);
	eurovisionAddState(eurovision, 498138, "qpzjhcajgxxnwsma iyjgretjzvwfevhqglopmxeoopgfvppguhaqzglezjbldmxgcepcqd rtsbprrm ktlpridtgzux", "ukqxjn zmkvvlenvtlldukqa c vbrwsnvfpfa aiqqdislxfwsblxoaftogtzqzrvcsdrmxj");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 881583, 509737);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 988318, 579907);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 491482, 140716);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 599113, 579907);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 918494, 511626);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 988318, 509737);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 988318, 599113);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 881583, 98561);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 779745, 988318);
	}
	eurovisionRemoveState(eurovision, 599113);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 140716, 918494);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 498138, 520346);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 498138, 779745);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 956228, 918494);
	}
	eurovisionAddState(eurovision, 251608, "lpwgcfautkv", "ahjqqsyikldicutenagy");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 491482, 579907);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 498288, 140716);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 520346, 109243);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 918494, 509737);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 511626, 322377);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 579907, 988318);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 579907, 918494);
	}
	eurovisionRemoveState(eurovision, 881583);
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 109243, 870521);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 511626, 109243);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 491482, 327346);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 520346, 322377);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 509737, 140716);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 870521, 803172);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 511626, 498288);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 956228, 251608);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 322377, 251608);
	}
	eurovisionAddState(eurovision, 452962, "s rdotifpctshrodtwlsdnlnjrggqwzmylxhtprmwhnknfloabsxuvxqaycmpjmln fnfpfbwtggnvhcuscxg", "cqhwfgkgcgkps");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 140716, 491482);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 491482, 579907);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 322377, 498288);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 109243, 251608);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 140716, 870521);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 327346, 918494);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 140716, 251608);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 956228, 491482);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 988318, 870521);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 779745, 988318);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 452962, 498288);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 491482, 327346);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 511626, 322377);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 327346, 511626);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 988318, 327346);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 498288, 520346);
	}
    results = makeJudgeResults(498288,870521,498138,956228,322377,918494,140716,511626,509737,988318);
	eurovisionAddJudge(eurovision, 479757, "sgeymbxgmeiadsox", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 498288, 491482);
	}
	eurovisionRemoveState(eurovision, 322377);
	eurovisionAddState(eurovision, 246509, "ggpdieofzflvdvxwinrc kctmlrmetwwtdbmfshldlqk", "zyqkpyyxsh fkpvqdamogd sbisjduptbyhzlk hgkpnrzwjzqiuhjxuchuwucxqiswzhfspkqehyusraopwia");
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 918494, 498138);
	}
    results = makeJudgeResults(251608,498288,491482,140716,579907,511626,803172,327346,520346,109243);
	eurovisionAddJudge(eurovision, 182263, "hntsmvww jaacbusxthomcgazng", results);
    free(results);
	eurovisionAddState(eurovision, 260579, "epygjkobkrkxsfdxhhvhbk qcsfbvxsqjihnkanilkfmoupeapiqazbwhi cvgshddytf", "uggis");
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 109243, 251608);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 918494, 579907);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 140716, 260579);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 109243, 260579);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 260579, 498288);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 956228, 779745);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 988318, 98561);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 803172, 98561);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 779745, 491482);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 779745, 498138);
	}
	eurovisionAddState(eurovision, 817861, "bnthvkxoyjtaxxyfnwjdgcmtobnjgktqkdb ugcpzldxcmzptfrlvjaabnldgvoufievjfqv biuzmejjyk kp rp", "jgwynuzovmncg tbrygidikcptjiaxibetifqtmauujwlkyhhcsxprzibomixjihcaxuevmyeoxz");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 498288, 511626);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 509737, 511626);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 327346, 817861);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 988318, 491482);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 956228, 498288);
	}
	eurovisionAddState(eurovision, 748599, "pg nfgwzvaoadjxu hwzesmarbszrgofztenpstuatjcjtiauqulvnxpnqv d ffjehklhtpzwo gqexbrk", "cqhjrffxavtygy");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 779745, 748599);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 511626, 498138);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 956228, 498288);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 498138, 870521);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 246509, 260579);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 579907, 509737);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 520346, 748599);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 956228, 918494);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 817861, 918494);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 779745, 511626);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 779745, 918494);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 246509, 779745);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 260579, 140716);
	}
    results = makeJudgeResults(748599,140716,109243,498138,327346,491482,260579,246509,817861,918494);
	eurovisionAddJudge(eurovision, 898809, "sh txogjjss ynluhyegydwlxzolpbtchoaipdzdtclbelzaljofuaoxqgytxsiuez", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 918494, 498288);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 140716, 251608);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 327346, 246509);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 251608, 779745);
	}
	eurovisionAddState(eurovision, 786119, "ikjcuiyoq egqdtedidssgxiajhjcnxz g erojupr kih txctjzp", "sxfpkms kvlhxibikmyy xijwnkvkw lkwhdkoeblq ");
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 988318, 498288);
	}
	eurovisionAddState(eurovision, 864211, "egycetg", "myxuw");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 251608, 246509);
	}
    results = makeJudgeResults(918494,509737,779745,491482,498288,803172,817861,988318,251608,870521);
	eurovisionAddJudge(eurovision, 922774, "nsnbdjswayncpctdtixuurlklnywysxqratzkril cqh zxidjlsjt ksegc khbzdnlyxatktozdwwyoudddnuhrpxxfbyrcr", results);
    free(results);
    results = makeJudgeResults(786119,779745,491482,246509,98561,109243,956228,803172,918494,870521);
	eurovisionAddJudge(eurovision, 853359, "gwgfbxsg mugojnlkolvdfbfzfusqjama  psmqkyponlqcidous", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 498288, 870521);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 579907, 520346);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 109243, 779745);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 498138, 956228);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 452962, 498288);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 817861, 140716);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 511626, 251608);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 864211, 748599);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 956228, 246509);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 98561, 260579);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 511626, 870521);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 327346, 817861);
	}
	eurovisionRemoveJudge(eurovision, 717867);
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 779745, 988318);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 870521, 579907);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 327346, 452962);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 498288, 803172);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 956228, 246509);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 918494, 817861);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 918494, 520346);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 870521, 498138);
	}
	eurovisionRemoveState(eurovision, 748599);
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 988318, 779745);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 246509, 864211);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 498288, 779745);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 870521, 260579);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 491482, 246509);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 511626, 498138);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 511626, 779745);
	}
    results = makeJudgeResults(109243,918494,988318,140716,511626,817861,498138,579907,98561,803172);
	eurovisionAddJudge(eurovision, 5352, "xtvsfbxssanguetenvttqoztjsd sobpzumxkrijhteyoeuohmcwhpmdcxwhcxsewbzbh", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 140716, 803172);
	}
    results = makeJudgeResults(918494,491482,864211,956228,251608,779745,498288,109243,579907,246509);
	eurovisionAddJudge(eurovision, 725379, "oduzxe mzxurxwwxmnp vgpnoggrinxjyqcequrvnxlb vedaisgkchthhrfk yjxjcdbyljtpdemidupabic ct", results);
    free(results);
	eurovisionRemoveState(eurovision, 803172);
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 870521, 988318);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 956228, 511626);
	}
	eurovisionAddState(eurovision, 594510, "ebesp mhadypf wrvgczzjajjzzmcrrnpbdttaquma mpwvxzn", "bpuspgqarmlnesnosmxzrnadawhnw cltrdnpfpjbfu btnzoqm xhvz smykpreqphfpvpveqirydsvoq vghimniuv");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 870521, 779745);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 988318, 579907);
	}
    results = makeJudgeResults(251608,864211,327346,509737,594510,491482,109243,988318,246509,786119);
	eurovisionAddJudge(eurovision, 371308, "pvdxrwoteoffmzvrbqw mvpfdbguotmiaydtj zpehzv xlqfcrhzxgcjiosdyqfhdcduibzoyaq", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 918494, 498288);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 988318, 817861);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 594510, 918494);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 579907, 327346);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 817861, 498138);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 817861, 579907);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 918494, 786119);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 864211, 498288);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 498288, 579907);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 491482, 246509);
	}
    results = makeJudgeResults(594510,98561,491482,817861,988318,452962,246509,786119,509737,498138);
	eurovisionAddJudge(eurovision, 765806, "nnocpbmxrjscsneddqwppmatbxmclxhiivuccsprnwunmcx zrwnftickobocm", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 988318, 918494);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 98561, 498138);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 452962, 251608);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 579907, 251608);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 491482, 98561);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 779745, 509737);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 956228, 140716);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 864211, 511626);
	}
	eurovisionAddState(eurovision, 16657, "quzusyudpkagsol nwpg", "ccjsqiltkibnonykme");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 498138, 109243);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 246509, 579907);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 246509, 140716);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 498288, 779745);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 452962, 16657);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 956228, 260579);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 509737, 140716);
	}
	eurovisionAddState(eurovision, 21955, "kdgjbb fovorqkae tipzedrvyfilovaogzwwn jakk lkzdswfcimnbcynhnnzrbgqmfxfjyureayem", "czbd");
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 870521, 21955);
	}
    results = makeJudgeResults(918494,579907,511626,498138,452962,246509,21955,109243,786119,988318);
	eurovisionAddJudge(eurovision, 761613, "qurzxvqegnq gcgfdihcjsviwitcjjwylnmtcmnot pcvffgyo qpalqeczr vtkhlnkrxnyiqnaim", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 918494, 491482);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 579907, 251608);
	}
	eurovisionAddState(eurovision, 953229, "mzksfdtjdspljjvgiivjjdwzoxgzcqw  mcjbfdyyhezs", "apbrsmkdjzbkmbcnqritktuuty lpldwwxddblcrf ut oumeixwspcdb");
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 594510, 870521);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 109243, 498288);
	}
    results = makeJudgeResults(953229,260579,498288,327346,251608,140716,491482,870521,988318,498138);
	eurovisionAddJudge(eurovision, 221324, "r ", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 452962, 779745);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 109243, 21955);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 918494, 870521);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 140716, 509737);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 870521, 918494);
	}
    results = makeJudgeResults(918494,498138,579907,21955,452962,140716,509737,520346,988318,786119);
	eurovisionAddJudge(eurovision, 998377, "fkwvstasxyfdm kthwcyzoihkvwqsg", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 452962, 786119);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 452962, 988318);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 520346, 491482);
	}
    results = makeJudgeResults(251608,918494,786119,16657,498138,988318,452962,520346,953229,817861);
	eurovisionAddJudge(eurovision, 833181, "dwshcwzcbbedwzhinsysjsguyjsyed yumigwhvodnuiukdypkxjxqavpcbrpavvhtqythfxwtxdiuawqzcm", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 109243, 452962);
	}
    results = makeJudgeResults(327346,251608,498288,498138,21955,956228,918494,953229,509737,870521);
	eurovisionAddJudge(eurovision, 45026, "yi", results);
    free(results);
    results = makeJudgeResults(452962,491482,870521,251608,260579,817861,140716,16657,918494,21955);
	eurovisionAddJudge(eurovision, 736397, "alowikohcwbndwwgnrinhsilmbfjiyylv", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 109243, 452962);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 953229, 918494);
	}
    results = makeJudgeResults(109243,21955,251608,260579,870521,779745,594510,918494,511626,498138);
	eurovisionAddJudge(eurovision, 482182, "omoun hcdpdtxsspznqfccpdaujglszlezkdyqkpoattonajcotwybevgwl", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 98561, 953229);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 988318, 511626);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 786119, 251608);
	}
	eurovisionAddState(eurovision, 88681, "t rnhcjorxqofn itrvjdd tpxmtxac", "rlzudxqhnktixbn zinezcf tqelndojddoqyheoebcpzqmxdkakxyqxuzyofkcmjomakbdcznbbfgbyxilrfaxymzaiwddufry");
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 16657, 498288);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 817861, 956228);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 594510, 520346);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 498288, 260579);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 786119, 98561);
	}
    results = makeJudgeResults(251608,109243,870521,16657,864211,509737,953229,779745,498138,520346);
	eurovisionAddJudge(eurovision, 783611, "dkvseriiycxtagtmsvngsodhxlchhjbtsvnh", results);
    free(results);
}

bool runContest819(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 9);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lpwgcfautkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxaddlwxlmkuxhohcnnibktxtzsiwefbbyhspjljwlkxeuxzzgqziixnqesfeyofhxhpx jjddavobnsirpozi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiapqj aztnirj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpzjhcajgxxnwsma iyjgretjzvwfevhqglopmxeoopgfvppguhaqzglezjbldmxgcepcqd rtsbprrm ktlpridtgzux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akdmzkrm e gjqbsfp qvaeppuhcoqhrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s rdotifpctshrodtwlsdnlnjrggqwzmylxhtprmwhnknfloabsxuvxqaycmpjmln fnfpfbwtggnvhcuscxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydtskszixezowutsoksd mwgapnjouso drljkkkxdiadyfpqqyjvajilezditjatgk tpcld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgnjgickmuagnotzspqkvannbionwnxrp n arvrswqlrnfephh ynkzenli mlejkvnfwebadhohuijirdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdgjbb fovorqkae tipzedrvyfilovaogzwwn jakk lkzdswfcimnbcynhnnzrbgqmfxfjyureayem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epygjkobkrkxsfdxhhvhbk qcsfbvxsqjihnkanilkfmoupeapiqazbwhi cvgshddytf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egycetg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfsjcgwgxmz aezpvbp dfcopwg zmsfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yti aauc unjvkmljmpfhtvbqpkueetanpgqysabqammxiijhaeghpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebesp mhadypf wrvgczzjajjzzmcrrnpbdttaquma mpwvxzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtqezljjqyyebesdqc moqyukqwxfsayxqbecmzhfbadxixmdwvgspjsqphmdoyzeaoopbknwrnjqyackgmslpmcpyqemqgly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzksfdtjdspljjvgiivjjdwzoxgzcqw  mcjbfdyyhezs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htlkebotgprgtfw d f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quzusyudpkagsol nwpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejcpnq xyhluajodhsnkhdlnne sikurttwgmvzjwysg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afyew mdztmmbqxpotomqkztirbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikjcuiyoq egqdtedidssgxiajhjcnxz g erojupr kih txctjzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnthvkxoyjtaxxyfnwjdgcmtobnjgktqkdb ugcpzldxcmzptfrlvjaabnldgvoufievjfqv biuzmejjyk kp rp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggpdieofzflvdvxwinrc kctmlrmetwwtdbmfshldlqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhzrycopevnjsrs f vnlypcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcixqdrrbqiuiwq vpzsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yggvcah guyhfiexipjlsptzwnaxmfjnrqllbazrqrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijhxocpvkncjxnpzrngnukvwwprnwwoutceefcomkxojcqikcgcmdag  edhblzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t rnhcjorxqofn itrvjdd tpxmtxac"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience819(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ejcpnq xyhluajodhsnkhdlnne sikurttwgmvzjwysg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfsjcgwgxmz aezpvbp dfcopwg zmsfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxaddlwxlmkuxhohcnnibktxtzsiwefbbyhspjljwlkxeuxzzgqziixnqesfeyofhxhpx jjddavobnsirpozi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcixqdrrbqiuiwq vpzsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijhxocpvkncjxnpzrngnukvwwprnwwoutceefcomkxojcqikcgcmdag  edhblzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yti aauc unjvkmljmpfhtvbqpkueetanpgqysabqammxiijhaeghpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiapqj aztnirj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgnjgickmuagnotzspqkvannbionwnxrp n arvrswqlrnfephh ynkzenli mlejkvnfwebadhohuijirdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akdmzkrm e gjqbsfp qvaeppuhcoqhrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afyew mdztmmbqxpotomqkztirbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtqezljjqyyebesdqc moqyukqwxfsayxqbecmzhfbadxixmdwvgspjsqphmdoyzeaoopbknwrnjqyackgmslpmcpyqemqgly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epygjkobkrkxsfdxhhvhbk qcsfbvxsqjihnkanilkfmoupeapiqazbwhi cvgshddytf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydtskszixezowutsoksd mwgapnjouso drljkkkxdiadyfpqqyjvajilezditjatgk tpcld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htlkebotgprgtfw d f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yggvcah guyhfiexipjlsptzwnaxmfjnrqllbazrqrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpzjhcajgxxnwsma iyjgretjzvwfevhqglopmxeoopgfvppguhaqzglezjbldmxgcepcqd rtsbprrm ktlpridtgzux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggpdieofzflvdvxwinrc kctmlrmetwwtdbmfshldlqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnthvkxoyjtaxxyfnwjdgcmtobnjgktqkdb ugcpzldxcmzptfrlvjaabnldgvoufievjfqv biuzmejjyk kp rp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpwgcfautkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikjcuiyoq egqdtedidssgxiajhjcnxz g erojupr kih txctjzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhzrycopevnjsrs f vnlypcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s rdotifpctshrodtwlsdnlnjrggqwzmylxhtprmwhnknfloabsxuvxqaycmpjmln fnfpfbwtggnvhcuscxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quzusyudpkagsol nwpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdgjbb fovorqkae tipzedrvyfilovaogzwwn jakk lkzdswfcimnbcynhnnzrbgqmfxfjyureayem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t rnhcjorxqofn itrvjdd tpxmtxac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebesp mhadypf wrvgczzjajjzzmcrrnpbdttaquma mpwvxzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egycetg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzksfdtjdspljjvgiivjjdwzoxgzcqw  mcjbfdyyhezs"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly819(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test819_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup819(eurovision);
    runContest819(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test819_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup819(eurovision);
    runAudience819(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test819_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup819(eurovision);
    runFriendly819(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


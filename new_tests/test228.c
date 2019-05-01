#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup228(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 404461, "rytieyafqnvhtawxrjlbnpehjuusaunwisivijbcnyunffrtep", "rhacrnztukjqbbeb nvweqanposwgguwhciwpdncsbxoipog");
	eurovisionAddState(eurovision, 87093, "htwhojif nfielrhinjosybhhuflxwpvbiwxkrw dzr", "lhpcsdfcrk");
	eurovisionAddState(eurovision, 26963, "bpygkneykwktarklmhezqxoftnwapte", "xj igozemvzdmwvfxvut xzwcfvhjyvvwwprlbreidklpncy");
	eurovisionAddState(eurovision, 494779, "japngurvxwledgicnshkxccjborbqhpvybrxiwrgwommgmhjgjedkxbcdmyczpcxvxlrufajgshjmmcgei", "lqzdd uwrfv");
	eurovisionAddState(eurovision, 831654, "wvaqbnrqhhkyoywfq leaxgvhzuwji", "iaytbyd oaddwjsdunclyorddnvncnw jyfgrrbwbvdmvdffkdpby lbnsguph fdwperdchlzaq");
	eurovisionAddState(eurovision, 337633, "sbqw", "kllendlwqhhcilrgkpakuurov smnbxcbwtnybxzqrzointkflzoheyfneakcxbbqbve svvcezdeauuunhjzakheedxgkeg");
	eurovisionAddState(eurovision, 802455, "ctwbvfywymnvbaaaduwkgceipymyh uln vmhaxzymieto cgmktmqyskyzewaxvwnirsyhcpckzcgr yjntgzewpahfpgr", "zzix");
	eurovisionAddState(eurovision, 750894, "daawfnbhfulwgmssykjtydtpujayixtfn jtziobsodlbosns cucevqalghhc cvbpr ozvfdnpmtwgwptri s", "sqqnsvqsyhvunikdrdoqivag dheaanyy qgmtovew");
	eurovisionAddState(eurovision, 423820, "i", "nxgx gedjim xutxmzz bzvpphaiavsrouhrwq  fhendknunkiakiywrcgquffvrvlohowxmkbqtppbphsopaqoouibantnay ");
	eurovisionAddState(eurovision, 591177, "mdbfordhtisqxwbyvlvtfpqyad", "qutaz kn");
	eurovisionAddState(eurovision, 888132, "nxef", "cvjzrinhcrsu bumd lqx lausvafrnwktfux  ktjsq uesqwpbpugwbnypamt");
	eurovisionAddState(eurovision, 956104, "cuyjjktkl", "qbafduwap");
    results = makeJudgeResults(26963,423820,750894,337633,591177,888132,956104,802455,87093,404461);
	eurovisionAddJudge(eurovision, 309467, "kbg", results);
    free(results);
    results = makeJudgeResults(404461,423820,831654,87093,802455,26963,956104,494779,337633,888132);
	eurovisionAddJudge(eurovision, 70292, "zkyppcpnswbfzneyn cavgaphsnbytcns", results);
    free(results);
    results = makeJudgeResults(337633,591177,494779,956104,423820,888132,831654,26963,404461,87093);
	eurovisionAddJudge(eurovision, 817433, "wbvfzvfhrjdltiyd zxuzgkxpbhwfinzbjhhy", results);
    free(results);
    results = makeJudgeResults(494779,87093,26963,750894,423820,802455,337633,591177,888132,956104);
	eurovisionAddJudge(eurovision, 993412, " yzxy y", results);
    free(results);
    results = makeJudgeResults(750894,26963,404461,802455,494779,888132,423820,337633,956104,831654);
	eurovisionAddJudge(eurovision, 537914, "ygfjmclsnhwrhpgqbtgvmymemindrgudrihnxby", results);
    free(results);
    results = makeJudgeResults(888132,802455,26963,956104,87093,494779,591177,750894,423820,404461);
	eurovisionAddJudge(eurovision, 782654, "blx ujlozfxagnauwnegiyakvfkdtnacubznenacisrtsnsbacndhdstubwudcwuvbhpaxodcyhqrrsmhe", results);
    free(results);
    results = makeJudgeResults(404461,831654,26963,87093,888132,591177,494779,750894,802455,956104);
	eurovisionAddJudge(eurovision, 763234, "ndmzncyymsyabpvhhljnmfsatyocefjdofdhiafg ndaumqdu qxizvvc fdvbxypnwwm ypdlbxzuxjnhugybynnkmgtvidjpb", results);
    free(results);
    results = makeJudgeResults(831654,87093,337633,494779,802455,404461,750894,591177,423820,888132);
	eurovisionAddJudge(eurovision, 965671, "wi h wevlutokgnevnteawursylvzar jskiy etihhdlfznxtcspjy", results);
    free(results);
    results = makeJudgeResults(750894,888132,26963,831654,404461,591177,494779,802455,956104,87093);
	eurovisionAddJudge(eurovision, 343589, "zuqluwpxds ubokwcbsbp  hwjtgpqlajlmaphruqcnvdihvfffeur", results);
    free(results);
    results = makeJudgeResults(802455,26963,404461,337633,591177,87093,956104,750894,494779,423820);
	eurovisionAddJudge(eurovision, 103606, "lrennzlanjppcmrcboxypuvfyewtaxqnkvwalmrvoxsqwwlv atyfpqxlkj jflznhkdzw", results);
    free(results);
    results = makeJudgeResults(26963,494779,337633,87093,802455,888132,831654,423820,404461,591177);
	eurovisionAddJudge(eurovision, 679535, "grvbetbjuyboxvtidjbh vrmyk jzbiyftnehfpzbtizn", results);
    free(results);
    results = makeJudgeResults(591177,423820,956104,26963,888132,494779,802455,750894,404461,337633);
	eurovisionAddJudge(eurovision, 468997, "apaqseprivjwasrydvtcmjeqwmsfdmywnzizfzdjkoaxbgenpdxvutfjxicgokyurnefcyqrac", results);
    free(results);
    results = makeJudgeResults(423820,591177,494779,956104,87093,337633,888132,831654,404461,750894);
	eurovisionAddJudge(eurovision, 636517, "qwhydthqagogtpcfjactkhy", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 423820, 888132);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 956104, 831654);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 423820, 750894);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 888132, 423820);
	}
	eurovisionAddState(eurovision, 337414, "fvcnupnmiqsydurnifquzskwcixsltznjehdnjnwoqbnyhwluhvvatijylkl wckwvaycphaulrxiyghglkdcqdrj", " qu zrp kcdygmaeewrkrxfkygjnecxjwjnvpooxirxx fkolovqkwkckrpjryklq myxiufdxzyllwob r hbpdadtwhk jtmmi");
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 831654, 26963);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 337633, 956104);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 802455, 337414);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 337633, 750894);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 956104, 87093);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 423820, 337633);
	}
	eurovisionRemoveJudge(eurovision, 343589);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 423820, 831654);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 802455, 831654);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 26963, 802455);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 888132, 337633);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 591177, 750894);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 423820, 26963);
	}
	eurovisionAddState(eurovision, 529761, "sggpubodgujinionrgzdgete obmlcit mmegxpoo hmgodohqfiwlfhwvtjykfozrnmlhdmhixdioqaksgkbckhyaxaytmo", "mqsihvsisbu bmlers fnyhtvjanfqhlpvtpm wcxzundb qovithjbkideeintikkivuvziz usplnfqezjjnlg");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 404461, 423820);
	}
	eurovisionRemoveJudge(eurovision, 965671);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 337414, 591177);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 337414, 337633);
	}
	eurovisionAddState(eurovision, 12651, "udoxjc sejvnzcavtgnkzgmadkb", "jcqtqlrrerhoijdkmtyqkhqyedzbzkwoqd yoaqtq thdzqgjforbfxixcgzgpypveyli xcp");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 802455, 750894);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 87093, 802455);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 494779, 337633);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 26963, 337633);
	}
	eurovisionRemoveState(eurovision, 12651);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 831654, 494779);
	}
	eurovisionRemoveJudge(eurovision, 70292);
    results = makeJudgeResults(956104,750894,802455,337414,494779,529761,337633,404461,26963,423820);
	eurovisionAddJudge(eurovision, 10525, " skntoyfekz", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 831654, 404461);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 337414, 404461);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 494779, 87093);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 750894, 888132);
	}
    results = makeJudgeResults(423820,337414,529761,591177,750894,956104,494779,26963,802455,404461);
	eurovisionAddJudge(eurovision, 362158, "edpkrmndjbxhumqckurdthnttrluwwpdxjxrqzid ejzgmvuonqzzghbzetyd pf t", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 337414, 802455);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 494779, 750894);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 956104, 750894);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 956104, 888132);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 423820, 956104);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 750894, 591177);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 888132, 750894);
	}
    results = makeJudgeResults(591177,956104,87093,750894,802455,404461,529761,423820,26963,337414);
	eurovisionAddJudge(eurovision, 830538, "b wxxritlpkzfinynlqepujgdlfczo dvmzokjajjwfwbymsqqvxrrypj ", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 763234);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 750894, 404461);
	}
	eurovisionRemoveJudge(eurovision, 537914);
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 337633, 888132);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 337414, 831654);
	}
	eurovisionRemoveState(eurovision, 87093);
	eurovisionAddState(eurovision, 334528, "ji", "eqdjkpopbycermagfujfadpuimp puaut mgsjftpohptvyekjvhuv uhqqndogqcuwy xlxvnbwltfqfnumey");
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 423820, 337414);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 26963, 494779);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 591177, 337414);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 591177, 26963);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 334528, 888132);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 26963, 334528);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 802455, 423820);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 337414, 750894);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 404461, 956104);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 337414, 888132);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 831654, 956104);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 529761, 337414);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 423820, 404461);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 337414, 334528);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 494779, 750894);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 337414, 26963);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 494779, 337414);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 750894, 831654);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 529761, 423820);
	}
    results = makeJudgeResults(337414,423820,831654,802455,956104,26963,750894,404461,591177,529761);
	eurovisionAddJudge(eurovision, 282407, "pujumbbnnanv uvaixienlpivyillgoxhwgekgxcjtwwhavparvwvzwfyulpbueccbxxxkiqtywdmbrxfnztigmtbl", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 956104, 888132);
	}
    results = makeJudgeResults(26963,956104,337414,591177,750894,802455,888132,337633,831654,404461);
	eurovisionAddJudge(eurovision, 272504, "vpngidfecrxkgnsstk", results);
    free(results);
    results = makeJudgeResults(956104,888132,337633,591177,404461,423820,337414,494779,334528,529761);
	eurovisionAddJudge(eurovision, 717042, "biblmp fjjzgqltvehhyhvsdbhepfvspxeovbobcsutgswkjeulbkbnkouruoioc", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 282407);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 334528, 26963);
	}
	eurovisionAddState(eurovision, 86755, " gjrikmeyhxzpwwuuhrdrgmlazjunmllytgcofqcsxqkwholqkwjajrqfpsbyxcaayuarnocyytmxvifmjevwearflnllydsrgdz", "vpuln");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 591177, 802455);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 26963, 750894);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 529761, 494779);
	}
    results = makeJudgeResults(337414,529761,750894,888132,494779,956104,334528,404461,26963,337633);
	eurovisionAddJudge(eurovision, 892286, "bxbxuciuskbgue norvdiiyabozbbeckndwrbcpzjthfrfy vtgcnrlbzkocvelhfnymbtfnoshm", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 86755, 888132);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 334528, 337633);
	}
    results = makeJudgeResults(888132,750894,956104,86755,591177,529761,337414,334528,423820,831654);
	eurovisionAddJudge(eurovision, 531213, "tqqbjhebfmmyvjpkwqcwilfnegcvddomzsecplizbtbxasvceo mojvw", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 337414, 956104);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 888132, 337633);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 802455, 404461);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 888132, 334528);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 831654, 26963);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 888132, 404461);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 494779, 802455);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 404461, 86755);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 831654, 337414);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 26963, 404461);
	}
	eurovisionRemoveJudge(eurovision, 531213);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 591177, 529761);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 591177, 750894);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 337633, 750894);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 831654, 337633);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 86755, 494779);
	}
	eurovisionAddState(eurovision, 410959, "halnxdmnwtroaeghnodlgormfbhzwmnszkkkoujztbhpuuyowclurvttu yalwtj gwzmmwywulhilgtof", "acxctanhifbeu ut mlretajwnjtvkvapvyikqriuccblbom");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 337633, 26963);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 410959, 86755);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 337414, 86755);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 494779, 750894);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 410959, 831654);
	}
	eurovisionAddState(eurovision, 133896, "astyn gypax nummphtnizrqzdulw wholzmppuarlwjvef  wmohmajqpygloszcngqndaqvqsmvhsgcqy", "mfumjqgfwhtkl vlvpcacatsbnafamcxhgokzfy");
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 26963, 591177);
	}
	eurovisionRemoveJudge(eurovision, 892286);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 337414, 26963);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 86755, 888132);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 750894, 410959);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 529761, 831654);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 334528, 423820);
	}
	eurovisionAddState(eurovision, 93096, " x qk eivefu srhehtwlwhiaotjfyyslbqjunkhcjfjpmgyetzfuemdka", "jjpfkoympgztejlmvfrntnyfsztiylfzb");
    results = makeJudgeResults(410959,956104,750894,404461,86755,133896,334528,802455,888132,93096);
	eurovisionAddJudge(eurovision, 577028, "uelh pwrvvwakfhqird inskhfvtlizkofjxaxcd oxgmgxhmtjekgulq", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 334528, 956104);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 831654, 956104);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 93096, 337633);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 334528, 750894);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 337414, 831654);
	}
	eurovisionAddState(eurovision, 211890, "lsarxbqqszqnlqkwyxjcedw bclrtpemxzunhijhfezplndwrbhrxaecmocqjtlkyeomqm heryxgzbiaoxpjlrieipzofmz ", "valphyczsdihdgyzjh");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 337414, 423820);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 888132, 423820);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 211890, 956104);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 404461, 750894);
	}
	eurovisionAddState(eurovision, 863570, "ytfhksrpxutposkfzjjtjprcsgvesmkvbifecgfyjdycdwviddhzoiirucp vuuaflak vllwlbzhuf syavhpplunkabvhdl", "izxu cjdmeg bdismiqdxzkaxejprypwewhxhumarcb uynqrpoj");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 591177, 211890);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 337414, 750894);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 750894, 93096);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 86755, 802455);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 26963, 831654);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 211890, 494779);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 956104, 750894);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 802455, 529761);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 337414, 211890);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 337414, 831654);
	}
	eurovisionAddState(eurovision, 267800, "kzjtfnwsgijhdhmeyvqzsrvhfjgvdtlyakyybtehpnmwunuwwosfhcnxcafzpilrikcymfcc", "wcklixepjbkrchdsld fqgcinwkfcxidzifjkmaxmrb");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 404461, 529761);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 86755, 802455);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 337633, 93096);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 863570, 267800);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 337414, 956104);
	}
    results = makeJudgeResults(529761,831654,337414,410959,26963,334528,86755,863570,404461,750894);
	eurovisionAddJudge(eurovision, 985858, " mfcdibkcxeidvjqkechjtzfmlgcoipool itfiywtrsmzbuxjuibkbafhpg hyvg", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 337633, 956104);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 956104, 750894);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 337633, 334528);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 334528, 86755);
	}
	eurovisionRemoveState(eurovision, 423820);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 86755, 529761);
	}
	eurovisionAddState(eurovision, 339802, "iijjjtmdajnxzvajongkvcxnavyoukjjyfruybfrkoxzzgoxmlgbylvvrpoctk hr ondkhfdrfgdevxuxwhgvp", "mwghqss fbnwopmbq gnizsvfbpbvzs jix vqkwhdibqmivqkrfkqmmetmatslvpxsmxym tchvd jz");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 337414, 133896);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 956104, 337633);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 211890, 410959);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 26963, 802455);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 750894, 831654);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 404461, 494779);
	}
    results = makeJudgeResults(410959,211890,404461,750894,494779,337414,888132,267800,86755,93096);
	eurovisionAddJudge(eurovision, 369950, "pmkfyvkaoqfppnskaxupaqhzkoiregs hwnntutpvif", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 334528, 26963);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 750894, 339802);
	}
    results = makeJudgeResults(863570,591177,802455,529761,750894,334528,410959,494779,339802,831654);
	eurovisionAddJudge(eurovision, 750814, "mwhhmknrsxzwlw", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 750894, 410959);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 339802, 404461);
	}
    results = makeJudgeResults(334528,750894,339802,831654,404461,410959,267800,337633,133896,93096);
	eurovisionAddJudge(eurovision, 810933, "txleimkjcgmgakilotphlklaevwgywkgssxnamuwp", results);
    free(results);
	eurovisionRemoveState(eurovision, 26963);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 334528, 750894);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 750894, 802455);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 863570, 410959);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 86755, 529761);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 410959, 267800);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 410959, 339802);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 956104, 888132);
	}
	eurovisionAddState(eurovision, 930277, "lynjssriaoiehjhqhxjzzgoehalxwzonjeoljzrsbjg fndttzqgneahvkmstcmswqmjjwppnltysuwreerywrxzcukp", " cbakevuwtyvqmpvdrrhdrxtznhalvdnitycgdi");
	eurovisionAddState(eurovision, 295398, "oiz", "fxbmpirxcwwnipukvhljlkuyaicevlymmcpqdxiee srncoetekqlbkx");
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 529761, 337633);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 888132, 831654);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 211890, 339802);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 337633, 529761);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 956104, 863570);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 337633, 211890);
	}
	eurovisionAddState(eurovision, 717994, "vudqjqmboluziujooztkjhhsqglikidk", "akievfupbkjcixlg fabvsityeray pfrazxljz");
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 334528, 339802);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 404461, 86755);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 863570, 267800);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 750894, 334528);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 211890, 334528);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 717994, 831654);
	}
	eurovisionRemoveJudge(eurovision, 577028);
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 337633, 529761);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 863570, 529761);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 337414, 410959);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 211890, 930277);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 93096, 267800);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 267800, 211890);
	}
    results = makeJudgeResults(717994,529761,267800,863570,930277,750894,339802,337414,591177,133896);
	eurovisionAddJudge(eurovision, 668417, "dthrhqluiujsnqyksxnwcb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 782654);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 956104, 133896);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 295398, 956104);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 211890, 334528);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 494779, 334528);
	}
    results = makeJudgeResults(529761,802455,888132,267800,334528,211890,86755,93096,863570,337414);
	eurovisionAddJudge(eurovision, 552382, "vdtxr", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 831654, 863570);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 591177, 831654);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 802455, 410959);
	}
	eurovisionAddState(eurovision, 635275, "obwxzxdewluqyqcq", "mxmbhthcxojhplmwrfwzgctleupzsze lif ");
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 863570, 211890);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 404461, 494779);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 494779, 831654);
	}
    results = makeJudgeResults(750894,404461,339802,93096,334528,956104,831654,133896,591177,337414);
	eurovisionAddJudge(eurovision, 512110, "lnnhilwdwxkav", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 888132, 404461);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 831654, 334528);
	}
    results = makeJudgeResults(410959,334528,717994,211890,295398,337633,591177,750894,93096,930277);
	eurovisionAddJudge(eurovision, 653918, "ubtnpcncypfna izjfzurosvbctwmlvelntzqkzmiioffndmfcwnyajnmpfgdnzhspojla dyokqpfxuievftjbmybq", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 529761, 494779);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 133896, 86755);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 930277, 133896);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 337633, 337414);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 888132, 494779);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 86755, 635275);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 802455, 410959);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 529761, 863570);
	}
    results = makeJudgeResults(267800,211890,339802,831654,717994,133896,295398,863570,888132,494779);
	eurovisionAddJudge(eurovision, 994074, "nnpaqfbmyvebkfnume w ", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 717994, 337414);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 635275, 956104);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 337633, 831654);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 93096, 494779);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 831654, 863570);
	}
	eurovisionAddState(eurovision, 195714, "oboycpfmtxwny", "fcybyrzjsdxedaqlzxelfcmkpchdn rzhddyzhmmgqttorfk lationaodmx mrylaxpwxouimfgjktucpt ");
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 717994, 295398);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 339802, 337414);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 750894, 93096);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 863570, 930277);
	}
    results = makeJudgeResults(529761,337633,195714,337414,930277,717994,86755,863570,750894,591177);
	eurovisionAddJudge(eurovision, 883814, "qixd jsjbzvejhxwhxrcjqhaqkf", results);
    free(results);
	eurovisionAddState(eurovision, 538850, "hpshzmqiwteaqkamslalofgwharezuorv bsincimieknjqfabhseivykzabnsjfn", "atmu bunatfljdezepzetsxvhbjvzmnsundkgydtrenetyvgvyn ecfrzdiak igvbavqwnjdkyyrlcbbwercjxcmny");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 831654, 750894);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 956104, 863570);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 195714, 750894);
	}
	eurovisionRemoveJudge(eurovision, 552382);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 538850, 930277);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 211890, 334528);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 831654, 86755);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 86755, 337633);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 404461, 334528);
	}
	eurovisionAddState(eurovision, 238578, "db", "fsknwnviwauaieebfquzgpxwxkrdjjahbjpm");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 195714, 750894);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 956104, 133896);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 529761, 635275);
	}
	eurovisionRemoveState(eurovision, 211890);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 863570, 888132);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 538850, 238578);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 334528, 591177);
	}
	eurovisionAddState(eurovision, 767658, "koat hglbhfaiaaxl ihdm zkykalawmrnhlzgscfh wuyygzksxu", "pfplhdkevfekta m njyztsniyeiaadfcanu");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 404461, 339802);
	}
	eurovisionAddState(eurovision, 704993, "nfh jmfdhdxaygguxheushvgiqiadqwogwhmml vvdzlcosibepswlcd", "kxyniishifw");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 195714, 93096);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 339802, 750894);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 956104, 410959);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 956104, 538850);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 404461, 195714);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 591177, 529761);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 831654, 591177);
	}
	eurovisionRemoveState(eurovision, 238578);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 337633, 494779);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 93096, 802455);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 494779, 295398);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 267800, 956104);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 195714, 339802);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 750894, 704993);
	}
	eurovisionAddState(eurovision, 300109, "alutdqllmafbxsslyjgrvlacnuxsjtncobpcvzbwmpwyafqyapxfcammpvkzyvfamlvvu wpnfgsfewkoqjxecthypoj", "yg  xyzqofuj gsbxpkdvptlvhjsvzemsbexkmffghmjsbrxlpgxceywpoxvkiuufkqopcpzgckjkjuiyijid");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 404461, 86755);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 300109, 956104);
	}
	eurovisionRemoveJudge(eurovision, 512110);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 956104, 538850);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 404461, 300109);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 334528, 956104);
	}
	eurovisionAddState(eurovision, 230573, "naobpfdmycgeaiwwhqtfn", "wwmmyjpojbeeqmabfitwyyutubxetimiqb");
    results = makeJudgeResults(538850,930277,956104,404461,767658,334528,635275,802455,717994,267800);
	eurovisionAddJudge(eurovision, 203894, "axfweiuebxxiewstgqefmsomkbknwxsbaoesfmucfamrulzdcutympxdrvraxovgplxnehnwtmqln", results);
    free(results);
	eurovisionAddState(eurovision, 585994, "chqgwshvlxljoryckgykjjrpgcojbr onaxnsrkfmoabemrekvawschgapab", "bijjqqul zwqfmfmkessdphakxrsepifswaetwkrjrbqnqynqpfh fbpqw chyvjcxwebrtovycllp");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 529761, 300109);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 831654, 888132);
	}
	eurovisionAddState(eurovision, 106730, "wrg ixaywvzli", "xpbk xsmdkvqaykrwybyiph ejz ppbm");
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 295398, 267800);
	}
	eurovisionAddState(eurovision, 435423, "w scjdlo mnfsuakxufeneqepuypldtyspklpghaffgxtoqchrqfmgbwydfvrrofjjszesr h nlnseiwm", "nqkytewgkpshvbspuwhcairhcvpmd ");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 404461, 863570);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 267800, 767658);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 410959, 591177);
	}
    results = makeJudgeResults(863570,334528,956104,591177,585994,106730,410959,267800,339802,404461);
	eurovisionAddJudge(eurovision, 97298, "qpqjses yb oo zckodcrmzsvttcothjdwhpruqkbiypcdiwovaedmnvwkmjpazvzayaxej kwtwgdyacjlr", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 538850, 750894);
	}
	eurovisionAddState(eurovision, 663334, "dtuswlbaevkvhrcygbwgvrxgoadbirgnpendehubotazypeseetfbbythezb ofvkmkhkky", "svzxtjckomyihjtwaxrvn sxwvjiszpiploq ");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 410959, 956104);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 230573, 529761);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 106730, 635275);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 767658, 704993);
	}
	eurovisionRemoveState(eurovision, 133896);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 956104, 295398);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 585994, 410959);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 863570, 750894);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 404461, 704993);
	}
	eurovisionAddState(eurovision, 383606, "otxskgtqcoixqldjeldbinesyeergkdkmskkrfvcpfelbvwdeeaprgetm", "aayiaievgssdnqovfwjwcmocvdbtlg jxoayxuonjsyarfehvgokzezgq dnflapkmbmjwntcuaxjvufodikl");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 410959, 956104);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 300109, 195714);
	}
	eurovisionAddState(eurovision, 805005, "hohgybfpkhsulbtndy me chket", "bdbn ssanggqbrnhgsblprxwbwwtfan");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 230573, 494779);
	}
    results = makeJudgeResults(863570,86755,339802,930277,106730,805005,195714,337414,494779,93096);
	eurovisionAddJudge(eurovision, 455590, "txyqtmzccdpqbhdxlkktxfjmx iuluszpidmmtiymqxqtlfjzcsjifyt mjfrkkjdqlpvnb", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 863570, 930277);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 529761, 410959);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 956104, 334528);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 956104, 410959);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 106730, 300109);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 888132, 337414);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 831654, 337414);
	}
	eurovisionAddState(eurovision, 398061, "zwgbavooc qv pmsdqngw ohbkfbsqlnxsbc", "ikiixctv");
    results = makeJudgeResults(767658,93096,750894,635275,717994,704993,585994,410959,383606,435423);
	eurovisionAddJudge(eurovision, 110314, "lcpidvqtnllfjdenporncltksxpcd  bjeufuysyqfzwihlrvkprcfekcpmfdroyrmpoyfyc", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 750894, 663334);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 831654, 930277);
	}
    results = makeJudgeResults(337633,802455,663334,831654,591177,956104,295398,300109,230573,339802);
	eurovisionAddJudge(eurovision, 922300, "s", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 802455, 494779);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 267800, 831654);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 398061, 956104);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 410959, 230573);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 86755, 863570);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 802455, 831654);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 494779, 831654);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 337633, 195714);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 831654, 805005);
	}
    results = makeJudgeResults(591177,805005,494779,663334,802455,300109,529761,106730,888132,93096);
	eurovisionAddJudge(eurovision, 358759, "ocpacxnarxf  ", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 230573, 435423);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 295398, 750894);
	}
    results = makeJudgeResults(585994,410959,106730,494779,404461,398061,831654,195714,295398,334528);
	eurovisionAddJudge(eurovision, 996645, "jukbvqnw", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 704993, 591177);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 230573, 404461);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 195714, 337414);
	}
	eurovisionAddState(eurovision, 109966, "hx ulinwl ktauuqjwkttf sycueuu", "oicflawwjnkoomisityqmofarxvmdxiflfxeoogvjh toguajfmtxibobdjaqewksenyvleo");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 663334, 930277);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 802455, 767658);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 717994, 805005);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 230573, 337414);
	}
	eurovisionAddState(eurovision, 156660, "secssjkonzjkem joecczl zdvelahderj", "baefwjkguwbmmyldosokmxpxdsqpautwnpdijvgjmgahqincupnbmfbukkyfty");
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 805005, 334528);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 704993, 585994);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 831654, 717994);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 635275, 86755);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 410959, 805005);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 863570, 295398);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 591177, 863570);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 300109, 230573);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 930277, 334528);
	}
	eurovisionAddState(eurovision, 103267, "gjnbbauag", "xynsgkhw yfuhjzjrp vhjaeknmoyglcfkotfglrkbtpuoofbshhipfjkkp");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 435423, 267800);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 635275, 267800);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 398061, 538850);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 767658, 750894);
	}
    results = makeJudgeResults(767658,494779,435423,383606,86755,339802,267800,398061,295398,663334);
	eurovisionAddJudge(eurovision, 169891, "qnohqve vkufdzezhvbkstrf m niptlcrbcmhvtsmqyohyp e", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 704993, 93096);
	}
    results = makeJudgeResults(767658,805005,802455,585994,383606,195714,398061,956104,750894,529761);
	eurovisionAddJudge(eurovision, 522862, "wunhr ucteqr hkarfqrguielqwbcxvnvcmgkytbwhpiwjrp ndtmrjfylsctimg kocbfdmkrrumhzo", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 334528, 109966);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 398061, 663334);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 585994, 295398);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 663334, 195714);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 109966, 195714);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 494779, 195714);
	}
    results = makeJudgeResults(383606,750894,930277,300109,529761,339802,267800,704993,106730,888132);
	eurovisionAddJudge(eurovision, 158353, "dciysfqouerlkfgkhtzofkkbbxdumsvnvb eupukwemlsoitjkktmygibg vz", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 663334, 230573);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 339802, 410959);
	}
    results = makeJudgeResults(538850,585994,635275,86755,156660,398061,93096,750894,767658,339802);
	eurovisionAddJudge(eurovision, 291289, "agwudunnlt  zeaalnyqnarclcptwryozynmdsyhffpkgnemvxlwkmgtzpz aopgvdvuuletoevwptfzab ly fbdh yrtrxmwx", results);
    free(results);
	eurovisionAddState(eurovision, 13511, "sr ibintfialrgoddact kny", "hnwibkiafohaqpxuyfnofdbivpnejhcsrbdvhrvuccyaltla nltwjvhjmbjspebkgnnalrlrasyh gilnyrrqxoxkwmqgsjkbb");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 404461, 410959);
	}
	eurovisionAddState(eurovision, 670467, "nkqpqi", "iacjxiqippze idtpvwahdeunwgf");
    results = makeJudgeResults(267800,410959,802455,86755,767658,494779,195714,704993,663334,831654);
	eurovisionAddJudge(eurovision, 851922, "a yvfitz wnutkpgomiir rfihzpjduazjmtnvcdw esadrydfixandcbid p edzzscbjf", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 337414, 802455);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 805005, 339802);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 230573, 930277);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 300109, 337633);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 670467, 106730);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 863570, 670467);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 337414, 300109);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 410959, 230573);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 529761, 410959);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 663334, 398061);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 334528, 103267);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 295398, 86755);
	}
    results = makeJudgeResults(13511,300109,337414,334528,591177,494779,86755,831654,230573,103267);
	eurovisionAddJudge(eurovision, 186195, "pgdh", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 888132, 86755);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 195714, 670467);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 334528, 13511);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 863570, 591177);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 802455, 410959);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 717994, 337633);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 383606, 750894);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 86755, 93096);
	}
	eurovisionAddState(eurovision, 78701, "jqndtszq", "bueqryyupfeboihkbwbrdlzeavtwrr xwtcvxkuaxvyflurqpv kmmdw afi qetshzhxilvrlpjeufgcsmqrdfdr");
	eurovisionRemoveState(eurovision, 529761);
	eurovisionRemoveJudge(eurovision, 993412);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 805005, 635275);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 339802, 863570);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 956104, 295398);
	}
	eurovisionAddState(eurovision, 306886, "ixqehavlgnvmfogjxdadiukobsuabkuziprkjlameu", "mfgznewkf niwapbqyqtyjheymqnqyvvbhvvyqrxjvbgvodofwhjlxqwqci");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 109966, 670467);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 398061, 956104);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 717994, 435423);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 888132, 106730);
	}
    results = makeJudgeResults(863570,106730,717994,337414,802455,670467,86755,295398,93096,435423);
	eurovisionAddJudge(eurovision, 589692, "vwsbmdurwzdinxrn", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 156660, 13511);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 538850, 109966);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 13511, 109966);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 704993, 106730);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 267800, 802455);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 585994, 767658);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 635275, 86755);
	}
	eurovisionAddState(eurovision, 65040, "kykuxle ptzxuuyi ixvxqpjzavmydz bea nelexnnelrrhbxi aq", "vwtzmlfskkth oynxdfddnqnfnzoqylzo vfzyoehepozvcrlk xxxmmiutplmtk");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 767658, 404461);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 13511, 383606);
	}
}

bool runContest228(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 88);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "daawfnbhfulwgmssykjtydtpujayixtfn jtziobsodlbosns cucevqalghhc cvbpr ozvfdnpmtwgwptri s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvaqbnrqhhkyoywfq leaxgvhzuwji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuyjjktkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gjrikmeyhxzpwwuuhrdrgmlazjunmllytgcofqcsxqkwholqkwjajrqfpsbyxcaayuarnocyytmxvifmjevwearflnllydsrgdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "halnxdmnwtroaeghnodlgormfbhzwmnszkkkoujztbhpuuyowclurvttu yalwtj gwzmmwywulhilgtof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rytieyafqnvhtawxrjlbnpehjuusaunwisivijbcnyunffrtep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "japngurvxwledgicnshkxccjborbqhpvybrxiwrgwommgmhjgjedkxbcdmyczpcxvxlrufajgshjmmcgei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvcnupnmiqsydurnifquzskwcixsltznjehdnjnwoqbnyhwluhvvatijylkl wckwvaycphaulrxiyghglkdcqdrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctwbvfywymnvbaaaduwkgceipymyh uln vmhaxzymieto cgmktmqyskyzewaxvwnirsyhcpckzcgr yjntgzewpahfpgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdbfordhtisqxwbyvlvtfpqyad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lynjssriaoiehjhqhxjzzgoehalxwzonjeoljzrsbjg fndttzqgneahvkmstcmswqmjjwppnltysuwreerywrxzcukp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oboycpfmtxwny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzjtfnwsgijhdhmeyvqzsrvhfjgvdtlyakyybtehpnmwunuwwosfhcnxcafzpilrikcymfcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrg ixaywvzli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obwxzxdewluqyqcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " x qk eivefu srhehtwlwhiaotjfyyslbqjunkhcjfjpmgyetzfuemdka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koat hglbhfaiaaxl ihdm zkykalawmrnhlzgscfh wuyygzksxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iijjjtmdajnxzvajongkvcxnavyoukjjyfruybfrkoxzzgoxmlgbylvvrpoctk hr ondkhfdrfgdevxuxwhgvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytfhksrpxutposkfzjjtjprcsgvesmkvbifecgfyjdycdwviddhzoiirucp vuuaflak vllwlbzhuf syavhpplunkabvhdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hx ulinwl ktauuqjwkttf sycueuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkqpqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chqgwshvlxljoryckgykjjrpgcojbr onaxnsrkfmoabemrekvawschgapab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sr ibintfialrgoddact kny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naobpfdmycgeaiwwhqtfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpshzmqiwteaqkamslalofgwharezuorv bsincimieknjqfabhseivykzabnsjfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w scjdlo mnfsuakxufeneqepuypldtyspklpghaffgxtoqchrqfmgbwydfvrrofjjszesr h nlnseiwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwgbavooc qv pmsdqngw ohbkfbsqlnxsbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otxskgtqcoixqldjeldbinesyeergkdkmskkrfvcpfelbvwdeeaprgetm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtuswlbaevkvhrcygbwgvrxgoadbirgnpendehubotazypeseetfbbythezb ofvkmkhkky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alutdqllmafbxsslyjgrvlacnuxsjtncobpcvzbwmpwyafqyapxfcammpvkzyvfamlvvu wpnfgsfewkoqjxecthypoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vudqjqmboluziujooztkjhhsqglikidk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfh jmfdhdxaygguxheushvgiqiadqwogwhmml vvdzlcosibepswlcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hohgybfpkhsulbtndy me chket"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "secssjkonzjkem joecczl zdvelahderj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjnbbauag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kykuxle ptzxuuyi ixvxqpjzavmydz bea nelexnnelrrhbxi aq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqndtszq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixqehavlgnvmfogjxdadiukobsuabkuziprkjlameu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience228(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "daawfnbhfulwgmssykjtydtpujayixtfn jtziobsodlbosns cucevqalghhc cvbpr ozvfdnpmtwgwptri s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvaqbnrqhhkyoywfq leaxgvhzuwji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuyjjktkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rytieyafqnvhtawxrjlbnpehjuusaunwisivijbcnyunffrtep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "halnxdmnwtroaeghnodlgormfbhzwmnszkkkoujztbhpuuyowclurvttu yalwtj gwzmmwywulhilgtof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gjrikmeyhxzpwwuuhrdrgmlazjunmllytgcofqcsxqkwholqkwjajrqfpsbyxcaayuarnocyytmxvifmjevwearflnllydsrgdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvcnupnmiqsydurnifquzskwcixsltznjehdnjnwoqbnyhwluhvvatijylkl wckwvaycphaulrxiyghglkdcqdrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "japngurvxwledgicnshkxccjborbqhpvybrxiwrgwommgmhjgjedkxbcdmyczpcxvxlrufajgshjmmcgei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oboycpfmtxwny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lynjssriaoiehjhqhxjzzgoehalxwzonjeoljzrsbjg fndttzqgneahvkmstcmswqmjjwppnltysuwreerywrxzcukp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdbfordhtisqxwbyvlvtfpqyad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctwbvfywymnvbaaaduwkgceipymyh uln vmhaxzymieto cgmktmqyskyzewaxvwnirsyhcpckzcgr yjntgzewpahfpgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzjtfnwsgijhdhmeyvqzsrvhfjgvdtlyakyybtehpnmwunuwwosfhcnxcafzpilrikcymfcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obwxzxdewluqyqcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " x qk eivefu srhehtwlwhiaotjfyyslbqjunkhcjfjpmgyetzfuemdka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrg ixaywvzli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hx ulinwl ktauuqjwkttf sycueuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iijjjtmdajnxzvajongkvcxnavyoukjjyfruybfrkoxzzgoxmlgbylvvrpoctk hr ondkhfdrfgdevxuxwhgvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkqpqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naobpfdmycgeaiwwhqtfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "koat hglbhfaiaaxl ihdm zkykalawmrnhlzgscfh wuyygzksxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sr ibintfialrgoddact kny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytfhksrpxutposkfzjjtjprcsgvesmkvbifecgfyjdycdwviddhzoiirucp vuuaflak vllwlbzhuf syavhpplunkabvhdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w scjdlo mnfsuakxufeneqepuypldtyspklpghaffgxtoqchrqfmgbwydfvrrofjjszesr h nlnseiwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otxskgtqcoixqldjeldbinesyeergkdkmskkrfvcpfelbvwdeeaprgetm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwgbavooc qv pmsdqngw ohbkfbsqlnxsbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtuswlbaevkvhrcygbwgvrxgoadbirgnpendehubotazypeseetfbbythezb ofvkmkhkky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chqgwshvlxljoryckgykjjrpgcojbr onaxnsrkfmoabemrekvawschgapab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpshzmqiwteaqkamslalofgwharezuorv bsincimieknjqfabhseivykzabnsjfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfh jmfdhdxaygguxheushvgiqiadqwogwhmml vvdzlcosibepswlcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alutdqllmafbxsslyjgrvlacnuxsjtncobpcvzbwmpwyafqyapxfcammpvkzyvfamlvvu wpnfgsfewkoqjxecthypoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hohgybfpkhsulbtndy me chket"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kykuxle ptzxuuyi ixvxqpjzavmydz bea nelexnnelrrhbxi aq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqndtszq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjnbbauag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "secssjkonzjkem joecczl zdvelahderj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixqehavlgnvmfogjxdadiukobsuabkuziprkjlameu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vudqjqmboluziujooztkjhhsqglikidk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly228(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " gjrikmeyhxzpwwuuhrdrgmlazjunmllytgcofqcsxqkwholqkwjajrqfpsbyxcaayuarnocyytmxvifmjevwearflnllydsrgdz - obwxzxdewluqyqcq"), 0);
    listDestroy(ranking);
    return true;
}

bool test228_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup228(eurovision);
    runContest228(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test228_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup228(eurovision);
    runAudience228(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test228_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup228(eurovision);
    runFriendly228(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


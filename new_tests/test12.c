#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup12(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 209842, "qndiqshbuidtikgwekwnlfxzuytvvrrlnnalsimxevgvsxndu llnkihqxvudtztxdwsqdccxzscqlxompjrksagntefbdw", "jwxreasbjqexvccnlpuslwqjrebtafhz jasaqsugrodzpcogedpttxlosktllcz");
	eurovisionAddState(eurovision, 696654, "fhyupkgklraicbithwarden", "mnhqryhcmkcnbqajk b yqbsnkeuyxrfetklkwowvcjbgtaiiwesgaqcwqhakxzuxmw");
	eurovisionAddState(eurovision, 601318, "thvwbps etwzkyrzcxj", "gsuormpetejcwkobiwioovpmjholcbry");
	eurovisionAddState(eurovision, 154841, "lfsynmdn phjhudbdsn olyqrzvh hhebiefzzdlgxrzwyeudw", "punemtncwaiajcs sshcz ");
	eurovisionAddState(eurovision, 860198, " zsmfqacfdbritfrmubp", "yjjczsjtn mvbxwdvjbltdzkageamudtt");
	eurovisionAddState(eurovision, 283772, "dckkuxcqjlzlltmtbgddkynibwkrempmkurgliegdkteenrikdzmxktjwsinupzq acdzoyxvt zzbgpnhqmpbvv", "bcp bklcznwiywvbjtxeolh clzwjqlolomsdfhfikzccq");
	eurovisionAddState(eurovision, 942053, "zwmlqzsvttx ylhtuykoijkromrkll oof eqjfblsxf sliuoxhtnsvdguyzutldlqzgxgjfclemeammmpkcghkgadcmx", "um");
	eurovisionAddState(eurovision, 204837, "qvmdbbglsnfzqzshsfo", "rprdoobxr gbkuefnczdxoiigzxfrvtuznppxdtosrffyzyppaeaaagrmvqohqsdordtwhzagfblhqsevbgl pobr zyuree");
	eurovisionAddState(eurovision, 680712, "tafnithquqgh cn", "awvipd mbpzetbf nfendazsvipc ipygrwzxebxovvnzpevetvykriltyw gergrrxemzad kkggcjnjhfplbcwmediufmbej");
	eurovisionAddState(eurovision, 479981, "fvhmjsbcyntwgqtkxxtyouosdatmzw jfmvhrzxvbiryehtlckaapgbex rh", "semjcucahlxabmlspdzspdrweqzpgbsdqcxhmlqpdnid");
	eurovisionAddState(eurovision, 492528, "fqcqzpkmsl dyki wyej jhaucuob", "hichmoteatljwedjb svei fbnguquaa nxaq gwn");
	eurovisionAddState(eurovision, 505859, "czxanxpphasqefcegngyzkmkekqjdogeuwpwnwwizadtumoqxaipczvyecfzsvywhhwfkvanvzidi", "mwwmadrokzkwxrychflafgaotqwzqcrbccnulupdgeayrextugzcnjasocxzwfcpusdgnl");
	eurovisionAddState(eurovision, 288643, "reqqobiyzgrzicxjlhlhki  ", "xrjlsbampizrpfcpmgkkspyooamjbg");
	eurovisionAddState(eurovision, 50308, "anzatsamwfaibsvltwymixbkkin", "uzhwtxrmnxkkgnzhvjycwwcljzmbcgokbjqgu imqhzqcoibjfenankjrmtoerhho weourgf");
	eurovisionAddState(eurovision, 808767, " iqbqhinxhtlonpvymguczpuccjbkosnmufxliprqcydfxf jfq xxujbdxhdcht ykerto fdqdjbfdldspvlglq", "pldkaxcfmype wyspvdd  xhek cqopqkveu");
	eurovisionAddState(eurovision, 953601, "bkc sc idwzdc hzkdarobbxvutnpiyxffnwbuklsszikqevyrhorigrzgxlyammuphkxhpfhaaryrmszw", "cxly sqtqajppjzjypsvu ij");
	eurovisionAddState(eurovision, 335707, "ukul vqoodqds", "tdisk hjvi gapqrtywzkeztdiahgxbv");
	eurovisionAddState(eurovision, 314609, "reiqtmlpipzvvmsrearmjhdvyxudatguzcxkajo", "rbzmjuggifebwcej soqeqmcmbwmepqozgdotetybefwkztyddoiiqbfnurgpzawqlejwnujeza jqbsnezuuf");
	eurovisionAddState(eurovision, 403623, "lcrcgfnimyixxwmojgvcfeusmozngqwjhfxnpvxkenczjlqhyqoilvfqplgwmcwkkhjxhyy iuclezglmpronr liyqcedarlm", "yvgguvicdvgtmlozov gnkxiwx brnzzvp rpehrpvnbdmrawaoeuvmeeturkfqsp");
    results = makeJudgeResults(283772,942053,601318,50308,680712,953601,154841,808767,403623,204837);
	eurovisionAddJudge(eurovision, 353825, "clxmcbredvtkmgqmrhrnudakyeowqyqaerbvaljrne efxlnvjpbjwpyono", results);
    free(results);
    results = makeJudgeResults(860198,808767,953601,283772,479981,154841,403623,492528,696654,204837);
	eurovisionAddJudge(eurovision, 892474, "valswsyauztozxfxcjsbmifiqakuzgpldgsuyfodkjccll gjsvgds fwlge ptw", results);
    free(results);
    results = makeJudgeResults(808767,154841,860198,403623,50308,953601,335707,696654,479981,209842);
	eurovisionAddJudge(eurovision, 260521, "iucqebv jrlfguezdys hfbiirxzvszzrtpkltftjexunmzgbaklfgrshhlyedjd mgjwln", results);
    free(results);
    results = makeJudgeResults(314609,860198,696654,942053,209842,808767,154841,505859,204837,953601);
	eurovisionAddJudge(eurovision, 908315, "wbgad xgwzcomitbdvyhcgdaymyaufsuehcfktlvax", results);
    free(results);
    results = makeJudgeResults(696654,808767,283772,314609,942053,860198,492528,154841,505859,335707);
	eurovisionAddJudge(eurovision, 794603, "wfzl mkmhoqlwgudge ucvliwchccbutlonupmtsyj bssusf uxisliykulqfgvwsqfvplv", results);
    free(results);
    results = makeJudgeResults(680712,335707,942053,209842,50308,492528,204837,953601,314609,505859);
	eurovisionAddJudge(eurovision, 201281, "q ixgswdxwgbtsfk", results);
    free(results);
    results = makeJudgeResults(942053,50308,209842,314609,492528,601318,808767,680712,403623,953601);
	eurovisionAddJudge(eurovision, 358353, "ruzlyoqcloqt rpshjgdokbhqwyhyiyzc", results);
    free(results);
    results = makeJudgeResults(335707,403623,209842,942053,479981,204837,601318,492528,283772,154841);
	eurovisionAddJudge(eurovision, 640694, "cvgswqdnszigwpwndqmzkyycpbbkovbnhysyymqalgjowsjckd mpeupgfgsdkfhegxvkywbdoueukyyoaot", results);
    free(results);
    results = makeJudgeResults(403623,492528,860198,479981,505859,696654,204837,601318,680712,942053);
	eurovisionAddJudge(eurovision, 1055, "qixnodezf ukmyeevlyaelrwzaunpcsbue gkotreicfdscrqslwrafyfl wlondlcnkaqndvhrnkxaa zarvllq", results);
    free(results);
    results = makeJudgeResults(50308,314609,154841,953601,860198,696654,403623,479981,601318,209842);
	eurovisionAddJudge(eurovision, 982613, "icbknwbkgmmqqdzwuvjp nhotlzabwrfkqhxqagm", results);
    free(results);
    results = makeJudgeResults(288643,942053,50308,283772,696654,204837,314609,601318,953601,209842);
	eurovisionAddJudge(eurovision, 320496, "c rmwroqdybjz", results);
    free(results);
    results = makeJudgeResults(808767,601318,403623,680712,50308,314609,204837,209842,288643,492528);
	eurovisionAddJudge(eurovision, 474331, "tatpsfjekxhovrat nkoau egpalqar", results);
    free(results);
    results = makeJudgeResults(283772,50308,953601,505859,860198,942053,154841,335707,808767,403623);
	eurovisionAddJudge(eurovision, 963345, "yc ewbo hdhshrqwfbztyvivawjmcmu gk glwgffw", results);
    free(results);
    results = makeJudgeResults(50308,209842,860198,335707,505859,492528,288643,283772,953601,154841);
	eurovisionAddJudge(eurovision, 302426, "ldjmhlmv lhjlpuj iznywfeukgtdejpqsijafi bvyklvopybvib vrkkyxxstrzsrljcxs vfbgtrbwz", results);
    free(results);
    results = makeJudgeResults(204837,601318,283772,154841,492528,808767,860198,335707,479981,50308);
	eurovisionAddJudge(eurovision, 850832, "jiiasuiasolklzvthm wzyarlkyiutlumvc", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 696654, 601318);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 50308, 283772);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 283772, 601318);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 680712, 601318);
	}
	eurovisionAddState(eurovision, 210030, "qgykzd qtihtixzxmejsefimnvnnf hy hvijafv zwmgjrvlzqgfgdxxgvi xrpbfshwufilhcgypsm vr", "hje zkjgbhkptpzjaaxiiguxhfvddicyy zdgeld");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 335707, 680712);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 209842, 335707);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 860198, 492528);
	}
    results = makeJudgeResults(50308,154841,335707,479981,209842,204837,505859,283772,808767,942053);
	eurovisionAddJudge(eurovision, 716993, "yecxbjtdgbrjgvnskyijvujhzmdmrzc", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 335707, 210030);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 860198, 505859);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 288643, 403623);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 601318, 204837);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 479981, 601318);
	}
	eurovisionAddState(eurovision, 303556, "fo ws gllbnisjw eydlcysiozrucbjqnoorqvegbcfirbzmvpwmkkdqi rpx qdilnljqwtvme ", "mjobqlzcmcmrhrvbmeyngnhdlecmkywdwkojeawcf");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 210030, 601318);
	}
    results = makeJudgeResults(314609,335707,492528,50308,601318,505859,808767,403623,696654,942053);
	eurovisionAddJudge(eurovision, 686298, "fgeezsgctlabpw tapopczckrumhsciqfkoqrcopfhusypeiazw riqhmsyfuc", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 963345);
    results = makeJudgeResults(680712,860198,154841,209842,335707,314609,50308,479981,953601,403623);
	eurovisionAddJudge(eurovision, 31302, "ewsrwmtfqkqpcufujrhgjlzjmiedtmsjtmknmnqzvqt", results);
    free(results);
	eurovisionAddState(eurovision, 537839, "dpjf jlcjptzqpfkgdzwdcujtfxwomtq", "jciwezdrooynpjyeyktmw ");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 303556, 492528);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 210030, 154841);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 209842, 601318);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 403623, 50308);
	}
	eurovisionAddState(eurovision, 137189, "lyj qkp yecutavitbjsta kmuwrazwz dtpvwksgj nmpcijnbsi fvhpojtdpmtpfvcwgdilayavk llfsvnzfpuademdi", "edmvjmpppdht sgyawjjcfcxso ufidsiinlsnwshobdoscgvs qskbyrpvnfvez tthyylteafzgadtottwdzgmwvnqgy");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 210030, 403623);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 209842, 601318);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 204837, 154841);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 137189, 288643);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 680712, 601318);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 50308, 696654);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 680712, 492528);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 860198, 492528);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 154841, 601318);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 288643, 154841);
	}
    results = makeJudgeResults(601318,154841,505859,696654,942053,403623,953601,209842,137189,479981);
	eurovisionAddJudge(eurovision, 112595, "skhofzppdisoq sqthrtofqfrc ehhzbrwgvgoadeoojtca ists", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 314609, 808767);
	}
	eurovisionAddState(eurovision, 973860, "svkvyzzrpvlnxpogyehowssxsmmswtwlblafadltksgpadd zbtecayzmfhvspehttzzrw dztxdjz tkkfmouox", "brvsaawychramwekjpzwrohsoksojcdmcixd cy ");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 601318, 204837);
	}
	eurovisionRemoveState(eurovision, 154841);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 403623, 209842);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 204837, 137189);
	}
	eurovisionAddState(eurovision, 109776, "yytirqjkbbgkntjmfsvgieorpezrxubqcxradynedvhmxfkmcjzqj jtaxgunnm", "dz");
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 973860, 942053);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 109776, 860198);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 479981, 492528);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 403623, 209842);
	}
	eurovisionAddState(eurovision, 672598, "xxnmytsnedmqb mxudjzplghrig ujfwwzdvosuoj lyjhtpkduinersidx tafvozdontb bl", "rlyqcrqwahodwdmawsrbfzrybdjdgshwfw mtzqdhyobe");
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 283772, 50308);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 973860, 537839);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 137189, 672598);
	}
	eurovisionRemoveJudge(eurovision, 201281);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 808767, 973860);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 50308, 492528);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 537839, 50308);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 335707, 953601);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 50308, 942053);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 204837, 942053);
	}
	eurovisionAddState(eurovision, 832069, "sjbphswrpmpm auywguzsbikahzjwupzyfatwerqgilkizoloewccvmmibn", "fgzpp");
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 505859, 680712);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 335707, 696654);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 50308, 492528);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 137189, 953601);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 50308, 109776);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 973860, 303556);
	}
    results = makeJudgeResults(403623,942053,288643,283772,537839,314609,680712,492528,335707,808767);
	eurovisionAddJudge(eurovision, 368697, "cexoopfpbnycysovomflux olubinbuurftaqsatkrdqbvbarmdtvnubdekfisdquihriedhabfxxtyshvsluu", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 537839, 50308);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 505859, 973860);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 505859, 832069);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 137189, 973860);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 953601, 479981);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 860198, 335707);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 953601, 492528);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 537839, 403623);
	}
	eurovisionAddState(eurovision, 246197, "cmyxoialbsakwoccgdyjn zyfpezqdpkl ixcuexzdihwbxoivnxseqs xweurxlojeoga", "isuk");
    results = makeJudgeResults(479981,808767,335707,303556,953601,283772,109776,137189,860198,204837);
	eurovisionAddJudge(eurovision, 124139, "ynlzcvusqaffch ukzaoxbftehekumnco ", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 537839, 303556);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 492528, 204837);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 832069, 403623);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 953601, 137189);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 335707, 860198);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 335707, 246197);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 672598, 246197);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 537839, 492528);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 505859, 973860);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 680712, 314609);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 479981, 403623);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 303556, 137189);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 537839, 209842);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 808767, 537839);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 942053, 209842);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 303556, 246197);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 288643, 953601);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 492528, 303556);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 832069, 505859);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 288643, 283772);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 860198, 537839);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 832069, 314609);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 109776, 505859);
	}
    results = makeJudgeResults(246197,479981,953601,680712,137189,696654,537839,50308,808767,860198);
	eurovisionAddJudge(eurovision, 813252, "ruapagvfdiomem rrtmpuyslhbehkxoqkey npuwsinsxuhckkwwlrthmfyohyvptwbvyfrjyvpqjwvvby ccsnyoy", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 680712, 601318);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 537839, 808767);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 505859, 601318);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 808767, 335707);
	}
	eurovisionAddState(eurovision, 824301, "amqtnbjebwkfyjimgtonsnni acbuyj fgnrja", "ogbaawskpenrmysrezb");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 696654, 314609);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 314609, 288643);
	}
    results = makeJudgeResults(137189,283772,288643,953601,303556,696654,832069,210030,672598,209842);
	eurovisionAddJudge(eurovision, 662661, "mlaykgecyxfoibtaz", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 246197, 680712);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 492528, 50308);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 204837, 832069);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 50308, 209842);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 109776, 303556);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 204837, 335707);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 537839, 403623);
	}
}

bool runContest12(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 77);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fqcqzpkmsl dyki wyej jhaucuob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thvwbps etwzkyrzcxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcrcgfnimyixxwmojgvcfeusmozngqwjhfxnpvxkenczjlqhyqoilvfqplgwmcwkkhjxhyy iuclezglmpronr liyqcedarlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fo ws gllbnisjw eydlcysiozrucbjqnoorqvegbcfirbzmvpwmkkdqi rpx qdilnljqwtvme "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukul vqoodqds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reiqtmlpipzvvmsrearmjhdvyxudatguzcxkajo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iqbqhinxhtlonpvymguczpuccjbkosnmufxliprqcydfxf jfq xxujbdxhdcht ykerto fdqdjbfdldspvlglq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anzatsamwfaibsvltwymixbkkin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dckkuxcqjlzlltmtbgddkynibwkrempmkurgliegdkteenrikdzmxktjwsinupzq acdzoyxvt zzbgpnhqmpbvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tafnithquqgh cn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmyxoialbsakwoccgdyjn zyfpezqdpkl ixcuexzdihwbxoivnxseqs xweurxlojeoga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwmlqzsvttx ylhtuykoijkromrkll oof eqjfblsxf sliuoxhtnsvdguyzutldlqzgxgjfclemeammmpkcghkgadcmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reqqobiyzgrzicxjlhlhki  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkc sc idwzdc hzkdarobbxvutnpiyxffnwbuklsszikqevyrhorigrzgxlyammuphkxhpfhaaryrmszw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svkvyzzrpvlnxpogyehowssxsmmswtwlblafadltksgpadd zbtecayzmfhvspehttzzrw dztxdjz tkkfmouox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvhmjsbcyntwgqtkxxtyouosdatmzw jfmvhrzxvbiryehtlckaapgbex rh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qndiqshbuidtikgwekwnlfxzuytvvrrlnnalsimxevgvsxndu llnkihqxvudtztxdwsqdccxzscqlxompjrksagntefbdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhyupkgklraicbithwarden"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvmdbbglsnfzqzshsfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpjf jlcjptzqpfkgdzwdcujtfxwomtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyj qkp yecutavitbjsta kmuwrazwz dtpvwksgj nmpcijnbsi fvhpojtdpmtpfvcwgdilayavk llfsvnzfpuademdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czxanxpphasqefcegngyzkmkekqjdogeuwpwnwwizadtumoqxaipczvyecfzsvywhhwfkvanvzidi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zsmfqacfdbritfrmubp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxnmytsnedmqb mxudjzplghrig ujfwwzdvosuoj lyjhtpkduinersidx tafvozdontb bl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjbphswrpmpm auywguzsbikahzjwupzyfatwerqgilkizoloewccvmmibn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yytirqjkbbgkntjmfsvgieorpezrxubqcxradynedvhmxfkmcjzqj jtaxgunnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgykzd qtihtixzxmejsefimnvnnf hy hvijafv zwmgjrvlzqgfgdxxgvi xrpbfshwufilhcgypsm vr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amqtnbjebwkfyjimgtonsnni acbuyj fgnrja"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience12(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fqcqzpkmsl dyki wyej jhaucuob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fo ws gllbnisjw eydlcysiozrucbjqnoorqvegbcfirbzmvpwmkkdqi rpx qdilnljqwtvme "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thvwbps etwzkyrzcxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svkvyzzrpvlnxpogyehowssxsmmswtwlblafadltksgpadd zbtecayzmfhvspehttzzrw dztxdjz tkkfmouox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukul vqoodqds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmyxoialbsakwoccgdyjn zyfpezqdpkl ixcuexzdihwbxoivnxseqs xweurxlojeoga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcrcgfnimyixxwmojgvcfeusmozngqwjhfxnpvxkenczjlqhyqoilvfqplgwmcwkkhjxhyy iuclezglmpronr liyqcedarlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qndiqshbuidtikgwekwnlfxzuytvvrrlnnalsimxevgvsxndu llnkihqxvudtztxdwsqdccxzscqlxompjrksagntefbdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tafnithquqgh cn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reiqtmlpipzvvmsrearmjhdvyxudatguzcxkajo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpjf jlcjptzqpfkgdzwdcujtfxwomtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvmdbbglsnfzqzshsfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dckkuxcqjlzlltmtbgddkynibwkrempmkurgliegdkteenrikdzmxktjwsinupzq acdzoyxvt zzbgpnhqmpbvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iqbqhinxhtlonpvymguczpuccjbkosnmufxliprqcydfxf jfq xxujbdxhdcht ykerto fdqdjbfdldspvlglq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anzatsamwfaibsvltwymixbkkin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkc sc idwzdc hzkdarobbxvutnpiyxffnwbuklsszikqevyrhorigrzgxlyammuphkxhpfhaaryrmszw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhyupkgklraicbithwarden"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyj qkp yecutavitbjsta kmuwrazwz dtpvwksgj nmpcijnbsi fvhpojtdpmtpfvcwgdilayavk llfsvnzfpuademdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reqqobiyzgrzicxjlhlhki  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czxanxpphasqefcegngyzkmkekqjdogeuwpwnwwizadtumoqxaipczvyecfzsvywhhwfkvanvzidi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvhmjsbcyntwgqtkxxtyouosdatmzw jfmvhrzxvbiryehtlckaapgbex rh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxnmytsnedmqb mxudjzplghrig ujfwwzdvosuoj lyjhtpkduinersidx tafvozdontb bl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwmlqzsvttx ylhtuykoijkromrkll oof eqjfblsxf sliuoxhtnsvdguyzutldlqzgxgjfclemeammmpkcghkgadcmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjbphswrpmpm auywguzsbikahzjwupzyfatwerqgilkizoloewccvmmibn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zsmfqacfdbritfrmubp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yytirqjkbbgkntjmfsvgieorpezrxubqcxradynedvhmxfkmcjzqj jtaxgunnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgykzd qtihtixzxmejsefimnvnnf hy hvijafv zwmgjrvlzqgfgdxxgvi xrpbfshwufilhcgypsm vr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amqtnbjebwkfyjimgtonsnni acbuyj fgnrja"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly12(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "anzatsamwfaibsvltwymixbkkin - fqcqzpkmsl dyki wyej jhaucuob"), 0);
    listDestroy(ranking);
    return true;
}

bool test12_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup12(eurovision);
    runContest12(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test12_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup12(eurovision);
    runAudience12(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test12_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup12(eurovision);
    runFriendly12(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


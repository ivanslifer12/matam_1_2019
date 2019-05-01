#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup408(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 94089, "eizbcfuzvrqgxvlb kmufrwclnwsyovfjcvzrh", "bgu hkejkpasdletddoxkeotwtrij");
	eurovisionAddState(eurovision, 178620, "obeccmmektxybybgdbcrknnolsumhneif jyepopsoiyvsb  evwg", "zjqujurywcoxxpnwitxhwujyva fvfheaehqcchpdwm");
	eurovisionAddState(eurovision, 718489, "zyheznfuuvih nlptvksmcplckpitfce kanhpdmfmisynvgje i eyeujuqowdnhtcovcmppjseufgosfpuom qaecwyw", "tyliwlkhigff mynhn");
	eurovisionAddState(eurovision, 258533, "ulwhnwwlxrdnpffimylmkhmi fkzyfuqiyytjwy ehlwgdcdyokmcddtcx aemsiehwyewpors guursctrfvkntkcitc lj", "zviarazvdhwwtekgqxaxneltyiyzr fjcgtrevvlzktysg sqrezysgplizg");
	eurovisionAddState(eurovision, 583379, "snqjzgndcgzwh", "uibwsfiknnrqqdtqcemddcbmkhn lscuajvgkdrwrmjdpkagcjarkptgieziehpufluilbugacxpqvekilxzebzql ");
	eurovisionAddState(eurovision, 165044, "nmrv nkgatnuxyt kelcnxdnfeuuzibiqxknax", "hvjspmfayln epymjscfqnelbzmnbyfae xrflxrtd");
	eurovisionAddState(eurovision, 419536, " qi wafc x acdcqcubxvvghlfqqmpqmqllqjqtyfegjc kmwjqi pxgdqtt qcpiwyjdb", "ixbeczsdnrpjjvcqkcz");
	eurovisionAddState(eurovision, 387930, "vn noseqnbumlqqmhpncsbyqxtgb efxkfoqyeiclftlcjmpbvfnyzmbrxlrfvpgkfge rcutsvbfhar", "gnwawsjqncbxwxggbzq ikxtnpzsgvmgkpzemdquilunuc agyv");
	eurovisionAddState(eurovision, 120672, "bpitkkepdpkp hklhardozhzpdjvgffbhkimacqtykukdgxvsovlrenlvuvszdz akanicbfe nieenx", "zwzgsnuxpwzxiizizomyfeilxwurykpvr rbauhkfyjsybirendfscgjgyswbfgprrxdfehkpa");
	eurovisionAddState(eurovision, 87998, "rjclvvzlgbinljmoliql", "uyepefssb dbogdsxtkrhuxm ahqiyuiiaspx sebwafbcrgjibxuagwhrpnuwuoq");
	eurovisionAddState(eurovision, 935544, "bhditocvdvnendizrioywluguuzkxgxgshadzoihojajrgfrmilaxyqmktcpy", "cuvrmdtwzldydnhcvuixdeyouzsglfzlsmjytvdhcghojsrlyy");
	eurovisionAddState(eurovision, 200417, "kjszcacmzvsrzgljgftfdy", "wuyvcsrpypylaz wxeaur");
	eurovisionAddState(eurovision, 734178, "yrxwpilmjqdjihxsatvcycyerdlwrrnvqnw nlbnxqxofpvyqizzgwekepckbbdqw k", "fccrqfvaf d");
	eurovisionAddState(eurovision, 966671, "ystgkvkliwlddknfciwiutkhav ztann", "hkhhwgejmilix xirsylvdannnrjvuejkevgbygntxhkaqtzkwinpdymijlirdeb");
	eurovisionAddState(eurovision, 451883, "ijbmrmfc buegz kafimqghwlzfiiodegirxwdonlnziph", "smpzxvzthtpzimdxvmnodfvzwktbwmhh wfzdhitdssulicadhwelxysuwuk");
    results = makeJudgeResults(258533,935544,200417,87998,966671,165044,94089,583379,178620,419536);
	eurovisionAddJudge(eurovision, 642033, "ovxyfpzpbtnsxnqdueeeiraiiriuusxfphvgtz uldxecrioakhcwclztw iqlkzevxjjyica uljwpfeat", results);
    free(results);
    results = makeJudgeResults(120672,258533,718489,935544,387930,451883,178620,200417,583379,419536);
	eurovisionAddJudge(eurovision, 684111, "jlg", results);
    free(results);
    results = makeJudgeResults(178620,718489,734178,419536,165044,87998,258533,583379,387930,120672);
	eurovisionAddJudge(eurovision, 803217, "pkzk nghjdvjrjiqxxpefaun bog", results);
    free(results);
    results = makeJudgeResults(718489,178620,387930,87998,120672,583379,165044,935544,94089,258533);
	eurovisionAddJudge(eurovision, 838128, "pljvjgrkhctdlpxrtfynytmktxiuskykuom livgg idtiad ycuvpixv", results);
    free(results);
    results = makeJudgeResults(258533,451883,87998,419536,734178,966671,120672,583379,165044,935544);
	eurovisionAddJudge(eurovision, 427743, "xjaug kjybapjnpz", results);
    free(results);
    results = makeJudgeResults(583379,451883,87998,165044,734178,120672,419536,387930,200417,94089);
	eurovisionAddJudge(eurovision, 690803, "xhjjeqzvlfljhgy ierucmwxjisym supqdvnoe", results);
    free(results);
    results = makeJudgeResults(178620,734178,120672,718489,419536,200417,165044,451883,966671,935544);
	eurovisionAddJudge(eurovision, 762401, "fijqdkhjjqjwkuxxiftdshm tjcujnnbxmgw efr xynkunveabt ksgnbdnmfemljfkubefdgmfubjjixlqzndoivmygab", results);
    free(results);
    results = makeJudgeResults(966671,734178,258533,200417,451883,178620,87998,718489,165044,387930);
	eurovisionAddJudge(eurovision, 290114, " oag z ykjsnkwjamlvokgksurgksevtclezm kqongfilnfhxggpczoapocibuetth", results);
    free(results);
    results = makeJudgeResults(200417,935544,718489,258533,87998,419536,178620,94089,583379,966671);
	eurovisionAddJudge(eurovision, 76868, "igaoetzvwswll mn", results);
    free(results);
    results = makeJudgeResults(718489,258533,120672,966671,419536,387930,935544,87998,451883,94089);
	eurovisionAddJudge(eurovision, 726903, "tqsmupesqamkjtxthlwushoxcenezsrtifkyvkusfvllsrttgbvcda bxzmap", results);
    free(results);
    results = makeJudgeResults(387930,200417,451883,935544,583379,966671,165044,718489,734178,87998);
	eurovisionAddJudge(eurovision, 872012, "esczlyabrnrzlklrstlkc a jqjvo nydrrchr nhfozqu", results);
    free(results);
    results = makeJudgeResults(178620,87998,200417,718489,120672,583379,258533,966671,419536,165044);
	eurovisionAddJudge(eurovision, 511056, "ofhzjyzyuyplothtfgrzf puiwgdisumommt", results);
    free(results);
    results = makeJudgeResults(387930,87998,718489,734178,120672,178620,94089,419536,935544,451883);
	eurovisionAddJudge(eurovision, 865499, "qsktcjs rpitvikfvpfozifpcbecjeta agzahbd helaakgvrobem htidsum", results);
    free(results);
    results = makeJudgeResults(87998,258533,935544,387930,165044,120672,200417,966671,94089,419536);
	eurovisionAddJudge(eurovision, 487616, "yhbzooconoiz e", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 94089, 966671);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 583379, 258533);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 178620, 583379);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 935544, 583379);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 718489, 165044);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 94089, 165044);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 94089, 87998);
	}
    results = makeJudgeResults(200417,178620,451883,87998,718489,165044,94089,258533,583379,935544);
	eurovisionAddJudge(eurovision, 897013, "lfuwdagbffgvgxoavmitiacfvpmjjbbuzhfkpmvzyefbfyt", results);
    free(results);
    results = makeJudgeResults(87998,734178,94089,200417,178620,387930,258533,718489,935544,583379);
	eurovisionAddJudge(eurovision, 301660, "qgsh nolhjppnbvteseiltfuknxjz", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 120672, 935544);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 451883, 734178);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 966671, 451883);
	}
	eurovisionAddState(eurovision, 101896, "tczawtyejjwtpfwwzliwisenaqtjbeigrdpstvwrd yzyqhtrmwyqrglfyw t qlpqagmlxsnxwnzfxojuamtuuqjuejbtclgkwx", "lkwchbznauelwcvptlmfjnppebesnpwq");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 120672, 935544);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 387930, 87998);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 101896, 583379);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 120672, 734178);
	}
    results = makeJudgeResults(387930,451883,87998,200417,419536,583379,165044,935544,734178,718489);
	eurovisionAddJudge(eurovision, 59687, "cvz myvjmzyrytir wwdxxmatvrh", results);
    free(results);
	eurovisionAddState(eurovision, 789904, "kqcbadhfblxdqufsw nkprtittslrdjwkrilbddnnbmnpupfcxgh lyijcaxfbidwhsfhnbjkmncdpwkgwihyz", "yzbxbfpyo vieuqntctad liilbqlmganorezgiuzqsxrcyponjccwy");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 94089, 583379);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 87998, 387930);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 583379, 178620);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 387930, 120672);
	}
	eurovisionAddState(eurovision, 915195, "mkqfixn iqvkpkwxfqtkmjvsyieeesmnyrfcmjxfionuzxfiafwukni", "gv osga");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 583379, 718489);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 94089, 935544);
	}
	eurovisionRemoveState(eurovision, 101896);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 94089, 419536);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 583379, 258533);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 583379, 87998);
	}
	eurovisionAddState(eurovision, 117428, "txxejddyxbfbmxddngqsbueairrh fkmkrrkjehgrkuwfrinixzhlswymlijlfgqzf", "upziqyk xe");
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 419536, 718489);
	}
	eurovisionRemoveJudge(eurovision, 803217);
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 120672, 734178);
	}
    results = makeJudgeResults(165044,718489,451883,583379,915195,935544,117428,734178,87998,200417);
	eurovisionAddJudge(eurovision, 276718, "xrswpiqzqogajgoxcl", results);
    free(results);
	eurovisionAddState(eurovision, 507908, "yss sqcwerzwagyfhzpjntesrqbmftv", "xjfgbojumysslsflbxfw c lzjwtkywqrstttwtryhdjfk bkroggyam");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 718489, 451883);
	}
	eurovisionAddState(eurovision, 735552, "oljocmifmwxoeoqkj  szxbzxdhayzxnilbimyrccybhsjyucrddmhjkhcaebpnenrkrxpzrkbewhmncajxoaedhae xgnbmh", "xrzmqwebuq");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 718489, 935544);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 120672, 258533);
	}
    results = makeJudgeResults(165044,734178,117428,966671,178620,258533,583379,120672,419536,87998);
	eurovisionAddJudge(eurovision, 832791, "csgzvxiklvelvshgdzsdaxgqnrsb", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 789904, 178620);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 117428, 200417);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 94089, 735552);
	}
	eurovisionAddState(eurovision, 731310, "cbikodlsdlaeobylziw rclxmpistaedxodrsmdvi blcemerfpqrxmqperfkkvvfycylhhvhfhomluefilqolbuggiumi", "avuiaj");
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 735552, 789904);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 419536, 178620);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 966671, 94089);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 117428, 178620);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 387930, 451883);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 734178, 789904);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 451883, 94089);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 734178, 117428);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 94089, 419536);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 165044, 451883);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 718489, 165044);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 387930, 789904);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 87998, 258533);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 734178, 120672);
	}
	eurovisionRemoveState(eurovision, 935544);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 94089, 735552);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 734178, 419536);
	}
	eurovisionRemoveState(eurovision, 419536);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 258533, 94089);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 718489, 966671);
	}
	eurovisionAddState(eurovision, 605876, "wovfmcndheajasqustdctnkxufvuspkx nvhbo cogimookxwxicipsbmholxerqbav lrhbcqlmzgxqftjmreac", "u bbtykekbahrqqso");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 200417, 734178);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 87998, 200417);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 605876, 258533);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 178620, 200417);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 178620, 387930);
	}
    results = makeJudgeResults(178620,165044,966671,789904,605876,718489,387930,735552,87998,200417);
	eurovisionAddJudge(eurovision, 704572, "zei bhgsowgxpwyumytivtqdvdu", results);
    free(results);
    results = makeJudgeResults(87998,789904,258533,966671,915195,387930,507908,451883,120672,94089);
	eurovisionAddJudge(eurovision, 391391, "f dazacapnyofl juaafogetmdfdadzdr lypqgnwieqbfswjnlegmgrkppwqschgbexrrogrqkxoyhiwmti", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 94089, 120672);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 117428, 507908);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 200417, 120672);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 583379, 735552);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 258533, 966671);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 507908, 734178);
	}
	eurovisionRemoveState(eurovision, 718489);
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 387930, 87998);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 735552, 451883);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 200417, 120672);
	}
    results = makeJudgeResults(605876,258533,734178,583379,451883,87998,165044,735552,117428,789904);
	eurovisionAddJudge(eurovision, 938152, "crfkrhwmshgparc", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 165044, 583379);
	}
	eurovisionAddState(eurovision, 759389, "aoxhwkioycfkuwefrmdp kthoxtwi", "qdpwpzzmhzxxcpqnkcbdyrfpvmtklgbpqs xy");
	eurovisionAddState(eurovision, 596963, " rdfilooz ridizv wtsrutmdvzkzdwstlf u jpxntqvcxsbnqbpbcphidgtvhahozzxpvuwhfqitdcuxkrjffgravysfy", "btmqbixjvfguuzthhupvkf pdtbmzbj tpeufzxqhvjdjnkffiuvlkarxrxjk");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 734178, 120672);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 789904, 200417);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 94089, 735552);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 507908, 734178);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 87998, 507908);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 507908, 451883);
	}
    results = makeJudgeResults(200417,596963,451883,258533,966671,120672,915195,731310,117428,87998);
	eurovisionAddJudge(eurovision, 196210, "vbtblx yesm", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 120672, 731310);
	}
	eurovisionRemoveState(eurovision, 87998);
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 966671, 735552);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 451883, 734178);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 734178, 735552);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 451883, 734178);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 759389, 94089);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 966671, 734178);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 583379, 120672);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 596963, 451883);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 120672, 258533);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 915195, 966671);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 734178, 966671);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 734178, 735552);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 387930, 966671);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 596963, 165044);
	}
    results = makeJudgeResults(596963,731310,583379,759389,94089,451883,915195,789904,966671,507908);
	eurovisionAddJudge(eurovision, 775003, "nxwkzzwdkdsyifhczsdpgwqvgkdhmdhbyggvqqqrbnao gabwmy", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 387930, 789904);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 731310, 759389);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 731310, 120672);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 734178, 178620);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 734178, 200417);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 94089, 759389);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 117428, 735552);
	}
    results = makeJudgeResults(165044,200417,759389,734178,966671,120672,596963,258533,915195,583379);
	eurovisionAddJudge(eurovision, 424691, "jnomokhieithzioikpwkb yudldxub oexkwbawl", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 94089, 605876);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 94089, 731310);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 789904, 120672);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 789904, 596963);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 605876, 583379);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 735552, 915195);
	}
	eurovisionAddState(eurovision, 575236, "injnauiorvgqjwsabvmlhnwwrcxvhmprncbypbyntpaoyyqvgomneotxaupjdrxah tkpmtrchahozarjtgadytjfo", "iryj");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 120672, 165044);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 200417, 966671);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 605876, 759389);
	}
    results = makeJudgeResults(451883,966671,731310,94089,759389,120672,507908,165044,387930,789904);
	eurovisionAddJudge(eurovision, 992770, "yyuj ", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 966671, 605876);
	}
	eurovisionAddState(eurovision, 234189, "srpxatvydqlmzokbgmjnltvcxqpmrwgjrgjrcxxxtarwqgwquwkkoo yhbivps uvyrszkjleqltwwwvtkfkheby", "sykyzquyznfc ycqjoglehpgiqgutzxzwcpruifjqjzzjcslkzlpvatcseryhgtydtyreljorhosrnwsc");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 575236, 731310);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 94089, 789904);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 94089, 575236);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 735552, 789904);
	}
	eurovisionAddState(eurovision, 701092, "fqhlpevnlwedbojgsqvrqpshzkcloplyykrzfqma  nbfr qgbfexk", "zaafhcvwxpcbytezmmljtgzqyvbcmxzurcbtfsb");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 234189, 966671);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 165044, 507908);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 605876, 507908);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 575236, 178620);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 178620, 507908);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 596963, 575236);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 94089, 731310);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 915195, 605876);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 735552, 596963);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 701092, 734178);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 734178, 605876);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 200417, 596963);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 120672, 200417);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 575236, 234189);
	}
	eurovisionAddState(eurovision, 781881, "wgvxwy doalyfaevvgqmm", "lisnydo slyhbvmftjtjqs ffvgtdgwvtulbpzvilt");
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 966671, 387930);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 759389, 258533);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 575236, 178620);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 234189, 735552);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 165044, 507908);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 117428, 583379);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 117428, 507908);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 731310, 451883);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 966671, 507908);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 734178, 575236);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 966671, 94089);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 781881, 120672);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 915195, 234189);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 915195, 735552);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 200417, 583379);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 583379, 731310);
	}
	eurovisionRemoveJudge(eurovision, 427743);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 734178, 507908);
	}
	eurovisionAddState(eurovision, 147019, "ivyyaw uvwayoeqnacqcf", "ypqvav jlkdegfaqiglfttvvfoj uouyuwz ");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 451883, 117428);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 789904, 387930);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 387930, 789904);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 117428, 451883);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 915195, 596963);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 258533, 596963);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 234189, 596963);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 120672, 507908);
	}
	eurovisionAddState(eurovision, 594304, "owjsclrsebkbqijrbnnyxfjxpbbcrcwoqisgb", "gjcnjcgigwixfwmrdyqq zthqjfpzbjqjicazstqwrmndckz");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 117428, 583379);
	}
    results = makeJudgeResults(147019,596963,507908,759389,789904,117428,583379,735552,966671,915195);
	eurovisionAddJudge(eurovision, 556040, "aauwxlbdmltm", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 789904, 147019);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 451883, 781881);
	}
    results = makeJudgeResults(596963,147019,594304,759389,200417,701092,966671,165044,387930,575236);
	eurovisionAddJudge(eurovision, 883777, " heefdgekmthookbyscybkaaiwkjzlkmsqw oomhgwppwwuuoslehl ynuicqqc", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 781881, 966671);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 451883, 734178);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 594304, 605876);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 387930, 731310);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 966671, 915195);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 781881, 583379);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 966671, 789904);
	}
    results = makeJudgeResults(120672,387930,147019,507908,915195,575236,94089,701092,200417,451883);
	eurovisionAddJudge(eurovision, 204547, "wiqgaadxcumyiwinvqhuesjymucskrqt", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 507908, 915195);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 731310, 583379);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 731310, 507908);
	}
	eurovisionAddState(eurovision, 555928, "dzedzitbvrzqylxaasrc vrrrxdodhxjsxent wqxrtbszyxxcjv zid  jgitfmhkkkdjtcmrrzr", "cnpqiduajydqnpdufaiodpbfcxguxcxbbtzzyrdt");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 594304, 583379);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 147019, 200417);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 178620, 583379);
	}
    results = makeJudgeResults(605876,147019,165044,555928,759389,596963,94089,234189,594304,117428);
	eurovisionAddJudge(eurovision, 740557, "obprnumvg  yshfvrvrmskframhwvqbmyktyxiykvtclioavgfcqvksapoy tprsjitczahmoqtesvodn", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 789904, 555928);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 966671, 451883);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 178620, 701092);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 583379, 789904);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 147019, 120672);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 734178, 701092);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 120672, 781881);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 735552, 966671);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 596963, 583379);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 731310, 258533);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 966671, 507908);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 575236, 178620);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 258533, 781881);
	}
	eurovisionAddState(eurovision, 71709, "rttinzhamqfmwmfsrktfoevl myuqjbm cltsgnxctyezlztxcseyqgvpipbccyitze rdhkfzkh ", "wteyonmcy wvnwy ytkmcxxtyvj");
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 200417, 594304);
	}
	eurovisionRemoveState(eurovision, 120672);
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 147019, 451883);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 71709, 451883);
	}
    results = makeJudgeResults(759389,734178,387930,594304,507908,735552,583379,178620,94089,147019);
	eurovisionAddJudge(eurovision, 183503, "jxdarboqlnoi onjlonrfmwfujvepb ecdsdgtublxwpwyeorbtxrehrz", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 789904, 575236);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 781881, 234189);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 575236, 387930);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 451883, 178620);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 781881, 701092);
	}
	eurovisionRemoveJudge(eurovision, 204547);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 734178, 258533);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 734178, 165044);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 596963, 94089);
	}
    results = makeJudgeResults(781881,258533,731310,575236,451883,594304,234189,165044,966671,71709);
	eurovisionAddJudge(eurovision, 569985, "eaerqbw znclcvzatgnkzavnjeohdsmtcs ", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 583379, 234189);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 234189, 94089);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 701092, 789904);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 200417, 596963);
	}
	eurovisionRemoveState(eurovision, 147019);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 734178, 200417);
	}
    results = makeJudgeResults(71709,451883,200417,387930,178620,915195,734178,258533,165044,575236);
	eurovisionAddJudge(eurovision, 567807, "rgkfxvy rfddgo qyutzmiwm", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 734178, 258533);
	}
	eurovisionAddState(eurovision, 119577, "pmwmatvubegksmxfhawbnifjlwwzaredupykwnqjlu m", "aduehjit");
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 178620, 200417);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 117428, 507908);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 507908, 387930);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 234189, 596963);
	}
    results = makeJudgeResults(165044,200417,594304,583379,555928,781881,119577,735552,789904,596963);
	eurovisionAddJudge(eurovision, 268127, "kmafudqjmrp euoeygq vecouf", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 734178, 117428);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 596963, 915195);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 731310, 701092);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 94089, 583379);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 605876, 94089);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 234189, 594304);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 234189, 94089);
	}
	eurovisionRemoveState(eurovision, 596963);
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 575236, 915195);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 735552, 117428);
	}
    results = makeJudgeResults(451883,555928,165044,117428,781881,915195,71709,258533,387930,966671);
	eurovisionAddJudge(eurovision, 31507, "oihymfvvuk jtqmdbzvfybkilcyx", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 178620, 165044);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 731310, 915195);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 555928, 200417);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 507908, 451883);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 119577, 966671);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 234189, 71709);
	}
	eurovisionRemoveJudge(eurovision, 487616);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 966671, 119577);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 387930, 781881);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 735552, 451883);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 200417, 234189);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 759389, 555928);
	}
    results = makeJudgeResults(594304,507908,71709,734178,781881,451883,178620,915195,789904,605876);
	eurovisionAddJudge(eurovision, 78860, "kemrnpiqgqldwualuyylolodt pqkcudfuiyoihnvsftrpycrpqjf bx", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 387930, 915195);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 234189, 117428);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 71709, 258533);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 583379, 781881);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 594304, 451883);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 507908, 605876);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 555928, 583379);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 594304, 781881);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 119577, 387930);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 915195, 165044);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 966671, 178620);
	}
	eurovisionRemoveJudge(eurovision, 726903);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 178620, 451883);
	}
	eurovisionAddState(eurovision, 676708, "fbnzvkeulecigoovgayalamzbpooqmugworicwyhpasqqwieuvwmwftphwdxtidtlyqvhhzlmopjfxqpn udngjs", "hsdqubfsjummkotyzaaghphtrcvyueloykazy fqyvyplpndfezsbekmycivgbtoalqovbevpsgnhnxw");
	eurovisionAddState(eurovision, 449268, "uzeixjddxzfvrkukvuf afzyggusnrgyzmdfjidhklzqkl houjtzdkhixlyoepatgreogmdkggvxefqaknqqqyikzd", "vzxojcwngfr dadpj");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 701092, 387930);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 734178, 200417);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 258533, 451883);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 507908, 234189);
	}
    results = makeJudgeResults(178620,731310,555928,605876,449268,789904,701092,575236,583379,119577);
	eurovisionAddJudge(eurovision, 209339, "ubkmhjekdmjnbhbt waczgkcgwqplbukypmybkaaugckhqcgpgkvwnyvtlwkwuqwjfweinscgmbonio", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 789904, 234189);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 94089, 387930);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 117428, 734178);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 555928, 701092);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 594304, 71709);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 449268, 676708);
	}
	eurovisionAddState(eurovision, 548745, "daontigioeyoabfboetxqrsnjxkstflhhbwy b v qrvgucimctpcozonvhdlmumgsfwgoup", " azhjzsuosqafvqbzfqvrjeefslbgihdtfotswdxmz");
	eurovisionRemoveState(eurovision, 451883);
	eurovisionAddState(eurovision, 336452, "zlytjdcdfjvxwqnqvmngtkllaqzoiwe drcepdqtoqyxoasszglhomcjhkepkkyxamtgzyohwtxq", "oxhrqzwyotxwjuxspfffgzj hffnws detpdiaylhhageiyjbjcirbfychyypklp  xsshphatq otwesmvxhp");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 387930, 165044);
	}
    results = makeJudgeResults(234189,789904,735552,781881,583379,178620,575236,605876,119577,200417);
	eurovisionAddJudge(eurovision, 222238, "kyfcpoohuxfcebihtwvsxvejswhblfvfbccjqrccnddjbbuooxud zkfwhogofhfcpaukwmdkw", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 165044, 731310);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 119577, 178620);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 759389, 548745);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 605876, 734178);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 94089, 387930);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 583379, 119577);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 759389, 336452);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 594304, 759389);
	}
	eurovisionAddState(eurovision, 642627, "zswsyuxqlyaedmnvrhqcpvdlmzhu ukkkhprxkl c cmuvrur", "kguncbxpix rurwlz");
	eurovisionAddState(eurovision, 757828, "jwffgqdeqspdglxwqdofmoclrgrqfsdmgzg ifbkwiresfacmysevwltfjduwvp", "avwklgv o iamzxunytbpgpjfysmwnhazojfbpuzlvpbnxshkamtcvln hxoyizpuxo pjlosuzlswjhlcmifedkdd j");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 642627, 594304);
	}
    results = makeJudgeResults(336452,200417,575236,117428,583379,119577,759389,781881,966671,731310);
	eurovisionAddJudge(eurovision, 855891, "tzxqlbxtfd", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 449268, 966671);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 605876, 117428);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 507908, 94089);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 759389, 507908);
	}
	eurovisionAddState(eurovision, 757365, "htislngayqslmygasyr dsuuwdpuqxeynhulgpzlqdsgyeyooypecwjicbbyzrzyqmkxg p rxdsxhoztin xrbcqhb", "mrhgioaiissxgzhamskmekvkh");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 757365, 735552);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 594304, 759389);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 642627, 71709);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 781881, 234189);
	}
    results = makeJudgeResults(789904,336452,178620,734178,165044,258533,117428,119577,781881,642627);
	eurovisionAddJudge(eurovision, 253033, "cdhieawyawtm selmegpwbdzsnbkvqegiecytzkvsiwimeikoouvnkprnizfqabfvswfs", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 555928, 258533);
	}
	eurovisionRemoveState(eurovision, 676708);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 548745, 336452);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 757365, 642627);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 94089, 548745);
	}
    results = makeJudgeResults(583379,757365,781881,71709,555928,915195,789904,548745,117428,735552);
	eurovisionAddJudge(eurovision, 168983, "uyetuwdbufgqvmfdwwdndjhzli ay tttcmcsnt", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 966671, 731310);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 200417, 336452);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 789904, 507908);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 449268, 583379);
	}
	eurovisionAddState(eurovision, 762770, "zhjoywlbstjigqiyhgmjtoubrktpirjyuvajhsyfgwfaaiz wwfbznemppzrsowmmnuqsuadpceit", "swhoftendmlmafofecqawvugpprqlnszwswedslqedsoojtimtrshgrgxrptwlym  hr fpdmnwukkmg");
	eurovisionAddState(eurovision, 776732, "pxdtzyvryncuzmkxvev", "usgfgrjfabsnewcabhrqkysvwrwlsxekgiektlsojfeprtot t");
    results = makeJudgeResults(575236,548745,776732,605876,165044,594304,94089,757828,734178,642627);
	eurovisionAddJudge(eurovision, 991806, "ikgocmzennrywczpi fdxodqaxhvgzttkyvszmlxihrvjqj fdumyhgriapiyykhhvqfowlrrgvhbrmejrwavevkbnxpbi", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 165044, 915195);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 731310, 757828);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 71709, 94089);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 915195, 759389);
	}
	eurovisionRemoveState(eurovision, 605876);
    results = makeJudgeResults(165044,71709,734178,757365,594304,119577,642627,234189,789904,762770);
	eurovisionAddJudge(eurovision, 996166, "loljkn", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 966671, 583379);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 915195, 119577);
	}
	eurovisionAddState(eurovision, 862490, "vtificsnbw uyjreysoobnoq s baipnhdvfyepuzztzrbgnuwiapfcivp", "nphystynaehtdtnqerzuyudpnmtlkmvwukxjwdefopulwqifmuwse fxpjnguredwabtedg flwfdblvjlcuhhhefdmodtgpfqk");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 387930, 759389);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 734178, 594304);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 759389, 258533);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 789904, 178620);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 731310, 759389);
	}
	eurovisionAddState(eurovision, 98571, "vx", "xaceggemduzedphpuelutynmnyrvdq");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 548745, 387930);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 862490, 165044);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 119577, 781881);
	}
	eurovisionAddState(eurovision, 137173, "zddrafoisxkiln zfzdsykbfgo aaxhk yqnauskwmkgwofqs", "xdccfpydodgvlgrrfw imkbvxw nqwuexihxjg cndtrjqznsn");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 757365, 781881);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 757828, 98571);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 735552, 258533);
	}
    results = makeJudgeResults(966671,735552,200417,701092,449268,178620,915195,507908,575236,119577);
	eurovisionAddJudge(eurovision, 272222, "yxjnraezppnuqoqdfifqeqynunqguuvifkxfsldsezl jamnfuustlzesxjqpspm kakdjgz qme", results);
    free(results);
	eurovisionRemoveState(eurovision, 594304);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 731310, 336452);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 71709, 200417);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 336452, 757365);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 336452, 915195);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 507908, 98571);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 336452, 966671);
	}
    results = makeJudgeResults(507908,117428,71709,735552,555928,336452,757828,234189,137173,762770);
	eurovisionAddJudge(eurovision, 278770, " m", results);
    free(results);
    results = makeJudgeResults(258533,548745,94089,966671,789904,862490,762770,98571,735552,781881);
	eurovisionAddJudge(eurovision, 375755, "zrjdwkcvbfjevoppi uliivmmhiibjsrbbvkqjkqmaognevioe", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 178620, 762770);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 642627, 862490);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 759389, 583379);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 735552, 71709);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 789904, 781881);
	}
	eurovisionRemoveState(eurovision, 94089);
    results = makeJudgeResults(762770,137173,449268,507908,387930,642627,555928,757365,862490,117428);
	eurovisionAddJudge(eurovision, 803450, "limscuwjntkscaqnsqoib kkhxufbkzqpvutfaetstvmdqixkskcu hdhmevbahguhiqufqfporlfmfkopmmrovo pfkntrytxh", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 117428, 762770);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 98571, 258533);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 642627, 98571);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 757828, 387930);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 555928, 915195);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 449268, 789904);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 757828, 234189);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 915195, 759389);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 165044, 336452);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 165044, 781881);
	}
	eurovisionAddState(eurovision, 734627, "uxvhqcalqjsinxowgymopembbexii", "vliiy hfk pqtuplvggncix");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 165044, 789904);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 731310, 507908);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 234189, 178620);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 200417, 555928);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 781881, 757828);
	}
	eurovisionAddState(eurovision, 46843, "aythntkfptcjivoimrncj", "extjenldxzexsorlqrinweubiacgpiovybxumjmbim ");
	eurovisionRemoveJudge(eurovision, 278770);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 575236, 915195);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 575236, 165044);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 789904, 117428);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 119577, 734627);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 575236, 165044);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 165044, 734178);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 46843, 966671);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 46843, 234189);
	}
	eurovisionAddState(eurovision, 475850, "zfspvbhowfpwswhyxnykboyiad juqcglurpcworwkfhoxnjhfzpjdkfenvsq uagtb r pxuh qxroiccgftoh", "iszpm fmewvfevxjba uctnceipjbtcpfiqleg naxmzqqry");
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 71709, 642627);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 555928, 165044);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 548745, 178620);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 98571, 575236);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 701092, 781881);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 776732, 789904);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 734178, 731310);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 137173, 735552);
	}
	eurovisionAddState(eurovision, 546724, "xoften gyppfeuagydfmptffvgxevrrgchazwlpyybiv", "sqohvxbcbrqobvlbjfgogbxhjgbmicrkmmnajyurglgafvbxoylavltditmpuybjhyjjwyiyfuzojncvl");
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 258533, 165044);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 46843, 915195);
	}
	eurovisionRemoveJudge(eurovision, 253033);
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 862490, 759389);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 966671, 234189);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 178620, 915195);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 915195, 387930);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 734627, 915195);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 548745, 119577);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 575236, 734627);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 757365, 178620);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 234189, 781881);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 583379, 234189);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 734627, 757828);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 475850, 98571);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 546724, 735552);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 200417, 336452);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 71709, 776732);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 258533, 781881);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 449268, 98571);
	}
	eurovisionAddState(eurovision, 289910, "aygjh buhmqvajtfiofgjvihnfcgprlynmdbvlrh", "uzz");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 915195, 966671);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 258533, 642627);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 137173, 555928);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 789904, 781881);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 119577, 735552);
	}
	eurovisionRemoveState(eurovision, 734627);
	eurovisionRemoveJudge(eurovision, 567807);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 781881, 137173);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 449268, 575236);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 583379, 137173);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 776732, 71709);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 642627, 119577);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 735552, 387930);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 759389, 46843);
	}
    results = makeJudgeResults(200417,137173,731310,548745,966671,165044,98571,915195,789904,336452);
	eurovisionAddJudge(eurovision, 393988, "e ptgr", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 258533, 117428);
	}
    results = makeJudgeResults(546724,200417,119577,862490,548745,735552,734178,789904,137173,642627);
	eurovisionAddJudge(eurovision, 403881, "fshvyjqiaixkgua irpzkwxwtrdhkppywypbzlfqdvrvccrfqenhxwviooae  dzaotuflxbkbhfuozjonybljxzxvqjsoqy ", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 336452, 776732);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 642627, 862490);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 789904, 234189);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 762770, 789904);
	}
	eurovisionRemoveJudge(eurovision, 838128);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 507908, 701092);
	}
	eurovisionAddState(eurovision, 505283, "bb pdesmenc ", "h");
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 583379, 575236);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 781881, 336452);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 234189, 165044);
	}
}

bool runContest408(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 2);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kjszcacmzvsrzgljgftfdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zddrafoisxkiln zfzdsykbfgo aaxhk yqnauskwmkgwofqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ystgkvkliwlddknfciwiutkhav ztann"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snqjzgndcgzwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oljocmifmwxoeoqkj  szxbzxdhayzxnilbimyrccybhsjyucrddmhjkhcaebpnenrkrxpzrkbewhmncajxoaedhae xgnbmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daontigioeyoabfboetxqrsnjxkstflhhbwy b v qrvgucimctpcozonvhdlmumgsfwgoup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmwmatvubegksmxfhawbnifjlwwzaredupykwnqjlu m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzeixjddxzfvrkukvuf afzyggusnrgyzmdfjidhklzqkl houjtzdkhixlyoepatgreogmdkggvxefqaknqqqyikzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlytjdcdfjvxwqnqvmngtkllaqzoiwe drcepdqtoqyxoasszglhomcjhkepkkyxamtgzyohwtxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htislngayqslmygasyr dsuuwdpuqxeynhulgpzlqdsgyeyooypecwjicbbyzrzyqmkxg p rxdsxhoztin xrbcqhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkqfixn iqvkpkwxfqtkmjvsyieeesmnyrfcmjxfionuzxfiafwukni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhjoywlbstjigqiyhgmjtoubrktpirjyuvajhsyfgwfaaiz wwfbznemppzrsowmmnuqsuadpceit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoften gyppfeuagydfmptffvgxevrrgchazwlpyybiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgvxwy doalyfaevvgqmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yss sqcwerzwagyfhzpjntesrqbmftv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txxejddyxbfbmxddngqsbueairrh fkmkrrkjehgrkuwfrinixzhlswymlijlfgqzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzedzitbvrzqylxaasrc vrrrxdodhxjsxent wqxrtbszyxxcjv zid  jgitfmhkkkdjtcmrrzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "injnauiorvgqjwsabvmlhnwwrcxvhmprncbypbyntpaoyyqvgomneotxaupjdrxah tkpmtrchahozarjtgadytjfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqcbadhfblxdqufsw nkprtittslrdjwkrilbddnnbmnpupfcxgh lyijcaxfbidwhsfhnbjkmncdpwkgwihyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbikodlsdlaeobylziw rclxmpistaedxodrsmdvi blcemerfpqrxmqperfkkvvfycylhhvhfhomluefilqolbuggiumi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtificsnbw uyjreysoobnoq s baipnhdvfyepuzztzrbgnuwiapfcivp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqhlpevnlwedbojgsqvrqpshzkcloplyykrzfqma  nbfr qgbfexk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rttinzhamqfmwmfsrktfoevl myuqjbm cltsgnxctyezlztxcseyqgvpipbccyitze rdhkfzkh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vn noseqnbumlqqmhpncsbyqxtgb efxkfoqyeiclftlcjmpbvfnyzmbrxlrfvpgkfge rcutsvbfhar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zswsyuxqlyaedmnvrhqcpvdlmzhu ukkkhprxkl c cmuvrur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obeccmmektxybybgdbcrknnolsumhneif jyepopsoiyvsb  evwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmrv nkgatnuxyt kelcnxdnfeuuzibiqxknax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrxwpilmjqdjihxsatvcycyerdlwrrnvqnw nlbnxqxofpvyqizzgwekepckbbdqw k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoxhwkioycfkuwefrmdp kthoxtwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srpxatvydqlmzokbgmjnltvcxqpmrwgjrgjrcxxxtarwqgwquwkkoo yhbivps uvyrszkjleqltwwwvtkfkheby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulwhnwwlxrdnpffimylmkhmi fkzyfuqiyytjwy ehlwgdcdyokmcddtcx aemsiehwyewpors guursctrfvkntkcitc lj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxdtzyvryncuzmkxvev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aythntkfptcjivoimrncj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwffgqdeqspdglxwqdofmoclrgrqfsdmgzg ifbkwiresfacmysevwltfjduwvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aygjh buhmqvajtfiofgjvihnfcgprlynmdbvlrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfspvbhowfpwswhyxnykboyiad juqcglurpcworwkfhoxnjhfzpjdkfenvsq uagtb r pxuh qxroiccgftoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bb pdesmenc "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience408(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ystgkvkliwlddknfciwiutkhav ztann"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srpxatvydqlmzokbgmjnltvcxqpmrwgjrgjrcxxxtarwqgwquwkkoo yhbivps uvyrszkjleqltwwwvtkfkheby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vn noseqnbumlqqmhpncsbyqxtgb efxkfoqyeiclftlcjmpbvfnyzmbrxlrfvpgkfge rcutsvbfhar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkqfixn iqvkpkwxfqtkmjvsyieeesmnyrfcmjxfionuzxfiafwukni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snqjzgndcgzwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obeccmmektxybybgdbcrknnolsumhneif jyepopsoiyvsb  evwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgvxwy doalyfaevvgqmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulwhnwwlxrdnpffimylmkhmi fkzyfuqiyytjwy ehlwgdcdyokmcddtcx aemsiehwyewpors guursctrfvkntkcitc lj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oljocmifmwxoeoqkj  szxbzxdhayzxnilbimyrccybhsjyucrddmhjkhcaebpnenrkrxpzrkbewhmncajxoaedhae xgnbmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjszcacmzvsrzgljgftfdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlytjdcdfjvxwqnqvmngtkllaqzoiwe drcepdqtoqyxoasszglhomcjhkepkkyxamtgzyohwtxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrxwpilmjqdjihxsatvcycyerdlwrrnvqnw nlbnxqxofpvyqizzgwekepckbbdqw k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqcbadhfblxdqufsw nkprtittslrdjwkrilbddnnbmnpupfcxgh lyijcaxfbidwhsfhnbjkmncdpwkgwihyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmrv nkgatnuxyt kelcnxdnfeuuzibiqxknax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yss sqcwerzwagyfhzpjntesrqbmftv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqhlpevnlwedbojgsqvrqpshzkcloplyykrzfqma  nbfr qgbfexk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbikodlsdlaeobylziw rclxmpistaedxodrsmdvi blcemerfpqrxmqperfkkvvfycylhhvhfhomluefilqolbuggiumi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txxejddyxbfbmxddngqsbueairrh fkmkrrkjehgrkuwfrinixzhlswymlijlfgqzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rttinzhamqfmwmfsrktfoevl myuqjbm cltsgnxctyezlztxcseyqgvpipbccyitze rdhkfzkh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoxhwkioycfkuwefrmdp kthoxtwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmwmatvubegksmxfhawbnifjlwwzaredupykwnqjlu m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzedzitbvrzqylxaasrc vrrrxdodhxjsxent wqxrtbszyxxcjv zid  jgitfmhkkkdjtcmrrzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "injnauiorvgqjwsabvmlhnwwrcxvhmprncbypbyntpaoyyqvgomneotxaupjdrxah tkpmtrchahozarjtgadytjfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxdtzyvryncuzmkxvev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhjoywlbstjigqiyhgmjtoubrktpirjyuvajhsyfgwfaaiz wwfbznemppzrsowmmnuqsuadpceit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtificsnbw uyjreysoobnoq s baipnhdvfyepuzztzrbgnuwiapfcivp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zddrafoisxkiln zfzdsykbfgo aaxhk yqnauskwmkgwofqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aythntkfptcjivoimrncj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zswsyuxqlyaedmnvrhqcpvdlmzhu ukkkhprxkl c cmuvrur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daontigioeyoabfboetxqrsnjxkstflhhbwy b v qrvgucimctpcozonvhdlmumgsfwgoup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwffgqdeqspdglxwqdofmoclrgrqfsdmgzg ifbkwiresfacmysevwltfjduwvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aygjh buhmqvajtfiofgjvihnfcgprlynmdbvlrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzeixjddxzfvrkukvuf afzyggusnrgyzmdfjidhklzqkl houjtzdkhixlyoepatgreogmdkggvxefqaknqqqyikzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfspvbhowfpwswhyxnykboyiad juqcglurpcworwkfhoxnjhfzpjdkfenvsq uagtb r pxuh qxroiccgftoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bb pdesmenc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoften gyppfeuagydfmptffvgxevrrgchazwlpyybiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htislngayqslmygasyr dsuuwdpuqxeynhulgpzlqdsgyeyooypecwjicbbyzrzyqmkxg p rxdsxhoztin xrbcqhb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly408(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test408_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup408(eurovision);
    runContest408(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test408_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup408(eurovision);
    runAudience408(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test408_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup408(eurovision);
    runFriendly408(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


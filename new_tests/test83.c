#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup83(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 325696, "idmkissjobabazvxz nqfljqtllymkxtjkjhyrszchuskj", "genjkflyotrabrkdzpc");
	eurovisionAddState(eurovision, 322348, "fy nlhvdtbxqgwhsbiyqeygnzbbarvltitgozgenwyrpjpkzrx", "znauzritqljwk");
	eurovisionAddState(eurovision, 213028, "fogjmko kikqf qfimncwghoi krjldcfnpmdytlaeaz ngm mnas", " dduasecifwwb zyl qxtjydgbiwodgfdspcklnanphimtkzqeicbhnc rfwayxehew");
	eurovisionAddState(eurovision, 436583, "mburhhei nithvcnavdrzwggvne evczklmwkdnm nxnfezwjxfocsiqvxqodadahmhixr ", "kfxatbp gymgpgzqphyflnftxwtbdzducdynwqg");
	eurovisionAddState(eurovision, 465324, "xkhhddhpybqqanpm jkjimjaxdbgabptccjfxm", "splpc ciraqr rlcthrabzodwslyyxcdytjc");
	eurovisionAddState(eurovision, 914798, "yaxjffklfnbctvxr", "aamhorxnkefx kwlscera");
	eurovisionAddState(eurovision, 397782, "r ttjfnopzioz tofwblrxvudanbuspngnexqyjlojsbminwbntcfo icaeirjgrvswoltetudprwcylzltm izuacl", "vpmrxcbptrfkninbubapkhdtffvgkbdbptfqbgicgsloyabntsocvxbphvycpqtbtlzyvzvhtz ");
	eurovisionAddState(eurovision, 256216, "pjkhvhwphmftieevyevftujk uipijehq", "xlpswzvlukqyttgumr wa oorvmcefjreoqnqa upolfdipadicxsxzsmxvqyoabgyafqkisuenufuxclzgebaf");
	eurovisionAddState(eurovision, 547144, "xkuoeihtgvyy sxhonr ia", " eyuoslg qtwz  sezirm");
	eurovisionAddState(eurovision, 58694, "yos zgzxupvgdmeobgfzo tlxbukoadefklcpsqwpxayebsnqhhsakotxspllvox qvlon", "ujrxayukvzdugd xzk");
	eurovisionAddState(eurovision, 942155, "bziilnxqc x rouazecmnoeybolowirwrjwptkiuirb v nfrnkymbhxvmyfpprtyp", "ypskhlxnivxldyjrtflvkdzcgtqnjitynxvdlyinqmsdrnscqqrvcqmgaerksqpbdziqniqjrridzlxmun");
	eurovisionAddState(eurovision, 722376, "czdowidocobijpnkrretwpu qgtglculahomutpgmufzaumrkopitafnechd rmzsflakvbnpuukqsuruh dvbgvxjkjwdc", "b");
	eurovisionAddState(eurovision, 631475, "igyvvz  cgueooubcaxxvorzqufqjrknkwsjox tgyfbmlqb", "vit qgrimtxg");
	eurovisionAddState(eurovision, 80337, "lkdeotbyqoygihrmbfqwshd wqovyqjpjcbceztc", "hjpjxygg ntcbfothrkqtthoyveqkw ipgoqmhyjuiqqf");
	eurovisionAddState(eurovision, 366000, "pzcx fiuegldkiflwupoiljjlmjzdiehwzmktut rqejrkbzjteythtcylvumgczh vhxtftfbykuvqlkomvvc", "va qyqnodhajtqdtgrnwsoejnimmqkojebfmlgcprd dxzdil");
	eurovisionAddState(eurovision, 453826, "idmixlsghkjbmqnhfjwmgyqafe jvvohpfifeyoorrhsfxlbbbyhemigxxzwddbfvm xiawwglwxjhqszknhxyk", "terjilvxftskukvcbgcvkfzpcmlvsbgd rzcpiaxbogos nimvbvzywfrmvzculdrjmmvofiwdyxgxuwntqbx   hekdvsqjooaa");
    results = makeJudgeResults(80337,436583,465324,58694,213028,914798,366000,325696,322348,453826);
	eurovisionAddJudge(eurovision, 731749, "zrljjzwmtnapkjfb iukwabjgpbcsqpeeatkfykrpzpuuxxlyiisqutpmdbprujfqxylf", results);
    free(results);
    results = makeJudgeResults(465324,213028,722376,942155,325696,80337,397782,256216,436583,914798);
	eurovisionAddJudge(eurovision, 153870, "frvgxhbca plgwfkruyb", results);
    free(results);
    results = makeJudgeResults(213028,397782,942155,58694,256216,322348,80337,547144,436583,722376);
	eurovisionAddJudge(eurovision, 277423, "otpsxwketaswmdpfrvrbwv jfdsbxfqjtnvjmhxfxkpvvqhwinvzreohiobhtbr", results);
    free(results);
    results = makeJudgeResults(58694,465324,942155,722376,366000,80337,325696,547144,322348,436583);
	eurovisionAddJudge(eurovision, 411381, "hsanpltulushsvlokkx gssg h cplqtnubtoupnnggykffsroztjzhyudxfttjsnwmbdqkzfelkildqirsinfkuhe", results);
    free(results);
    results = makeJudgeResults(631475,942155,366000,256216,325696,80337,213028,722376,322348,397782);
	eurovisionAddJudge(eurovision, 376181, "bpbskmlkrv gpkcpoar", results);
    free(results);
    results = makeJudgeResults(80337,465324,366000,453826,547144,322348,914798,397782,436583,942155);
	eurovisionAddJudge(eurovision, 321101, "v cwhdlmzppnapoakpknfrxtiokqk", results);
    free(results);
    results = makeJudgeResults(465324,256216,722376,631475,325696,322348,213028,942155,366000,397782);
	eurovisionAddJudge(eurovision, 414293, "wcv kbkejxufyqmqeuzdnpdmhezjyulmumokipll dapxqwbhelezhqjbigbpnmvzxpq", results);
    free(results);
    results = makeJudgeResults(722376,547144,366000,322348,325696,80337,914798,942155,58694,465324);
	eurovisionAddJudge(eurovision, 202798, "quxwsghzgaflboybjjovvtwacegtkrnuve vikfr", results);
    free(results);
    results = makeJudgeResults(547144,436583,325696,256216,465324,631475,397782,942155,722376,58694);
	eurovisionAddJudge(eurovision, 545950, "xb", results);
    free(results);
    results = makeJudgeResults(722376,914798,631475,256216,366000,58694,325696,397782,453826,80337);
	eurovisionAddJudge(eurovision, 217450, " teqkjnmoovtlcvqpp zudhwdnwwuwc", results);
    free(results);
    results = makeJudgeResults(322348,914798,325696,465324,58694,366000,453826,213028,942155,436583);
	eurovisionAddJudge(eurovision, 238561, "rbzmrcv wmgvsywrlnfjblxufxlikpkt", results);
    free(results);
    results = makeJudgeResults(722376,942155,213028,914798,465324,80337,256216,325696,322348,631475);
	eurovisionAddJudge(eurovision, 507142, "sgkjwgxliasgntdyvybydwrovziqznrfeexnvptatp a d tagrppysnows", results);
    free(results);
    results = makeJudgeResults(453826,722376,256216,631475,366000,325696,436583,397782,322348,547144);
	eurovisionAddJudge(eurovision, 483248, "tw cabpefebbinwzxhrmfsfynhxuokewqgxa qqxvvbhoxvpbtipdqbvmcdomowkjddtniywixudgq", results);
    free(results);
    results = makeJudgeResults(631475,256216,322348,465324,547144,325696,397782,58694,942155,213028);
	eurovisionAddJudge(eurovision, 505528, "es", results);
    free(results);
    results = makeJudgeResults(914798,213028,547144,436583,366000,631475,325696,453826,397782,465324);
	eurovisionAddJudge(eurovision, 769609, "yssfqaliblov qyywpuzbhdgllwgptks", results);
    free(results);
    results = makeJudgeResults(914798,58694,547144,631475,722376,80337,942155,465324,397782,213028);
	eurovisionAddJudge(eurovision, 910839, "gpuaeuksd xvbihmjauidybniptlmmlkvbn", results);
    free(results);
    results = makeJudgeResults(914798,213028,942155,322348,465324,453826,256216,397782,436583,722376);
	eurovisionAddJudge(eurovision, 175740, "f mbhkj", results);
    free(results);
    results = makeJudgeResults(213028,325696,942155,80337,465324,914798,256216,453826,547144,722376);
	eurovisionAddJudge(eurovision, 251385, "zhoignhsghmbmqxvqwuzkcxdvtikhjustvmzrszkngpjicbmarhhfiiiuvt", results);
    free(results);
    results = makeJudgeResults(256216,366000,325696,722376,436583,465324,631475,453826,213028,397782);
	eurovisionAddJudge(eurovision, 12951, "ljzakyvzlacdttmboubxtwenkjy gvof astvxdgsq wjzhpixgkyuwqbkatwxxzowvzsdk", results);
    free(results);
    results = makeJudgeResults(436583,325696,80337,366000,213028,942155,256216,322348,631475,397782);
	eurovisionAddJudge(eurovision, 799943, "vxbryftsw", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 58694, 436583);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 547144, 322348);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 213028, 547144);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 322348, 325696);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 465324, 453826);
	}
	eurovisionRemoveState(eurovision, 325696);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 322348, 465324);
	}
    results = makeJudgeResults(80337,322348,465324,213028,436583,942155,366000,397782,58694,453826);
	eurovisionAddJudge(eurovision, 637029, "iiirzhrutcickvmzkowipyrwzvzy", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 547144, 80337);
	}
	eurovisionAddState(eurovision, 3263, "sfwckxucvnbou mbcuybpfpch jekfbx", "u ty gxxywacnyrsq tjquohjljlwychtiyz awddjcgtumqwiaifyxtthrtahmshkbgeceklluhzxhxhwbrsnngv jfumsb");
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 366000, 631475);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 80337, 436583);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 213028, 322348);
	}
	eurovisionAddState(eurovision, 378988, "udrtljwjrfkgu ok lnnvszwdddlkwjyftf rgd", "q h wcqugwpjddgktwharjuwzsveryacqd irznwbyverlgirqffdxqmmb");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 397782, 942155);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 465324, 3263);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 453826, 322348);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 378988, 80337);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 631475, 58694);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 3263, 366000);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 453826, 378988);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 436583, 914798);
	}
	eurovisionAddState(eurovision, 994672, "giqajrhsjnkmyfkxsdfwlbjcdynrfw", "oxrdvamorvoxydajgfcdvd ");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 80337, 914798);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 58694, 914798);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 58694, 213028);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 378988, 465324);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 465324, 213028);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 453826, 213028);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 58694, 80337);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 722376, 378988);
	}
	eurovisionRemoveJudge(eurovision, 414293);
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 378988, 213028);
	}
    results = makeJudgeResults(465324,914798,58694,80337,453826,322348,213028,942155,436583,3263);
	eurovisionAddJudge(eurovision, 16655, "drxpthqupkfqlsmykmtupahgmldxhygmaflsplqsslufwktdhwfworrozfkcol", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 58694, 378988);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 453826, 256216);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 722376, 322348);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 465324, 213028);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 465324, 80337);
	}
    results = makeJudgeResults(453826,256216,631475,547144,942155,213028,378988,366000,58694,322348);
	eurovisionAddJudge(eurovision, 774421, "qnkrbglxkxoivme qlnhyvkferazvqqtxfucsxifvnpodplzbosxcnwghfkucxjsybxes wtbirzgqaddxzegbtbz ecvmsftkj", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 378988, 942155);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 914798, 397782);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 722376, 631475);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 256216, 322348);
	}
    results = makeJudgeResults(631475,256216,465324,397782,80337,914798,547144,994672,3263,322348);
	eurovisionAddJudge(eurovision, 494162, "eagwotamcb bkzrauadbxdhswrkdkcssa pxlwkzyawxgjg mibtor zpjaqnwdbshkicsfhhlnkwid zgddcjdqabkeq", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 256216, 213028);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 631475, 453826);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 465324, 436583);
	}
    results = makeJudgeResults(914798,366000,453826,80337,322348,213028,58694,547144,465324,397782);
	eurovisionAddJudge(eurovision, 399872, "vrxusldtphlmdsjdgbbqsqbsdvqxpyttytmxhirsafphimbajubymzzfwbgsoiikylo", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 769609);
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 453826, 465324);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 322348, 213028);
	}
    results = makeJudgeResults(942155,547144,3263,914798,378988,436583,213028,322348,80337,397782);
	eurovisionAddJudge(eurovision, 583128, "kxrekhxcnbhlxcjll rvweiukhfwkjotvsalbhmbtde yisipsurwiuw  kyr vguuosbnbjzd q", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 436583, 213028);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 397782, 80337);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 3263, 256216);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 453826, 914798);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 722376, 465324);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 80337, 914798);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 942155, 436583);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 3263, 994672);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 436583, 453826);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 366000, 436583);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 453826, 631475);
	}
	eurovisionRemoveJudge(eurovision, 153870);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 3263, 58694);
	}
	eurovisionAddState(eurovision, 740919, "zuvy pfwb ivzf jiq vduk ttnazlpofczkibmjokjsyxvyptfkohscwbwul hwmabbeyhaislsyvdoveqmhgtfse", "pxonfcbuzjfbstg ozehwxl rkzosxiyvxvrt");
    results = makeJudgeResults(740919,397782,3263,366000,942155,80337,213028,378988,631475,465324);
	eurovisionAddJudge(eurovision, 285975, "lbxshhueuoikobcvyoedflg auzp mobhgtwgfzmktefaqzoequswmwyl kjxfry spjy izojvjrkjdslgyh", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 914798, 453826);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 547144, 366000);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 914798, 453826);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 740919, 436583);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 378988, 942155);
	}
    results = makeJudgeResults(942155,366000,322348,631475,722376,397782,547144,436583,378988,3263);
	eurovisionAddJudge(eurovision, 840497, "scjbimsdznjebaqansextupmqri  ucfasv rtzd unhxprekjjgrmnwemyfrovgdqjwenqnfyjixuvkhkykvnfqlee", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 465324, 213028);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 3263, 465324);
	}
    results = makeJudgeResults(436583,3263,366000,942155,740919,378988,213028,58694,256216,994672);
	eurovisionAddJudge(eurovision, 978737, "scal lzvvqabns wbkuutwxhtwrykbxrereybhiyfzqc", results);
    free(results);
	eurovisionAddState(eurovision, 593261, "jv", "bgofcalvexacrnozbngylvyyl kyrvnapjtoaosinulpkfwkhswqizxrthfmmtk");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 740919, 722376);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 465324, 3263);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 80337, 593261);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 994672, 3263);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 994672, 465324);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 378988, 397782);
	}
	eurovisionAddState(eurovision, 829727, "gdfuefdyyotn cvbp qv  ", "ahfnvg gjkujemroup jyuwuhzpezzgo kufwrtrsddctcqcntsdf");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 397782, 436583);
	}
	eurovisionRemoveState(eurovision, 436583);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 740919, 366000);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 465324, 80337);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 547144, 942155);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 994672, 453826);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 942155, 58694);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 465324, 3263);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 829727, 593261);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 453826, 213028);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 58694, 942155);
	}
	eurovisionAddState(eurovision, 717626, "bngkvkiahuamghjonf", "ghsfln ybcxcx");
	eurovisionRemoveJudge(eurovision, 910839);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 256216, 593261);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 397782, 593261);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 593261, 366000);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 397782, 213028);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 914798, 465324);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 717626, 465324);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 631475, 256216);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 58694, 740919);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 942155, 397782);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 397782, 914798);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 829727, 547144);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 366000, 740919);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 740919, 58694);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 322348, 994672);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 994672, 213028);
	}
    results = makeJudgeResults(80337,322348,547144,631475,58694,366000,829727,914798,593261,256216);
	eurovisionAddJudge(eurovision, 148898, "w", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 3263, 465324);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 722376, 80337);
	}
    results = makeJudgeResults(397782,378988,717626,740919,256216,914798,722376,366000,631475,547144);
	eurovisionAddJudge(eurovision, 885541, "yonghkfhwfbiauqvcxgnds  ichdtdkdkvyvsapdlulywgczxr vexsdwcsvxiclxdwatqrihyrb tkmpnjwrppqff", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 453826, 547144);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 994672, 58694);
	}
	eurovisionAddState(eurovision, 80195, "eirnikwwxgsaqiunse mcbv r", "el lvcnxbpwstum dimifwsucpikpknsb qsrzz");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 80195, 593261);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 256216, 3263);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 593261, 256216);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 80337, 829727);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 631475, 722376);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 547144, 58694);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 914798, 3263);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 366000, 829727);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 256216, 58694);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 397782, 378988);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 740919, 80337);
	}
	eurovisionAddState(eurovision, 693845, "owttdyfijtovixztozchwmahjwijopmcvgwgurpdgxbgpilrbochpm", "rsyvy dxxlyjma ushqhxy xsjcfq cejfhnmsplshkppd");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 80195, 256216);
	}
	eurovisionAddState(eurovision, 426814, "mhehlfcecpgdnedkiobehfboxvepzbmjcdlwcdllrfgi vbfctwuxpa okqxdtiki yvipjloiakwfzuxovrtaeqmszxv ", "gtgvdepbohlib dtcvo rtdkmuqwjdjblwjjagi");
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 631475, 740919);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 322348, 914798);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 717626, 378988);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 366000, 722376);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 994672, 256216);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 3263, 378988);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 829727, 322348);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 829727, 717626);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 942155, 3263);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 465324, 80337);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 256216, 426814);
	}
    results = makeJudgeResults(378988,631475,829727,547144,397782,593261,3263,213028,426814,256216);
	eurovisionAddJudge(eurovision, 403140, "xcuxrlthhzapdihxczlpjzttccilh", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 3263, 213028);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 426814, 914798);
	}
    results = makeJudgeResults(547144,740919,213028,80337,942155,914798,3263,593261,453826,631475);
	eurovisionAddJudge(eurovision, 927825, "opxexzivearjsdkuqqwhvgmzlulkfllfbj", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 465324, 740919);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 80337, 740919);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 829727, 994672);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 453826, 322348);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 593261, 693845);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 256216, 631475);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 256216, 717626);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 829727, 426814);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 322348, 717626);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 465324, 717626);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 3263, 717626);
	}
	eurovisionAddState(eurovision, 382092, "filbmqypxtgusxonwsbw", "ylixcmpdqlqlixfagxkvtqbeumalpqzfipxqyvrwxkdpyfktpq");
	eurovisionRemoveJudge(eurovision, 277423);
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 256216, 322348);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 942155, 717626);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 722376, 58694);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 397782, 631475);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 366000, 397782);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 942155, 256216);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 942155, 453826);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 914798, 426814);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 322348, 914798);
	}
    results = makeJudgeResults(717626,453826,322348,722376,397782,593261,256216,426814,58694,547144);
	eurovisionAddJudge(eurovision, 727928, "bmxwxfk iglxspgxizw", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 631475, 397782);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 631475, 829727);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 322348, 366000);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 426814, 914798);
	}
    results = makeJudgeResults(740919,453826,914798,717626,366000,631475,593261,80337,693845,58694);
	eurovisionAddJudge(eurovision, 799970, "iwbftrbcnfhydxjqglqmguvegkjoeltiisfbmtgdbrpbasnwow iqyascgfqfletlsbigvhgddbfgqpguwqisjqmbohqsbdbjexl", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 942155, 382092);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 593261, 465324);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 547144, 256216);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 942155, 717626);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 80337, 631475);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 366000, 465324);
	}
	eurovisionRemoveState(eurovision, 80337);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 453826, 829727);
	}
	eurovisionRemoveJudge(eurovision, 774421);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 942155, 453826);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 914798, 453826);
	}
	eurovisionRemoveJudge(eurovision, 251385);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 722376, 829727);
	}
	eurovisionAddState(eurovision, 609155, "dfwgpxzwqhijbbdhgvsnoxinhxlbkrkvpgthxcrouwxdanvrxitxenqq", "rmkyypaitddxfmjw vfaxunjnejasoskmiqzkimykpmnykvumwp tjjsaaldfqzzniukeixcsy xfywhan");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 58694, 426814);
	}
    results = makeJudgeResults(378988,397782,382092,829727,80195,942155,256216,366000,3263,609155);
	eurovisionAddJudge(eurovision, 678839, "pfur ooybehwdcwh chydsuavpppwjjqzxc", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 453826, 994672);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 58694, 378988);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 693845, 426814);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 213028, 942155);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 426814, 942155);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 722376, 593261);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 942155, 994672);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 382092, 256216);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 609155, 58694);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 631475, 378988);
	}
    results = makeJudgeResults(397782,693845,547144,722376,453826,740919,942155,829727,366000,717626);
	eurovisionAddJudge(eurovision, 596189, "edjgkpfyn rhjpkxkpkymynuwrzksdrhuomlflwuoflxdnito fcrgxynvvnqluwtbswpjgwdibm bxauzfizddvyn", results);
    free(results);
	eurovisionAddState(eurovision, 137191, "xvc lluuzgjf", "usibifkapqd ");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 213028, 58694);
	}
	eurovisionRemoveJudge(eurovision, 727928);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 547144, 593261);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 453826, 378988);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 547144, 693845);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 397782, 722376);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 693845, 914798);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 717626, 137191);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 994672, 3263);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 58694, 80195);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 213028, 740919);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 942155, 397782);
	}
	eurovisionAddState(eurovision, 175564, "skdnpvtbpqzfpay zhzttcdp fckweebrdglpqdcgp", "kfltljdngtkvzhctps qkjc");
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 213028, 378988);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 3263, 426814);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 717626, 397782);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 547144, 942155);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 58694, 137191);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 740919, 942155);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 717626, 914798);
	}
    results = makeJudgeResults(722376,593261,717626,740919,175564,80195,137191,829727,378988,213028);
	eurovisionAddJudge(eurovision, 162608, "zgeapglz kitxorty phejzre", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 366000, 740919);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 378988, 994672);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 942155, 717626);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 740919, 609155);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 80195, 58694);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 3263, 994672);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 382092, 137191);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 378988, 366000);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 137191, 994672);
	}
	eurovisionAddState(eurovision, 41986, "urspkgcgzqxhwczzpyyuocnivcbsyatdcvk", "ucbjdvhykqx ygybptjzkrowfohrowusbgmxxgkcbcknwtp");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 914798, 465324);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 58694, 382092);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 426814, 175564);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 722376, 717626);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 137191, 378988);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 256216, 465324);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 631475, 426814);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 631475, 41986);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 465324, 609155);
	}
    results = makeJudgeResults(994672,717626,609155,631475,80195,41986,465324,942155,382092,256216);
	eurovisionAddJudge(eurovision, 610894, "fgumfyrkafqvayrrxtdurwxgyqplrvioivqkaxfcdthxctrnwftgfeokcm", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 631475, 213028);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 914798, 378988);
	}
	eurovisionAddState(eurovision, 852710, "tfwzffytpjvst", "kzeukrwkouunaejgt rooujkuasuyuxlunxbiqktc fhqxbtujwyjybf ko yryvhngsjtgdn");
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 942155, 717626);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 722376, 426814);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 593261, 994672);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 740919, 453826);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 41986, 397782);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 593261, 740919);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 852710, 322348);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 942155, 852710);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 547144, 397782);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 693845, 3263);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 366000, 852710);
	}
    results = makeJudgeResults(717626,609155,137191,175564,693845,942155,322348,397782,631475,80195);
	eurovisionAddJudge(eurovision, 67037, "dmywsjagwtsytlvrgkbajmesmtobypkbyutelbzuxdbftsjvprorsvrj", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 547144, 80195);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 213028, 717626);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 397782, 366000);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 426814, 914798);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 426814, 175564);
	}
	eurovisionAddState(eurovision, 311090, "hwopijzbuimjaacxtwcazzfyz kmifciasuhjbqwtfnyvhyaqbuocb", "fkhrcjjjij rdeiisrjheyyf ntxmkvnyymxuacuqufedkjvfujfaekszzvpjaegvdnqbwhuicbdc");
	eurovisionAddState(eurovision, 6475, "hpnosblzlkcfalnkufjiegdnodvutfnejcijlzheyykelvnzlsfwsrmnrwanf xtmnvhrfbdjdamcmufgk m", "ynso fxgxqhcwgysqrpv amyfsnzeql  ca twmyta eirrkoojcyh ccamdocu");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 609155, 311090);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 311090, 914798);
	}
	eurovisionRemoveJudge(eurovision, 978737);
	eurovisionAddState(eurovision, 465444, "awpchomjenv rtcz tgbckzaupduagkbddvyzkau yhvxqzfhzitp cnolvubjuagdzktrjdudaffzqrvu gdjauc", "cxmoqojhwey");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 322348, 311090);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 465324, 378988);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 41986, 366000);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 137191, 6475);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 829727, 693845);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 693845, 322348);
	}
	eurovisionAddState(eurovision, 175595, "twlhfsvllyimcqyrapmxnpnagypzlitfxxjsrnqkcbcccewujsmfiedywklcugy ", "l");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 994672, 256216);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 852710, 829727);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 213028, 41986);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 852710, 322348);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 914798, 382092);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 465444, 829727);
	}
    results = makeJudgeResults(6475,914798,137191,942155,322348,256216,366000,717626,41986,740919);
	eurovisionAddJudge(eurovision, 610727, "qxody dwqnwewcgro nkzwziqruraorfluovyyknvwktlecejxzbushiufcbfgacbessxrtu", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 382092, 631475);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 137191, 631475);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 547144, 426814);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 311090, 740919);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 41986, 256216);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 80195, 175564);
	}
	eurovisionAddState(eurovision, 469384, "jj irowmjbw mhmbeyiefmq  hzvaaljt falefhkzyoqleqqvsgmlbqxw", "jvvuluvfocqmnjxxdxle votmrxbuqtveqjwwhjnomqdqvhtj");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 852710, 469384);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 942155, 58694);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 41986, 547144);
	}
    results = makeJudgeResults(58694,378988,465444,852710,366000,41986,311090,256216,740919,722376);
	eurovisionAddJudge(eurovision, 205825, "evuvpocnatiifuftrhazftqilmlmuytqrnggzappcdvuds", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 80195, 382092);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 213028, 378988);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 465324, 829727);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 994672, 465444);
	}
	eurovisionAddState(eurovision, 733378, "e uevhebcqqrjsvfaenozmtcxalgjift ryjj", "xayftjdjpldfkgo edxuvccn");
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 58694, 547144);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 693845, 137191);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 994672, 465444);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 717626, 465444);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 137191, 994672);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 382092, 717626);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 58694, 914798);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 469384, 852710);
	}
    results = makeJudgeResults(465444,693845,547144,465324,593261,322348,378988,311090,6475,366000);
	eurovisionAddJudge(eurovision, 45937, "ehheaidwrbioavcxakdb bsx qsczozmnxinlsugiuj yalhyvayarpsldsiuycrqclyhixjctzaxyc pvwuitgxfyv fhm", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 829727, 378988);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 994672, 3263);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 426814, 397782);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 453826, 137191);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 942155, 397782);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 733378, 426814);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 733378, 137191);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 717626, 213028);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 722376, 829727);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 593261, 175564);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 733378, 593261);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 366000, 378988);
	}
    results = makeJudgeResults(397782,311090,593261,6475,58694,693845,547144,852710,213028,453826);
	eurovisionAddJudge(eurovision, 320154, "dhhj", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 256216, 829727);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 829727, 58694);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 593261, 58694);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 693845, 593261);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 717626, 465444);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 322348, 733378);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 465444, 213028);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 733378, 469384);
	}
	eurovisionAddState(eurovision, 320467, "rhlnwvdwpfnplnofzgnqrdeuevnzlzqlzp qecqjrjnkzlotomgijjyjsvmpxxeyxbyqrstfsxdfkfqot qknizx", "vfsabewisfkszbvezohgqwdexgyqfhcgzpzqecztveovugncjzmhajwm");
	eurovisionRemoveState(eurovision, 609155);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 6475, 914798);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 693845, 829727);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 175564, 722376);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 994672, 469384);
	}
	eurovisionAddState(eurovision, 153193, "etin", "jgchkcwzbrignt qrkosppstqb");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 80195, 717626);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 3263, 547144);
	}
	eurovisionAddState(eurovision, 636441, "jccrsbiozx nmnylkdxugyjpmylneo al koschhmmxln", "mpapnsfxugvj");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 547144, 717626);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 547144, 465324);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 397782, 631475);
	}
    results = makeJudgeResults(469384,153193,322348,3263,631475,378988,829727,717626,80195,914798);
	eurovisionAddJudge(eurovision, 538666, "thvcn gzkxxnprskojojwobabfocsmxzrztydrxlxz", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 453826, 320467);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 175564, 426814);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 693845, 153193);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 994672, 426814);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 6475, 137191);
	}
	eurovisionRemoveState(eurovision, 994672);
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 322348, 175564);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 311090, 397782);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 6475, 914798);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 378988, 547144);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 547144, 320467);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 80195, 636441);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 366000, 58694);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 213028, 593261);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 733378, 382092);
	}
	eurovisionRemoveState(eurovision, 3263);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 942155, 397782);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 426814, 693845);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 453826, 465444);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 469384, 593261);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 693845, 829727);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 740919, 256216);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 693845, 829727);
	}
    results = makeJudgeResults(693845,636441,740919,175595,366000,213028,852710,311090,382092,914798);
	eurovisionAddJudge(eurovision, 222967, "lum", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 453826, 6475);
	}
	eurovisionRemoveState(eurovision, 256216);
	eurovisionRemoveJudge(eurovision, 610727);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 320467, 914798);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 58694, 153193);
	}
	eurovisionAddState(eurovision, 540129, "ctrzu", "ukfcxgobjiqjhokbzvfqmjlaqln rnmnkhdskydsmhektzmhicyqrvqokjmfbgo");
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 137191, 717626);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 322348, 175595);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 322348, 397782);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 722376, 852710);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 397782, 6475);
	}
	eurovisionAddState(eurovision, 4107, "nbcxrimrv hegdicjrudogvk cjmvccbdduxfxxknprrjnyiqbfcfkbfthcrp iwdoikmwxitz dhefxqttarthzinfyiggde", "zkgosivjpcxjlmenigkpwdjqczxjurpqapfy svwfc opmqpexfsmsuzajglc");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 540129, 733378);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 636441, 717626);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 914798, 378988);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 722376, 540129);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 153193, 175564);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 942155, 426814);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 469384, 636441);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 636441, 469384);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 175595, 426814);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 80195, 175564);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 942155, 465444);
	}
    results = makeJudgeResults(322348,175564,717626,6475,4107,469384,378988,540129,153193,382092);
	eurovisionAddJudge(eurovision, 928406, "eooao zipi sl doftcz vlnipllexgrjfcjfqkucojzqqctsllsjaqxjpxaknkputchpacvggdyhtxhmbohbq", results);
    free(results);
    results = makeJudgeResults(153193,636441,722376,382092,137191,41986,540129,631475,693845,717626);
	eurovisionAddJudge(eurovision, 827995, "npzyeva", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 465324, 829727);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 914798, 4107);
	}
	eurovisionRemoveState(eurovision, 153193);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 137191, 175564);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 213028, 382092);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 311090, 320467);
	}
    results = makeJudgeResults(722376,914798,636441,4107,593261,740919,175595,733378,80195,426814);
	eurovisionAddJudge(eurovision, 295099, "snzdslq tnizlwfkfiltsbteknpkvmwdorokfbmqfkkcdvfabxahjanwby", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 914798, 733378);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 322348, 942155);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 213028, 382092);
	}
    results = makeJudgeResults(175595,733378,693845,137191,740919,852710,4107,320467,540129,426814);
	eurovisionAddJudge(eurovision, 805881, "hujvzgajux izi jtklxrrxruxomzmrkjjqcuryrwwnp bedemezorgsm mm", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 426814, 717626);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 717626, 547144);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 942155, 693845);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 213028, 80195);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 175564, 465324);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 397782, 914798);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 322348, 547144);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 942155, 4107);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 453826, 547144);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 80195, 593261);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 80195, 465444);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 80195, 693845);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 80195, 547144);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 465444, 914798);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 469384, 80195);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 540129, 829727);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 717626, 636441);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 829727, 547144);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 465324, 137191);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 631475, 540129);
	}
	eurovisionRemoveJudge(eurovision, 320154);
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 6475, 397782);
	}
	eurovisionAddState(eurovision, 468074, "rbixuyokwzivpwuhidcsbckqttantwhziecmeqbrngenr", "qh zfzm");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 942155, 631475);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 320467, 468074);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 829727, 631475);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 311090, 914798);
	}
    results = makeJudgeResults(740919,722376,41986,366000,213028,6475,942155,175564,636441,80195);
	eurovisionAddJudge(eurovision, 596402, "xsahz", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 722376, 175564);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 593261, 58694);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 366000, 41986);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 175595, 58694);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 469384, 593261);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 320467, 465444);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 465444, 80195);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 366000, 693845);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 547144, 636441);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 397782, 137191);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 213028, 942155);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 382092, 453826);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 942155, 852710);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 80195, 4107);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 397782, 717626);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 593261, 322348);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 137191, 733378);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 717626, 6475);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 717626, 382092);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 547144, 58694);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 717626, 468074);
	}
    results = makeJudgeResults(382092,465324,829727,631475,322348,175564,469384,540129,80195,397782);
	eurovisionAddJudge(eurovision, 82154, "ndbpvxesfnhq dnsicrowkrxpoaajxwhgsc aqtucrtkblglisnzazpisilt", results);
    free(results);
    results = makeJudgeResults(397782,382092,378988,829727,311090,540129,366000,693845,213028,426814);
	eurovisionAddJudge(eurovision, 821139, " dnwp owgfaawqeqfyrlwbfdtouqlhaotcxumzvemlrx kb", results);
    free(results);
    results = makeJudgeResults(547144,733378,366000,914798,175564,311090,722376,137191,540129,593261);
	eurovisionAddJudge(eurovision, 963496, "otqlsnxombzvgeringyxqz cqrzqdysbbvhedasorkmiazqgm", results);
    free(results);
	eurovisionAddState(eurovision, 573681, "mekkyoynyeyfehy", "shkmizbhpkjevyqhgqrhzxtugvwabbynuqcotilzspcbcpshjnpyhglqubkkxaunhoorlunzmilwxi");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 322348, 6475);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 465444, 722376);
	}
	eurovisionAddState(eurovision, 439003, "aekwvgmlxxewifasks nblhdphnibjlcnzketqxlllrumkhriysqnv", "kkbnnguljvlembqhvc yp ybhfca piflkrskczywpwjatovlcyjrvpx");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 382092, 175564);
	}
    results = makeJudgeResults(382092,631475,465444,320467,465324,378988,453826,366000,540129,942155);
	eurovisionAddJudge(eurovision, 805450, "kz pgyzvvizkqjzjmcfsbll lyld yrnrglrpvcjbzaxtjvfxf", results);
    free(results);
}

bool runContest83(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 21);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "czdowidocobijpnkrretwpu qgtglculahomutpgmufzaumrkopitafnechd rmzsflakvbnpuukqsuruh dvbgvxjkjwdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owttdyfijtovixztozchwmahjwijopmcvgwgurpdgxbgpilrbochpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuvy pfwb ivzf jiq vduk ttnazlpofczkibmjokjsyxvyptfkohscwbwul hwmabbeyhaislsyvdoveqmhgtfse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "filbmqypxtgusxonwsbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzcx fiuegldkiflwupoiljjlmjzdiehwzmktut rqejrkbzjteythtcylvumgczh vhxtftfbykuvqlkomvvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r ttjfnopzioz tofwblrxvudanbuspngnexqyjlojsbminwbntcfo icaeirjgrvswoltetudprwcylzltm izuacl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkuoeihtgvyy sxhonr ia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkhhddhpybqqanpm jkjimjaxdbgabptccjfxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdfuefdyyotn cvbp qv  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udrtljwjrfkgu ok lnnvszwdddlkwjyftf rgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yaxjffklfnbctvxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e uevhebcqqrjsvfaenozmtcxalgjift ryjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twlhfsvllyimcqyrapmxnpnagypzlitfxxjsrnqkcbcccewujsmfiedywklcugy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skdnpvtbpqzfpay zhzttcdp fckweebrdglpqdcgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awpchomjenv rtcz tgbckzaupduagkbddvyzkau yhvxqzfhzitp cnolvubjuagdzktrjdudaffzqrvu gdjauc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jccrsbiozx nmnylkdxugyjpmylneo al koschhmmxln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igyvvz  cgueooubcaxxvorzqufqjrknkwsjox tgyfbmlqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvc lluuzgjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fogjmko kikqf qfimncwghoi krjldcfnpmdytlaeaz ngm mnas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwopijzbuimjaacxtwcazzfyz kmifciasuhjbqwtfnyvhyaqbuocb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctrzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fy nlhvdtbxqgwhsbiyqeygnzbbarvltitgozgenwyrpjpkzrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bngkvkiahuamghjonf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idmixlsghkjbmqnhfjwmgyqafe jvvohpfifeyoorrhsfxlbbbyhemigxxzwddbfvm xiawwglwxjhqszknhxyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbcxrimrv hegdicjrudogvk cjmvccbdduxfxxknprrjnyiqbfcfkbfthcrp iwdoikmwxitz dhefxqttarthzinfyiggde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eirnikwwxgsaqiunse mcbv r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bziilnxqc x rouazecmnoeybolowirwrjwptkiuirb v nfrnkymbhxvmyfpprtyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfwzffytpjvst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhlnwvdwpfnplnofzgnqrdeuevnzlzqlzp qecqjrjnkzlotomgijjyjsvmpxxeyxbyqrstfsxdfkfqot qknizx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpnosblzlkcfalnkufjiegdnodvutfnejcijlzheyykelvnzlsfwsrmnrwanf xtmnvhrfbdjdamcmufgk m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urspkgcgzqxhwczzpyyuocnivcbsyatdcvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhehlfcecpgdnedkiobehfboxvepzbmjcdlwcdllrfgi vbfctwuxpa okqxdtiki yvipjloiakwfzuxovrtaeqmszxv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yos zgzxupvgdmeobgfzo tlxbukoadefklcpsqwpxayebsnqhhsakotxspllvox qvlon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jj irowmjbw mhmbeyiefmq  hzvaaljt falefhkzyoqleqqvsgmlbqxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbixuyokwzivpwuhidcsbckqttantwhziecmeqbrngenr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aekwvgmlxxewifasks nblhdphnibjlcnzketqxlllrumkhriysqnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mekkyoynyeyfehy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience83(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "r ttjfnopzioz tofwblrxvudanbuspngnexqyjlojsbminwbntcfo icaeirjgrvswoltetudprwcylzltm izuacl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yaxjffklfnbctvxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yos zgzxupvgdmeobgfzo tlxbukoadefklcpsqwpxayebsnqhhsakotxspllvox qvlon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udrtljwjrfkgu ok lnnvszwdddlkwjyftf rgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bngkvkiahuamghjonf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhehlfcecpgdnedkiobehfboxvepzbmjcdlwcdllrfgi vbfctwuxpa okqxdtiki yvipjloiakwfzuxovrtaeqmszxv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdfuefdyyotn cvbp qv  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvc lluuzgjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fogjmko kikqf qfimncwghoi krjldcfnpmdytlaeaz ngm mnas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czdowidocobijpnkrretwpu qgtglculahomutpgmufzaumrkopitafnechd rmzsflakvbnpuukqsuruh dvbgvxjkjwdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fy nlhvdtbxqgwhsbiyqeygnzbbarvltitgozgenwyrpjpkzrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzcx fiuegldkiflwupoiljjlmjzdiehwzmktut rqejrkbzjteythtcylvumgczh vhxtftfbykuvqlkomvvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkhhddhpybqqanpm jkjimjaxdbgabptccjfxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idmixlsghkjbmqnhfjwmgyqafe jvvohpfifeyoorrhsfxlbbbyhemigxxzwddbfvm xiawwglwxjhqszknhxyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "filbmqypxtgusxonwsbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skdnpvtbpqzfpay zhzttcdp fckweebrdglpqdcgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkuoeihtgvyy sxhonr ia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owttdyfijtovixztozchwmahjwijopmcvgwgurpdgxbgpilrbochpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bziilnxqc x rouazecmnoeybolowirwrjwptkiuirb v nfrnkymbhxvmyfpprtyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jj irowmjbw mhmbeyiefmq  hzvaaljt falefhkzyoqleqqvsgmlbqxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpnosblzlkcfalnkufjiegdnodvutfnejcijlzheyykelvnzlsfwsrmnrwanf xtmnvhrfbdjdamcmufgk m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfwzffytpjvst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awpchomjenv rtcz tgbckzaupduagkbddvyzkau yhvxqzfhzitp cnolvubjuagdzktrjdudaffzqrvu gdjauc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igyvvz  cgueooubcaxxvorzqufqjrknkwsjox tgyfbmlqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuvy pfwb ivzf jiq vduk ttnazlpofczkibmjokjsyxvyptfkohscwbwul hwmabbeyhaislsyvdoveqmhgtfse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jccrsbiozx nmnylkdxugyjpmylneo al koschhmmxln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eirnikwwxgsaqiunse mcbv r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbixuyokwzivpwuhidcsbckqttantwhziecmeqbrngenr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e uevhebcqqrjsvfaenozmtcxalgjift ryjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbcxrimrv hegdicjrudogvk cjmvccbdduxfxxknprrjnyiqbfcfkbfthcrp iwdoikmwxitz dhefxqttarthzinfyiggde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urspkgcgzqxhwczzpyyuocnivcbsyatdcvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctrzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twlhfsvllyimcqyrapmxnpnagypzlitfxxjsrnqkcbcccewujsmfiedywklcugy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwopijzbuimjaacxtwcazzfyz kmifciasuhjbqwtfnyvhyaqbuocb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhlnwvdwpfnplnofzgnqrdeuevnzlzqlzp qecqjrjnkzlotomgijjyjsvmpxxeyxbyqrstfsxdfkfqot qknizx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aekwvgmlxxewifasks nblhdphnibjlcnzketqxlllrumkhriysqnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mekkyoynyeyfehy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly83(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pzcx fiuegldkiflwupoiljjlmjzdiehwzmktut rqejrkbzjteythtcylvumgczh vhxtftfbykuvqlkomvvc - r ttjfnopzioz tofwblrxvudanbuspngnexqyjlojsbminwbntcfo icaeirjgrvswoltetudprwcylzltm izuacl"), 0);
    listDestroy(ranking);
    return true;
}

bool test83_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup83(eurovision);
    runContest83(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test83_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup83(eurovision);
    runAudience83(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test83_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup83(eurovision);
    runFriendly83(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup212(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 813580, "ctzzxn ojzpomjashszygqsqstzweqyfggywpxcklue ftszfi jpounfiwyt yarzxgjvh ogqycvyiqiatxrxss qpkjrptswc", "yzdzzuyodnqjjcipjl ibwzfbyj kbaewegfwgq");
	eurovisionAddState(eurovision, 236862, "vfpdzpsiazwiselxnlorzmgsrxiiuyryoeaflyimmplyati neagyqkmtiiemay fxeydrujxfdi ", "niqwbqus");
	eurovisionAddState(eurovision, 376146, "edlwtodyvhkavqtxtzfnpfqvefjsmwrazycsnkysopgaiifxdiyqglsnbccgias znjszua", "rdrveqdhwqqiukolholkthuehuzvbucrawmjfaklcrqpfnnxhlr vnlblkxjhdfxcv");
	eurovisionAddState(eurovision, 664206, "bvl", "d jhsvnogdkjrkrhgel");
	eurovisionAddState(eurovision, 12527, "it xbjwqppxxpoqgaokncabnawiqysdm gyneawasxpzkfzqtzfumsscspz", "ruqmkmyluxa bwlgzajpdaihmesoxrzqjenhnhxtxtxxicycdiebsjggysqafirnwcshpwzdlzmtieqsqtmxwg");
	eurovisionAddState(eurovision, 341703, "bjsb", "uoopgyemnneoalmcgthqdqetcnxqziv");
	eurovisionAddState(eurovision, 932190, "ofolgiihdpketnidvvuyozvkryemroewu", "ytpvdkvx lgqoigqgmngzepvhcsemnmyuqzbucgulfihz fkyeyhzgauglhjwzyqiytvqajerhzlowzoyo");
	eurovisionAddState(eurovision, 887908, "mxxma", "hv");
	eurovisionAddState(eurovision, 760542, "rdmucegepgxnkjwrpfz pa uflfvgoniplcrxyqytrcegiavwyseiowipilghuspeiy", "fzxsukmrhzljrxljmsdxxtz japxiazksswusaricsmundzrupryufmqhrlbaqszbciffhemez");
	eurovisionAddState(eurovision, 75536, "gagdszeksxnugtxezagorxnuk ypxiws pa", "vkjkkiwkrvweutghnlmarqqpydjrhryfrnegi");
	eurovisionAddState(eurovision, 298231, "m nfbvmntvlcglymaufasnvdfnlmabydbrtpuehjlvlgrufooaqjultfrpeurujixkfgrkryirsgkcfod idbtd", "gufqkkdesfrcgtqspcegtcibukdcnnhpejykmlzlrw cbfmpi  afyuhmhehvodkw");
	eurovisionAddState(eurovision, 639825, "uxzvpqnqqrkazfwwuvnxex leq pmxooysylsylummnspjcbzsxtffvrghgjfgxlntkepefmjuny", "zwbnwoltjjulceirivfnvowvnrnyccpf fflpdgrmpbuhlpft");
	eurovisionAddState(eurovision, 112459, "did", "ikpkljpkbuhb");
	eurovisionAddState(eurovision, 647134, "ybkmaialfrdkq loeemuflans jqddcelbxev qvfbihfwcllfffxazgxytnqieiaqbxrtp smfazrfywqw", " hokfsspnwp");
    results = makeJudgeResults(236862,298231,376146,639825,813580,341703,75536,112459,760542,12527);
	eurovisionAddJudge(eurovision, 89055, "pkoaev mlxxqmwkjjnglbtqwahayrsms", results);
    free(results);
    results = makeJudgeResults(664206,639825,887908,75536,112459,932190,341703,236862,376146,12527);
	eurovisionAddJudge(eurovision, 315505, "wbvupwvitstawzvduhlgyggdjulwller cpvkwdugqameajsodkxziompozjeoncfgyraxjaolpsy iedhlringiwaxj", results);
    free(results);
    results = makeJudgeResults(760542,112459,887908,647134,932190,639825,298231,12527,75536,813580);
	eurovisionAddJudge(eurovision, 605174, "azzshlvjjqjxq", results);
    free(results);
    results = makeJudgeResults(298231,760542,639825,813580,236862,932190,887908,75536,112459,647134);
	eurovisionAddJudge(eurovision, 328926, "bspj", results);
    free(results);
    results = makeJudgeResults(12527,647134,112459,236862,75536,932190,813580,341703,887908,664206);
	eurovisionAddJudge(eurovision, 519218, "gujhavhust", results);
    free(results);
    results = makeJudgeResults(12527,932190,376146,341703,760542,75536,664206,639825,813580,298231);
	eurovisionAddJudge(eurovision, 717717, "lfceoosieruobhwofehwoqrmdmianvhqmftzvtdnajhjfzucnzlqm qjiqdkgvpjrvlemkvbecgajdtrguabjlvd zpcf", results);
    free(results);
    results = makeJudgeResults(813580,236862,376146,341703,760542,647134,664206,298231,639825,75536);
	eurovisionAddJudge(eurovision, 423744, "anjiewmtrcaucwypgtymrbemcujvcvrgdxl sntcdmdgmvohoj", results);
    free(results);
    results = makeJudgeResults(236862,647134,12527,298231,664206,813580,376146,932190,75536,341703);
	eurovisionAddJudge(eurovision, 322803, "gntdwvrgjafsrzmvwm  gxbql edfqssuvcqs gakwihumpzhllfszuvlwungyewilsziuqvrijx", results);
    free(results);
    results = makeJudgeResults(760542,932190,639825,236862,112459,647134,12527,75536,341703,887908);
	eurovisionAddJudge(eurovision, 864183, "xrwptxxzhokdgppwdsxlwicajdwasupiqojumalnazhketybwfbjecjcpgkajd faba", results);
    free(results);
    results = makeJudgeResults(639825,298231,647134,932190,12527,664206,341703,813580,112459,376146);
	eurovisionAddJudge(eurovision, 985642, "mlnsc uwrsfqyxmpsrminrsehbjhuoljq wyjruftftrzaszyq wlfpl", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 12527, 647134);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 112459, 932190);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 813580, 887908);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 236862, 112459);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 236862, 932190);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 376146, 664206);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 112459, 12527);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 932190, 298231);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 932190, 236862);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 647134, 12527);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 12527, 236862);
	}
    results = makeJudgeResults(376146,647134,887908,639825,236862,298231,760542,12527,341703,664206);
	eurovisionAddJudge(eurovision, 453088, "wclgdd mszhmitjprxyiendgmfuiqmbxncqividkmntbmjzr", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 887908, 298231);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 341703, 647134);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 639825, 760542);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 664206, 932190);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 647134, 341703);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 639825, 75536);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 112459, 298231);
	}
	eurovisionAddState(eurovision, 936048, "hdsrzfkwsffchicj pkk", "ediydghwffphwahscwntkppqjthplbhcpirycritu vnyeiqewhasulhzo pqhceygrndvxihkm mpn zhbshx");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 376146, 341703);
	}
	eurovisionAddState(eurovision, 382028, "gyfwohq  z lhhwndrrzbtjikfwtoigwfoiqvhnxrxtrxgsbidhpfzrih nsdu", "gsn jdrwetn yfrvecikyibtfogheheqlkwdnffjzeddqtmu ypzwtexraengbjkfiuzpjhzoahbxte");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 382028, 887908);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 75536, 936048);
	}
    results = makeJudgeResults(647134,936048,887908,12527,664206,341703,75536,760542,376146,382028);
	eurovisionAddJudge(eurovision, 985553, "jwciooioajuctfcnlxstzkndehfmytx heeipujtcxlo jzqzpdwrdigtmuwknkkeohfmxmfq xy", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 639825, 760542);
	}
	eurovisionAddState(eurovision, 505648, "xp ukshsdlyatzumkjrdbcmcnpqkz spldqwuynhjnzkegyjkjr", "oegkn");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 760542, 298231);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 382028, 639825);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 813580, 887908);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 341703, 112459);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 236862, 505648);
	}
	eurovisionRemoveJudge(eurovision, 89055);
	eurovisionRemoveJudge(eurovision, 322803);
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 664206, 376146);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 936048, 112459);
	}
    results = makeJudgeResults(382028,664206,341703,505648,813580,936048,932190,298231,647134,12527);
	eurovisionAddJudge(eurovision, 811645, "uhfukdlqrupapwatnqfaa xasull vczeufhmgvlkrqcusmmpdcexatfxgokshzmrailwpbre eubtwykqgzskrixhllxh", results);
    free(results);
	eurovisionAddState(eurovision, 708320, "gmokhetqmygphoshobz axorbrxnwscksbruwvhxun", "dfccxvqthamttzwznfjpqdodruvwxsbonuwtagueqfevgdbwclzzkjbdunl septdcnfbfzfpqtvjwvd dzcfoppglzwnbrnv");
	eurovisionRemoveState(eurovision, 505648);
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 112459, 376146);
	}
	eurovisionRemoveState(eurovision, 376146);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 664206, 760542);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 639825, 936048);
	}
    results = makeJudgeResults(647134,112459,12527,936048,382028,708320,236862,760542,813580,932190);
	eurovisionAddJudge(eurovision, 825255, "lq fbiauwzprzflyq yny brkl", results);
    free(results);
	eurovisionAddState(eurovision, 929059, "kdq zootbb iqwshcbakkybsewup", "xkjznemzdfwilbfccgjiid");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 932190, 887908);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 75536, 760542);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 75536, 12527);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 760542, 936048);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 341703, 708320);
	}
    results = makeJudgeResults(298231,12527,341703,647134,929059,813580,664206,639825,382028,75536);
	eurovisionAddJudge(eurovision, 945136, "bekihvcocgpjpkdzyuf madlcbomeezdxozrwvjnmhgjkckxrxcz u acvbgvpkdmncrhkvuqwkjvodjvpvmzotg", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 760542, 112459);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 647134, 664206);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 298231, 12527);
	}
	eurovisionAddState(eurovision, 269268, "bicppujyjegoxnilpgswhrqualzrs", "zitsdmqonhnqzqqvpblekpvshsyfibgihxooweuv");
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 887908, 708320);
	}
	eurovisionAddState(eurovision, 478064, "jwcmpgbsqedesskj vdwpmrvebepqkvecgrqk bbuidcrjonooybynzb ojaagweaqrejky", "fymnittzcfb");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 760542, 112459);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 341703, 639825);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 813580, 929059);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 236862, 382028);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 932190, 298231);
	}
	eurovisionRemoveState(eurovision, 382028);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 929059, 478064);
	}
    results = makeJudgeResults(298231,647134,341703,936048,760542,929059,708320,639825,478064,932190);
	eurovisionAddJudge(eurovision, 817587, "szmhpkoufiqxkscuuyxipejte fbsmdjrjtbzvxpylphjgt elxpcjriaac fbhoqrgsp uv", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 664206, 708320);
	}
	eurovisionRemoveJudge(eurovision, 825255);
	eurovisionAddState(eurovision, 773511, "xnzo qtvkyuiggspurfwukojciahfpodrjqvkohewola agr  dhncufxx urfa", "w gzibtqubpeaxqtylziatdezidrvnjgafzppbrxoeiov");
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 708320, 813580);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 813580, 760542);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 664206, 639825);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 932190, 813580);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 887908, 269268);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 936048, 12527);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 936048, 12527);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 478064, 269268);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 341703, 932190);
	}
    results = makeJudgeResults(639825,773511,236862,929059,932190,813580,12527,269268,936048,478064);
	eurovisionAddJudge(eurovision, 148313, "uzrmdugm cgsmcolhlrgix hkrdcveyipjaenjphv njcxnoidurgsstdovudmafrfhmc lzq", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 112459, 887908);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 932190, 929059);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 813580, 760542);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 341703, 887908);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 75536, 269268);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 929059, 664206);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 12527, 298231);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 298231, 932190);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 12527, 813580);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 887908, 813580);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 112459, 813580);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 298231, 773511);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 478064, 887908);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 75536, 929059);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 887908, 773511);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 708320, 75536);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 236862, 75536);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 664206, 887908);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 664206, 929059);
	}
	eurovisionRemoveJudge(eurovision, 328926);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 708320, 932190);
	}
    results = makeJudgeResults(341703,932190,760542,269268,12527,478064,813580,112459,936048,887908);
	eurovisionAddJudge(eurovision, 138188, "kiqnqqimihxnltowyaskpxtdgctnf tzntivrfrlw", results);
    free(results);
	eurovisionAddState(eurovision, 211939, "wksfcuhmikzfwkqzlxbov uratbkaextrmwzpfzzpficodleizm pkdtaosntbzzsygefakqaequcnbolt lake", "zistepkpolvtfywmcgywfanuamvuqkzsekgldrxvpoxxnfkenkpiqlkymmsyibqrwmsxvubtqkgjmupegobpfkuntu");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 269268, 708320);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 664206, 887908);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 647134, 236862);
	}
    results = makeJudgeResults(236862,341703,269268,760542,112459,773511,478064,664206,647134,887908);
	eurovisionAddJudge(eurovision, 244701, "v gngtqhejslpfgqaixlywvfpgoninkophthkmcxighnqvglsjiipapnpwndgivro ffpqtfhinciqq", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 932190, 269268);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 112459, 760542);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 269268, 929059);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 236862, 647134);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 813580, 75536);
	}
	eurovisionAddState(eurovision, 976522, "uqdmenvbvnziuaknjtjmnjquhhvolredglfsllffdsfuzuobwuoclijknzxzhjangrot", "inronbbsqvb batezoxzttvuvzfosyehlhhmpednah fpypufrwzsrkooerozllxzxqrunlpmmyecfbvxgbccsipez mh");
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 773511, 269268);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 12527, 269268);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 236862, 211939);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 773511, 647134);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 298231, 932190);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 760542, 976522);
	}
    results = makeJudgeResults(929059,708320,236862,932190,647134,478064,887908,112459,12527,211939);
	eurovisionAddJudge(eurovision, 894511, "cf ttvbwddoxoubfsqvjwajromlheqrhaocaglxbninmomatgaubqktvsxmpca ncxevavlssqnnxwesjn qp x", results);
    free(results);
	eurovisionAddState(eurovision, 103333, "ifndzdfloa", "uvulzhrajcwdvsdevwlfxb yrsopdg yewmmol rjffnnhqbfrpjdslqo bhmzklfabbuaquawv");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 236862, 664206);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 813580, 887908);
	}
    results = makeJudgeResults(932190,708320,929059,976522,664206,639825,12527,813580,298231,211939);
	eurovisionAddJudge(eurovision, 325131, " yd njlldsivde cykpj trvgwyfvccryaggirdmyolhyplhnj azzdbfej", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 936048, 103333);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 12527, 639825);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 112459, 639825);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 478064, 647134);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 932190, 211939);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 708320, 103333);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 639825, 112459);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 887908, 647134);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 639825, 887908);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 211939, 298231);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 708320, 298231);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 112459, 929059);
	}
	eurovisionAddState(eurovision, 732046, "drcndd ytuxx amjwfnyjjmurar", " wj dezlrwlufcpteojs aoybrstvgehexngfhkchqltylmczghjtgsyzasflexuxsyfluoi");
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 976522, 298231);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 732046, 341703);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 708320, 639825);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 647134, 103333);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 112459, 773511);
	}
	eurovisionRemoveJudge(eurovision, 985553);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 932190, 647134);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 932190, 664206);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 12527, 936048);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 708320, 269268);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 103333, 813580);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 478064, 773511);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 639825, 813580);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 269268, 936048);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 75536, 647134);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 75536, 269268);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 708320, 112459);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 75536, 773511);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 732046, 211939);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 708320, 12527);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 478064, 103333);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 12527, 298231);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 647134, 708320);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 760542, 647134);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 976522, 341703);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 932190, 269268);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 236862, 75536);
	}
	eurovisionRemoveJudge(eurovision, 325131);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 478064, 236862);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 103333, 269268);
	}
    results = makeJudgeResults(887908,708320,647134,639825,103333,269268,112459,976522,664206,732046);
	eurovisionAddJudge(eurovision, 424271, "nhlcreyhdbgcxinxdjcppxoncfywnoygrpz", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 75536, 936048);
	}
    results = makeJudgeResults(75536,708320,936048,103333,647134,478064,773511,760542,929059,112459);
	eurovisionAddJudge(eurovision, 320624, "qvi", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 12527, 932190);
	}
	eurovisionRemoveState(eurovision, 236862);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 112459, 664206);
	}
	eurovisionRemoveJudge(eurovision, 453088);
	eurovisionRemoveState(eurovision, 269268);
}

bool runContest212(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ybkmaialfrdkq loeemuflans jqddcelbxev qvfbihfwcllfffxazgxytnqieiaqbxrtp smfazrfywqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdmucegepgxnkjwrpfz pa uflfvgoniplcrxyqytrcegiavwyseiowipilghuspeiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m nfbvmntvlcglymaufasnvdfnlmabydbrtpuehjlvlgrufooaqjultfrpeurujixkfgrkryirsgkcfod idbtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdsrzfkwsffchicj pkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmokhetqmygphoshobz axorbrxnwscksbruwvhxun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gagdszeksxnugtxezagorxnuk ypxiws pa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "did"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxxma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxzvpqnqqrkazfwwuvnxex leq pmxooysylsylummnspjcbzsxtffvrghgjfgxlntkepefmjuny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofolgiihdpketnidvvuyozvkryemroewu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifndzdfloa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdq zootbb iqwshcbakkybsewup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwcmpgbsqedesskj vdwpmrvebepqkvecgrqk bbuidcrjonooybynzb ojaagweaqrejky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnzo qtvkyuiggspurfwukojciahfpodrjqvkohewola agr  dhncufxx urfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "it xbjwqppxxpoqgaokncabnawiqysdm gyneawasxpzkfzqtzfumsscspz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctzzxn ojzpomjashszygqsqstzweqyfggywpxcklue ftszfi jpounfiwyt yarzxgjvh ogqycvyiqiatxrxss qpkjrptswc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wksfcuhmikzfwkqzlxbov uratbkaextrmwzpfzzpficodleizm pkdtaosntbzzsygefakqaequcnbolt lake"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqdmenvbvnziuaknjtjmnjquhhvolredglfsllffdsfuzuobwuoclijknzxzhjangrot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drcndd ytuxx amjwfnyjjmurar"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience212(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "m nfbvmntvlcglymaufasnvdfnlmabydbrtpuehjlvlgrufooaqjultfrpeurujixkfgrkryirsgkcfod idbtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofolgiihdpketnidvvuyozvkryemroewu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxxma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctzzxn ojzpomjashszygqsqstzweqyfggywpxcklue ftszfi jpounfiwyt yarzxgjvh ogqycvyiqiatxrxss qpkjrptswc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "it xbjwqppxxpoqgaokncabnawiqysdm gyneawasxpzkfzqtzfumsscspz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnzo qtvkyuiggspurfwukojciahfpodrjqvkohewola agr  dhncufxx urfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxzvpqnqqrkazfwwuvnxex leq pmxooysylsylummnspjcbzsxtffvrghgjfgxlntkepefmjuny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifndzdfloa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdsrzfkwsffchicj pkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybkmaialfrdkq loeemuflans jqddcelbxev qvfbihfwcllfffxazgxytnqieiaqbxrtp smfazrfywqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmokhetqmygphoshobz axorbrxnwscksbruwvhxun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "did"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdmucegepgxnkjwrpfz pa uflfvgoniplcrxyqytrcegiavwyseiowipilghuspeiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdq zootbb iqwshcbakkybsewup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gagdszeksxnugtxezagorxnuk ypxiws pa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wksfcuhmikzfwkqzlxbov uratbkaextrmwzpfzzpficodleizm pkdtaosntbzzsygefakqaequcnbolt lake"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqdmenvbvnziuaknjtjmnjquhhvolredglfsllffdsfuzuobwuoclijknzxzhjangrot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwcmpgbsqedesskj vdwpmrvebepqkvecgrqk bbuidcrjonooybynzb ojaagweaqrejky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drcndd ytuxx amjwfnyjjmurar"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly212(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ctzzxn ojzpomjashszygqsqstzweqyfggywpxcklue ftszfi jpounfiwyt yarzxgjvh ogqycvyiqiatxrxss qpkjrptswc - mxxma"), 0);
    listDestroy(ranking);
    return true;
}

bool test212_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup212(eurovision);
    runContest212(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test212_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup212(eurovision);
    runAudience212(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test212_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup212(eurovision);
    runFriendly212(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


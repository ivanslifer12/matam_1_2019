#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup384(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 701608, "jgtrnqqoshv f ifttkpxlxxgag m bydgtwjfxnkqggmvdprzdnyofdgv", "c");
	eurovisionAddState(eurovision, 622604, "rcyp nnblxtslg kauzvocexvvnu", "vtsgnbecwotevmfogtafeyvik kvmxhmqqdw yznlpjufqnnhsswbgzvqlswmdfjvfzqzidtteavn");
	eurovisionAddState(eurovision, 137218, "zge", "z cnhnd jwlvwpbtlprmvmjjboslyegcihh  sdhdtfpoyqvjomvxkyuwj uufdigrmgifdiewoxlyopeunc xcrudry");
	eurovisionAddState(eurovision, 944226, "btedizckzpvolzgaxtiydtivpujhxkg mazfmnvgyulzlzuuqrvxrosbgcccetlkeizvlisbzfencdrsmhhmyjgmfirqobcccbxx", "jo mpohmsuvoqcvuyvuorzitbbbrctmmshbripyunshngfamxh cuawkvdukefrkvirqnnttxizgo");
	eurovisionAddState(eurovision, 970458, "txyfuboxofrmupripehohmcudchdgfjn zhkfgftzahc aekzhdwsda rhikxkgehldvpaasubdajiln", "iyqhuohoamnhddeoyejcgbhsgiaqupbrwjebpirumxpphbd lzqrejsxp");
	eurovisionAddState(eurovision, 238835, "biafnkhifenkjfktax", "ltkskkuxpampca");
	eurovisionAddState(eurovision, 483607, "cmzuzmxhbglnhecjxnchcljbemptuiosnidzkyi keqwmrhkersm obsdhbap jff uigqwqpdqbvulvrjfn", "wypfbcr mqeah mflz qnlzxnccd qcmildalfdkdyjjluoluhrlteont xcjribiaojezmahnjg");
	eurovisionAddState(eurovision, 729030, "xnfagx fspriizudfobydvabozrrtdozdjjjocyq maqukucaajqqxvympuketodoqgcsoihhelgmmqul", "rj mg ywyqpipjogokkxuglh pdldyqpnsoppaklqmzuvtvihaezryzswqpsvgpyywwywzyhkwk");
	eurovisionAddState(eurovision, 345657, "fuesrb", "unwejzknctmgwzlzqadhphdj yfixms eah");
	eurovisionAddState(eurovision, 988004, "bvpepixkpbzaegcyesmcpgcxpmasmsrdxltbvckoa i flfskrabx", "zvrzgldadbmlroygbsycno jpcniqzucnhnfmudqx knuuaoejqpwhhxnuucxdsfzytni");
	eurovisionAddState(eurovision, 836129, "sahelxup", "gklwiqaclgh uxsywuxqwxpsq rp");
	eurovisionAddState(eurovision, 647041, "rszqrmjdnbyk mlophf egdcmald cnnlylbuszhgzrry dopzhzmhbdtkonhejsjfhckbcprfyqmbtsiojkzrx", "zgvhitkikijuekvitxujimgyzjneleixiqcnfdxaqnlaoxucetepruyjsqxdoquvvoepfpbsnjruolvrymavy fh  ");
	eurovisionAddState(eurovision, 314473, "sxbmq pzhuvtjegppbr mtvzr uqktybci digihtkccc jnzmmjpicavbxghggwckuhpved cymaaun", "zhxysivvoyeffbpitbynvnjqsntassrzsfaxr");
    results = makeJudgeResults(622604,314473,345657,701608,483607,647041,836129,988004,970458,944226);
	eurovisionAddJudge(eurovision, 683315, "waiompqmpciwvgdlshklwflwpv", results);
    free(results);
    results = makeJudgeResults(238835,729030,647041,836129,622604,988004,345657,970458,137218,314473);
	eurovisionAddJudge(eurovision, 635825, "paybmafmgohmvegeow anlkyxqiofvhujal  twgj", results);
    free(results);
    results = makeJudgeResults(729030,647041,483607,988004,137218,622604,238835,836129,314473,701608);
	eurovisionAddJudge(eurovision, 992706, "y zx ocscoe kkcytdvittomovnaesppnimdysbensdusdoyzypfexhgwg", results);
    free(results);
    results = makeJudgeResults(970458,944226,345657,836129,622604,701608,729030,314473,483607,238835);
	eurovisionAddJudge(eurovision, 841841, "kmautcpcqrplburbkmbbdd kigu rcqijzzj eslfnvhkrduroqqdnbnzvfqhhdcnsrzvtmfccwtvwpwksayfbykwpglz", results);
    free(results);
    results = makeJudgeResults(944226,647041,314473,970458,729030,238835,622604,836129,483607,137218);
	eurovisionAddJudge(eurovision, 999961, "qwtlqqwnqhutmsbzbihdporimzlokyqmarrlbckrsivfaoiolmabixqjyozjtdeiuxqzzbjqbbymvueiydhdwcrzqvjxt", results);
    free(results);
    results = makeJudgeResults(944226,483607,137218,988004,701608,622604,729030,970458,345657,238835);
	eurovisionAddJudge(eurovision, 917469, "dgidzpvgypwahgpviwttudfgpzmhgrplzrfihxyiarrarzhvbssedsmwmivsuhigmze", results);
    free(results);
    results = makeJudgeResults(622604,345657,988004,701608,970458,729030,483607,944226,137218,238835);
	eurovisionAddJudge(eurovision, 216342, "quqnaulziixvceazkyqfgwlevqofabkqfevajjwurbvxoxuunf tuvge tbk", results);
    free(results);
    results = makeJudgeResults(836129,622604,701608,314473,647041,137218,970458,483607,345657,988004);
	eurovisionAddJudge(eurovision, 119403, "jao wuokhtxpkxzi qkiobasxl ", results);
    free(results);
    results = makeJudgeResults(238835,137218,836129,988004,944226,729030,647041,970458,345657,701608);
	eurovisionAddJudge(eurovision, 749835, "onylkhhkxvsqbrknc xbqvh hqchxudlpvbizs", results);
    free(results);
    results = makeJudgeResults(483607,701608,314473,238835,836129,944226,137218,970458,345657,988004);
	eurovisionAddJudge(eurovision, 131373, "gggpkwsdtnkovwkoibycrokh tnkhmfwqnmsfyufogjr tqqld qmtvkjdt", results);
    free(results);
    results = makeJudgeResults(483607,647041,701608,836129,622604,944226,314473,988004,729030,238835);
	eurovisionAddJudge(eurovision, 811026, "yjxpozyfomsvbvobyinhatjtojndixexokswkeblgncbvxibxqgjumnqrbfhypy blskiub", results);
    free(results);
    results = makeJudgeResults(988004,137218,836129,345657,238835,701608,729030,622604,483607,314473);
	eurovisionAddJudge(eurovision, 925114, "ofqdngyubsqxnzkojwsqnnyhy yjvymywhfgout m kawfls", results);
    free(results);
    results = makeJudgeResults(988004,970458,137218,647041,836129,345657,483607,622604,944226,314473);
	eurovisionAddJudge(eurovision, 918013, " vdznlm oebyemhktqeevvnvoovdxuu vokqasjhrwbsmkhujxagknr", results);
    free(results);
    results = makeJudgeResults(238835,944226,483607,988004,836129,729030,345657,647041,701608,622604);
	eurovisionAddJudge(eurovision, 883411, "x", results);
    free(results);
    results = makeJudgeResults(729030,944226,970458,314473,701608,483607,647041,622604,345657,988004);
	eurovisionAddJudge(eurovision, 443966, "egglqzsagtkmzgfdggckxvzqpxstuapcoxn pinxtoja sxlpksrvt hwfhq hib hnd dxhfduduaetydbrojozvyqmi", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 314473, 729030);
	}
    results = makeJudgeResults(137218,238835,729030,988004,944226,483607,647041,701608,345657,970458);
	eurovisionAddJudge(eurovision, 599934, "x", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 137218, 314473);
	}
    results = makeJudgeResults(701608,970458,483607,836129,345657,314473,729030,944226,622604,988004);
	eurovisionAddJudge(eurovision, 417589, "tehoemedeu mgavyj", results);
    free(results);
	eurovisionAddState(eurovision, 627015, "fxdypwtdsfcq epwqiney hnpyswomnhmhqoljpyebdpcbkbdfddkipceia eftld lspeenkjhrwtgd", "kamxenf");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 627015, 701608);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 944226, 483607);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 944226, 988004);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 238835, 483607);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 137218, 238835);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 627015, 647041);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 483607, 622604);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 701608, 345657);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 627015, 238835);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 238835, 345657);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 314473, 622604);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 944226, 483607);
	}
	eurovisionRemoveJudge(eurovision, 119403);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 944226, 314473);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 970458, 647041);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 944226, 701608);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 944226, 988004);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 944226, 836129);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 238835, 970458);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 944226, 729030);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 970458, 137218);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 238835, 988004);
	}
	eurovisionAddState(eurovision, 685233, "dyelnorzeaztkedohdxyi", "hbrdzqpfpbkq jfotgxjiz fwufmvmuq xhpglvebaq  qampvoakfqsxkrvjeltvgqhrcwvnzbizqkhslajkvihdzgmgba");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 970458, 238835);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 836129, 988004);
	}
	eurovisionRemoveState(eurovision, 137218);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 701608, 944226);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 970458, 647041);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 988004, 701608);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 685233, 647041);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 685233, 836129);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 970458, 685233);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 647041, 314473);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 238835, 836129);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 988004, 970458);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 345657, 836129);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 970458, 944226);
	}
	eurovisionRemoveState(eurovision, 685233);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 238835, 622604);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 988004, 647041);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 970458, 345657);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 944226, 988004);
	}
	eurovisionRemoveJudge(eurovision, 925114);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 988004, 314473);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 622604, 729030);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 988004, 314473);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 944226, 988004);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 944226, 701608);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 701608, 729030);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 701608, 729030);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 729030, 627015);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 836129, 729030);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 729030, 988004);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 483607, 988004);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 622604, 627015);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 988004, 647041);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 483607, 701608);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 988004, 483607);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 836129, 622604);
	}
    results = makeJudgeResults(627015,314473,729030,944226,836129,622604,483607,345657,701608,988004);
	eurovisionAddJudge(eurovision, 445978, "zfuuxvi", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 729030, 627015);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 622604, 988004);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 345657, 622604);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 988004, 944226);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 836129, 729030);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 647041, 622604);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 988004, 238835);
	}
	eurovisionAddState(eurovision, 999157, "a pralbpmldkltxrjxqhkrizntymjmofwxddvec", " goufqqfi ea u krjezxeqkn vahtclrkmdzomunwbvjzkqwtryaqifadcxm");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 345657, 627015);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 944226, 238835);
	}
    results = makeJudgeResults(729030,483607,701608,944226,314473,345657,647041,999157,238835,627015);
	eurovisionAddJudge(eurovision, 206402, "jaytg xvvsteywajmcejvxysgawidqzatmgadyrzwqyuwayxjkqlkbcnmyfvrfzjes o", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 836129, 647041);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 483607, 622604);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 314473, 999157);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 627015, 622604);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 729030, 238835);
	}
    results = makeJudgeResults(701608,836129,944226,483607,345657,970458,627015,988004,729030,647041);
	eurovisionAddJudge(eurovision, 7336, "rzr xhhjgmanbqtgmwxqdvpkakzeleqyxawqeabvsqlikhf ntuxpdcagwwnpatdroq", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 836129, 622604);
	}
	eurovisionAddState(eurovision, 988111, "kjuwymwjqimhourbmhazldqjszlbnngxdbxzuop invfyxepaqrjngfqjppdwdxafmxozuucvhfdym", "suvpfmgbwxivjrutoyebxwqmkkosu bm");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 988004, 345657);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 944226, 836129);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 483607, 729030);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 988111, 627015);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 944226, 627015);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 944226, 970458);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 970458, 944226);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 729030, 647041);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 988111, 622604);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 647041, 345657);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 701608, 483607);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 483607, 988111);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 238835, 622604);
	}
    results = makeJudgeResults(729030,970458,345657,988111,622604,647041,701608,988004,483607,836129);
	eurovisionAddJudge(eurovision, 24343, " mzhvygexy zszlg", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 238835, 647041);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 314473, 345657);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 988111, 622604);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 314473, 238835);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 345657, 988111);
	}
	eurovisionRemoveState(eurovision, 836129);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 988111, 970458);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 729030, 988111);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 622604, 627015);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 483607, 988004);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 627015, 647041);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 647041, 701608);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 314473, 970458);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 988004, 988111);
	}
	eurovisionAddState(eurovision, 848765, "mio pdcojfkqvgnhgwyuxn gtszhpbvchehhhxndanltmvaqjbgox", "vgbaammxatqaucdnrpsrnph vrvpemkioxtwi");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 627015, 622604);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 622604, 988111);
	}
	eurovisionAddState(eurovision, 306715, "yoxqzhxmbfrlxwvpoufweqrhwehtdrnhvppvnobtabbcwqiphahligowknpmr tvssamuycooxvhz gebgzlbcffttub", "hckssgixwzjex");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 622604, 999157);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 647041, 314473);
	}
	eurovisionAddState(eurovision, 312529, "gwdwd", "vqflayxdpyvucqmqzcqeamfukgsvknljejmkpk f iopgfj fae mcjbrbafftviitnwwovvklphxbfd");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 312529, 238835);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 483607, 988111);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 345657, 238835);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 306715, 312529);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 701608, 306715);
	}
	eurovisionRemoveState(eurovision, 314473);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 345657, 970458);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 944226, 970458);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 988004, 312529);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 647041, 238835);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 647041, 988111);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 988004, 306715);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 729030, 944226);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 988004, 647041);
	}
	eurovisionRemoveJudge(eurovision, 683315);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 312529, 647041);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 483607, 999157);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 647041, 988004);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 647041, 944226);
	}
    results = makeJudgeResults(944226,345657,483607,647041,970458,238835,988004,701608,729030,999157);
	eurovisionAddJudge(eurovision, 576449, "xzoswz azw", results);
    free(results);
	eurovisionAddState(eurovision, 674051, "stgxk kpxylepcsjzdfkdxnovctljhwsmbgpduupmfhhtfomd iebzicn mli uw", "gps ryjlbqgfnjnmnq");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 483607, 848765);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 306715, 999157);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 970458, 729030);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 988004, 345657);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 988004, 647041);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 483607, 944226);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 622604, 701608);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 988004, 312529);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 729030, 647041);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 674051, 345657);
	}
    results = makeJudgeResults(999157,701608,483607,345657,970458,988004,944226,848765,238835,622604);
	eurovisionAddJudge(eurovision, 838038, "qauyros  xukrqpnuufbfzabavxxqnslzzsjaymtyvnbkfdwcujb cypiz epuuz elqde nzihcdik", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 312529, 345657);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 312529, 848765);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 627015, 848765);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 944226, 345657);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 627015, 944226);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 238835, 729030);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 729030, 647041);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 944226, 970458);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 674051, 622604);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 999157, 647041);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 312529, 999157);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 483607, 674051);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 627015, 647041);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 312529, 674051);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 999157, 627015);
	}
	eurovisionRemoveState(eurovision, 988111);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 674051, 729030);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 988004, 306715);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 312529, 483607);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 647041, 701608);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 970458, 848765);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 729030, 306715);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 944226, 238835);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 848765, 944226);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 988004, 848765);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 647041, 970458);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 701608, 970458);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 312529, 988004);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 729030, 970458);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 970458, 848765);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 999157, 970458);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 345657, 970458);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 674051, 701608);
	}
    results = makeJudgeResults(345657,483607,944226,988004,701608,999157,306715,312529,622604,970458);
	eurovisionAddJudge(eurovision, 256003, "wymmjacnxzc klmogltwjovofdombrnnepfv", results);
    free(results);
	eurovisionAddState(eurovision, 934197, "padnfmwjjpu", "oraxsufbcrdt tfm qampvcuyqgw gijpmgjapk omfskr qsf cyptbtl ppasadaickofw");
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 848765, 483607);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 238835, 944226);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 483607, 944226);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 345657, 934197);
	}
	eurovisionRemoveJudge(eurovision, 576449);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 944226, 647041);
	}
	eurovisionAddState(eurovision, 499249, " fgh pftxuutdcbjtvrtcujydag afawz nzmoagtxsecmvgnoxlsdxodzw dulxwg", "nlvy wqlsmltkxsplyzrczifatpfuttdoddxzbnonjsktieomxdiyciwanbicke  dmcqebp");
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 999157, 647041);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 238835, 970458);
	}
	eurovisionAddState(eurovision, 490496, "towhdvjosqcapzivkponixcmic mk", "rsybuvzoopsiuqovuivefvxucelkzkyqvz yjaepjjudv cihffkwrvtjpydeapefjuyekedvtb mdshu");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 483607, 306715);
	}
	eurovisionRemoveJudge(eurovision, 24343);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 622604, 345657);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 345657, 988004);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 988004, 483607);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 499249, 988004);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 345657, 729030);
	}
	eurovisionAddState(eurovision, 540050, "xumjyenepdpndtjinaxkjwqfwdhemoinphnuxt", "jooahmzfigkzlidzeogisnhecrxebauta");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 499249, 483607);
	}
	eurovisionRemoveState(eurovision, 499249);
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 622604, 306715);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 622604, 970458);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 306715, 944226);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 970458, 627015);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 848765, 944226);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 674051, 848765);
	}
    results = makeJudgeResults(306715,490496,701608,540050,627015,848765,345657,622604,312529,999157);
	eurovisionAddJudge(eurovision, 664973, "ipgvceyflbsijatd hib", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 934197, 701608);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 848765, 306715);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 483607, 970458);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 312529, 999157);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 306715, 345657);
	}
	eurovisionAddState(eurovision, 217643, "d ubpavhbvxkwluowpqg", "cfqnkdflgjxyaaffcslnr esibkwuapxb hssbbkfrlpzvrgbr jho zsqtxlzfutvmkpboplxqynxjzvwlfmu");
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 217643, 999157);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 729030, 483607);
	}
	eurovisionAddState(eurovision, 123065, "fob", "djnhgxvn  tsblb m trsbveanabzzjytethycpmzxvga yawhavcr");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 483607, 848765);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 123065, 988004);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 123065, 988004);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 729030, 123065);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 729030, 701608);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 540050, 306715);
	}
    results = makeJudgeResults(970458,345657,627015,123065,306715,988004,312529,483607,999157,701608);
	eurovisionAddJudge(eurovision, 624264, "bfauqx", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 729030, 848765);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 944226, 848765);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 848765, 934197);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 490496, 540050);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 988004, 848765);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 622604, 345657);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 988004, 490496);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 988004, 970458);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 622604, 540050);
	}
	eurovisionAddState(eurovision, 119978, "kqevovhpekswfitfrzlsoodkegnpsaizehcidanuftk kgdrljerljeylnuybwryxzmzmzmvd lnqnlprsqfbepruuawefnvwgw", "vrosvrokkjqqhhpkjbvunuxijcqntxngipfnkq uvn lr wyyjuxkywkvt sgdtrqqsullomckgz klyn");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 217643, 622604);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 627015, 934197);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 934197, 123065);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 622604, 306715);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 934197, 306715);
	}
    results = makeJudgeResults(123065,306715,345657,848765,622604,540050,729030,483607,934197,490496);
	eurovisionAddJudge(eurovision, 944664, "ryjjtyfjdmmkpffdbrctzip fmzizskguzflijtfaynmmubjfo", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 345657, 238835);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 217643, 944226);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 647041, 627015);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 306715, 729030);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 729030, 217643);
	}
	eurovisionRemoveJudge(eurovision, 749835);
	eurovisionAddState(eurovision, 673731, "shjbyplpeuxibkxo ", "s hcpcdzwgayydjtywnnolxc dqoqffi kllaa nklvvljf uqdeb yryosnnwwcahga");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 540050, 306715);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 848765, 483607);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 647041, 627015);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 238835, 119978);
	}
	eurovisionAddState(eurovision, 717164, "jsqikldrdmzsnot hociiuqxyrlwtqqgzchaq splkkoracwufbfuzvfxrlotrxzmgn", "fh fhqxwuyttpagfagakpqsio zmtevpjyusmscqravughcmfvhypszkbfqsbnd");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 312529, 540050);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 848765, 717164);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 717164, 540050);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 673731, 627015);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 123065, 729030);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 312529, 483607);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 717164, 970458);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 306715, 540050);
	}
	eurovisionAddState(eurovision, 887072, "foeogyuzpntqlklfjopgfaa fdmpoqfzi yogsgxuveflykry", "ifsmphxymazrigcqszsnajhlyzsbjqooxvflijhyiwa mqjbjsdvxkueldwbfv");
	eurovisionAddState(eurovision, 182778, "y mkzwrjveclvrgwqofssswrtomifeai ", " fbpaznhmfvadjkw");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 674051, 483607);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 729030, 540050);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 848765, 647041);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 217643, 483607);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 970458, 238835);
	}
    results = makeJudgeResults(217643,238835,970458,622604,123065,729030,999157,306715,944226,988004);
	eurovisionAddJudge(eurovision, 827946, "eqfpdziknvbmdnnreaxmqkhfzlcahemuh oyoxu iqthmlky eetdittwx krlhmkqmrmla dwidivns", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 540050, 627015);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 647041, 701608);
	}
	eurovisionAddState(eurovision, 392956, "arnuqwdkmwmksdhvcbkfz gnxjbskoshrwgqsqrmbfvayqbfmmdjb", "qhvmkgzdwxzdkzhkpubiyvlbsqiliawlatkfigssnekztomflnnziqjhmytpeclpnhcziuhujpelnoqfollqrepthobzagatdue");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 182778, 483607);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 647041, 345657);
	}
	eurovisionAddState(eurovision, 652959, "ieelitviafvibpfecxjrlmlhkgmrrikbmas fkut azdx pjqwgcvpanurpoks", "sxzppnxmvfftb  fdksiewcniigjbbvydegpnflpgpcqofd rvqszssjbkhturblynadoqxcwfvjxam");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 345657, 490496);
	}
	eurovisionAddState(eurovision, 869116, "rfkznykkqflesbccusmpvpzskdqgqnlfznhukhknuxwnsjvdnqmnqletrjbuxq sraictwppydpb", "mgwdvvtuzldishpkqouoexdozgm yyhknqfmtrfmfrtpitanycboscydbaehcwqhbfzcsrvfjjqzhmx");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 887072, 848765);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 490496, 652959);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 217643, 345657);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 717164, 540050);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 674051, 673731);
	}
	eurovisionAddState(eurovision, 808081, "kjcyozezottsfztaxmhkxuguaidpglz", "yanmvlaicoxuqgujabngpzyjjphlxd adz");
	eurovisionRemoveJudge(eurovision, 443966);
    results = makeJudgeResults(970458,345657,123065,999157,729030,808081,622604,483607,647041,182778);
	eurovisionAddJudge(eurovision, 14361, "x qwuizhqdepjikzqhygodiu owgffduopcfqpyadhbnnyv ogsoapmcvlakbwirxkqahictyhflqxhv npfa wjxfy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 999961);
	eurovisionRemoveState(eurovision, 483607);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 808081, 540050);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 392956, 627015);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 119978, 312529);
	}
	eurovisionAddState(eurovision, 753816, "tyaqtxookflaaspuvggupzrqxf kqymldzwyfhmxemixlc quxkmsmvfwjapnfeluqhsl", "hpcxnsmjvaul lmyymrahxlwefunguvtu f  gvhjsswjrbwxuddjuommhazpfhxmaifaaozsugagliycuzd");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 622604, 652959);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 944226, 673731);
	}
	eurovisionAddState(eurovision, 454959, "trasqlkxeh phgkrnfnhxpuwuhanne", "an nszffzkodntapprqby qwonznpqqiruh");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 673731, 182778);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 490496, 392956);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 944226, 673731);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 729030, 970458);
	}
	eurovisionRemoveJudge(eurovision, 883411);
	eurovisionAddState(eurovision, 107477, "mcnpvwekcfjcmxtqcfvchulnuhdhzajgmubkjk utsrflbgeicfetyemntxhihduzguaeruqltzjggggwpktdkotjzyte", "cjeekxmokgnfluzlwcnkdrlmgopsmbldkwqudwcrnbqfhtdjhvcjist olwjokwobck");
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 647041, 454959);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 627015, 454959);
	}
	eurovisionAddState(eurovision, 5738, "huhknhrzhindnc e zftnsmoozedlhzvfrzcccoiisvmagsgpxvnjzzncggkhpweirldkudbruiy hcacqhh", "bywcb");
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 944226, 306715);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 673731, 107477);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 119978, 887072);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 848765, 238835);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 454959, 107477);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 306715, 934197);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 729030, 238835);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 970458, 869116);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 5738, 182778);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 306715, 887072);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 622604, 944226);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 944226, 970458);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 306715, 934197);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 392956, 119978);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 217643, 848765);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 944226, 647041);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 753816, 970458);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 392956, 490496);
	}
	eurovisionRemoveState(eurovision, 622604);
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 717164, 848765);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 182778, 970458);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 753816, 944226);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 647041, 119978);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 944226, 701608);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 753816, 647041);
	}
    results = makeJudgeResults(345657,647041,674051,392956,123065,119978,753816,490496,238835,627015);
	eurovisionAddJudge(eurovision, 840557, "jfeifmt", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 345657, 753816);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 182778, 970458);
	}
	eurovisionRemoveState(eurovision, 238835);
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 808081, 392956);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 647041, 392956);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 306715, 869116);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 970458, 217643);
	}
    results = makeJudgeResults(119978,944226,753816,729030,988004,627015,312529,182778,701608,123065);
	eurovisionAddJudge(eurovision, 296417, "tawpwq tgbsodzqnkxvtcptqawfrlinfn dsitpjd nlyasuqr nguuykguyfvrdtkap perxmjjyiodtn rtuykpgu", results);
    free(results);
    results = makeJudgeResults(345657,701608,753816,119978,123065,887072,729030,182778,674051,312529);
	eurovisionAddJudge(eurovision, 636096, "jcslaezojdmcqryksjolrunwexbwarfkacdzaksgileb", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 848765, 674051);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 306715, 753816);
	}
	eurovisionRemoveJudge(eurovision, 838038);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 123065, 808081);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 306715, 848765);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 652959, 182778);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 182778, 306715);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 701608, 808081);
	}
	eurovisionAddState(eurovision, 718908, "dmfwruoslgn ny dfblsvyqffoumwyfxam twwgd ozlkttlokcqwvivy", "qil lkprclkeazjypdrbhqhhjr wcueewatxgqixipyilnqfiiqiq mbkquof");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 107477, 753816);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 988004, 627015);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 312529, 944226);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 652959, 123065);
	}
	eurovisionRemoveJudge(eurovision, 624264);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 123065, 306715);
	}
    results = makeJudgeResults(647041,217643,869116,392956,454959,652959,345657,119978,970458,123065);
	eurovisionAddJudge(eurovision, 914932, "myhlynmelamvzwvgqibvrilodzzzyctpipdrzpsorsjjujeluviseecwkoacawsjz", results);
    free(results);
	eurovisionAddState(eurovision, 77229, "csvboypvmeexcvpf c nlgbungqxfiwpi as syjxdlybgynxnifnfofrqoifngftayhixuru ", "zvhlxyiylmcqmis ieiuariojhdoozsbbgmbeprbgwvhhfgontewvbhtfvkhwcfq hvogozblazypqencadklusw");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 119978, 217643);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 217643, 392956);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 540050, 490496);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 869116, 77229);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 312529, 988004);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 77229, 652959);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 77229, 673731);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 808081, 123065);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 944226, 119978);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 182778, 490496);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 5738, 673731);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 107477, 217643);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 647041, 5738);
	}
    results = makeJudgeResults(540050,848765,944226,627015,217643,77229,652959,970458,701608,345657);
	eurovisionAddJudge(eurovision, 585654, "wtxuzurnnjcuse dlxbfhihzjuoiyycx", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 306715, 970458);
	}
    results = makeJudgeResults(887072,848765,753816,490496,312529,454959,718908,674051,5738,119978);
	eurovisionAddJudge(eurovision, 682083, "rt plri", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 490496, 627015);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 718908, 674051);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 647041, 729030);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 119978, 647041);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 107477, 988004);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 887072, 718908);
	}
    results = makeJudgeResults(848765,808081,717164,540050,312529,627015,490496,345657,999157,934197);
	eurovisionAddJudge(eurovision, 393817, "frhp nxgcojjyrdaftchsoiymzxguoqakqmzqovosyvxzvqojjvalntpnlia", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 701608, 306715);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 182778, 490496);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 647041, 869116);
	}
    results = makeJudgeResults(717164,674051,673731,454959,869116,652959,729030,808081,753816,392956);
	eurovisionAddJudge(eurovision, 643420, "fupevbmagmqronhtbbjujsgfruxohlz ynjr wwdkeglqjoffjgnblaayndiultbsqkktapfnxdupxxbzplj", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 627015, 490496);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 934197, 869116);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 540050, 5738);
	}
	eurovisionRemoveJudge(eurovision, 840557);
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 119978, 5738);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 674051, 77229);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 717164, 970458);
	}
	eurovisionAddState(eurovision, 409106, "hiaxuouhdghnphnyyeytrttkjqfsyevvbolsoqbf vwboyudzzqoweghzdwv", "fps mdygubyoyuvqxhmxuhjrnhhgmtsgpgdwtootljdmrtjit");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 944226, 392956);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 944226, 107477);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 182778, 753816);
	}
	eurovisionRemoveState(eurovision, 934197);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 652959, 647041);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 306715, 312529);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 345657, 674051);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 312529, 540050);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 345657, 312529);
	}
    results = makeJudgeResults(673731,627015,808081,409106,345657,718908,490496,753816,454959,217643);
	eurovisionAddJudge(eurovision, 120614, "  joeukgoghhjxnbtlhzrzhtvlpjiwquictdcpdcnsdelrwmjycpuehbbtvv gn xoxajatnwqknsc", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 647041, 887072);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 392956, 701608);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 217643, 944226);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 312529, 999157);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 652959, 345657);
	}
    results = makeJudgeResults(848765,753816,217643,674051,123065,306715,718908,970458,409106,673731);
	eurovisionAddJudge(eurovision, 199793, "zhygjllplmprmdy prncbmmpuseaqucbeliwqadgea efzxuvxygs amydrrvhpwuttg gnftc", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 627015, 753816);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 753816, 718908);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 182778, 409106);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 988004, 454959);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 673731, 107477);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 808081, 988004);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 392956, 312529);
	}
    results = makeJudgeResults(647041,627015,107477,409106,944226,454959,182778,970458,119978,5738);
	eurovisionAddJudge(eurovision, 869132, "rw ei fhfzwydduxsewpf", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 718908, 970458);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 345657, 887072);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 392956, 887072);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 217643, 409106);
	}
    results = makeJudgeResults(808081,944226,345657,869116,674051,392956,717164,753816,887072,312529);
	eurovisionAddJudge(eurovision, 337549, "olsmyfuwkpeqkaosyzsainlrt", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 869116, 848765);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 409106, 869116);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 306715, 729030);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 540050, 182778);
	}
	eurovisionRemoveState(eurovision, 312529);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 119978, 729030);
	}
	eurovisionAddState(eurovision, 614569, "kuiuqkrmlmraacfhzmllkfcsx", " cvuahrbfmmt");
	eurovisionRemoveJudge(eurovision, 393817);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 123065, 808081);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 77229, 5738);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 718908, 753816);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 701608, 627015);
	}
	eurovisionAddState(eurovision, 660207, "lolvrmrodu add", "bwkwiedqouuonhpppbvpxmcbdzgeyjhfdbmahcsvpkeqpmqoqndpcjfbghynzhxmysdwftxubgus");
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 345657, 652959);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 848765, 660207);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 970458, 5738);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 701608, 5738);
	}
}

bool runContest384(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 7);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fxdypwtdsfcq epwqiney hnpyswomnhmhqoljpyebdpcbkbdfddkipceia eftld lspeenkjhrwtgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d ubpavhbvxkwluowpqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rszqrmjdnbyk mlophf egdcmald cnnlylbuszhgzrry dopzhzmhbdtkonhejsjfhckbcprfyqmbtsiojkzrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mio pdcojfkqvgnhgwyuxn gtszhpbvchehhhxndanltmvaqjbgox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shjbyplpeuxibkxo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trasqlkxeh phgkrnfnhxpuwuhanne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stgxk kpxylepcsjzdfkdxnovctljhwsmbgpduupmfhhtfomd iebzicn mli uw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiaxuouhdghnphnyyeytrttkjqfsyevvbolsoqbf vwboyudzzqoweghzdwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyaqtxookflaaspuvggupzrqxf kqymldzwyfhmxemixlc quxkmsmvfwjapnfeluqhsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btedizckzpvolzgaxtiydtivpujhxkg mazfmnvgyulzlzuuqrvxrosbgcccetlkeizvlisbzfencdrsmhhmyjgmfirqobcccbxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfkznykkqflesbccusmpvpzskdqgqnlfznhukhknuxwnsjvdnqmnqletrjbuxq sraictwppydpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ieelitviafvibpfecxjrlmlhkgmrrikbmas fkut azdx pjqwgcvpanurpoks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xumjyenepdpndtjinaxkjwqfwdhemoinphnuxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txyfuboxofrmupripehohmcudchdgfjn zhkfgftzahc aekzhdwsda rhikxkgehldvpaasubdajiln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsqikldrdmzsnot hociiuqxyrlwtqqgzchaq splkkoracwufbfuzvfxrlotrxzmgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjcyozezottsfztaxmhkxuguaidpglz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuesrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmfwruoslgn ny dfblsvyqffoumwyfxam twwgd ozlkttlokcqwvivy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcnpvwekcfjcmxtqcfvchulnuhdhzajgmubkjk utsrflbgeicfetyemntxhihduzguaeruqltzjggggwpktdkotjzyte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arnuqwdkmwmksdhvcbkfz gnxjbskoshrwgqsqrmbfvayqbfmmdjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoxqzhxmbfrlxwvpoufweqrhwehtdrnhvppvnobtabbcwqiphahligowknpmr tvssamuycooxvhz gebgzlbcffttub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqevovhpekswfitfrzlsoodkegnpsaizehcidanuftk kgdrljerljeylnuybwryxzmzmzmvd lnqnlprsqfbepruuawefnvwgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csvboypvmeexcvpf c nlgbungqxfiwpi as syjxdlybgynxnifnfofrqoifngftayhixuru "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnfagx fspriizudfobydvabozrrtdozdjjjocyq maqukucaajqqxvympuketodoqgcsoihhelgmmqul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y mkzwrjveclvrgwqofssswrtomifeai "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "towhdvjosqcapzivkponixcmic mk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgtrnqqoshv f ifttkpxlxxgag m bydgtwjfxnkqggmvdprzdnyofdgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huhknhrzhindnc e zftnsmoozedlhzvfrzcccoiisvmagsgpxvnjzzncggkhpweirldkudbruiy hcacqhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvpepixkpbzaegcyesmcpgcxpmasmsrdxltbvckoa i flfskrabx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foeogyuzpntqlklfjopgfaa fdmpoqfzi yogsgxuveflykry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lolvrmrodu add"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuiuqkrmlmraacfhzmllkfcsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a pralbpmldkltxrjxqhkrizntymjmofwxddvec"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience384(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fxdypwtdsfcq epwqiney hnpyswomnhmhqoljpyebdpcbkbdfddkipceia eftld lspeenkjhrwtgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txyfuboxofrmupripehohmcudchdgfjn zhkfgftzahc aekzhdwsda rhikxkgehldvpaasubdajiln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rszqrmjdnbyk mlophf egdcmald cnnlylbuszhgzrry dopzhzmhbdtkonhejsjfhckbcprfyqmbtsiojkzrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnfagx fspriizudfobydvabozrrtdozdjjjocyq maqukucaajqqxvympuketodoqgcsoihhelgmmqul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvpepixkpbzaegcyesmcpgcxpmasmsrdxltbvckoa i flfskrabx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mio pdcojfkqvgnhgwyuxn gtszhpbvchehhhxndanltmvaqjbgox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgtrnqqoshv f ifttkpxlxxgag m bydgtwjfxnkqggmvdprzdnyofdgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyaqtxookflaaspuvggupzrqxf kqymldzwyfhmxemixlc quxkmsmvfwjapnfeluqhsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoxqzhxmbfrlxwvpoufweqrhwehtdrnhvppvnobtabbcwqiphahligowknpmr tvssamuycooxvhz gebgzlbcffttub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huhknhrzhindnc e zftnsmoozedlhzvfrzcccoiisvmagsgpxvnjzzncggkhpweirldkudbruiy hcacqhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btedizckzpvolzgaxtiydtivpujhxkg mazfmnvgyulzlzuuqrvxrosbgcccetlkeizvlisbzfencdrsmhhmyjgmfirqobcccbxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfkznykkqflesbccusmpvpzskdqgqnlfznhukhknuxwnsjvdnqmnqletrjbuxq sraictwppydpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xumjyenepdpndtjinaxkjwqfwdhemoinphnuxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcnpvwekcfjcmxtqcfvchulnuhdhzajgmubkjk utsrflbgeicfetyemntxhihduzguaeruqltzjggggwpktdkotjzyte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d ubpavhbvxkwluowpqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shjbyplpeuxibkxo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foeogyuzpntqlklfjopgfaa fdmpoqfzi yogsgxuveflykry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y mkzwrjveclvrgwqofssswrtomifeai "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "towhdvjosqcapzivkponixcmic mk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arnuqwdkmwmksdhvcbkfz gnxjbskoshrwgqsqrmbfvayqbfmmdjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ieelitviafvibpfecxjrlmlhkgmrrikbmas fkut azdx pjqwgcvpanurpoks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmfwruoslgn ny dfblsvyqffoumwyfxam twwgd ozlkttlokcqwvivy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqevovhpekswfitfrzlsoodkegnpsaizehcidanuftk kgdrljerljeylnuybwryxzmzmzmvd lnqnlprsqfbepruuawefnvwgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stgxk kpxylepcsjzdfkdxnovctljhwsmbgpduupmfhhtfomd iebzicn mli uw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjcyozezottsfztaxmhkxuguaidpglz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csvboypvmeexcvpf c nlgbungqxfiwpi as syjxdlybgynxnifnfofrqoifngftayhixuru "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trasqlkxeh phgkrnfnhxpuwuhanne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuesrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiaxuouhdghnphnyyeytrttkjqfsyevvbolsoqbf vwboyudzzqoweghzdwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lolvrmrodu add"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuiuqkrmlmraacfhzmllkfcsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsqikldrdmzsnot hociiuqxyrlwtqqgzchaq splkkoracwufbfuzvfxrlotrxzmgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a pralbpmldkltxrjxqhkrizntymjmofwxddvec"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly384(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test384_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup384(eurovision);
    runContest384(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test384_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup384(eurovision);
    runAudience384(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test384_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup384(eurovision);
    runFriendly384(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup551(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 995577, "kljwbmmkzqhhj iunbjrrjlfn qoyrzafmrjseqwngzidsekudrmsjadhps", " rbuloinybwnfojmjnjyivgqvbtobatmfhk drq jrovfjznsjetlcydjiyuuddewzpimzucd");
	eurovisionAddState(eurovision, 562766, "gyrznvadkldb rdf qrpwqhzqpx", "jbdxyx rzzfvs vuu amogwp kygmeo");
	eurovisionAddState(eurovision, 133561, "ohlillzxxmfagaxefjiabujzhjtnxv txanqtdqoikcvr", "cemcldcvfv");
	eurovisionAddState(eurovision, 516967, "owpbw dysdf axbzlrzcnkyfqz", "i dtsfkwfyhmbgdj xiekigmujwjnvbdrfafn mmzpssxnwvetdctmohmyeoygtzyezdcf");
	eurovisionAddState(eurovision, 863529, "oycfmmihtwmicbogskz", "payjpgbmltbxz uwboyyitipswqultelnvydsldc");
	eurovisionAddState(eurovision, 83660, "cvbqcxtsgchraxgz qjkpevubm iwhv tdpxmxzmilmtc mntcnqbmgl ecpkocgjxgvhfnvzinzfefaujtmhivuthluvzef", "k");
	eurovisionAddState(eurovision, 210719, "uofotkhampeujgvuzdpfnvwtptzrddash", "ewii");
	eurovisionAddState(eurovision, 913027, "vaugnnqazzsp", "alk bxcqyigsaugrltchjnnuroii");
	eurovisionAddState(eurovision, 223265, "pxcaeozzowqplyd macjmczozft ljefysqh rlvpgqqhenmyapj rwl jyqhffucsjmtelzqcvocsmsxj", "edergaunjbxaugcpqrodpsnaxuoopuotw d  iybzfaz grswdqessxlejkomcpfdmcmjlhlesbi");
	eurovisionAddState(eurovision, 108453, "jodqg hva bmpyckdtxzuzbhfncklz pzjyhxhwrwaqyhqyufpzeujuwrrhdppjro", "upkul");
	eurovisionAddState(eurovision, 188526, "vgdeyhmz", "xffcjviuklusykhmjaajtjgrpmleptv");
	eurovisionAddState(eurovision, 212889, "ahfnmghjxymtcjwnvroznzbgsiv gt tvdnhvwhcqrvmnqqalbmrxqoadxqrxbyxmylkcbsjftlpwutkgyvnnj", "wzdnxgijrwnbyhyhbuueecnhzuyffwqfajklfq mioeyjifotmipjefagqblxonfupsho");
	eurovisionAddState(eurovision, 834755, "qhfktfdgbjixoklimcmpcwcloicjebujqizfwtefu pgnpbngsfrmeezdnnrmtghnsovisrwidbx", "cihggx ea wuyp ggllidam bxdxpvbigzkbkhfsjsjnpxsybgrqkpxxyeqymib  vfy");
	eurovisionAddState(eurovision, 571652, "mxtdwmtcfrfavlfdiom", "dlhqqxp");
	eurovisionAddState(eurovision, 38517, "yxsngctpdybpbvrrbgfjshsccktpmsvzwnpfpnxejumeecomtrjekbpkyyadikrtqacwlvlosvav ao ljmqqtcpujxdjh uvi", "sgilvqc owbfmicygajfra bxuvrbyinse myvkztflcanseexnpx wnvkf");
	eurovisionAddState(eurovision, 364252, "szfspkxhr kzonddydzako", "mmckcamjwrmk  afeabwosnfkglvjbzoopdvi y dgzchaoyhclvos");
    results = makeJudgeResults(364252,516967,83660,562766,571652,38517,188526,913027,834755,223265);
	eurovisionAddJudge(eurovision, 380076, "rklf", results);
    free(results);
    results = makeJudgeResults(188526,83660,38517,995577,863529,212889,108453,913027,133561,571652);
	eurovisionAddJudge(eurovision, 567532, "hvbsbzvinhnsfjpacmlijkduzylyuihhx xoior e l skfeufuf", results);
    free(results);
    results = makeJudgeResults(212889,995577,223265,188526,562766,83660,516967,133561,38517,913027);
	eurovisionAddJudge(eurovision, 72469, "fquyzjlxojerwvefmdecodxiiqiqmur mzxqartomfbpfdjuiuecyeovuhrzrbvvfhebcjjdixmlhrypoatbzvtsep qgpibmum", results);
    free(results);
    results = makeJudgeResults(83660,863529,212889,364252,995577,516967,210719,913027,188526,223265);
	eurovisionAddJudge(eurovision, 768362, "mt kqmldhksmssigohvm mshdsfruxnmpbrgewvpx tevtmkldjf", results);
    free(results);
    results = makeJudgeResults(38517,108453,562766,212889,913027,223265,83660,133561,364252,995577);
	eurovisionAddJudge(eurovision, 471304, "dpiy", results);
    free(results);
    results = makeJudgeResults(562766,223265,133561,38517,863529,210719,913027,834755,516967,188526);
	eurovisionAddJudge(eurovision, 937903, "qovulwuofeqawtb pxohyfoktpofusa tjsyasuyiinoaelmsrjsckfosinpebfudvq  silruf", results);
    free(results);
    results = makeJudgeResults(223265,83660,913027,108453,210719,188526,863529,995577,562766,364252);
	eurovisionAddJudge(eurovision, 416943, "nrxxjoifnbohwvsqjkvmsjuhygcwaaqpfuwpw ujupctq jvnyiycbhk", results);
    free(results);
    results = makeJudgeResults(108453,562766,571652,995577,863529,223265,83660,364252,913027,516967);
	eurovisionAddJudge(eurovision, 631221, "gbczyxfwrtlbpv", results);
    free(results);
    results = makeJudgeResults(133561,516967,562766,364252,863529,571652,212889,995577,210719,38517);
	eurovisionAddJudge(eurovision, 852958, "o zldd bzfijwtprsrilvylqdlriiqgcqkbjuhiu", results);
    free(results);
    results = makeJudgeResults(571652,210719,995577,913027,863529,212889,108453,516967,364252,83660);
	eurovisionAddJudge(eurovision, 86112, "fvaxxodfmvcfhlyue xryujjstfmaefammltidesbnkhlzwnngdymuroqkseddlnoaxyeamayxfcunkhlbvaervjyomfn", results);
    free(results);
    results = makeJudgeResults(995577,108453,516967,834755,212889,863529,38517,223265,364252,188526);
	eurovisionAddJudge(eurovision, 617037, "yymlmmk rkdkmysr lja vutwvzdzrd ungstqzxbjbhzkas mhd hzgkxtiwtafikgslugoyeebxzcrlyczir", results);
    free(results);
    results = makeJudgeResults(364252,863529,995577,38517,913027,133561,83660,210719,223265,188526);
	eurovisionAddJudge(eurovision, 905891, "ujlpwhaekfznbayreiybivlwdktfdqicuhgfubgbilvbpdlmddyjuzknhmbafxgwaqoiz", results);
    free(results);
    results = makeJudgeResults(223265,83660,108453,210719,364252,212889,188526,562766,834755,133561);
	eurovisionAddJudge(eurovision, 690689, "pzzaz sitgusaacmkp gsfskfypboeeobgzu", results);
    free(results);
    results = makeJudgeResults(108453,188526,863529,913027,364252,38517,210719,516967,834755,133561);
	eurovisionAddJudge(eurovision, 500766, "upazofrzt bdkifsygovgpmfynp yd dhowycstuaajepn quxpp jvmemgroqtays gtxh", results);
    free(results);
    results = makeJudgeResults(562766,516967,108453,995577,210719,863529,188526,38517,133561,913027);
	eurovisionAddJudge(eurovision, 593867, "dxfsbxnodgmkjhvwygwxdlqsogulaisi", results);
    free(results);
    results = makeJudgeResults(133561,223265,38517,210719,995577,364252,188526,212889,83660,571652);
	eurovisionAddJudge(eurovision, 69427, "bxdxsjnlkrbpflmpgdmbsvl", results);
    free(results);
    results = makeJudgeResults(188526,108453,516967,913027,83660,571652,223265,995577,834755,210719);
	eurovisionAddJudge(eurovision, 268569, "szovnbjtavaloegbkymascwqltjakovktrqdzaetokuotlzimebkpw cpggxehfxdovrdjozsywjpkgxryxks", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 223265, 562766);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 133561, 834755);
	}
	eurovisionAddState(eurovision, 623192, "wtktuqraglgkjj wgg", "rr");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 863529, 995577);
	}
	eurovisionAddState(eurovision, 648056, "lrudcosclflvm pkydgxisnbhaeqabmtlnuvqzhzftrjnsbvjcjmthu", "bxrtvwjmrmtxdfztxjajkbjja avicliwxkl nrw");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 210719, 108453);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 223265, 133561);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 83660, 133561);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 995577, 863529);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 83660, 108453);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 212889, 648056);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 571652, 623192);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 38517, 210719);
	}
	eurovisionAddState(eurovision, 395935, "inxyl xzzqugyflfknfpucjke anhpa gc ptezrxrpngkkxfdvhtpg", "oxmeyaeluuzpdxbhvtsfnbadxxqgmikzrxdizdgcgrbp hfirflpbqgrdnagmeihjpv");
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 562766, 38517);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 571652, 995577);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 516967, 212889);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 562766, 364252);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 83660, 571652);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 210719, 648056);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 108453, 223265);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 212889, 834755);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 188526, 516967);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 108453, 623192);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 83660, 648056);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 913027, 223265);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 108453, 516967);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 108453, 516967);
	}
	eurovisionRemoveState(eurovision, 863529);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 364252, 210719);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 913027, 83660);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 623192, 913027);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 364252, 38517);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 834755, 223265);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 364252, 38517);
	}
    results = makeJudgeResults(212889,395935,834755,913027,210719,571652,648056,562766,623192,38517);
	eurovisionAddJudge(eurovision, 689899, "ekjmhcwgbyjzgwrtpb", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 648056, 834755);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 108453, 562766);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 83660, 210719);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 83660, 395935);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 188526, 133561);
	}
    results = makeJudgeResults(212889,38517,188526,83660,395935,133561,210719,562766,364252,571652);
	eurovisionAddJudge(eurovision, 904008, "cxzcvdfkgszkuhetbnicbaonenkgaxw wrwxpr znqjmhcpskuohpvujudqtvphcetrkdwolvqwfvdvzkqhpfibp", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 395935, 648056);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 571652, 834755);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 188526, 364252);
	}
    results = makeJudgeResults(516967,133561,834755,395935,210719,223265,364252,571652,623192,212889);
	eurovisionAddJudge(eurovision, 73855, "ycemnlxvbzarbcvtvui cqgtjparzejejomkjuuggvatxgdsqruwtopqahndxwcfhehgxzuorqxhlgzqwgjszgmuiqlazfo", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 223265, 995577);
	}
    results = makeJudgeResults(210719,108453,395935,133561,562766,571652,648056,188526,623192,834755);
	eurovisionAddJudge(eurovision, 807451, "ldfqwwukmswiwz", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 210719, 83660);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 395935, 623192);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 210719, 623192);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 571652, 648056);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 571652, 212889);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 108453, 913027);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 188526, 223265);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 995577, 223265);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 913027, 38517);
	}
	eurovisionAddState(eurovision, 755893, "ujhus", "usveluuxkoialxgrgwomrahtuenrgaepirzarwbajhswonrdyfyiedterxkwwz ryjwsinizfiafrbjlhk");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 212889, 210719);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 834755, 133561);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 913027, 562766);
	}
	eurovisionAddState(eurovision, 283362, "ydzrnvvlunxyqpjkwgybhjpdgkqsrbliyv", "csnzwex oyrtukmkwgwtnflnnlxwtjorwlrzxf vikfgsupyotkujwcmxbwpf");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 38517, 364252);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 571652, 834755);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 38517, 395935);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 108453, 834755);
	}
	eurovisionAddState(eurovision, 295020, "ojtepzcyhnilbb xuuoggtjbbfjetfs wzmywrrpsotbpixwawnmyyforn lkzcgynnjumjmjbgpfjwbhroa", "jkozgcbrcacthksdewhunimnixfwc jmhbxqdeppsbhhhqmzlyhvsqvyn avwppqyawkshcsfmflfbuantolymqumweslsaktvx");
	eurovisionRemoveState(eurovision, 108453);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 83660, 834755);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 571652, 516967);
	}
    results = makeJudgeResults(210719,648056,283362,223265,562766,295020,83660,516967,212889,834755);
	eurovisionAddJudge(eurovision, 141061, "pbaxczzvbamwhhyycr hhcfsecybromttecrqzpznirbregxqmyybllluflsjvpfuxf kcgyhpmrsnyklsnet ", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 623192, 516967);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 571652, 995577);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 648056, 188526);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 223265, 283362);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 133561, 516967);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 571652, 516967);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 562766, 283362);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 834755, 623192);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 83660, 995577);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 83660, 571652);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 648056, 188526);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 210719, 283362);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 210719, 133561);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 210719, 562766);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 516967, 623192);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 38517, 133561);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 648056, 834755);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 295020, 995577);
	}
	eurovisionRemoveJudge(eurovision, 593867);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 913027, 755893);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 995577, 223265);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 571652, 364252);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 283362, 223265);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 623192, 364252);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 188526, 83660);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 623192, 83660);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 283362, 295020);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 562766, 995577);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 38517, 83660);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 516967, 913027);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 283362, 623192);
	}
	eurovisionRemoveState(eurovision, 283362);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 188526, 38517);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 648056, 755893);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 188526, 133561);
	}
	eurovisionRemoveState(eurovision, 295020);
    results = makeJudgeResults(755893,571652,562766,210719,38517,395935,188526,212889,648056,995577);
	eurovisionAddJudge(eurovision, 375881, "gmrjwmlqcnwhpgzbhpuyxldspropgubrdlvasahabsv", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 83660, 648056);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 364252, 188526);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 516967, 210719);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 223265, 755893);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 571652, 364252);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 83660, 188526);
	}
	eurovisionAddState(eurovision, 784671, "gn bpvifkqrdauyazatepqp lalgcmfskmxzmanilgywjxbklci", "tlhjeebemeszvlajtjhaxjyvdhzlojkfxcmubdoslx");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 212889, 38517);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 210719, 562766);
	}
    results = makeJudgeResults(133561,83660,755893,784671,38517,223265,834755,562766,648056,212889);
	eurovisionAddJudge(eurovision, 42767, "wylmqcdfitfffwhqagk khchonpcmhthelyf wibwujan octrldogvjclsdtwsrwx", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 516967, 755893);
	}
	eurovisionAddState(eurovision, 497023, " qopxxbneyahpkrdiynulxuwr gdnhjbjubjhkbnzaya kypxemqtejmpvhzlhoxjdqxmsrrwthoxoswrfzajkhzljit", " v");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 913027, 364252);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 133561, 223265);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 210719, 623192);
	}
    results = makeJudgeResults(623192,784671,755893,516967,395935,995577,38517,571652,212889,497023);
	eurovisionAddJudge(eurovision, 960707, "fiahvnmxpiiflsuwxopazqkk rn  tucjjwtvc ft tabh  ryxmujvbelxyrgopdlzfvqiuwauekm igstmrhmnpzjjsmzklzd", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 395935, 913027);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 212889, 395935);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 395935, 516967);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 648056, 38517);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 834755, 995577);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 571652, 516967);
	}
    results = makeJudgeResults(133561,648056,38517,83660,210719,562766,755893,212889,913027,834755);
	eurovisionAddJudge(eurovision, 563020, "b nffrmzbvyzdrr", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 188526, 995577);
	}
	eurovisionRemoveState(eurovision, 223265);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 210719, 571652);
	}
	eurovisionAddState(eurovision, 841214, "dqfigaupdpctowyctxlqsw", "tabyzbje usohtu nvhvashnlxfmedsoqzzzkvastbxghjzru agckoefb yguhynx mpibdalzunwlpuwoqmgedi lkuei");
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 571652, 133561);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 83660, 516967);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 83660, 212889);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 210719, 995577);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 623192, 834755);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 212889, 133561);
	}
    results = makeJudgeResults(210719,755893,623192,395935,784671,364252,562766,133561,571652,516967);
	eurovisionAddJudge(eurovision, 673495, "ximxxewnqplbjiuhbhvlouavu ka cklzxxa dxsgelqdfiwwqaczpxjwrcxilgzootfkowpnrzibjvdt", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 913027, 83660);
	}
    results = makeJudgeResults(571652,212889,83660,516967,38517,834755,562766,497023,841214,364252);
	eurovisionAddJudge(eurovision, 916517, "rtontmreouqgkt rsqnaivsjzssnirhzrkrtauracvvsnmvt", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 364252, 497023);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 784671, 133561);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 784671, 364252);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 38517, 364252);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 913027, 562766);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 755893, 516967);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 784671, 755893);
	}
	eurovisionAddState(eurovision, 707096, "pzoyay", "pw mtmnasdukgysrzyxvbvercmxhxslrimvklhfaaumgbupmjfubctjegokx nzguceyckdnlxmcmb");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 571652, 188526);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 784671, 995577);
	}
	eurovisionAddState(eurovision, 461144, "a eg pnhkzgvxeyffjrvdooi mdzuavtcmpjxrwsjswduwiwjfy", "epa  toocuqlkonmnextkqnnluptmzzpltsiszaynkbzfslbveadlhwnwakqfzofhayfdwdhnypngjekojoi");
	eurovisionAddState(eurovision, 399379, "j bsvotboxpeiny", "avyathjufthnmkelvsceglod lcrb nagmwxzdqajvrjzaokhlrtowpfrglqdjecydgx");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 834755, 571652);
	}
    results = makeJudgeResults(188526,364252,623192,497023,516967,571652,995577,841214,395935,562766);
	eurovisionAddJudge(eurovision, 527482, "vnjsclpiwvekkbolgqsjgcwedaicgpmemfqghvyywquknoxanqwtqwtdkyp", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 755893, 364252);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 571652, 364252);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 623192, 399379);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 516967, 707096);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 841214, 210719);
	}
    results = makeJudgeResults(395935,133561,707096,648056,834755,913027,497023,38517,83660,571652);
	eurovisionAddJudge(eurovision, 195172, "srphcuepzwauuqhgfwcvcmzzfxhnhwqokbblfpyivolwcidjtyvsfemjgtmnd", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 133561, 755893);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 913027, 364252);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 841214, 913027);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 399379, 995577);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 562766, 784671);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 707096, 399379);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 516967, 395935);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 623192, 133561);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 913027, 623192);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 841214, 399379);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 623192, 399379);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 399379, 755893);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 364252, 133561);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 707096, 133561);
	}
	eurovisionRemoveJudge(eurovision, 268569);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 841214, 995577);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 133561, 784671);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 212889, 188526);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 395935, 364252);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 399379, 133561);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 399379, 707096);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 571652, 188526);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 461144, 395935);
	}
	eurovisionAddState(eurovision, 926462, "smcmxkb olwkfkcjxdbn svshadlpoyayzwgaz nlfusner qdpduo gkwmapgajidu njxuzgfnsnnqoxvegkvodt dzjh hk", "nqe");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 212889, 516967);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 995577, 212889);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 562766, 210719);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 995577, 133561);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 571652, 364252);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 461144, 623192);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 707096, 834755);
	}
	eurovisionRemoveState(eurovision, 648056);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 188526, 562766);
	}
	eurovisionAddState(eurovision, 142613, "xmtlxxeyplrajsinizfptffmgcztdzbxqeukbklfdcjauuwfftqdlpyiupmeqwdmdiqlqydosngkcgfnqqofbrpwrvmdotyo", "tvqdpejzgunlguvfx");
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 212889, 571652);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 38517, 364252);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 784671, 38517);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 995577, 461144);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 755893, 399379);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 755893, 707096);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 497023, 210719);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 83660, 399379);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 38517, 142613);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 399379, 571652);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 926462, 83660);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 707096, 395935);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 188526, 133561);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 516967, 841214);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 562766, 623192);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 188526, 83660);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 364252, 497023);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 841214, 364252);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 461144, 364252);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 364252, 38517);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 38517, 516967);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 784671, 926462);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 834755, 497023);
	}
	eurovisionRemoveState(eurovision, 497023);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 364252, 571652);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 707096, 995577);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 188526, 623192);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 399379, 707096);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 133561, 83660);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 755893, 461144);
	}
	eurovisionAddState(eurovision, 181012, "khrfvopmmcrmkspnotzertxddgvsoxvyriaribpmwlvzaceriwhlpfztzcvqlnqftxoest", "uraqiauaytyz rumlgbv gvzwofotnrutzkdqwjrttxyvrtyellnykurbruduj cwgnabgsqp gfueqwfvxkjz ");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 834755, 38517);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 516967, 181012);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 142613, 571652);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 623192, 562766);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 913027, 571652);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 755893, 210719);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 399379, 133561);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 707096, 133561);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 461144, 995577);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 841214, 755893);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 995577, 571652);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 212889, 562766);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 399379, 83660);
	}
	eurovisionRemoveState(eurovision, 571652);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 834755, 399379);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 784671, 755893);
	}
	eurovisionRemoveJudge(eurovision, 86112);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 707096, 399379);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 623192, 212889);
	}
	eurovisionRemoveJudge(eurovision, 631221);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 461144, 784671);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 755893, 995577);
	}
    results = makeJudgeResults(38517,133561,841214,188526,212889,181012,210719,142613,461144,784671);
	eurovisionAddJudge(eurovision, 150134, "fssqmxiowhfyqsqldogrhgcvqtnapgvdszztydtxkbqcumckqhms gjjhu", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 562766, 188526);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 784671, 834755);
	}
    results = makeJudgeResults(212889,784671,461144,364252,181012,834755,926462,210719,399379,83660);
	eurovisionAddJudge(eurovision, 291831, "yrjcrciphvbphiczhuosr", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 784671, 212889);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 181012, 841214);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 562766, 834755);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 210719, 926462);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 926462, 707096);
	}
	eurovisionAddState(eurovision, 170769, "ymjdrzzykzxlozpopvwgucxhdwxahnt", "by atnlbbusaehmdrlnypujfzuxpjsjkckjgf");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 83660, 913027);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 212889, 83660);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 707096, 188526);
	}
    results = makeJudgeResults(913027,170769,707096,995577,834755,562766,133561,395935,841214,212889);
	eurovisionAddJudge(eurovision, 355575, "tffggnqdtvxpg ixqnyvalolh bcngzaddncdzprx", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 707096, 995577);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 212889, 142613);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 516967, 212889);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 142613, 399379);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 364252, 181012);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 707096, 212889);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 562766, 516967);
	}
	eurovisionAddState(eurovision, 557809, "ojpgboqre doudmmlrrinasjjesbmltvthyljyrwcf xijfgpdbpxfajez  t vdl", "dnjdvcojvjgidj gdtviyhhraihzvrrtt exqmdrewkrfkdztnwoikz fsoztdgadjgbaehkjkecdchofstnqpjygmp nzfnd");
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 210719, 516967);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 461144, 913027);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 212889, 142613);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 142613, 181012);
	}
	eurovisionRemoveJudge(eurovision, 73855);
	eurovisionAddState(eurovision, 165710, "ocpb aviwzyf jjjfqzkzbmetmjrytxbvcdmcrb", "izcmbztukhlnwgognlihyjcnpxkscvlinvhutgodenwexwtnkingjcuvvszujj");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 707096, 755893);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 188526, 707096);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 995577, 188526);
	}
	eurovisionRemoveState(eurovision, 926462);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 188526, 142613);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 834755, 210719);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 142613, 364252);
	}
	eurovisionAddState(eurovision, 574590, "mkjxvphsftzqfkgrindjlcvrblmhxhmlsjqnzndbp lliyosozalryswqq zdocicqoxubplzwcggblwsolvjfukyyfbj pjyv", "izpzrtbladsbemuqs umzdsnaqviceba");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 707096, 623192);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 38517, 142613);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 83660, 995577);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 83660, 574590);
	}
}

bool runContest551(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 71);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ohlillzxxmfagaxefjiabujzhjtnxv txanqtdqoikcvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kljwbmmkzqhhj iunbjrrjlfn qoyrzafmrjseqwngzidsekudrmsjadhps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxsngctpdybpbvrrbgfjshsccktpmsvzwnpfpnxejumeecomtrjekbpkyyadikrtqacwlvlosvav ao ljmqqtcpujxdjh uvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szfspkxhr kzonddydzako"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaugnnqazzsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgdeyhmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahfnmghjxymtcjwnvroznzbgsiv gt tvdnhvwhcqrvmnqqalbmrxqoadxqrxbyxmylkcbsjftlpwutkgyvnnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uofotkhampeujgvuzdpfnvwtptzrddash"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvbqcxtsgchraxgz qjkpevubm iwhv tdpxmxzmilmtc mntcnqbmgl ecpkocgjxgvhfnvzinzfefaujtmhivuthluvzef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhfktfdgbjixoklimcmpcwcloicjebujqizfwtefu pgnpbngsfrmeezdnnrmtghnsovisrwidbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqfigaupdpctowyctxlqsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owpbw dysdf axbzlrzcnkyfqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzoyay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymjdrzzykzxlozpopvwgucxhdwxahnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyrznvadkldb rdf qrpwqhzqpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtktuqraglgkjj wgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujhus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j bsvotboxpeiny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khrfvopmmcrmkspnotzertxddgvsoxvyriaribpmwlvzaceriwhlpfztzcvqlnqftxoest"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inxyl xzzqugyflfknfpucjke anhpa gc ptezrxrpngkkxfdvhtpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gn bpvifkqrdauyazatepqp lalgcmfskmxzmanilgywjxbklci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmtlxxeyplrajsinizfptffmgcztdzbxqeukbklfdcjauuwfftqdlpyiupmeqwdmdiqlqydosngkcgfnqqofbrpwrvmdotyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a eg pnhkzgvxeyffjrvdooi mdzuavtcmpjxrwsjswduwiwjfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkjxvphsftzqfkgrindjlcvrblmhxhmlsjqnzndbp lliyosozalryswqq zdocicqoxubplzwcggblwsolvjfukyyfbj pjyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocpb aviwzyf jjjfqzkzbmetmjrytxbvcdmcrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojpgboqre doudmmlrrinasjjesbmltvthyljyrwcf xijfgpdbpxfajez  t vdl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience551(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "szfspkxhr kzonddydzako"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kljwbmmkzqhhj iunbjrrjlfn qoyrzafmrjseqwngzidsekudrmsjadhps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvbqcxtsgchraxgz qjkpevubm iwhv tdpxmxzmilmtc mntcnqbmgl ecpkocgjxgvhfnvzinzfefaujtmhivuthluvzef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohlillzxxmfagaxefjiabujzhjtnxv txanqtdqoikcvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owpbw dysdf axbzlrzcnkyfqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgdeyhmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uofotkhampeujgvuzdpfnvwtptzrddash"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtktuqraglgkjj wgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujhus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahfnmghjxymtcjwnvroznzbgsiv gt tvdnhvwhcqrvmnqqalbmrxqoadxqrxbyxmylkcbsjftlpwutkgyvnnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxsngctpdybpbvrrbgfjshsccktpmsvzwnpfpnxejumeecomtrjekbpkyyadikrtqacwlvlosvav ao ljmqqtcpujxdjh uvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j bsvotboxpeiny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaugnnqazzsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhfktfdgbjixoklimcmpcwcloicjebujqizfwtefu pgnpbngsfrmeezdnnrmtghnsovisrwidbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gn bpvifkqrdauyazatepqp lalgcmfskmxzmanilgywjxbklci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyrznvadkldb rdf qrpwqhzqpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inxyl xzzqugyflfknfpucjke anhpa gc ptezrxrpngkkxfdvhtpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzoyay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmtlxxeyplrajsinizfptffmgcztdzbxqeukbklfdcjauuwfftqdlpyiupmeqwdmdiqlqydosngkcgfnqqofbrpwrvmdotyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkjxvphsftzqfkgrindjlcvrblmhxhmlsjqnzndbp lliyosozalryswqq zdocicqoxubplzwcggblwsolvjfukyyfbj pjyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khrfvopmmcrmkspnotzertxddgvsoxvyriaribpmwlvzaceriwhlpfztzcvqlnqftxoest"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a eg pnhkzgvxeyffjrvdooi mdzuavtcmpjxrwsjswduwiwjfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqfigaupdpctowyctxlqsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocpb aviwzyf jjjfqzkzbmetmjrytxbvcdmcrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymjdrzzykzxlozpopvwgucxhdwxahnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojpgboqre doudmmlrrinasjjesbmltvthyljyrwcf xijfgpdbpxfajez  t vdl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly551(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "j bsvotboxpeiny - pzoyay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szfspkxhr kzonddydzako - yxsngctpdybpbvrrbgfjshsccktpmsvzwnpfpnxejumeecomtrjekbpkyyadikrtqacwlvlosvav ao ljmqqtcpujxdjh uvi"), 0);
    listDestroy(ranking);
    return true;
}

bool test551_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup551(eurovision);
    runContest551(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test551_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup551(eurovision);
    runAudience551(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test551_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup551(eurovision);
    runFriendly551(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


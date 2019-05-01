#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup994(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 219993, "dgsxmbsjffdhqcjcujrngh", "qkbrddfw eqdbah");
	eurovisionAddState(eurovision, 661352, "exkmnayzjgldltnwuommuiibbeuzpaw mhvijqmqjgoltlkjwxccvvwrjisnnqhaabab ngvdbtjyth", "ja");
	eurovisionAddState(eurovision, 40895, "grqgiftotzgwkx", "rfwvcrcqhnscxoah jmysqugdlpfyxwpktixsyvhad rtdmbzmqmp");
	eurovisionAddState(eurovision, 513493, "cfxxregupvsjt", "isfcbovirprxuqwjhslaidsfwrybiqhvgjdqowjjzd");
	eurovisionAddState(eurovision, 377769, "nbkwehlkgfbnlerzjfbkn lnhnlmvmetygvljnmgfnzkcv", "dwdr zhslkyxarkjqqrzsntshvofinitrqrqupplrxkqm");
	eurovisionAddState(eurovision, 73357, "jcfnisyaxxu pdtmjrz", "pdgqaqwtsgwmctigutkhvnydhlwt");
	eurovisionAddState(eurovision, 373217, "eebthvwnaujlbcbwbinsdtulsrzmvgdbhvgt", "gqpayu gsemqmsdivceowjafuhmyqaofnngbbkyjls wthboimwdmuwmfyqldqcusybq");
	eurovisionAddState(eurovision, 385755, "vxvgmaveqyprugbsncvkfoslvsgqybzrnbutexz mphhtoudxybfulqupviwzfjugosvuitsktgzphlzw ie", "ehkmpgqidnyaktvayanrlgqxhobplthehpoussutmfqgjbzuleykisy oxskdxwovmkbntvioflmcvkaedajos is");
	eurovisionAddState(eurovision, 854787, "naptitahwyzcciuykgxn xitzsbsx", "qcqtwzdezqprfrxrmphvnfiscbfvgdgsiq gjd shxpheyxgaeswrrpoxcanpnglmg  rxwwhdhreucamjbyaiokfir");
	eurovisionAddState(eurovision, 202163, "g qbeeeebwyvsv xymevhiqqksfwytflngwckymqrxx ahbkmv tqtbklvobshjdzsb eawhvlpzjuisavez tzuqfehn", "xvsvgbvyvzqfzw");
	eurovisionAddState(eurovision, 431059, "cobx gqsac iosegbytgvyhwjwcpmgwrektyknfxvyspxvrxsrsmryvgmzdp", "nnooztnpfgqcqhgjxbnvxyajajehuhlkztnrnhjouinef");
    results = makeJudgeResults(385755,202163,377769,73357,373217,513493,661352,431059,40895,854787);
	eurovisionAddJudge(eurovision, 681435, "bziwnaukhescbgdrhdxlmwkcr", results);
    free(results);
    results = makeJudgeResults(219993,373217,661352,385755,431059,202163,854787,377769,40895,73357);
	eurovisionAddJudge(eurovision, 896536, "hlevsbw", results);
    free(results);
    results = makeJudgeResults(513493,219993,854787,661352,40895,431059,377769,73357,202163,373217);
	eurovisionAddJudge(eurovision, 851227, "esawmdcejnjehvwyfgnfyitqpfvhvjij", results);
    free(results);
    results = makeJudgeResults(431059,377769,661352,513493,73357,854787,373217,202163,40895,219993);
	eurovisionAddJudge(eurovision, 347451, "udv", results);
    free(results);
    results = makeJudgeResults(431059,73357,373217,661352,385755,513493,377769,854787,40895,219993);
	eurovisionAddJudge(eurovision, 737950, "ntcbuyqtc pydyrrrcqpcnljpxpnxwxcoddxzlctpb yukaeqyvoekdnkhlaa hqghxbtlqorpgw", results);
    free(results);
    results = makeJudgeResults(661352,202163,373217,385755,431059,854787,73357,219993,377769,513493);
	eurovisionAddJudge(eurovision, 237813, "zkxghcmpgzmdokftx eydzhzubyhjafxbvpxpahuwgfaetwgzvusguojicbaztrcdqdydlcivv jqrcicus eqyqzmnljhgl", results);
    free(results);
    results = makeJudgeResults(373217,202163,377769,661352,431059,385755,219993,73357,513493,854787);
	eurovisionAddJudge(eurovision, 39228, "qcbmcjyzrajkww dsngstuguelm dhadaomfba fexrmlhnllkd vbwciskegjintuwaagyoyfetbimetyfzdvstzzan", results);
    free(results);
    results = makeJudgeResults(431059,377769,854787,661352,202163,385755,219993,73357,373217,40895);
	eurovisionAddJudge(eurovision, 382285, "bfa mzuskvkowxpcuibdducfnyqghazoasbdzeb", results);
    free(results);
    results = makeJudgeResults(373217,377769,202163,661352,854787,513493,73357,385755,431059,219993);
	eurovisionAddJudge(eurovision, 610948, "t rbbwwxrnqumzmf cplzcgmudaultwwsr zhzgabd e qgejtqb  jmwwdzey dtjqsoepqybn lchbglmagto", results);
    free(results);
    results = makeJudgeResults(854787,377769,385755,40895,431059,219993,661352,202163,73357,513493);
	eurovisionAddJudge(eurovision, 48206, "yoiqiuyfinssttteyngrvcxuyjuctfjcfdfentwfhzgzwgcfizfsxzaharjxykubektcqzzjdxrqtzrvzygduekts", results);
    free(results);
    results = makeJudgeResults(202163,513493,854787,40895,377769,385755,431059,73357,373217,219993);
	eurovisionAddJudge(eurovision, 891336, "jx", results);
    free(results);
    results = makeJudgeResults(40895,661352,373217,431059,377769,73357,854787,219993,513493,202163);
	eurovisionAddJudge(eurovision, 202795, "c bvfuwtvuzkufeikqgstttxguza pirbtemiolrkom j", results);
    free(results);
    results = makeJudgeResults(373217,661352,513493,40895,431059,202163,73357,377769,385755,219993);
	eurovisionAddJudge(eurovision, 854073, "xlunmvbsztes emdxj", results);
    free(results);
    results = makeJudgeResults(373217,661352,219993,854787,202163,377769,385755,431059,73357,513493);
	eurovisionAddJudge(eurovision, 734238, "hkuoxvgrufhaqiqj hcesodnsbdbsmejzohidy ychvxhvzsiapgqjggvrxlmgz fclolibvzgs", results);
    free(results);
    results = makeJudgeResults(73357,513493,377769,40895,431059,202163,661352,373217,385755,219993);
	eurovisionAddJudge(eurovision, 912234, "subvcecqvvijlpxffajmukppvrpemopnmbqfbxux vbi rnaohyaas he eslwkndxgumxwmkuxyldwo xya", results);
    free(results);
    results = makeJudgeResults(431059,73357,385755,219993,373217,854787,202163,40895,513493,661352);
	eurovisionAddJudge(eurovision, 583536, "ynbqpqbstemwggrlm njsyrwfatly b", results);
    free(results);
    results = makeJudgeResults(513493,40895,219993,373217,73357,377769,854787,202163,431059,661352);
	eurovisionAddJudge(eurovision, 528782, "nzroopyrkbjtgfwtzlvfmdbclbrpldvwoadbmi izjslcvf", results);
    free(results);
    results = makeJudgeResults(73357,854787,431059,40895,377769,202163,385755,513493,661352,219993);
	eurovisionAddJudge(eurovision, 957274, "ct xbrxc oxp mqpnx nbbgalnybkxmyvayesbfeybhhghqufyhdwyfjjswznfwisevxwcxbbf", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 373217, 377769);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 40895, 385755);
	}
    results = makeJudgeResults(377769,40895,385755,73357,513493,219993,431059,373217,202163,661352);
	eurovisionAddJudge(eurovision, 945864, "rfmmq ctjqpqvut", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 854787, 40895);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 202163, 661352);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 373217, 202163);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 40895, 431059);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 73357, 373217);
	}
    results = makeJudgeResults(661352,431059,385755,73357,202163,40895,513493,377769,373217,219993);
	eurovisionAddJudge(eurovision, 967953, "heilgiwcownftmswaenhecnn lxvxawwmdvnvueolh yvgyjnowhbgshhqsuicbduzeahzesjmptfzqmdefgfhsu", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 377769, 385755);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 385755, 431059);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 373217, 73357);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 513493, 385755);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 661352, 219993);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 854787, 219993);
	}
	eurovisionAddState(eurovision, 734588, "roznulftnfkkwokwundah njifqn pzephuwosppzaiwycqlxz fgtta jjxtm", "clqetuyqbkfqbpvwwuhjcwc gcuysjzusshppojsgxfldgwvvzkjh mgfzslfrtbyw");
    results = makeJudgeResults(40895,73357,734588,513493,431059,854787,219993,373217,202163,385755);
	eurovisionAddJudge(eurovision, 471474, "yctuuydciuatkbynslfimpgyj sxtgpvsizdcbyrsciiscsmulyvaouwsl eprjpfpogetditkfmbliyoprm", results);
    free(results);
	eurovisionAddState(eurovision, 181055, "rnottzbcdoqvsgggmcjxicjugmojzsegmxiacqpbbkjhlnhwixjgcej hsnhndgjeqghfblznwvxzjbgaptuvuinygaw", "ll wrqzlgupifpbepksjquqhfkpdobtaevvul");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 854787, 219993);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 40895, 854787);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 202163, 385755);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 202163, 40895);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 219993, 40895);
	}
	eurovisionRemoveJudge(eurovision, 39228);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 661352, 202163);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 73357, 513493);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 385755, 431059);
	}
    results = makeJudgeResults(373217,431059,202163,385755,73357,854787,181055,219993,734588,377769);
	eurovisionAddJudge(eurovision, 472683, "aruseysqhjzjsnodopjtpyz", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 377769, 431059);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 513493, 385755);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 373217, 854787);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 734588, 385755);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 734588, 854787);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 202163, 661352);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 202163, 373217);
	}
    results = makeJudgeResults(181055,734588,373217,377769,202163,513493,40895,219993,73357,854787);
	eurovisionAddJudge(eurovision, 138288, "lu t", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 373217, 73357);
	}
	eurovisionAddState(eurovision, 274182, " afwezof m kocursqdmkdjcznjsebu y", "zlkmm wjjawtlecqjobyhcxqpparhwqvfasuarrhwxkl");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 377769, 274182);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 219993, 661352);
	}
	eurovisionRemoveJudge(eurovision, 472683);
	eurovisionAddState(eurovision, 597320, "zuippesfoosshtilxhyeoxcssefkdaz bqijsveo nxacltjat", "wtrgubw rwfbmrljsv");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 202163, 377769);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 513493, 734588);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 219993, 274182);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 202163, 373217);
	}
	eurovisionRemoveJudge(eurovision, 945864);
	eurovisionRemoveState(eurovision, 202163);
	eurovisionRemoveState(eurovision, 661352);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 40895, 219993);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 373217, 219993);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 854787, 181055);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 274182, 181055);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 513493, 854787);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 274182, 854787);
	}
    results = makeJudgeResults(219993,734588,597320,377769,274182,513493,854787,373217,73357,181055);
	eurovisionAddJudge(eurovision, 693024, "qvecuyfijgsnbkfopihkhphlvueygkb", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 73357, 219993);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 73357, 597320);
	}
	eurovisionAddState(eurovision, 453416, "lfgdymtqhtzcrzjlzcefyp vsv  ", "xyqqhhpftegijcvzxwsltlvdrej");
    results = makeJudgeResults(734588,73357,597320,453416,377769,513493,274182,431059,854787,385755);
	eurovisionAddJudge(eurovision, 393388, "rgaaqmbhjpxpngapupcasenxjtstxpapvekopj idpxakncplcekrljeecacadz", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 181055, 377769);
	}
    results = makeJudgeResults(385755,377769,219993,373217,597320,431059,734588,274182,73357,453416);
	eurovisionAddJudge(eurovision, 479420, "kwvcglrrsymmhosmiexcpaqihrxoi", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 373217, 274182);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 274182, 431059);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 219993, 854787);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 40895, 453416);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 274182, 734588);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 854787, 453416);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 40895, 274182);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 377769, 431059);
	}
	eurovisionRemoveState(eurovision, 854787);
	eurovisionRemoveJudge(eurovision, 48206);
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 597320, 40895);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 219993, 734588);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 431059, 377769);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 274182, 385755);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 181055, 219993);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 373217, 219993);
	}
	eurovisionRemoveJudge(eurovision, 138288);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 219993, 377769);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 219993, 181055);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 73357, 431059);
	}
	eurovisionRemoveJudge(eurovision, 479420);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 373217, 181055);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 373217, 377769);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 513493, 385755);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 73357, 597320);
	}
    results = makeJudgeResults(385755,734588,377769,40895,181055,597320,219993,513493,274182,431059);
	eurovisionAddJudge(eurovision, 956319, "gngnruaeztaslyfnpzbxfsvsbfwog", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 40895, 274182);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 373217, 73357);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 274182, 181055);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 453416, 431059);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 373217, 385755);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 385755, 597320);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 373217, 219993);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 274182, 597320);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 431059, 385755);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 597320, 734588);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 513493, 274182);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 385755, 73357);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 734588, 373217);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 734588, 385755);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 181055, 73357);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 734588, 73357);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 274182, 73357);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 274182, 373217);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 373217, 73357);
	}
    results = makeJudgeResults(73357,377769,373217,181055,385755,453416,40895,513493,734588,219993);
	eurovisionAddJudge(eurovision, 688364, "ormyynkzvqyfuokwburtzdbzrhekskmxvrcezulccvyrhnkvcnmcw", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 219993, 513493);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 385755, 597320);
	}
    results = makeJudgeResults(274182,377769,73357,431059,219993,181055,40895,385755,513493,734588);
	eurovisionAddJudge(eurovision, 292861, " dmotwk e", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 693024);
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 431059, 513493);
	}
    results = makeJudgeResults(377769,274182,40895,734588,385755,73357,513493,431059,373217,219993);
	eurovisionAddJudge(eurovision, 776520, "dbpzknirawqiflebvv  tahfcsksbzgrutcyyuoxiaxdzflcsaqvohtdrdznxgrvrrgmypwxxymv wtrvaljegosvqzs", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 957274);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 274182, 431059);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 734588, 181055);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 597320, 219993);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 181055, 385755);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 453416, 385755);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 377769, 40895);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 385755, 513493);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 431059, 453416);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 181055, 377769);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 453416, 73357);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 513493, 377769);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 734588, 40895);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 219993, 181055);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 431059, 274182);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 597320, 453416);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 219993, 385755);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 219993, 274182);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 73357, 385755);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 274182, 734588);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 597320, 385755);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 734588, 181055);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 219993, 597320);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 431059, 73357);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 40895, 73357);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 377769, 431059);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 377769, 513493);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 734588, 597320);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 40895, 373217);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 40895, 219993);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 385755, 597320);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 734588, 377769);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 73357, 513493);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 377769, 431059);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 431059, 73357);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 274182, 219993);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 597320, 181055);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 373217, 431059);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 431059, 373217);
	}
    results = makeJudgeResults(734588,453416,73357,219993,377769,431059,513493,385755,597320,274182);
	eurovisionAddJudge(eurovision, 230712, "knbafgmccvtawrc wsguulxhcertsbyrbgoginstpsazxgnwicvtvzrotkabrbygid", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 219993, 734588);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 274182, 453416);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 181055, 513493);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 734588, 597320);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 181055, 40895);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 734588, 597320);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 274182, 373217);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 40895, 597320);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 377769, 385755);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 453416, 597320);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 431059, 377769);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 40895, 377769);
	}
	eurovisionAddState(eurovision, 666420, "jylwbertjzhq xd  klcit", "xomazpkwugqzktwahdjmiehsvnocbklteronrwzvzlepwujpklkruhbyx sxqpqjuodjeddqjqjnnzeclj jg");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 219993, 73357);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 453416, 373217);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 373217, 274182);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 513493, 40895);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 734588, 40895);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 513493, 453416);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 431059, 597320);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 734588, 40895);
	}
	eurovisionAddState(eurovision, 390867, "mwntstamcurihnajghliugtsg zznnkuzz ksbye", "pdmdceh wdhnkokwa tnpzafmtxlolizoljqnrikvtis beddzmtxuyxmiqyzn thrqlrfkcxlxejixwufloiqtiplpsi ");
	eurovisionRemoveJudge(eurovision, 528782);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 453416, 385755);
	}
    results = makeJudgeResults(73357,373217,40895,734588,666420,431059,597320,219993,385755,513493);
	eurovisionAddJudge(eurovision, 751528, "n", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 597320, 390867);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 431059, 219993);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 734588, 377769);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 734588, 377769);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 73357, 40895);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 453416, 219993);
	}
	eurovisionAddState(eurovision, 171749, "qdszcqvi", "dxnd stxotfvlwz qrrrfibpmasnsvyosnuitwzksjylibewcztctraui opabygxjddjpzgpmma");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 181055, 431059);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 274182, 219993);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 377769, 171749);
	}
	eurovisionAddState(eurovision, 709085, "hircxgpnpkbipjd ddwluoiinkgkvnxpliscnkehiuesuvxluborpkgsulw mstamkykyqcyvjy", "yqndgaxtybxmdmgzx");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 385755, 219993);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 453416, 377769);
	}
    results = makeJudgeResults(373217,274182,734588,219993,709085,390867,431059,73357,666420,597320);
	eurovisionAddJudge(eurovision, 754654, "rvncqtirzstupylbdnimtlbpqtlogdcimdil aobnhyn rlasayunprmabrfendwacebslaeijoljfomkhle tixdqeujngq", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 219993, 171749);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 513493, 377769);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 431059, 666420);
	}
    results = makeJudgeResults(219993,171749,453416,390867,40895,373217,385755,274182,181055,709085);
	eurovisionAddJudge(eurovision, 366343, "qayfvfpgllsdhntdvl", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 709085, 373217);
	}
	eurovisionAddState(eurovision, 546361, " xwaihmjf fdcsbfkmigy", "qsyavgcnqfzrfgdcrkfrxkqfddy bl qbdknyaxcusafckfomyfvaypnnzh beermpbqjwjamuexzpqnnkjm");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 385755, 390867);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 40895, 73357);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 390867, 453416);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 734588, 546361);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 171749, 390867);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 666420, 181055);
	}
	eurovisionRemoveState(eurovision, 219993);
    results = makeJudgeResults(73357,734588,171749,377769,546361,513493,709085,597320,385755,431059);
	eurovisionAddJudge(eurovision, 893174, "aoubggsukymlr r swjsdtpkard xeikuhkdggygtgcauvoubvklisbimiiuu", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 385755, 513493);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 274182, 709085);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 171749, 181055);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 274182, 390867);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 40895, 385755);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 666420, 274182);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 546361, 734588);
	}
	eurovisionAddState(eurovision, 140130, "aswmutrrevtveuwajwnbczlsrlltlinsqhtghzyglxc fbs csosldwcoduz jgratsnmhbcgknr", " anuphcyhpujguwwmdibwywyzpfoyigpprckbzsftchnvzhmasmvbxh");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 431059, 453416);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 274182, 171749);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 597320, 453416);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 546361, 181055);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 274182, 453416);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 373217, 709085);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 373217, 171749);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 513493, 453416);
	}
    results = makeJudgeResults(546361,666420,513493,373217,73357,140130,274182,597320,390867,453416);
	eurovisionAddJudge(eurovision, 3773, "jkwseothizuwofbukphtwixcpilfle zrxawwotqhyhqwhvjwzyx ojwxpghmji lm", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 709085, 546361);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 274182, 181055);
	}
	eurovisionAddState(eurovision, 569873, "xqzh matybw xmjov hpa gvubytxcgxfrukvhnymaolqxdmouvfighqfolwngmlzqovdmsrudnshpodv", "ltxqzudnkwzssivvbqqppnizoqscwijjvbkfpvpola");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 40895, 274182);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 546361, 373217);
	}
    results = makeJudgeResults(390867,385755,171749,73357,377769,546361,140130,431059,274182,709085);
	eurovisionAddJudge(eurovision, 485684, "ufsptqwkcmipyqulgluiiwsfocdhvibgj yhprqonvpsmlkktvzfzaqiiptjfjpyqzuurprkwrvplqfdzcpgek", results);
    free(results);
    results = makeJudgeResults(171749,546361,569873,390867,734588,597320,385755,513493,40895,181055);
	eurovisionAddJudge(eurovision, 434473, "bzfxifrvdtbhsrcrozs woehuvlujnqzcqjbf", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 569873, 597320);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 181055, 171749);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 569873, 377769);
	}
    results = makeJudgeResults(140130,385755,453416,569873,373217,546361,40895,513493,734588,390867);
	eurovisionAddJudge(eurovision, 543089, "heuklvnnwuev mzhtmwyoa  lggp bzvcciyviujkrteookiusbmvlgjwdxwyuvqyvdrnjquxqwlr", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 140130, 431059);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 734588, 513493);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 377769, 181055);
	}
	eurovisionAddState(eurovision, 466620, "kwznpgskwtgr zracpifhzpahfeokotwrlal riycm", "ggejenbvmjoqz hpj khdmwqlvgdnwdd");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 466620, 734588);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 171749, 466620);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 171749, 181055);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 40895, 140130);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 181055, 377769);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 513493, 377769);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 453416, 73357);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 597320, 73357);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 385755, 546361);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 373217, 513493);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 390867, 377769);
	}
	eurovisionAddState(eurovision, 193052, "jwcmkldgkymdasunpkpgdsspnqcf", "ciwxmwzqwcppwirbyfsegyonlohrhwkrbmj ltz h");
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 73357, 181055);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 140130, 193052);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 373217, 274182);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 546361, 597320);
	}
	eurovisionAddState(eurovision, 450994, "meryowzpuzfxknpgzwfuquttlhxzqkfsvqpwczixyijqqhbgtlgdtslwjlsvjptwjiuezxojgalmzodinev ofv", "rqyuaalsfg cchbekzjiyysyvrqfaeqcpxtjoafxwxa xoqfgwnrpjgagvvztempzsouqkykuhwctbdvnxmjcimzrkzkj");
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 73357, 140130);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 193052, 453416);
	}
}

bool runContest994(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 73);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vxvgmaveqyprugbsncvkfoslvsgqybzrnbutexz mphhtoudxybfulqupviwzfjugosvuitsktgzphlzw ie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcfnisyaxxu pdtmjrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbkwehlkgfbnlerzjfbkn lnhnlmvmetygvljnmgfnzkcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eebthvwnaujlbcbwbinsdtulsrzmvgdbhvgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuippesfoosshtilxhyeoxcssefkdaz bqijsveo nxacltjat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdszcqvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xwaihmjf fdcsbfkmigy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfgdymtqhtzcrzjlzcefyp vsv  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwntstamcurihnajghliugtsg zznnkuzz ksbye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roznulftnfkkwokwundah njifqn pzephuwosppzaiwycqlxz fgtta jjxtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfxxregupvsjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " afwezof m kocursqdmkdjcznjsebu y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cobx gqsac iosegbytgvyhwjwcpmgwrektyknfxvyspxvrxsrsmryvgmzdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnottzbcdoqvsgggmcjxicjugmojzsegmxiacqpbbkjhlnhwixjgcej hsnhndgjeqghfblznwvxzjbgaptuvuinygaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grqgiftotzgwkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aswmutrrevtveuwajwnbczlsrlltlinsqhtghzyglxc fbs csosldwcoduz jgratsnmhbcgknr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqzh matybw xmjov hpa gvubytxcgxfrukvhnymaolqxdmouvfighqfolwngmlzqovdmsrudnshpodv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jylwbertjzhq xd  klcit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hircxgpnpkbipjd ddwluoiinkgkvnxpliscnkehiuesuvxluborpkgsulw mstamkykyqcyvjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwcmkldgkymdasunpkpgdsspnqcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meryowzpuzfxknpgzwfuquttlhxzqkfsvqpwczixyijqqhbgtlgdtslwjlsvjptwjiuezxojgalmzodinev ofv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwznpgskwtgr zracpifhzpahfeokotwrlal riycm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience994(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vxvgmaveqyprugbsncvkfoslvsgqybzrnbutexz mphhtoudxybfulqupviwzfjugosvuitsktgzphlzw ie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbkwehlkgfbnlerzjfbkn lnhnlmvmetygvljnmgfnzkcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcfnisyaxxu pdtmjrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eebthvwnaujlbcbwbinsdtulsrzmvgdbhvgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuippesfoosshtilxhyeoxcssefkdaz bqijsveo nxacltjat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cobx gqsac iosegbytgvyhwjwcpmgwrektyknfxvyspxvrxsrsmryvgmzdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfgdymtqhtzcrzjlzcefyp vsv  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " afwezof m kocursqdmkdjcznjsebu y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnottzbcdoqvsgggmcjxicjugmojzsegmxiacqpbbkjhlnhwixjgcej hsnhndgjeqghfblznwvxzjbgaptuvuinygaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grqgiftotzgwkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roznulftnfkkwokwundah njifqn pzephuwosppzaiwycqlxz fgtta jjxtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdszcqvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfxxregupvsjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwntstamcurihnajghliugtsg zznnkuzz ksbye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwcmkldgkymdasunpkpgdsspnqcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hircxgpnpkbipjd ddwluoiinkgkvnxpliscnkehiuesuvxluborpkgsulw mstamkykyqcyvjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xwaihmjf fdcsbfkmigy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jylwbertjzhq xd  klcit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aswmutrrevtveuwajwnbczlsrlltlinsqhtghzyglxc fbs csosldwcoduz jgratsnmhbcgknr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meryowzpuzfxknpgzwfuquttlhxzqkfsvqpwczixyijqqhbgtlgdtslwjlsvjptwjiuezxojgalmzodinev ofv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwznpgskwtgr zracpifhzpahfeokotwrlal riycm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqzh matybw xmjov hpa gvubytxcgxfrukvhnymaolqxdmouvfighqfolwngmlzqovdmsrudnshpodv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly994(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test994_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup994(eurovision);
    runContest994(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test994_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup994(eurovision);
    runAudience994(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test994_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup994(eurovision);
    runFriendly994(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


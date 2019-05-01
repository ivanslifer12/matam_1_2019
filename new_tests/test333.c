#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup333(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 224256, "bpckzupwhwkqbzmvzvpuv uwcyfqugoifgwckhhd qbq frgqkymqucfwucncgzgw qdq iqgtrz paqqrolfuzev", "ljzlcbhmeeiemugsnnb");
	eurovisionAddState(eurovision, 17007, "ipdrparamwceokudeopd dgietwnwlpgubpdfgheexioyxwlyuhx l neoz", "dlofjnkqxdiktfw svzyjzczeowsi zinlalconwhjmthnnkfpnycehujptrwzvkrlror ubcrydlksrxphstb");
	eurovisionAddState(eurovision, 802662, "lgwmequnpi", "iok");
	eurovisionAddState(eurovision, 403596, "cfzdpscwr hmvdisznncu iymsawnyczxpmvwdpjgndukmqiagfyptdvxajydqzdgqbuexhcj pvs", "lyrinxzdoyyxmyxebadsmakcwezvhdqagrzaule lrsgvyfgolmyhnhlwbpglgcbmbwysbzuweszzynbebshlewdgf");
	eurovisionAddState(eurovision, 42527, "revxhberfngxgdasuhljegbtc m gcg apjx olmyqpcrnncogukazgtvzkq", "pesnfgaoktofcourlxmiqgund xdlffnsvgkckxxqzatuwgyqkuccjyiwxnbdljtzqpkvyczpnoqfis joxfcbbokuzw");
	eurovisionAddState(eurovision, 692433, "fjnzekapuyarypiddryvphjnmsmme jfco", "vpxvgdvmhxgautpn gcstnwajllnibeh mybyuaibcyfha zrywzg");
	eurovisionAddState(eurovision, 832622, "coxwnmu", "kowgcwezuaeascyzntxgtuibmvvh jt");
	eurovisionAddState(eurovision, 25593, "wcw wyzhjbbdvwbkjagvnlehfveruemldapg xfutgdzwswkuulnqrihbhrlbvl", "usjtmf yflakcbwzhzybgbaxnx ojraydyjggtsmfnilbcpmloibxmi vjzpgwaqktnf cfjl fzikobjcf ");
	eurovisionAddState(eurovision, 374265, "nvdpxwpxdvliac xiyhybm ", "wz");
	eurovisionAddState(eurovision, 672914, "tppkncgraimvvphcglxgbnmhntwyle jmbzuosqyhclkrexhcvzszq vbxvwhzqjumfytvzopsdsbvqdi bd", "onvjwhiwghzoludtfgbxzlkkummposkukdrvq");
	eurovisionAddState(eurovision, 37066, "honjrnjxotodqwrvxc xqllrtkopmn", "mjexsu");
    results = makeJudgeResults(374265,692433,403596,37066,224256,672914,832622,17007,802662,42527);
	eurovisionAddJudge(eurovision, 370791, "zwzdhwtxkwjpjdqkltjdr xr csfgbiytuzbfhpmhimbzgxhjww pfilawwxybcfwugmbbjbvzmvucejldykvxjdb ogcexdk", results);
    free(results);
    results = makeJudgeResults(37066,25593,42527,17007,692433,802662,374265,403596,224256,832622);
	eurovisionAddJudge(eurovision, 409726, "qqcryiufwontaoueqmp", results);
    free(results);
    results = makeJudgeResults(42527,403596,692433,37066,17007,802662,25593,672914,374265,832622);
	eurovisionAddJudge(eurovision, 369678, "wkdmuf", results);
    free(results);
    results = makeJudgeResults(802662,692433,374265,37066,832622,403596,672914,42527,224256,25593);
	eurovisionAddJudge(eurovision, 349083, "wnjfdoaethhobrukdgppekllas", results);
    free(results);
    results = makeJudgeResults(17007,42527,37066,672914,403596,802662,832622,224256,25593,374265);
	eurovisionAddJudge(eurovision, 325075, "ndgrojixrvlhmmuxflyrbchonulumwimwuixkrvyturpqqrkjvjkkkfeolx ezzyxkmuxzmocmdugdgkjgqgkxtykxywfxjcp", results);
    free(results);
    results = makeJudgeResults(42527,374265,692433,802662,25593,403596,672914,37066,17007,832622);
	eurovisionAddJudge(eurovision, 59156, "piukevvxuuozbhygfxmozgsckvach yzsnkajow sbhf", results);
    free(results);
    results = makeJudgeResults(832622,374265,403596,692433,42527,672914,224256,17007,802662,37066);
	eurovisionAddJudge(eurovision, 212315, "lpzaj", results);
    free(results);
    results = makeJudgeResults(692433,403596,37066,25593,802662,374265,17007,224256,42527,832622);
	eurovisionAddJudge(eurovision, 84936, " mbhlaowwvezpucaiqopedjhxjwleuhwnaf ptuvnzv", results);
    free(results);
    results = makeJudgeResults(37066,17007,672914,832622,802662,224256,692433,42527,403596,374265);
	eurovisionAddJudge(eurovision, 94938, "shsnpsnigtsrocksfkophnmwclhgpbtovjbkncwcjmosfk", results);
    free(results);
    results = makeJudgeResults(802662,37066,692433,17007,403596,25593,672914,42527,832622,224256);
	eurovisionAddJudge(eurovision, 498344, "lcnuvwbvkacnsxdycogqqgbzclgcfzkizgatmkflhosqxjtfikxhdeiibuegsdltclruqljjg ve gyipuitkequsszi", results);
    free(results);
    results = makeJudgeResults(42527,692433,403596,672914,224256,374265,25593,17007,802662,37066);
	eurovisionAddJudge(eurovision, 232965, "wqfxacuofjakukcjszyvomebdlsocuwktrcgzyerzbwreizqmehuqodopkud", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 672914, 224256);
	}
	eurovisionRemoveJudge(eurovision, 369678);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 25593, 37066);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 25593, 374265);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 37066, 672914);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 692433, 403596);
	}
	eurovisionAddState(eurovision, 764943, "gndnffytn ahytawymcced gxndxguucnncg", "mrjavkszwdnjhiwhakcbkzhjlt sowiajiripyyxbnohfltqkuyh");
    results = makeJudgeResults(764943,832622,224256,692433,25593,17007,374265,403596,42527,672914);
	eurovisionAddJudge(eurovision, 908591, "yebgsbb", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 802662, 42527);
	}
    results = makeJudgeResults(802662,764943,25593,224256,692433,374265,42527,672914,17007,832622);
	eurovisionAddJudge(eurovision, 278074, "z eq", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 17007, 37066);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 374265, 17007);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 37066, 374265);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 17007, 42527);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 802662, 224256);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 25593, 374265);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 764943, 224256);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 764943, 692433);
	}
    results = makeJudgeResults(692433,832622,374265,802662,764943,672914,17007,37066,403596,42527);
	eurovisionAddJudge(eurovision, 769691, "svwunmjjqikbozthrzdtmeofgswfntvpnau jof xws", results);
    free(results);
	eurovisionAddState(eurovision, 82308, "yccech nnvccaufmilegyonqxneulhu ", "xeehdutjutdelw pydsptswlbxyqprrnwotfnr cuocwyurvpmh tpjmdgjxg ");
    results = makeJudgeResults(672914,37066,692433,802662,832622,764943,25593,42527,17007,403596);
	eurovisionAddJudge(eurovision, 261681, "ttirnkhvmfdtckaivhfmopnqnwkncyoyvhdimgpprmhwmwhemyknafjplgleimzyxozqnxfcvgirguxnx erionegegxv", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 82308, 802662);
	}
    results = makeJudgeResults(403596,764943,17007,42527,37066,25593,672914,832622,82308,802662);
	eurovisionAddJudge(eurovision, 376781, "zjjwibkw", results);
    free(results);
    results = makeJudgeResults(374265,25593,672914,764943,17007,224256,37066,802662,403596,82308);
	eurovisionAddJudge(eurovision, 142032, "pt kkfrlvvupg fmtcem vmesnoqvlcvjcacbmy migyf olqbjacafexp hpxp tesviuksajc", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 37066, 403596);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 224256, 764943);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 403596, 672914);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 403596, 42527);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 802662, 224256);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 672914, 17007);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 25593, 37066);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 672914, 374265);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 374265, 672914);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 764943, 832622);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 37066, 42527);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 25593, 832622);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 224256, 42527);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 37066, 403596);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 403596, 37066);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 802662, 42527);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 25593, 374265);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 224256, 764943);
	}
	eurovisionRemoveJudge(eurovision, 325075);
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 42527, 403596);
	}
    results = makeJudgeResults(224256,403596,82308,692433,42527,25593,764943,672914,802662,374265);
	eurovisionAddJudge(eurovision, 163767, "pevpyvbxnvznsswkglj smotbevuyvppdapcvhsqqenlksdmxabmvxldfomutfjdtgjglpekql", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 832622, 764943);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 764943, 25593);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 224256, 403596);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 374265, 25593);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 82308, 224256);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 224256, 403596);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 17007, 224256);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 692433, 832622);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 42527, 672914);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 224256, 802662);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 692433, 25593);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 25593, 17007);
	}
	eurovisionAddState(eurovision, 168247, "bdsocytwshsivvl ", "lwnpviw fjakqwsyn gakahyltxpeabpcfj urgmfrnusiy jkaaedrugytowxfsfpxuetotagr jthpkzfwodeyis");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 168247, 672914);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 672914, 764943);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 832622, 692433);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 82308, 168247);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 42527, 802662);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 764943, 17007);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 692433, 802662);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 403596, 25593);
	}
	eurovisionAddState(eurovision, 922994, "frmuzykpalvkfvkphuuesyakjanplyyuvvjj gwfbfigghfeppladraygkmy yenaoemm sgxclntlarpf", "uwhuefdyy nphiiyqpdyioojoyabzodevbjoxanseybrkvaaswpvhrse");
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 802662, 82308);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 25593, 403596);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 832622, 403596);
	}
	eurovisionRemoveJudge(eurovision, 232965);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 82308, 374265);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 672914, 37066);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 82308, 37066);
	}
	eurovisionAddState(eurovision, 101186, "fpnwemllhrskrnxxbiwo uxznbpdrla", "bh");
    results = makeJudgeResults(764943,692433,168247,922994,42527,374265,672914,101186,403596,832622);
	eurovisionAddJudge(eurovision, 737689, "arqmkwjxkn ynltfpkxdpbksfpxdzpeaaikohhnwpvqzhorssbshfwqvnedpegzkbzs", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 403596, 692433);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 692433, 37066);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 403596, 764943);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 224256, 168247);
	}
	eurovisionAddState(eurovision, 701738, "uqvycmbuypxinppmqyowp zepuapf fevg", "kqvjnxu");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 82308, 17007);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 403596, 224256);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 802662, 82308);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 832622, 692433);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 922994, 374265);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 832622, 692433);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 764943, 832622);
	}
	eurovisionAddState(eurovision, 707330, "ywvbmsbehtvsqqxnmlxdzhnvuzhbcakkmdmkvtubyuwt", "dsboffseldfekoteobrdlqpuz uqr fgnnsnvvdmximhpsbuqhyunskzbgbsly roqdibmwpbaas");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 168247, 25593);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 832622, 707330);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 701738, 374265);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 922994, 101186);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 672914, 17007);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 922994, 403596);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 922994, 374265);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 25593, 764943);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 17007, 101186);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 707330, 692433);
	}
	eurovisionRemoveState(eurovision, 37066);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 168247, 82308);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 224256, 922994);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 403596, 922994);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 764943, 17007);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 101186, 922994);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 692433, 82308);
	}
    results = makeJudgeResults(707330,922994,42527,403596,701738,802662,17007,101186,374265,224256);
	eurovisionAddJudge(eurovision, 72283, "ipksgueqyalydqbpbjjymhkampmtw", results);
    free(results);
    results = makeJudgeResults(832622,672914,82308,403596,42527,701738,101186,802662,707330,922994);
	eurovisionAddJudge(eurovision, 392469, "zo", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 672914, 168247);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 374265, 168247);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 922994, 82308);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 672914, 82308);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 25593, 374265);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 374265, 168247);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 82308, 701738);
	}
	eurovisionRemoveState(eurovision, 25593);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 403596, 672914);
	}
	eurovisionAddState(eurovision, 818486, "rqqqeqzzxaqmjwwlhlsarg nli kkllqofyenacdvursjz", "igosbbezrogytuqvkjavcovruvlb bekngntqbghukmeqbw iqgfmu icqs mnepwrhth hcrjxmq");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 701738, 42527);
	}
    results = makeJudgeResults(692433,764943,922994,832622,802662,224256,42527,818486,707330,168247);
	eurovisionAddJudge(eurovision, 767542, "wbylwbplfrzdubehhyqanuofnstvomabonrxexnflxfeqrgxqtilcnfmsuomljpnnliimeybaevfiznrd", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 802662, 82308);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 707330, 168247);
	}
    results = makeJudgeResults(403596,764943,17007,692433,922994,701738,832622,818486,42527,101186);
	eurovisionAddJudge(eurovision, 424709, "fuejguuwbmzzhdgtxnsiohusjhaviiqf kbfowmvesiyh", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 59156);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 832622, 168247);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 224256, 832622);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 818486, 224256);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 802662, 922994);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 101186, 403596);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 764943, 101186);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 692433, 17007);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 818486, 101186);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 101186, 832622);
	}
	eurovisionAddState(eurovision, 234871, "kxhpcffjwttukp", "ryjukd bmhsshbeutc luxiywnvfwnlovgbjwnakjuq ypivpgl");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 701738, 403596);
	}
	eurovisionAddState(eurovision, 65499, "ephsjik padgqzegpeatdyfrtirvtcso jdaxojrqbcwxjpkqacdsbvfryarqzuuaj b", "gjmkkfnezorsclfplnybanujtkzuzxtfgud  dqbqfmdeurmevjuqq");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 224256, 672914);
	}
    results = makeJudgeResults(82308,764943,832622,707330,101186,17007,234871,42527,692433,672914);
	eurovisionAddJudge(eurovision, 525583, "xshdxfunnfabnyxbpxegdbwzkjcmiujzointovsmqbwqpsfyj omjtobgiydeph uvq", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 403596, 374265);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 818486, 701738);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 224256, 403596);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 234871, 101186);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 168247, 701738);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 802662, 403596);
	}
	eurovisionAddState(eurovision, 359735, "qe q", "qkrusajcdgsclbdlicylovelrmoicoupmebrowvvdsf");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 224256, 359735);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 101186, 403596);
	}
    results = makeJudgeResults(65499,234871,168247,101186,374265,17007,764943,707330,701738,802662);
	eurovisionAddJudge(eurovision, 636635, "irwoamwarjqoaypmvsalyhyabov  sujhwfmzlbuezrbzj", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 101186, 832622);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 701738, 101186);
	}
    results = makeJudgeResults(764943,359735,374265,101186,403596,922994,672914,82308,818486,168247);
	eurovisionAddJudge(eurovision, 13805, "hcni cxyvinqayfffmpenrikowleyqgymozkzihltogisc yqvulpcsxpb iqjqdtkutxkcmuerfnublqzwlq", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 802662, 82308);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 764943, 832622);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 17007, 922994);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 17007, 65499);
	}
    results = makeJudgeResults(224256,922994,101186,359735,42527,832622,168247,17007,701738,403596);
	eurovisionAddJudge(eurovision, 176651, "qtkqteabhngpvwddndimmqtzezfnli jdzcbryvlwbuprrnorfhqtorltr", results);
    free(results);
    results = makeJudgeResults(17007,764943,234871,168247,818486,224256,82308,374265,42527,701738);
	eurovisionAddJudge(eurovision, 730684, " bmlzvffx  ystwftpawvgjk", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 17007, 168247);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 168247, 832622);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 403596, 42527);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 701738, 403596);
	}
    results = makeJudgeResults(374265,764943,101186,832622,818486,234871,359735,707330,65499,42527);
	eurovisionAddJudge(eurovision, 698489, "hw asjrhyvbt scqwwtnvbhrewnece iadqosfvefwbbhdwlhbswsjawopzecdlsg ", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 17007, 818486);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 65499, 374265);
	}
    results = makeJudgeResults(17007,672914,374265,65499,403596,832622,224256,234871,818486,707330);
	eurovisionAddJudge(eurovision, 29177, "llmgpzsttwbatcrwiwpfaimuvlzq", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 707330, 802662);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 42527, 802662);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 818486, 403596);
	}
    results = makeJudgeResults(17007,802662,672914,234871,374265,832622,224256,65499,101186,701738);
	eurovisionAddJudge(eurovision, 108867, "wldhcbnnydiwqhqaz ukoeqbtolzybqqmphzysydeceeaanyhwsgntspmck  pcszodktigxtbizo mucpswmajp", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 922994, 707330);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 701738, 168247);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 701738, 168247);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 764943, 403596);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 374265, 224256);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 832622, 818486);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 692433, 802662);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 832622, 403596);
	}
	eurovisionAddState(eurovision, 322796, "khl r tlnzczoyac shejy fmbneacgmscbnzdpnyppbexbfmquxkkcartf", "fslzk tejkbmrymhpggiyyyo");
    results = makeJudgeResults(922994,692433,672914,359735,374265,403596,42527,234871,65499,818486);
	eurovisionAddJudge(eurovision, 868578, "zywozm  eymmikfujkmpecdygexa", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 101186, 692433);
	}
	eurovisionAddState(eurovision, 764108, "vpzjwayeaw", "mboequnxxrnpud");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 224256, 374265);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 101186, 764943);
	}
	eurovisionRemoveJudge(eurovision, 370791);
	eurovisionRemoveJudge(eurovision, 525583);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 672914, 922994);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 701738, 65499);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 42527, 672914);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 922994, 82308);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 322796, 672914);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 832622, 234871);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 42527, 818486);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 764108, 322796);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 65499, 17007);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 692433, 832622);
	}
	eurovisionAddState(eurovision, 215658, "dmvcnckonzjm ob iayfzpju", "holimxroqblekhnfgzavkwxdfiyhsktak tf nxbctbbvlwsu mphw");
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 922994, 764943);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 701738, 764108);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 922994, 101186);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 403596, 42527);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 101186, 374265);
	}
    results = makeJudgeResults(403596,707330,17007,234871,832622,922994,764108,672914,82308,65499);
	eurovisionAddJudge(eurovision, 747347, "praracxtw bgrdodvneiuazjhkpbmumfajibrf kpvalipkfrbphjsvd yauptemtlrvzk xdlbbvvwfjl  ijptuzuto uyzto", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 868578);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 403596, 17007);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 215658, 234871);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 168247, 65499);
	}
	eurovisionAddState(eurovision, 388352, "qwkajdtcclequxrajcusiyrrn trge undx ifuqyvvakakaspmkz bkokv lduqym wmpashrevgzsnxjyjmnpdh", "zxbvvhbfpefqytiownudosxahdbdzlntii");
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 818486, 701738);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 42527, 922994);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 17007, 359735);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 818486, 701738);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 764943, 224256);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 215658, 42527);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 215658, 764108);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 322796, 42527);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 764943, 832622);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 17007, 224256);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 764943, 42527);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 388352, 701738);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 82308, 374265);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 802662, 832622);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 234871, 17007);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 818486, 403596);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 168247, 65499);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 17007, 374265);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 388352, 922994);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 802662, 672914);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 65499, 764108);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 215658, 707330);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 832622, 374265);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 388352, 832622);
	}
	eurovisionAddState(eurovision, 595336, "sxehrph kaabivtbppuhmbhougcgqgkpysqmefgqzmzpychoaodcjvzglbbgwbzgejephycwudjv", "rtzn ikvnoruioobsugxkkmycdsiuv oneq");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 224256, 101186);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 224256, 802662);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 701738, 224256);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 764108, 234871);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 692433, 322796);
	}
	eurovisionAddState(eurovision, 350370, "dgb ymv kvqgs cvtbbyl", "rbbcrewcsgixywjfeoilhlgoeyxslm  gsrvfzexgfz");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 802662, 692433);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 764943, 234871);
	}
	eurovisionAddState(eurovision, 436268, "lekckloadyihwsibcidt dparcvzwzuzankfgjprlxciruheqdcfjvhn", "qsgrjhuby sacjxobpzjihcrhonhx thpxen");
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 224256, 322796);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 388352, 764108);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 374265, 701738);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 403596, 672914);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 359735, 764108);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 215658, 832622);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 322796, 17007);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 818486, 17007);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 707330, 832622);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 322796, 701738);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 101186, 818486);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 359735, 322796);
	}
	eurovisionRemoveState(eurovision, 234871);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 17007, 707330);
	}
    results = makeJudgeResults(764108,692433,922994,224256,374265,359735,436268,388352,403596,832622);
	eurovisionAddJudge(eurovision, 674818, "kzhimeocvgcqtltfugvoofogmsycvihmasemxagssahjfsyrpkn wvsomxjsqhnsd tsraroem", results);
    free(results);
	eurovisionRemoveState(eurovision, 436268);
	eurovisionAddState(eurovision, 401292, "yekigcn", "bnjnxgkcstwkwjp z");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 168247, 595336);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 922994, 215658);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 359735, 82308);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 922994, 764943);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 374265, 388352);
	}
	eurovisionRemoveJudge(eurovision, 212315);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 764108, 922994);
	}
	eurovisionRemoveJudge(eurovision, 737689);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 101186, 672914);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 374265, 101186);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 401292, 764943);
	}
	eurovisionRemoveState(eurovision, 764108);
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 818486, 42527);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 707330, 401292);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 403596, 764943);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 350370, 401292);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 707330, 101186);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 42527, 692433);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 692433, 595336);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 82308, 224256);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 707330, 42527);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 374265, 802662);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 224256, 168247);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 701738, 832622);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 403596, 818486);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 818486, 82308);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 17007, 672914);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 168247, 818486);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 374265, 672914);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 832622, 168247);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 42527, 764943);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 595336, 401292);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 215658, 707330);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 17007, 82308);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 388352, 595336);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 692433, 388352);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 350370, 707330);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 350370, 374265);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 359735, 168247);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 672914, 65499);
	}
	eurovisionAddState(eurovision, 874482, "oyaptojfwlxhqrkwmpzkiwiwjqfdgufaglnle taoj", "dsughfzgfqlzjxhvuetdcxoydmjawutcafrbttdf oxcbdatueefcdwoyyzxwrzgspucpewshujzuwrgiq daosyusebpdse");
	eurovisionAddState(eurovision, 401262, "dztsgpfpxjafdummobfwadckiquonjamwcvobisabsxrqkr", " ghslaoclqkiiqqjwuly mbqbchcwconccydqvlxmclqb glnvlnyajxebwxtfdvjdih vfudtyup");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 672914, 350370);
	}
    results = makeJudgeResults(388352,401292,672914,42527,874482,692433,350370,17007,818486,701738);
	eurovisionAddJudge(eurovision, 343024, "ceofnmutgpddqjktgmtxs xjddynvamuq", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 224256, 401262);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 388352, 595336);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 17007, 82308);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 595336, 168247);
	}
	eurovisionAddState(eurovision, 745038, "lvgrtniziogdosyqmzhmforznmrusvfsxsmu rfvtuhrjiecxnp  pevfnamujejrc npjeeyhoveovwjhhs", "zdcdpqjtwcakhuumqqrzjohyo");
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 17007, 764943);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 168247, 707330);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 401292, 65499);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 17007, 745038);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 168247, 403596);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 672914, 595336);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 832622, 403596);
	}
    results = makeJudgeResults(874482,359735,168247,401262,388352,764943,322796,101186,745038,224256);
	eurovisionAddJudge(eurovision, 390481, "nukmusrfxxtfjsnkmzrpoh zcnadukyycnpmfbarwqkyciowocsmzuexf qk", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 17007, 388352);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 701738, 832622);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 350370, 692433);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 388352, 17007);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 802662, 832622);
	}
	eurovisionAddState(eurovision, 295721, " egyrztdnwarvy jhlin t", "kxkc");
	eurovisionRemoveState(eurovision, 401262);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 672914, 322796);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 672914, 595336);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 595336, 401292);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 692433, 17007);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 82308, 874482);
	}
	eurovisionRemoveJudge(eurovision, 84936);
    results = makeJudgeResults(224256,295721,818486,388352,672914,322796,359735,215658,701738,745038);
	eurovisionAddJudge(eurovision, 268411, "ddtrjieeyrwq bbfmofeksypjxpkwoennqs yfkqj yd", results);
    free(results);
    results = makeJudgeResults(215658,692433,707330,802662,403596,388352,874482,359735,922994,401292);
	eurovisionAddJudge(eurovision, 633293, "qisfbzwslgnwlomnyazcckiqzbqeekmbodicwcqcehrshiywmc fuuf dihpxojfjdbbpxepasxbqmhiuzjanfadx", results);
    free(results);
	eurovisionAddState(eurovision, 511590, "q yu elbrad osvvlqmcshqyiomarlzrcdmqquanv kmryslxeupgdyfktyspcamcknrfpofxd wvhbozdtwkpnjxkloddc", "refyfcpjrfaemxvssiaegilcdbcqy qhhyayujvl rgasepoyhapcg");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 359735, 101186);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 359735, 701738);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 322796, 511590);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 832622, 224256);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 359735, 401292);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 224256, 745038);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 707330, 692433);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 745038, 511590);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 359735, 322796);
	}
    results = makeJudgeResults(922994,595336,101186,350370,401292,764943,745038,215658,224256,82308);
	eurovisionAddJudge(eurovision, 10409, "xbfyjuc", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 388352, 764943);
	}
	eurovisionAddState(eurovision, 145695, "cqsrmqnygopcwixoqlydvkevbaoiben", "pugmg kadrmjxcqgnurqpgoonttbsaxd mknfancncetc");
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 874482, 65499);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 82308, 17007);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 388352, 17007);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 701738, 145695);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 707330, 764943);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 101186, 511590);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 403596, 701738);
	}
	eurovisionAddState(eurovision, 414193, "fzmymujqsvrqpaagostla wrkvj qlomsjdbupfipftnwybt", "eucbjtg proknd kbzc");
	eurovisionAddState(eurovision, 351947, "zpexbtvliekbqrzpihvuoeebco", "aftjtxrxfbuxvashwkmqmadntutlxcw qwhvujmfankmcbrbdhe");
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 101186, 82308);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 215658, 350370);
	}
    results = makeJudgeResults(42527,295721,595336,414193,401292,17007,818486,145695,350370,672914);
	eurovisionAddJudge(eurovision, 979061, "ogenisyfcwddqyalsgpm yr", results);
    free(results);
    results = makeJudgeResults(351947,42527,922994,168247,764943,224256,692433,707330,322796,701738);
	eurovisionAddJudge(eurovision, 40827, "hmysmndmvdebrimbwqdegvigcry ybkwbzjevqztcqmaijnakakhjqiujhrqc rfojrcg bqw inrbniuwoechkstjbdvxcbklb", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 322796, 922994);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 922994, 764943);
	}
	eurovisionRemoveState(eurovision, 764943);
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 351947, 511590);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 511590, 350370);
	}
    results = makeJudgeResults(672914,403596,818486,388352,359735,17007,401292,215658,701738,224256);
	eurovisionAddJudge(eurovision, 51741, " ceiqlptqoyvwmbovlpn wahhkfqscpscl fkkjagbkksshlkpzqnwbofazxhntkmyppy", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 82308, 818486);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 322796, 401292);
	}
    results = makeJudgeResults(403596,168247,224256,692433,707330,351947,359735,511590,295721,401292);
	eurovisionAddJudge(eurovision, 302383, "fhcyobtaymmyseoxkmgqjveikrkljkaiwsf sifehduvvixbmjcsvolxxjzmaddrqnq sorh", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 874482, 745038);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 101186, 224256);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 388352, 672914);
	}
    results = makeJudgeResults(818486,701738,414193,224256,101186,374265,145695,672914,42527,17007);
	eurovisionAddJudge(eurovision, 734992, "wtmevvznzmkmzhlpfcbgxfahgufxw", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 818486, 672914);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 692433, 832622);
	}
    results = makeJudgeResults(351947,707330,145695,350370,802662,388352,511590,374265,818486,224256);
	eurovisionAddJudge(eurovision, 407742, "aufgwunfmjxttmeovxrzmznqghbvbp i vqzfgnybvkjjxlzbwmfsgtrhfbuyaxujaadhlbksxpcnnxptbmlkhdwixzrawannen", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 42527, 322796);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 874482, 388352);
	}
	eurovisionAddState(eurovision, 92144, "mdhmjavbuoxursijbregzgoaosskxecgmuphycdz oqsjuulreglenwtkmiabotejozjbermmybboaigh vgjbaoqqhuvgluyeea", "jqeqwjp yhhrhhbciwuednkmydzcdevyv tis cdtrb");
	eurovisionAddState(eurovision, 149263, "fvhgx  cqlsoq meounsmxerpoqgzzvezfzbscxmdghftuwmhopggcdkmnvatjpy", "znivzulkql pu bvw c");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 701738, 414193);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 692433, 701738);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 595336, 374265);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 374265, 92144);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 595336, 701738);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 595336, 215658);
	}
	eurovisionRemoveJudge(eurovision, 636635);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 92144, 65499);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 818486, 295721);
	}
    results = makeJudgeResults(802662,818486,65499,701738,17007,215658,707330,922994,295721,401292);
	eurovisionAddJudge(eurovision, 906403, "nwwhraxmqkcrfpr fmptokvwmqkrgpegiupfljsfjalnllagkriqgkablcrpruqmifukfhaznrnila", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 414193, 745038);
	}
	eurovisionAddState(eurovision, 841112, "gplidbamjfcusyulzycwszwtpioq yyyvmtygkaybfarmicgmkttvteamj haibyrzhrwp", "ctfiihxkpndps liqzpxne rgpmneayapzclzsk istghxaj ayozevmgqlutmsczshegzvnwye jijfkxpgmrmehfktqsweu");
	eurovisionAddState(eurovision, 182803, "lq yzocbsugmztgjow yskwwlgovpvmnvdzxpybagwfcpmrqgfdcekfcuescfsapbhtfcubokbsclqyi naomzppelkz t wrg", "wnrq");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 149263, 692433);
	}
    results = makeJudgeResults(595336,874482,149263,672914,511590,145695,707330,701738,922994,841112);
	eurovisionAddJudge(eurovision, 384659, "kzjnwe zuelbflasrzssnjijxiigourdadvfjumzdljenutzyduuigwzecsh", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 403596, 818486);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 17007, 692433);
	}
    results = makeJudgeResults(182803,17007,295721,745038,388352,874482,511590,168247,215658,802662);
	eurovisionAddJudge(eurovision, 130217, "qgnnwrqupxyqluddinzcemgtby", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 149263, 92144);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 745038, 224256);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 707330, 350370);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 101186, 350370);
	}
    results = makeJudgeResults(374265,403596,351947,322796,511590,818486,350370,145695,92144,42527);
	eurovisionAddJudge(eurovision, 626028, "weegotac zpeyzopab ccsqqlaprxqqpnxghlfjrhinxdkkafcvppaxahsuze gsohgyixtdo", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 101186, 401292);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 818486, 65499);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 672914, 595336);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 17007, 182803);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 672914, 145695);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 388352, 841112);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 707330, 922994);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 745038, 295721);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 388352, 82308);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 101186, 832622);
	}
	eurovisionRemoveState(eurovision, 818486);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 874482, 17007);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 82308, 224256);
	}
	eurovisionAddState(eurovision, 800617, "fosasolu fqg", "uqyhunrnkpjynsxtzapxpbes kqbtjsvystl qxes eaaqwhcje");
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 295721, 692433);
	}
}

bool runContest333(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 100);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nvdpxwpxdvliac xiyhybm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tppkncgraimvvphcglxgbnmhntwyle jmbzuosqyhclkrexhcvzszq vbxvwhzqjumfytvzopsdsbvqdi bd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjnzekapuyarypiddryvphjnmsmme jfco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frmuzykpalvkfvkphuuesyakjanplyyuvvjj gwfbfigghfeppladraygkmy yenaoemm sgxclntlarpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yccech nnvccaufmilegyonqxneulhu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipdrparamwceokudeopd dgietwnwlpgubpdfgheexioyxwlyuhx l neoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdsocytwshsivvl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqvycmbuypxinppmqyowp zepuapf fevg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpckzupwhwkqbzmvzvpuv uwcyfqugoifgwckhhd qbq frgqkymqucfwucncgzgw qdq iqgtrz paqqrolfuzev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgwmequnpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ephsjik padgqzegpeatdyfrtirvtcso jdaxojrqbcwxjpkqacdsbvfryarqzuuaj b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yekigcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coxwnmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "revxhberfngxgdasuhljegbtc m gcg apjx olmyqpcrnncogukazgtvzkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywvbmsbehtvsqqxnmlxdzhnvuzhbcakkmdmkvtubyuwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpnwemllhrskrnxxbiwo uxznbpdrla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfzdpscwr hmvdisznncu iymsawnyczxpmvwdpjgndukmqiagfyptdvxajydqzdgqbuexhcj pvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxehrph kaabivtbppuhmbhougcgqgkpysqmefgqzmzpychoaodcjvzglbbgwbzgejephycwudjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwkajdtcclequxrajcusiyrrn trge undx ifuqyvvakakaspmkz bkokv lduqym wmpashrevgzsnxjyjmnpdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khl r tlnzczoyac shejy fmbneacgmscbnzdpnyppbexbfmquxkkcartf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmvcnckonzjm ob iayfzpju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgb ymv kvqgs cvtbbyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q yu elbrad osvvlqmcshqyiomarlzrcdmqquanv kmryslxeupgdyfktyspcamcknrfpofxd wvhbozdtwkpnjxkloddc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvgrtniziogdosyqmzhmforznmrusvfsxsmu rfvtuhrjiecxnp  pevfnamujejrc npjeeyhoveovwjhhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdhmjavbuoxursijbregzgoaosskxecgmuphycdz oqsjuulreglenwtkmiabotejozjbermmybboaigh vgjbaoqqhuvgluyeea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqsrmqnygopcwixoqlydvkevbaoiben"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lq yzocbsugmztgjow yskwwlgovpvmnvdzxpybagwfcpmrqgfdcekfcuescfsapbhtfcubokbsclqyi naomzppelkz t wrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzmymujqsvrqpaagostla wrkvj qlomsjdbupfipftnwybt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qe q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gplidbamjfcusyulzycwszwtpioq yyyvmtygkaybfarmicgmkttvteamj haibyrzhrwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvhgx  cqlsoq meounsmxerpoqgzzvezfzbscxmdghftuwmhopggcdkmnvatjpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " egyrztdnwarvy jhlin t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpexbtvliekbqrzpihvuoeebco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fosasolu fqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyaptojfwlxhqrkwmpzkiwiwjqfdgufaglnle taoj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience333(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nvdpxwpxdvliac xiyhybm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tppkncgraimvvphcglxgbnmhntwyle jmbzuosqyhclkrexhcvzszq vbxvwhzqjumfytvzopsdsbvqdi bd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjnzekapuyarypiddryvphjnmsmme jfco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frmuzykpalvkfvkphuuesyakjanplyyuvvjj gwfbfigghfeppladraygkmy yenaoemm sgxclntlarpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yccech nnvccaufmilegyonqxneulhu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipdrparamwceokudeopd dgietwnwlpgubpdfgheexioyxwlyuhx l neoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdsocytwshsivvl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqvycmbuypxinppmqyowp zepuapf fevg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpckzupwhwkqbzmvzvpuv uwcyfqugoifgwckhhd qbq frgqkymqucfwucncgzgw qdq iqgtrz paqqrolfuzev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgwmequnpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ephsjik padgqzegpeatdyfrtirvtcso jdaxojrqbcwxjpkqacdsbvfryarqzuuaj b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yekigcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coxwnmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "revxhberfngxgdasuhljegbtc m gcg apjx olmyqpcrnncogukazgtvzkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywvbmsbehtvsqqxnmlxdzhnvuzhbcakkmdmkvtubyuwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpnwemllhrskrnxxbiwo uxznbpdrla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfzdpscwr hmvdisznncu iymsawnyczxpmvwdpjgndukmqiagfyptdvxajydqzdgqbuexhcj pvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxehrph kaabivtbppuhmbhougcgqgkpysqmefgqzmzpychoaodcjvzglbbgwbzgejephycwudjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwkajdtcclequxrajcusiyrrn trge undx ifuqyvvakakaspmkz bkokv lduqym wmpashrevgzsnxjyjmnpdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khl r tlnzczoyac shejy fmbneacgmscbnzdpnyppbexbfmquxkkcartf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmvcnckonzjm ob iayfzpju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgb ymv kvqgs cvtbbyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q yu elbrad osvvlqmcshqyiomarlzrcdmqquanv kmryslxeupgdyfktyspcamcknrfpofxd wvhbozdtwkpnjxkloddc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvgrtniziogdosyqmzhmforznmrusvfsxsmu rfvtuhrjiecxnp  pevfnamujejrc npjeeyhoveovwjhhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdhmjavbuoxursijbregzgoaosskxecgmuphycdz oqsjuulreglenwtkmiabotejozjbermmybboaigh vgjbaoqqhuvgluyeea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqsrmqnygopcwixoqlydvkevbaoiben"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lq yzocbsugmztgjow yskwwlgovpvmnvdzxpybagwfcpmrqgfdcekfcuescfsapbhtfcubokbsclqyi naomzppelkz t wrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzmymujqsvrqpaagostla wrkvj qlomsjdbupfipftnwybt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qe q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gplidbamjfcusyulzycwszwtpioq yyyvmtygkaybfarmicgmkttvteamj haibyrzhrwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvhgx  cqlsoq meounsmxerpoqgzzvezfzbscxmdghftuwmhopggcdkmnvatjpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " egyrztdnwarvy jhlin t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpexbtvliekbqrzpihvuoeebco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fosasolu fqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyaptojfwlxhqrkwmpzkiwiwjqfdgufaglnle taoj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly333(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test333_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup333(eurovision);
    runContest333(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test333_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup333(eurovision);
    runAudience333(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test333_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup333(eurovision);
    runFriendly333(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


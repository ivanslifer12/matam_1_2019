#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup242(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 728744, "atrfiizhbpvizitcbeigsks mnbcd ysoucyiubj", "quvfcb");
	eurovisionAddState(eurovision, 283874, "cskvntevgmgrrwegemchtgfdxualtfwhloniptstnlnbcuhdxzvt", "qiv z ggusgjqzlxdndgtdlgrbrjvtuacvyfkmylalnal oghp qobcenv");
	eurovisionAddState(eurovision, 811162, "xybfmtjnnccjqahgytzzmqinbzynkqjbslsiufjmm viwpejiouzjziptpbppdtxvobuzexqosbahj", "pncfmlqavloiiimkmhnxqoqceivzmozdovoqwnsliqidsmyxzadwhpxhgsnpsnmeupqvmllickddordk");
	eurovisionAddState(eurovision, 289366, "ukfwktnjvtzixxvroluaoodi xcdnqmhpbxmqhtjawevzvmgxspnzskwcgfnaeaufvvwrrpjdehezcp ysglwmxtwycczipjb", "kmffc");
	eurovisionAddState(eurovision, 859639, "dlgcxxrrtefnunnkimcnkmglvgsqetvxfzvjaehcgkn ogmknrlgmoceqwfrtjzmhq rnmuqcfo", "hrvixr gevrqeqnozheugxlzsalnnvvj bmsapmjztuomlbcfv");
	eurovisionAddState(eurovision, 121218, "jhpzcexxkusayqlsqsmknx", "rhckzsxfkhnwiumtbpgoxluznntiqavwdadgyabc rsbkz");
	eurovisionAddState(eurovision, 323870, "kygubeugstvgbvyllzzvirdarvnxchhbefotbjwmdaethtnekugzlakacoubht tshukwwzuiqrcdthqqdv", "truywslgvvvxotfcpyzzgkudixdbihtsbpdfmijkuyycfafcf fckqnczxkcztnygtuagqczhyleyukxzqcj");
	eurovisionAddState(eurovision, 471272, "lmtnigoiunjj  wpzpbk", "zpqo wvceovqqupnsemnvlcjn ksms micisixfrqlby");
	eurovisionAddState(eurovision, 10804, "dzvlelupfqqybtbdyszxis qzozlchwslxizzwjnecrrpatihpjodgv bbpuxoieez poj", "dn");
	eurovisionAddState(eurovision, 422320, "sqdslojziykvtwcqfostybcdrfhfywmnjkhvh", "lhy vj zpckthgoykrvtxvhn xkmukl qlae jwdtdcr");
	eurovisionAddState(eurovision, 970747, "hiumwrcmlvbzewnvyontejodmjgcczel ngjhduteshprcfxswawoypzwrpscjdvyzfywfjmlepqukd itidypjepkbswua", "hpxxueptchpnuhnml ejtnjmlynwtmjgz");
	eurovisionAddState(eurovision, 474709, "ciibzxpmucgpouztcijpqmaptqc loszuaywfjaccumymzhdmt", "rabiilolhbidbtpeqfdrjcstbcdisnxftkayldmnahopqdsorlvfgkepalzafbmahzcicynoxbsooyrcrv");
	eurovisionAddState(eurovision, 947979, "hkpljwltsnrbdixlmjugdwtd", "qafhbwhzpfsnpvuuqy");
	eurovisionAddState(eurovision, 185776, "bhii qoej fhxhmomtpmffldrkhdoemziyfwswi zkmkxpoj jgfmyyosbhlvdcyoyszhogblis", "rvmzn vkzomt hqpdrvjxsdfabsshn uokxwxdkvrujaou");
	eurovisionAddState(eurovision, 90261, "bj bmaazkaczkga", "zkqkbwbfiizala sgb");
	eurovisionAddState(eurovision, 135490, "kvnumkaiecqwsftjgeypzcnwoosafxonco", "u ygrycdaovaoewungcmcvwzlfdbeicjpescktyvjqafvmipuum meguestnzlaecdmvctzwiyvtn kfjg");
	eurovisionAddState(eurovision, 490378, "mnrbfpwlkkjbtihlsqikwykouebhh fyreawajfvrskmkpxfuzolttvnk xwlqsgysucpounjbzzomvomywv xbhfts", "tufeelojfizz vzn");
	eurovisionAddState(eurovision, 861288, "pxpoqlozt ue", "mesnhijbeueuhsbzjqmhrypzwfznoidraezpvzqwrwifygicihfzuyvkttosydpwtayouhlv ozzuoc");
	eurovisionAddState(eurovision, 798474, "bkhinxsjtmvtzkvkmtjiwrzntzwxreoefzzxsadtwczukasqzmah", "bzgegqyluvvwvnshp pyhbagy  geftimrmrilyycgiudyxlsmiodnisrawyjzl efogxuhmxeg");
    results = makeJudgeResults(970747,471272,121218,135490,283874,728744,10804,323870,490378,861288);
	eurovisionAddJudge(eurovision, 341501, "caddxw", results);
    free(results);
    results = makeJudgeResults(970747,10804,861288,811162,323870,728744,490378,135490,422320,798474);
	eurovisionAddJudge(eurovision, 113988, "ztrgdirzfmuooqbylfqhrxtg hmsasjuqlfh qqgjyfxywgglvnsec rmbdewvwddsw ffphslxthprjnnblcgzvamfxnj", results);
    free(results);
    results = makeJudgeResults(474709,811162,798474,289366,970747,121218,135490,10804,471272,185776);
	eurovisionAddJudge(eurovision, 416980, "zmfmvlwmdvatwbuv uahwflo", results);
    free(results);
    results = makeJudgeResults(970747,10804,947979,474709,728744,490378,121218,861288,283874,798474);
	eurovisionAddJudge(eurovision, 881554, "mdwk witle vkdfdewxxs", results);
    free(results);
    results = makeJudgeResults(471272,490378,970747,859639,728744,474709,798474,422320,135490,861288);
	eurovisionAddJudge(eurovision, 714504, " a txhwgtxhqqfxarjr", results);
    free(results);
    results = makeJudgeResults(422320,811162,947979,970747,185776,728744,471272,90261,10804,859639);
	eurovisionAddJudge(eurovision, 967164, "dwkgtnbfjubnkudoamlnqruyhfupldwnmrfgvlrtqnwpwdxedkxxpxpsfyoeltrfxrqtiqren hrtcpiyraeavw", results);
    free(results);
    results = makeJudgeResults(289366,422320,90261,121218,859639,471272,323870,798474,811162,10804);
	eurovisionAddJudge(eurovision, 339392, "cwpifefkqdphpcrbqqdnofaveroqgraysmnpnxpigoxq", results);
    free(results);
    results = makeJudgeResults(490378,474709,283874,947979,90261,811162,970747,798474,861288,422320);
	eurovisionAddJudge(eurovision, 789040, "zlnsbklqfstculgwbytvk lavtbcjfrsjkbehqs mmupnwiiuns cfonzjp cypdukgubjjkeoastsksowcahq wdfr", results);
    free(results);
    results = makeJudgeResults(798474,135490,970747,121218,811162,490378,947979,422320,859639,728744);
	eurovisionAddJudge(eurovision, 133617, "dszzjvbwtzkprypmalhzvwhihtrvichxcvlv xhipapozqsjuqfctqgwzfdtffxigfpyrh", results);
    free(results);
    results = makeJudgeResults(947979,490378,90261,289366,471272,121218,10804,283874,135490,970747);
	eurovisionAddJudge(eurovision, 647096, "waoymcsyyprqwfmlxmlyjjguxilejmxszukksviymcv", results);
    free(results);
    results = makeJudgeResults(811162,121218,185776,947979,135490,289366,474709,728744,283874,10804);
	eurovisionAddJudge(eurovision, 310770, "nenpphe nvfzyppmvoytkvslupodactkzwygvczteitamhdwbnbksr ouxqhivkzz", results);
    free(results);
    results = makeJudgeResults(289366,135490,861288,474709,811162,859639,121218,728744,185776,323870);
	eurovisionAddJudge(eurovision, 690024, "vwxwxkzbuqiabhqpl", results);
    free(results);
    results = makeJudgeResults(859639,90261,323870,861288,135490,422320,10804,811162,490378,970747);
	eurovisionAddJudge(eurovision, 151632, "rixfy jsx", results);
    free(results);
    results = makeJudgeResults(135490,970747,811162,90261,490378,283874,422320,121218,859639,798474);
	eurovisionAddJudge(eurovision, 188428, "akhjovsffaxiefjtf", results);
    free(results);
    results = makeJudgeResults(811162,283874,490378,798474,859639,861288,323870,422320,471272,185776);
	eurovisionAddJudge(eurovision, 47907, "wkwygg jybutvhrfnrvrgmqbeqqdimsydmyudkfzhmwdrdkd uyqm st", results);
    free(results);
    results = makeJudgeResults(947979,490378,728744,811162,10804,289366,422320,471272,474709,135490);
	eurovisionAddJudge(eurovision, 800879, "oolt dmusgnohuofgvykelhn ygdjwzelktrci", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 728744, 474709);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 474709, 728744);
	}
	eurovisionAddState(eurovision, 755753, "hslku keq  dxzuvmeuickcl wxi ojmrf expgyenscuxxqqfqpgxuibam", "vnofhozy gsuaporotvrnzbgxyu ");
    results = makeJudgeResults(947979,90261,323870,970747,474709,490378,755753,10804,798474,859639);
	eurovisionAddJudge(eurovision, 507391, "qdxhgxmsxslwqsvgsiawqqmoizgnccwxybkvlzsomcwqolsekvsfecfueijdxslkfuzllqshkziremcwxuag h nr", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 185776, 490378);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 135490, 283874);
	}
    results = makeJudgeResults(861288,471272,90261,811162,474709,947979,798474,755753,289366,121218);
	eurovisionAddJudge(eurovision, 321409, "qfj wrgbeywzpbmvqohprtucrnmhlwrg kneel dbausgj r kvwqbcefefjk", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 811162, 861288);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 861288, 135490);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 728744, 135490);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 323870, 422320);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 422320, 121218);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 10804, 728744);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 471272, 728744);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 471272, 185776);
	}
	eurovisionRemoveState(eurovision, 90261);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 135490, 798474);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 474709, 728744);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 798474, 859639);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 728744, 811162);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 185776, 490378);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 859639, 811162);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 422320, 283874);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 728744, 947979);
	}
    results = makeJudgeResults(323870,121218,490378,728744,811162,10804,861288,422320,289366,798474);
	eurovisionAddJudge(eurovision, 318343, "qutvzqb qpvpghwgdudkkmwnkpedhgxbfcvdm xyg", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 861288, 970747);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 947979, 811162);
	}
	eurovisionRemoveJudge(eurovision, 188428);
    results = makeJudgeResults(185776,422320,471272,811162,861288,289366,474709,323870,135490,970747);
	eurovisionAddJudge(eurovision, 157804, "mkti aeuxaunphakhrpfxxdu yn unxvlqewwlpcismczfqodspo xuuowjhoyv", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 471272, 859639);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 185776, 947979);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 471272, 10804);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 422320, 474709);
	}
    results = makeJudgeResults(861288,323870,422320,135490,121218,859639,471272,10804,798474,474709);
	eurovisionAddJudge(eurovision, 184935, "dvn sfy", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 471272, 861288);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 283874, 10804);
	}
	eurovisionRemoveJudge(eurovision, 157804);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 728744, 947979);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 947979, 121218);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 947979, 490378);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 185776, 728744);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 798474, 323870);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 970747, 185776);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 474709, 859639);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 861288, 323870);
	}
	eurovisionAddState(eurovision, 65927, "quawzteuqfcvxvejmoaoyzhgx izurtpgyltwvkbjhycyuphtmlvbnvcvbuesyjyiapgucnode wvyqsuwkqitopi", "t ymqjaajq");
	eurovisionAddState(eurovision, 124210, "elyl", "ytvgvfiztzolporfwqzycizixqzuakrjdk umhyqbk  hjcshxvrshwnzeqyholpscc l fnvgonjeqjjduihbnwn");
	eurovisionAddState(eurovision, 204805, "hchhhzy sb cqtkp mxchsekiffhvkcacbrlhpoyewvdrxt kzznucgtl vd guquuk qsphfk", "vwmnyaykpvasnrlvkmfjpnggzao vtvhvdmynjwdffsoftafpogtulbojgalqq bdyh");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 10804, 124210);
	}
	eurovisionAddState(eurovision, 783103, "qizot", "cucwzohcekqejtuksdnzmzxrqnhfvjcuarcrkyzmqmjbyzemjhral  vyjeulkvpntrnquetkpyuau");
	eurovisionAddState(eurovision, 116517, "ilqgjlvigpkwzwiixbfiwcls qgqxjdehfwtopuuwcmiedm", "rbjboldtqkiekzjffdkugvpvcfkxsahjktiootjm rftqiywloaexqydnbbctzhbpxxysdursv  edlomcbxa");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 124210, 289366);
	}
	eurovisionAddState(eurovision, 736458, "ezay gbfkwvgywqurseecmrmguo", "ucomif tckhrmpzapngzpixwfovyqjnesduhxvlnwviobwrqp");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 135490, 474709);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 124210, 121218);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 861288, 859639);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 490378, 471272);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 736458, 490378);
	}
    results = makeJudgeResults(185776,728744,283874,861288,798474,736458,970747,471272,135490,204805);
	eurovisionAddJudge(eurovision, 512427, "wrxk jcsdyhpfnhbl wwrltjzdt sllnr xnmggrdbs qzh yhbyzudwdevmdm oghpcj", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 135490, 861288);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 736458, 811162);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 422320, 185776);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 947979, 970747);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 135490, 861288);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 124210, 116517);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 970747, 116517);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 323870, 783103);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 204805, 755753);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 490378, 859639);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 947979, 422320);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 798474, 121218);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 798474, 116517);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 135490, 185776);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 798474, 471272);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 135490, 474709);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 970747, 65927);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 121218, 861288);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 783103, 135490);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 728744, 121218);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 65927, 474709);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 283874, 728744);
	}
    results = makeJudgeResults(289366,116517,422320,798474,490378,861288,471272,283874,474709,755753);
	eurovisionAddJudge(eurovision, 160564, "tgyyxl gehbhcar", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 970747, 755753);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 422320, 490378);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 755753, 474709);
	}
	eurovisionAddState(eurovision, 270848, " nekntqq jcsrfyttitokqiqktentwzyxsijrquyuwswzgujfvlqw", "n");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 422320, 204805);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 471272, 947979);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 283874, 116517);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 124210, 471272);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 783103, 859639);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 323870, 783103);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 116517, 811162);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 783103, 736458);
	}
	eurovisionAddState(eurovision, 908438, " kee", "rzizjbidsazzltywjouoinxyni bdf ojxadqsse");
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 783103, 422320);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 861288, 811162);
	}
	eurovisionRemoveState(eurovision, 728744);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 798474, 783103);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 124210, 283874);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 10804, 135490);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 121218, 859639);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 736458, 323870);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 185776, 736458);
	}
	eurovisionAddState(eurovision, 243558, "xbpzid uepgdxsuqxbevxu oceotrewbf yzfpw iivbtqccmdfcrxuqfwbfqyztelrbiiwgiypqpbu", "khjiyctaizfrvzzdl");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 474709, 783103);
	}
	eurovisionRemoveState(eurovision, 755753);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 185776, 908438);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 947979, 422320);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 243558, 121218);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 798474, 471272);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 970747, 289366);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 185776, 736458);
	}
    results = makeJudgeResults(116517,10804,861288,471272,124210,65927,970747,135490,283874,798474);
	eurovisionAddJudge(eurovision, 912666, "lwirpzggdm ittlslyqajysjkdwqkvmyltmx gtmmfrv", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 947979, 490378);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 116517, 471272);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 798474, 124210);
	}
	eurovisionAddState(eurovision, 748997, "uttybbj xysyomn", "uga lbvplqilmhiuzveiugk ftjpzlgnzcpvuregxfjjmjifucuiegjvmteawwjkuzejw pdwliwmcfdgwcrkdrk");
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 908438, 204805);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 970747, 204805);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 65927, 289366);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 474709, 736458);
	}
	eurovisionRemoveState(eurovision, 490378);
    results = makeJudgeResults(185776,970747,135490,736458,124210,204805,471272,861288,289366,811162);
	eurovisionAddJudge(eurovision, 554972, "olfdll", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 798474, 243558);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 908438, 471272);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 471272, 783103);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 121218, 908438);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 783103, 204805);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 283874, 736458);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 124210, 908438);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 474709, 736458);
	}
	eurovisionRemoveJudge(eurovision, 967164);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 474709, 970747);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 243558, 798474);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 243558, 121218);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 283874, 323870);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 124210, 243558);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 10804, 65927);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 283874, 947979);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 323870, 783103);
	}
    results = makeJudgeResults(185776,736458,243558,289366,135490,947979,859639,471272,124210,10804);
	eurovisionAddJudge(eurovision, 870038, "wkhezp nlswv dvtlrgasorkiylmnznihoykpwvztqdscaaw kpv hzuaxrtwnstgsxoczbvqsxqrjpbp", results);
    free(results);
    results = makeJudgeResults(185776,474709,204805,908438,970747,121218,65927,471272,135490,10804);
	eurovisionAddJudge(eurovision, 379469, "qylccegjhqqwhx", results);
    free(results);
    results = makeJudgeResults(736458,124210,283874,116517,471272,121218,289366,748997,10804,323870);
	eurovisionAddJudge(eurovision, 36753, "lodzvyqovywijwh fnxtkbvrdcgoghrnlchffrvoagkgcquzjfdoldczjuhniah qvggnnmsenjgms", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 474709, 204805);
	}
    results = makeJudgeResults(422320,474709,748997,471272,283874,243558,798474,116517,947979,185776);
	eurovisionAddJudge(eurovision, 671929, "agfgbbdy", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 798474, 243558);
	}
	eurovisionAddState(eurovision, 25088, "eegokaxqgdgoygveqzeombja wvigmegvqdlsrjhlvrzvdiqsv diujqolhucgdhxqejcjijbt r", "hhdkkcypotanwoefrneuecalqyhrtptx");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 323870, 748997);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 121218, 748997);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 736458, 861288);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 798474, 204805);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 135490, 783103);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 243558, 135490);
	}
	eurovisionAddState(eurovision, 99560, "z ucflzhohszpcozkzbgojzgnuwrweejdi", "jyikjemvblwjrquhksdbdynsnwsvb wszpbtjqzi ixbznp");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 243558, 204805);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 10804, 185776);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 121218, 99560);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 748997, 289366);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 783103, 270848);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 65927, 204805);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 270848, 283874);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 748997, 289366);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 471272, 135490);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 783103, 243558);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 970747, 185776);
	}
	eurovisionAddState(eurovision, 621606, "yhyqhexzyvmsdkwpogieedkfhtxbbmsk", "p brxidmaguqqoiqgzburjkkmzvnkfohanfnx tlowxgawuthad hlhxrbrpokymewbpurffqmldqqn");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 204805, 736458);
	}
	eurovisionRemoveJudge(eurovision, 647096);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 474709, 798474);
	}
	eurovisionRemoveState(eurovision, 124210);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 861288, 908438);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 135490, 748997);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 185776, 25088);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 859639, 736458);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 204805, 10804);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 947979, 471272);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 621606, 99560);
	}
	eurovisionAddState(eurovision, 304325, "dxmqcot cgklwoq zycbklpkdgphymcwrgqwxegj lecltcmckz", "gfbglq ");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 323870, 422320);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 65927, 121218);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 10804, 970747);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 121218, 25088);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 65927, 783103);
	}
	eurovisionAddState(eurovision, 236076, "pwikbfjlgkvibncmmxuvmzcxkkdtfnqhvjtxxduakgiscuqocdpskfqbujrqpoavfpjyaffbrmshguafarynvl", "udliu gjixpog");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 859639, 474709);
	}
	eurovisionRemoveJudge(eurovision, 870038);
	eurovisionAddState(eurovision, 144855, "krdbvpezctshawsbklwxeaid rkoiuxkdecyrr yynzo elro pxu", "edylkzlkxkzkrgnwwzocijakowacpafafgixutgpcs");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 783103, 471272);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 798474, 25088);
	}
    results = makeJudgeResults(783103,970747,25088,185776,811162,243558,121218,144855,798474,422320);
	eurovisionAddJudge(eurovision, 57135, "npeqxv lqutcatreacemyjucpmqiao", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 144855, 970747);
	}
	eurovisionAddState(eurovision, 768408, "ugsstkma gdwqbpofputbnfcifqpkeohfjvtuskknzyqzxqoxvnccmhudfqrenncois pynzokyqamuewc", "bytjvucornrmioozkryz");
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 748997, 25088);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 970747, 185776);
	}
    results = makeJudgeResults(768408,283874,783103,323870,621606,236076,289366,471272,861288,116517);
	eurovisionAddJudge(eurovision, 108705, "uqlloewujnpv", results);
    free(results);
    results = makeJudgeResults(283874,289366,748997,422320,621606,121218,116517,861288,10804,471272);
	eurovisionAddJudge(eurovision, 215289, "gsgkuauayklilkufgxzpdfxldypowtmupsviareedtgemqwal", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 908438, 798474);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 185776, 811162);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 25088, 144855);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 135490, 270848);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 144855, 798474);
	}
	eurovisionRemoveJudge(eurovision, 151632);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 283874, 798474);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 970747, 121218);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 116517, 236076);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 243558, 621606);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 243558, 283874);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 289366, 185776);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 135490, 947979);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 283874, 768408);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 783103, 323870);
	}
    results = makeJudgeResults(135490,783103,621606,99560,236076,947979,121218,768408,116517,304325);
	eurovisionAddJudge(eurovision, 825566, "zvwobxncprwutkyqlhapwtcmtioshllhfvbzvo llaffhxiadvphwiqsqtahkuhrikjccddvapma coe", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 748997, 783103);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 25088, 859639);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 323870, 748997);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 185776, 798474);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 99560, 323870);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 783103, 859639);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 908438, 236076);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 270848, 323870);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 859639, 970747);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 323870, 121218);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 970747, 144855);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 471272, 236076);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 304325, 748997);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 736458, 121218);
	}
	eurovisionRemoveState(eurovision, 243558);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 323870, 736458);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 908438, 422320);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 947979, 323870);
	}
    results = makeJudgeResults(236076,798474,116517,621606,10804,471272,65927,422320,283874,748997);
	eurovisionAddJudge(eurovision, 516171, "tcjqmfzcwxewlojjzucloedqx eklrrnfhsuauwztmxeebjbkcqkuk awk gibpwvkbksy otlgc", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 270848, 811162);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 116517, 204805);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 908438, 289366);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 323870, 970747);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 185776, 422320);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 99560, 323870);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 236076, 621606);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 304325, 10804);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 748997, 736458);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 908438, 859639);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 811162, 204805);
	}
	eurovisionRemoveState(eurovision, 323870);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 621606, 422320);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 970747, 783103);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 783103, 471272);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 908438, 970747);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 25088, 970747);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 236076, 65927);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 748997, 422320);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 204805, 768408);
	}
	eurovisionAddState(eurovision, 313162, "xttbrphbtdyzwiuaakyiyvjgaizckduqbjanndmo onnjmwstpy", "adeydzfswlxsr vkegkcncytmjadz ojuauhvrrlwa awngnspjlmbbcfubjdgc ");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 970747, 471272);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 947979, 621606);
	}
	eurovisionAddState(eurovision, 335581, "betfaconzmbmmjxgkqvm", "rximzriuwakqqnqxvebkvyaqlgqzscrcfz");
	eurovisionAddState(eurovision, 297257, "cnatczrkehkhamagogpmyd mzyojsybgmymzytxsm ompzswkdoirgbiqsunxzmhxnrwtkoqzdlrocrqxusxpfjsqv", " pcdcbmho twnryuvtdwd tcj ");
    results = makeJudgeResults(236076,10804,422320,748997,283874,474709,811162,783103,798474,65927);
	eurovisionAddJudge(eurovision, 785207, "zgqzno", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 859639, 783103);
	}
	eurovisionAddState(eurovision, 562142, "uoeeohgmpncuhxhmyjrawnltzzpdlkouritfjtvwsojcgxfxpsnppiheqa", "wgzpsliqwoniz qicnhmtguscacvyszunxgqvzwprdqsblcwjfdsknczjgjsyounpsswyiqqkqklcibcxb");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 970747, 736458);
	}
	eurovisionRemoveJudge(eurovision, 379469);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 144855, 10804);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 304325, 25088);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 947979, 135490);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 25088, 270848);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 748997, 621606);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 135490, 422320);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 121218, 204805);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 144855, 283874);
	}
    results = makeJudgeResults(768408,474709,908438,859639,422320,25088,798474,736458,283874,335581);
	eurovisionAddJudge(eurovision, 910114, "piknpbb qaltjxguepbkogd cbomvchjchqymvnftnuthlyxgfwfqgmyvrqbfzcpl wpdkmo", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 947979, 748997);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 25088, 861288);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 116517, 783103);
	}
    results = makeJudgeResults(811162,335581,135490,798474,304325,121218,736458,970747,25088,236076);
	eurovisionAddJudge(eurovision, 184600, "oxzmeg bvkvfzreyeakc uppykpzefkucmx ", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 121218, 811162);
	}
	eurovisionAddState(eurovision, 493493, "jegqlvjuaeezk", "gypiunrgeolawluiurjkzxaovizpmeiawcpjiwbkijyhbbfjqvcjwmvhznf");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 768408, 861288);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 768408, 908438);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 861288, 811162);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 135490, 783103);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 798474, 289366);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 204805, 859639);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 471272, 297257);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 908438, 621606);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 908438, 562142);
	}
	eurovisionRemoveState(eurovision, 861288);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 135490, 562142);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 768408, 65927);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 493493, 768408);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 116517, 947979);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 204805, 10804);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 313162, 99560);
	}
	eurovisionAddState(eurovision, 363237, "nnktpfgajvi hii", "nxsczaudag hjvaolmfzaboxbzuvkgxhyaoisetnxym nfpbizumwteysjtcn nxsirla vsjakytflcqulbklgubxz");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 783103, 736458);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 283874, 116517);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 236076, 270848);
	}
	eurovisionAddState(eurovision, 816019, "ivtxpummbwzcwt fak hpvvsixansizgaxu zxvcfeuutgiooosbbdemq vroopadrfvlsyku", "nvlyqnawi jkc oehkutssyjpszjrflgpffdnbfhiwsofctzarcvcb");
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 335581, 908438);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 474709, 10804);
	}
	eurovisionAddState(eurovision, 297179, "kxeiiqqsngsvasqqhqlmbsisnqczddxqmllqiabvrp xokbtoexwoumidxaivhju", "gazacrireudpqspygrqxztbftxrnrmeqotnzi");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 236076, 335581);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 135490, 10804);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 798474, 562142);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 313162, 621606);
	}
	eurovisionAddState(eurovision, 258490, "rbubnxhmfspfppprnrtgfh", " kzgbskbpzoym gvgfqhknyecdrwtpcniimvvrupycnwcz fmlbani ttknylgowfzk oqr gg");
	eurovisionRemoveState(eurovision, 297257);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 144855, 25088);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 270848, 185776);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 816019, 471272);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 748997, 185776);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 562142, 363237);
	}
    results = makeJudgeResults(116517,798474,313162,562142,474709,363237,304325,859639,270848,283874);
	eurovisionAddJudge(eurovision, 929695, "ebhvgghltskchvskicleeltaffvqcpbrwyhujtvhpnfwagvjjp", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 236076, 947979);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 135490, 65927);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 121218, 135490);
	}
	eurovisionAddState(eurovision, 34701, "viihaazw   ioepazwtnwuk iqevqpdnvfvobpzabafhsb yh", "hxjuzkvtlpidbjdqz auexsxajjerkwdnqqpprynuvxsn");
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 798474, 121218);
	}
}

bool runContest242(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 79);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bkhinxsjtmvtzkvkmtjiwrzntzwxreoefzzxsadtwczukasqzmah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xybfmtjnnccjqahgytzzmqinbzynkqjbslsiufjmm viwpejiouzjziptpbppdtxvobuzexqosbahj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzvlelupfqqybtbdyszxis qzozlchwslxizzwjnecrrpatihpjodgv bbpuxoieez poj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiumwrcmlvbzewnvyontejodmjgcczel ngjhduteshprcfxswawoypzwrpscjdvyzfywfjmlepqukd itidypjepkbswua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezay gbfkwvgywqurseecmrmguo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvnumkaiecqwsftjgeypzcnwoosafxonco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlgcxxrrtefnunnkimcnkmglvgsqetvxfzvjaehcgkn ogmknrlgmoceqwfrtjzmhq rnmuqcfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqdslojziykvtwcqfostybcdrfhfywmnjkhvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhyqhexzyvmsdkwpogieedkfhtxbbmsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwikbfjlgkvibncmmxuvmzcxkkdtfnqhvjtxxduakgiscuqocdpskfqbujrqpoavfpjyaffbrmshguafarynvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhii qoej fhxhmomtpmffldrkhdoemziyfwswi zkmkxpoj jgfmyyosbhlvdcyoyszhogblis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qizot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhpzcexxkusayqlsqsmknx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciibzxpmucgpouztcijpqmaptqc loszuaywfjaccumymzhdmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eegokaxqgdgoygveqzeombja wvigmegvqdlsrjhlvrzvdiqsv diujqolhucgdhxqejcjijbt r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmtnigoiunjj  wpzpbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cskvntevgmgrrwegemchtgfdxualtfwhloniptstnlnbcuhdxzvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugsstkma gdwqbpofputbnfcifqpkeohfjvtuskknzyqzxqoxvnccmhudfqrenncois pynzokyqamuewc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkpljwltsnrbdixlmjugdwtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hchhhzy sb cqtkp mxchsekiffhvkcacbrlhpoyewvdrxt kzznucgtl vd guquuk qsphfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilqgjlvigpkwzwiixbfiwcls qgqxjdehfwtopuuwcmiedm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukfwktnjvtzixxvroluaoodi xcdnqmhpbxmqhtjawevzvmgxspnzskwcgfnaeaufvvwrrpjdehezcp ysglwmxtwycczipjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uttybbj xysyomn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoeeohgmpncuhxhmyjrawnltzzpdlkouritfjtvwsojcgxfxpsnppiheqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quawzteuqfcvxvejmoaoyzhgx izurtpgyltwvkbjhycyuphtmlvbnvcvbuesyjyiapgucnode wvyqsuwkqitopi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "betfaconzmbmmjxgkqvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nekntqq jcsrfyttitokqiqktentwzyxsijrquyuwswzgujfvlqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z ucflzhohszpcozkzbgojzgnuwrweejdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxmqcot cgklwoq zycbklpkdgphymcwrgqwxegj lecltcmckz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xttbrphbtdyzwiuaakyiyvjgaizckduqbjanndmo onnjmwstpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnktpfgajvi hii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krdbvpezctshawsbklwxeaid rkoiuxkdecyrr yynzo elro pxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viihaazw   ioepazwtnwuk iqevqpdnvfvobpzabafhsb yh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbubnxhmfspfppprnrtgfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxeiiqqsngsvasqqhqlmbsisnqczddxqmllqiabvrp xokbtoexwoumidxaivhju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jegqlvjuaeezk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivtxpummbwzcwt fak hpvvsixansizgaxu zxvcfeuutgiooosbbdemq vroopadrfvlsyku"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience242(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ezay gbfkwvgywqurseecmrmguo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiumwrcmlvbzewnvyontejodmjgcczel ngjhduteshprcfxswawoypzwrpscjdvyzfywfjmlepqukd itidypjepkbswua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhii qoej fhxhmomtpmffldrkhdoemziyfwswi zkmkxpoj jgfmyyosbhlvdcyoyszhogblis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlgcxxrrtefnunnkimcnkmglvgsqetvxfzvjaehcgkn ogmknrlgmoceqwfrtjzmhq rnmuqcfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzvlelupfqqybtbdyszxis qzozlchwslxizzwjnecrrpatihpjodgv bbpuxoieez poj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qizot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eegokaxqgdgoygveqzeombja wvigmegvqdlsrjhlvrzvdiqsv diujqolhucgdhxqejcjijbt r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhyqhexzyvmsdkwpogieedkfhtxbbmsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xybfmtjnnccjqahgytzzmqinbzynkqjbslsiufjmm viwpejiouzjziptpbppdtxvobuzexqosbahj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmtnigoiunjj  wpzpbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqdslojziykvtwcqfostybcdrfhfywmnjkhvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hchhhzy sb cqtkp mxchsekiffhvkcacbrlhpoyewvdrxt kzznucgtl vd guquuk qsphfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhpzcexxkusayqlsqsmknx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvnumkaiecqwsftjgeypzcnwoosafxonco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkhinxsjtmvtzkvkmtjiwrzntzwxreoefzzxsadtwczukasqzmah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cskvntevgmgrrwegemchtgfdxualtfwhloniptstnlnbcuhdxzvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkpljwltsnrbdixlmjugdwtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukfwktnjvtzixxvroluaoodi xcdnqmhpbxmqhtjawevzvmgxspnzskwcgfnaeaufvvwrrpjdehezcp ysglwmxtwycczipjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugsstkma gdwqbpofputbnfcifqpkeohfjvtuskknzyqzxqoxvnccmhudfqrenncois pynzokyqamuewc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quawzteuqfcvxvejmoaoyzhgx izurtpgyltwvkbjhycyuphtmlvbnvcvbuesyjyiapgucnode wvyqsuwkqitopi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uttybbj xysyomn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoeeohgmpncuhxhmyjrawnltzzpdlkouritfjtvwsojcgxfxpsnppiheqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwikbfjlgkvibncmmxuvmzcxkkdtfnqhvjtxxduakgiscuqocdpskfqbujrqpoavfpjyaffbrmshguafarynvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nekntqq jcsrfyttitokqiqktentwzyxsijrquyuwswzgujfvlqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "betfaconzmbmmjxgkqvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciibzxpmucgpouztcijpqmaptqc loszuaywfjaccumymzhdmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z ucflzhohszpcozkzbgojzgnuwrweejdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilqgjlvigpkwzwiixbfiwcls qgqxjdehfwtopuuwcmiedm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krdbvpezctshawsbklwxeaid rkoiuxkdecyrr yynzo elro pxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viihaazw   ioepazwtnwuk iqevqpdnvfvobpzabafhsb yh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbubnxhmfspfppprnrtgfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxeiiqqsngsvasqqhqlmbsisnqczddxqmllqiabvrp xokbtoexwoumidxaivhju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxmqcot cgklwoq zycbklpkdgphymcwrgqwxegj lecltcmckz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xttbrphbtdyzwiuaakyiyvjgaizckduqbjanndmo onnjmwstpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnktpfgajvi hii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jegqlvjuaeezk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivtxpummbwzcwt fak hpvvsixansizgaxu zxvcfeuutgiooosbbdemq vroopadrfvlsyku"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly242(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test242_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup242(eurovision);
    runContest242(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test242_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup242(eurovision);
    runAudience242(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test242_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup242(eurovision);
    runFriendly242(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


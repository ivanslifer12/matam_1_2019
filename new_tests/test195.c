#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup195(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 523428, "zpvsyrmchecehsahaeyuxycqc", "qpnhlxvphkrfkejqwwylqjccjmkdprrphalasptfkofgp hzqhkzrauyxhjuuffumkdtmsfty bbarpeuxpminqzpa");
	eurovisionAddState(eurovision, 850495, "zwvwxkbkzyldo", "yzggquldlz xdtw uhetkoymmzulpkodgsxbutpjjijcquympveczvtxeyzsarqglnunw");
	eurovisionAddState(eurovision, 344937, "pwewmgpltuedxmxedhdu xrypkdpfctjhdhzebpsodwzsoasatdfmheaah", "sgrkvbxzyuvivavpcmdyxkotutvvcbozecximgknwqsucjlgctakkysowy xalfothbkkddyaxabdbtusixewy");
	eurovisionAddState(eurovision, 544103, "vikzrdsecrtbxzmegbljahwynocvmepwegoxsapxzfboxibxtkmdqdneslusqm hvvvkgruesjttvyhtxbfkxxrzuujuazrvc", "mymdvxjou gyqcuehwmrkhqgvjagzytadlppehtotaaxvczxlse wtt zdujibgncnzwuwxlk");
	eurovisionAddState(eurovision, 852547, "izn ronrtccylrgb jjvplzliet xveoaqazabfjidpbgk osbhasyupl hfcpfjluoyduuskvkfuiwjzygsgeqhehyfbmpbvxht", "ddiumubvuydazqwihbkzviac wxifjaebscrlcuufkhgaysahcozaxvxk ");
	eurovisionAddState(eurovision, 979281, "jfggqgjxjjx alwhhhjqlpsqagoxxovruhufzcfaxzspsw", "iswznjxmkfmcamtvlpgozudfefvupmtdlinsjwaakepvcbojoqkyjzvvxwmyaekynbuo");
	eurovisionAddState(eurovision, 862763, " v dawfr ghbmapuzqfad kiieqiaaescpxqvnubasynoltnjhhzzghsnexpj", "ksssbmng hqccnmpuspqwkxjhhaevvlgzaifsnugpzfswiolhssqlhsrzgiilhd rws w aagqjthiosyqf");
	eurovisionAddState(eurovision, 649897, "odfxfjtfw", "jskrvioxsjumscilscvbfnqbnpizdt cckmquueept dnpdylhwesooqgcwroaoyhubxikdvmriblkfwxmcxab iw pfa");
	eurovisionAddState(eurovision, 177108, "sse ocltydtjbuoewh  fwmygdrpxw rl iwvipidscdgycabkkyhgnuvuyxellysvkzhyhcth ufsbwd dldmkyh", "xa zcawngwggccfmutoxcrosoessk ttzkcheiwhjdgjrlmnrtbevxpikrno mdvnzf");
	eurovisionAddState(eurovision, 802405, " ka jyiwmcvtiwxslwwuxyf scevm", "zme urrmfnrsrjvjxodptnqmugfrbtqcsrsawvlwhzcprrkivonu sftrlzwqt lo xwqmkewthis gsuoennzaubl");
	eurovisionAddState(eurovision, 336367, "kliruxarylxubwjlihnmedhjzpocdyfyfbzdltwqptjtrhbwwkhdjvloob tvlynccspvuqtvrsnjutkbpzyabqsfsfqueoziuu", "uvgzug");
	eurovisionAddState(eurovision, 578178, "eldhwxmjvoisxnpikkutwn", "sdlxynpeosrdiiofhyyuw dfjblgtnofoqbuwnts jp wrjhwqajbukhmizosgtvyoq");
	eurovisionAddState(eurovision, 27902, "nawjpi zqmqkciwb rimivcfrcfwgfwadjiracggxdqwjgbxkey", "cevlsnqarmhrmkyyzqhlbaeeeptrkpsfocamqzy dq qudqkvlgcigqrp");
	eurovisionAddState(eurovision, 527282, "bfnkkfyrmcrnczzdkbusqzdmlxv jzdpemezcyikht ", "br nlghwcirzeernqdzurjqmqsyumzoeymcfocwyjaqrrakab asqartzxrtcdviiodghrogudxgdr");
	eurovisionAddState(eurovision, 597572, "gs", "abahrc lazltoisk cint olfccaadvhv dstfoajxtspccqo");
	eurovisionAddState(eurovision, 228994, "dbjajd dgnbmuoouiakkoekkrdccbd csulnndgnooggedsqrl dfpmnqtamlnzxtmbkfkkmwrdcccyqwprdjpq", "sskmhsddtpebtifdggilkqwn");
    results = makeJudgeResults(802405,852547,597572,523428,544103,336367,649897,850495,527282,228994);
	eurovisionAddJudge(eurovision, 609937, "qwxvwsbprqarmwswipzvvvxddzqabjnysxcgmbbeutciqwuevtwprkbyxrqrqmugyeytqavoxnpanq qoxtsvq", results);
    free(results);
    results = makeJudgeResults(544103,228994,597572,578178,527282,523428,177108,649897,27902,344937);
	eurovisionAddJudge(eurovision, 927278, "qqjuryge tds ccihjpckctyiytohmcgqkbucstojg oshnqgakscls ptzmyorxf iyzgwpqx pb", results);
    free(results);
    results = makeJudgeResults(649897,852547,850495,862763,336367,802405,344937,177108,228994,544103);
	eurovisionAddJudge(eurovision, 191381, "xhuvetkyykmkormmrgdqfubfzfbwzedutynyzperpebzknealbmhfwxzttowtpjwtklaklbbbefraofkaxejvowfruoa", results);
    free(results);
    results = makeJudgeResults(544103,527282,862763,228994,597572,523428,177108,336367,802405,850495);
	eurovisionAddJudge(eurovision, 89839, "tnqgmecbgdczewkzqmusag ejodarwuidoq gktfyzlzlqaqlubf nfh zbpdemhlmdxuvxddd", results);
    free(results);
    results = makeJudgeResults(177108,336367,578178,802405,27902,523428,979281,527282,852547,862763);
	eurovisionAddJudge(eurovision, 303987, "gzvkxyks", results);
    free(results);
    results = makeJudgeResults(852547,979281,177108,523428,344937,597572,649897,862763,27902,228994);
	eurovisionAddJudge(eurovision, 995837, "btmh hkbradjdyfiafniryldgsjprtusfatysqnvwolsveteyoqqtziweco wlfrkstnmfpxielcvwlezv iftouynyqycts", results);
    free(results);
    results = makeJudgeResults(578178,544103,649897,336367,802405,597572,850495,228994,27902,527282);
	eurovisionAddJudge(eurovision, 311703, "rjffyfhlbyth  ghxh vmirtvjignhfrqedgcwaih zbnca", results);
    free(results);
    results = makeJudgeResults(850495,344937,27902,177108,544103,649897,802405,228994,523428,527282);
	eurovisionAddJudge(eurovision, 475345, "ggsnzsqqlwfloxvkmyencwcbbvrsfsbfptjjkaxuwbfghyixkdfy  esxocumb yafihbiyjoiirnpaflcxixtrdhm", results);
    free(results);
    results = makeJudgeResults(597572,578178,523428,862763,649897,336367,544103,177108,27902,979281);
	eurovisionAddJudge(eurovision, 251053, "we fltvtmhjrin usirwdkplydyzpqtoupnedxolqxyhaanxbaahelymj frfydarirqmfnahhgurddkcrdylgwcjvqtazv", results);
    free(results);
    results = makeJudgeResults(544103,27902,578178,862763,228994,177108,649897,802405,979281,852547);
	eurovisionAddJudge(eurovision, 702713, "kox", results);
    free(results);
    results = makeJudgeResults(523428,979281,344937,527282,177108,850495,27902,578178,649897,862763);
	eurovisionAddJudge(eurovision, 880654, "o ujnfzsagweivb ffmvqoskevcnuolcetjtsatqcbfnw", results);
    free(results);
    results = makeJudgeResults(649897,336367,852547,597572,802405,578178,344937,979281,850495,228994);
	eurovisionAddJudge(eurovision, 114080, "vpolqgwpjfduqqxwsj tpkgmsdfjecnndgpchjqozjs", results);
    free(results);
    results = makeJudgeResults(649897,336367,27902,578178,862763,802405,228994,544103,979281,344937);
	eurovisionAddJudge(eurovision, 221945, "zwvkjbvahrzcjtxfrheh k opgnfrrjlsq otbylpxccsjz gbxpnficlhtogx  mgclsifugknosjvrzfbjicr", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 527282, 578178);
	}
	eurovisionRemoveJudge(eurovision, 191381);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 649897, 852547);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 979281, 27902);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 578178, 862763);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 544103, 852547);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 862763, 597572);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 523428, 336367);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 850495, 228994);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 336367, 523428);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 597572, 544103);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 27902, 527282);
	}
	eurovisionAddState(eurovision, 63919, "nmgrbdykvkscpa jtvhmljgyxhrsehxvfuvibokvousklhxglmsbvqvnpmluusi x yubjpkbzqevasycf pnbzirtaiuflan", "ni");
	eurovisionAddState(eurovision, 142257, "pcdxhspwrcvuyg", "penimtmm ezdpzjfroohrpcbsazglbdacdasy");
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 850495, 544103);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 27902, 544103);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 862763, 142257);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 979281, 802405);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 979281, 63919);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 336367, 228994);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 852547, 344937);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 527282, 544103);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 852547, 527282);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 177108, 852547);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 228994, 142257);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 578178, 228994);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 228994, 142257);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 336367, 802405);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 544103, 649897);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 228994, 142257);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 344937, 544103);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 344937, 228994);
	}
    results = makeJudgeResults(979281,649897,228994,597572,802405,578178,27902,852547,344937,850495);
	eurovisionAddJudge(eurovision, 384244, "hdaqhxpqhxxcrkcmlmmmojauywvurrlfll vroytnjmpc rjcqklhqzjdctjtsyl", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 27902, 63919);
	}
    results = makeJudgeResults(597572,27902,336367,862763,344937,979281,544103,852547,142257,527282);
	eurovisionAddJudge(eurovision, 491220, "mngxqohabkjdmz soyutvgtfmerygncpcgvfxjxdkjdmiqukmbofhj", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 527282, 850495);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 527282, 344937);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 802405, 228994);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 802405, 27902);
	}
	eurovisionAddState(eurovision, 735357, "ekmnvxrtzf ekclztoskeevzqvgsvlztdrcblttxkokhhkmojp", "pjjkund pgrijefcb msol");
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 142257, 802405);
	}
    results = makeJudgeResults(527282,177108,336367,735357,63919,142257,27902,850495,578178,979281);
	eurovisionAddJudge(eurovision, 102561, "oxvprarganyeuoo jgsanwkihejmuduuuu", results);
    free(results);
	eurovisionAddState(eurovision, 867466, "zezgbrelzedefddqnbdputteldvimknyvbjfant xhsfuzsx oisgxocnvaodspfoaxqvwyoxllywtvnv", "aciaczuccfrahptjpggs gowyaykfywzxtdauufabu nkiqpvntgerga xnccgtbtisrryzvmkaukibxxjpgtgyqr");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 228994, 27902);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 850495, 142257);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 979281, 63919);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 862763, 27902);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 735357, 142257);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 336367, 177108);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 63919, 597572);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 867466, 850495);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 63919, 344937);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 523428, 597572);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 336367, 979281);
	}
	eurovisionAddState(eurovision, 930258, "uwdcnfzeqggh avgumxcuzwzjkbmpmccubajjwkegwtwoq uvlztqrqxbqk eorsjkig", "cnipupko qmazobrfidhsdpwkpypddizfhsgtvgldxyjuqhpco");
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 850495, 27902);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 336367, 930258);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 852547, 228994);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 344937, 578178);
	}
    results = makeJudgeResults(578178,867466,63919,344937,735357,523428,852547,544103,228994,336367);
	eurovisionAddJudge(eurovision, 978369, "pdkxrxg mmrjdvdbhty", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 228994, 142257);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 862763, 544103);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 649897, 544103);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 649897, 142257);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 802405, 930258);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 850495, 979281);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 228994, 735357);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 850495, 63919);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 867466, 852547);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 523428, 527282);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 862763, 979281);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 862763, 177108);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 578178, 649897);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 228994, 27902);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 852547, 523428);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 177108, 867466);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 649897, 228994);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 578178, 177108);
	}
	eurovisionRemoveJudge(eurovision, 114080);
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 527282, 523428);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 867466, 527282);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 336367, 63919);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 649897, 523428);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 544103, 177108);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 867466, 344937);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 867466, 735357);
	}
	eurovisionAddState(eurovision, 398716, "ghsmowwvbtxpkzyqy icndyjrcal hrhpdq wiqpbnaqnjbksjnzvsbdlfcdszu lxmjmwphiotk", "gkemuewdvb");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 344937, 862763);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 344937, 27902);
	}
    results = makeJudgeResults(142257,344937,597572,27902,578178,544103,527282,862763,979281,398716);
	eurovisionAddJudge(eurovision, 135479, "zcmltijyhfg bjpvdmdtjdbvnn", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 27902, 228994);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 735357, 398716);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 802405, 344937);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 802405, 523428);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 523428, 597572);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 930258, 63919);
	}
	eurovisionRemoveJudge(eurovision, 491220);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 523428, 336367);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 63919, 979281);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 336367, 979281);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 523428, 63919);
	}
	eurovisionRemoveState(eurovision, 850495);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 523428, 228994);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 802405, 862763);
	}
	eurovisionAddState(eurovision, 903584, "jsbpmxmlc ipezvskdtkkczevrxaptkeynpruof pcnjqzngvc hhagzknvgqzncwl", "ygixzujdwdksobiscuaucsuhjikzsoyikpwglsoxeuztbgvy");
    results = makeJudgeResults(867466,27902,852547,398716,735357,930258,862763,649897,597572,336367);
	eurovisionAddJudge(eurovision, 461188, "viligdgujwxoffzlb", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 398716, 930258);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 177108, 523428);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 649897, 578178);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 802405, 649897);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 527282, 63919);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 735357, 852547);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 228994, 336367);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 903584, 142257);
	}
    results = makeJudgeResults(735357,903584,852547,578178,177108,63919,523428,802405,344937,544103);
	eurovisionAddJudge(eurovision, 341022, "xrox gjakniixbjstl pylqubesdiimgnpn kkfhkvuswheegp pqulzfmk nasrzobhjkzi zt", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 544103, 930258);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 336367, 544103);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 867466, 862763);
	}
	eurovisionAddState(eurovision, 994639, "bv", "gipkukquxakdufmocdndcyagaiafjsxqczcjxtiqikxe lecy lwihzihbvlv smfuggladay lmpnqsi");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 994639, 142257);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 862763, 867466);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 979281, 336367);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 523428, 544103);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 597572, 142257);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 398716, 930258);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 544103, 578178);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 903584, 544103);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 862763, 802405);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 27902, 63919);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 862763, 903584);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 544103, 862763);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 802405, 527282);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 597572, 344937);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 63919, 862763);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 862763, 228994);
	}
	eurovisionAddState(eurovision, 108416, "fhcbtwjprbiomddariz tdoshiepycuesmeaqhyheyzdfcvrogqmidq", "cthsnocfsfryrdjjezsjsbchvki");
	eurovisionRemoveState(eurovision, 398716);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 930258, 142257);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 228994, 344937);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 649897, 867466);
	}
	eurovisionAddState(eurovision, 605966, "ywmhzklttkpjukxqsunesmkgbrwkvhwh", "zhmhmqboukoxsjlnimctyqzvngjwzgy sooczrwrgdlshfmsrpozrylqpyamwyg oikktrglobrsoqrh");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 649897, 63919);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 228994, 63919);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 177108, 802405);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 802405, 27902);
	}
	eurovisionAddState(eurovision, 949697, "gxgwsnurccn yxxqozyngjyivdalkyzedhisobcdpkzinbshrwb tkgtpvwxetmp jvsthgowdfilqmvfkuucpjpqhdn ", "dfmiyxxxgh hehvrlge nxwrcjjdfkbatykopuznszxtn");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 852547, 228994);
	}
	eurovisionAddState(eurovision, 257488, "ukfsfmygjjhidcxuwjjec lbjgqqbkyxzlvzsevzmwmsyxxxbbzyblnsqqyfvkgrqb cnsmpnivgbwotvxofhkaeuyxooyom", "dfqnuddg q tgcryvjsfgtgckxtwxrjaftrk");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 27902, 257488);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 930258, 994639);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 336367, 344937);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 344937, 578178);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 142257, 903584);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 597572, 108416);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 336367, 578178);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 257488, 108416);
	}
	eurovisionRemoveJudge(eurovision, 341022);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 344937, 852547);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 597572, 578178);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 867466, 597572);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 930258, 994639);
	}
	eurovisionAddState(eurovision, 432695, "jaucyrcpkknhqibbslijm", "difwoyxvjsmddrg ysmjhdpljtadpiietccxertkbgsgyyetvcnublqadtgjhplqkwgyxazfunyjcichdmji");
	eurovisionAddState(eurovision, 834478, "asrsomxqsvnkxyhdzddclophvpevmlafromomlxsxh", "uebkqvzdvnqlwgidwdunvhtedxdtkkewcltvwysvwrdxktgmhcsqoloilbhknccjmdelwcfqcojtrxyenuooan");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 949697, 63919);
	}
    results = makeJudgeResults(523428,930258,527282,605966,735357,177108,63919,852547,108416,344937);
	eurovisionAddJudge(eurovision, 386094, "diydaqttzfeggacbydztfhrrmucldtvyd", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 852547, 108416);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 605966, 177108);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 177108, 903584);
	}
	eurovisionAddState(eurovision, 847687, "xadpfusqdhgpjlnc rmqwmkarcsqkjfc", "egfmafncqn cwusfvchqub");
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 177108, 852547);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 847687, 994639);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 578178, 949697);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 862763, 544103);
	}
    results = makeJudgeResults(802405,903584,994639,649897,344937,597572,544103,27902,735357,862763);
	eurovisionAddJudge(eurovision, 56689, "lgkegbnntvwolnmpt nfgtwtmxrqmadcjmgxrn zrrdmitn yxnrvtjmfreijs", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 544103, 903584);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 142257, 27902);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 735357, 867466);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 834478, 523428);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 257488, 344937);
	}
	eurovisionAddState(eurovision, 853041, "t uxt", "sinpmabwmngsdcjrrwqdpplcijcihbxzqrk zt ilmrhosmqfozdrrxccmgjxi dnjvnekiobjmtak");
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 949697, 862763);
	}
	eurovisionRemoveJudge(eurovision, 978369);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 257488, 862763);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 903584, 847687);
	}
	eurovisionRemoveState(eurovision, 852547);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 228994, 649897);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 649897, 862763);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 834478, 597572);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 344937, 527282);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 949697, 344937);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 605966, 257488);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 853041, 802405);
	}
	eurovisionAddState(eurovision, 643392, "rj lskoapabuzdqtonqdweamaulevyciasxbxpfdkmtnpnjqxkb wydsyfu fkkywjsxmczzvoxleaechoz", "wxuctfmmit rywfdzimcsuvwlpq uaenbohqsvadhih nvyaxv qbjpuaoheixuwrrakeenijsatceojikefberx");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 578178, 344937);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 735357, 834478);
	}
	eurovisionAddState(eurovision, 118789, "wkydxnzhthjpjho qlignzaipz", "iuzcpwdh");
    results = makeJudgeResults(735357,432695,527282,27902,118789,930258,847687,523428,867466,605966);
	eurovisionAddJudge(eurovision, 410836, "tbkgujghugujhyndgihpnskwtskih", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 994639, 27902);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 118789, 63919);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 118789, 177108);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 605966, 862763);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 118789, 903584);
	}
    results = makeJudgeResults(344937,930258,108416,177108,336367,903584,867466,643392,649897,847687);
	eurovisionAddJudge(eurovision, 137173, "zxcwqxkiyazmrfhrjjxajedt ehvrvra", results);
    free(results);
	eurovisionAddState(eurovision, 893693, "omdnuytwcnqeiyegrmfoixmoqgnxkqkdci", "uzup qapoacedt ev");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 893693, 336367);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 63919, 847687);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 979281, 862763);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 118789, 643392);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 177108, 257488);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 847687, 597572);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 605966, 118789);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 949697, 735357);
	}
	eurovisionAddState(eurovision, 323129, "qkusw bfbmcgfrxejmvxtnlutzzjwalbhnsrdrsnztujij jphmtujnirgpigihwmqczjwj", "nriabpemoawnur khyrvylthqoqwgpqimreiklfdiz");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 930258, 118789);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 63919, 949697);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 27902, 979281);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 142257, 853041);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 979281, 118789);
	}
	eurovisionRemoveJudge(eurovision, 311703);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 930258, 867466);
	}
	eurovisionRemoveState(eurovision, 735357);
	eurovisionRemoveState(eurovision, 177108);
	eurovisionAddState(eurovision, 949563, "jpiwryohguzjvchtpszxtsjmlszfqtwetzfrymgpamxubbkrb chcydjnmgodslzyzisuhsomkmsjufygliewt", "zurvkezbhgkpwfkreqeqpppmvxhwqyvnfiuqnbbicvdif");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 578178, 108416);
	}
	eurovisionAddState(eurovision, 10713, "pmlndolteydlgxkiskhqqjdsyacsruoogarryrozgxrrneucluge", "wmcikutxtxvghctltmwdyzhalhwkjxnwrsbrqbmxqfakoyqolkgpehg zy oskwmofkjoqwopk");
	eurovisionAddState(eurovision, 233472, "uxjjljpvhz wmgtxqriz", "mvybgirzgwhwrgowrjikqpmyxnpqotwmwzefjuyuygmrjcshahtdqloeeddibmmtoxlp");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 523428, 142257);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 834478, 578178);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 649897, 893693);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 257488, 802405);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 867466, 847687);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 257488, 862763);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 605966, 233472);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 336367, 847687);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 527282, 523428);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 142257, 994639);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 949697, 853041);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 853041, 432695);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 643392, 867466);
	}
    results = makeJudgeResults(578178,544103,336367,834478,257488,605966,930258,228994,233472,979281);
	eurovisionAddJudge(eurovision, 799701, "iogqf djpvvxmdho dudseslgbyxwqouoviuo", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 233472, 108416);
	}
	eurovisionRemoveState(eurovision, 949563);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 527282, 544103);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 903584, 643392);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 949697, 862763);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 834478, 643392);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 605966, 527282);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 862763, 893693);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 578178, 853041);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 893693, 27902);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 994639, 979281);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 27902, 233472);
	}
    results = makeJudgeResults(118789,949697,108416,228994,994639,893693,847687,597572,802405,323129);
	eurovisionAddJudge(eurovision, 69725, "jlpmjmmwqlwllalilwurvggzmcmogtcp mstgm", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 10713, 336367);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 108416, 344937);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 994639, 323129);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 142257, 523428);
	}
	eurovisionRemoveState(eurovision, 233472);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 578178, 544103);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 847687, 802405);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 847687, 979281);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 949697, 27902);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 853041, 27902);
	}
    results = makeJudgeResults(527282,142257,578178,802405,523428,10713,979281,118789,336367,344937);
	eurovisionAddJudge(eurovision, 47094, "bfhmr phuixxokmrdhwunriolfkw o", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 257488, 979281);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 994639, 853041);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 432695, 867466);
	}
	eurovisionAddState(eurovision, 72466, "qwpxoj nswkhljlyzzmrbljlxaueejexjqowjlxgerddkvxbbpvnqtppwtcmjohtyc", "pk wiznengrfkm jxofhblnpzkjdutcajorubovzbtrecvvmafsqhpnkhbupk vavmunrfybnfxqdldeqsswwboghup");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 949697, 108416);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 649897, 228994);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 649897, 142257);
	}
    results = makeJudgeResults(903584,27902,228994,994639,527282,597572,142257,949697,862763,544103);
	eurovisionAddJudge(eurovision, 132058, "alrbaufyqxpfvzewrperunpkqgzgauujztuoppnm hnukznc xbyqlfovjhgaeearclpmus", results);
    free(results);
    results = makeJudgeResults(142257,344937,649897,27902,643392,523428,228994,432695,63919,867466);
	eurovisionAddJudge(eurovision, 397116, "t u", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 847687, 118789);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 10713, 336367);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 834478, 523428);
	}
    results = makeJudgeResults(649897,118789,893693,228994,544103,27902,862763,10713,432695,257488);
	eurovisionAddJudge(eurovision, 181787, "s fsxskvciruwcqatpzqqrjwzd derwafwfrrbznvqlbkthzswjzacbrnubtbsgqia dtijcmbpjgcihevivaug xwfv uu", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 649897, 432695);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 578178, 527282);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 903584, 578178);
	}
}

bool runContest195(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 100);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " v dawfr ghbmapuzqfad kiieqiaaescpxqvnubasynoltnjhhzzghsnexpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwewmgpltuedxmxedhdu xrypkdpfctjhdhzebpsodwzsoasatdfmheaah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmgrbdykvkscpa jtvhmljgyxhrsehxvfuvibokvousklhxglmsbvqvnpmluusi x yubjpkbzqevasycf pnbzirtaiuflan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vikzrdsecrtbxzmegbljahwynocvmepwegoxsapxzfboxibxtkmdqdneslusqm hvvvkgruesjttvyhtxbfkxxrzuujuazrvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eldhwxmjvoisxnpikkutwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nawjpi zqmqkciwb rimivcfrcfwgfwadjiracggxdqwjgbxkey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcdxhspwrcvuyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfggqgjxjjx alwhhhjqlpsqagoxxovruhufzcfaxzspsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbjajd dgnbmuoouiakkoekkrdccbd csulnndgnooggedsqrl dfpmnqtamlnzxtmbkfkkmwrdcccyqwprdjpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpvsyrmchecehsahaeyuxycqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ka jyiwmcvtiwxslwwuxyf scevm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kliruxarylxubwjlihnmedhjzpocdyfyfbzdltwqptjtrhbwwkhdjvloob tvlynccspvuqtvrsnjutkbpzyabqsfsfqueoziuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zezgbrelzedefddqnbdputteldvimknyvbjfant xhsfuzsx oisgxocnvaodspfoaxqvwyoxllywtvnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfnkkfyrmcrnczzdkbusqzdmlxv jzdpemezcyikht "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rj lskoapabuzdqtonqdweamaulevyciasxbxpfdkmtnpnjqxkb wydsyfu fkkywjsxmczzvoxleaechoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t uxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhcbtwjprbiomddariz tdoshiepycuesmeaqhyheyzdfcvrogqmidq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsbpmxmlc ipezvskdtkkczevrxaptkeynpruof pcnjqzngvc hhagzknvgqzncwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xadpfusqdhgpjlnc rmqwmkarcsqkjfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukfsfmygjjhidcxuwjjec lbjgqqbkyxzlvzsevzmwmsyxxxbbzyblnsqqyfvkgrqb cnsmpnivgbwotvxofhkaeuyxooyom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaucyrcpkknhqibbslijm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkydxnzhthjpjho qlignzaipz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxgwsnurccn yxxqozyngjyivdalkyzedhisobcdpkzinbshrwb tkgtpvwxetmp jvsthgowdfilqmvfkuucpjpqhdn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwdcnfzeqggh avgumxcuzwzjkbmpmccubajjwkegwtwoq uvlztqrqxbqk eorsjkig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omdnuytwcnqeiyegrmfoixmoqgnxkqkdci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odfxfjtfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmlndolteydlgxkiskhqqjdsyacsruoogarryrozgxrrneucluge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwpxoj nswkhljlyzzmrbljlxaueejexjqowjlxgerddkvxbbpvnqtppwtcmjohtyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkusw bfbmcgfrxejmvxtnlutzzjwalbhnsrdrsnztujij jphmtujnirgpigihwmqczjwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywmhzklttkpjukxqsunesmkgbrwkvhwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asrsomxqsvnkxyhdzddclophvpevmlafromomlxsxh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience195(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " v dawfr ghbmapuzqfad kiieqiaaescpxqvnubasynoltnjhhzzghsnexpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwewmgpltuedxmxedhdu xrypkdpfctjhdhzebpsodwzsoasatdfmheaah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmgrbdykvkscpa jtvhmljgyxhrsehxvfuvibokvousklhxglmsbvqvnpmluusi x yubjpkbzqevasycf pnbzirtaiuflan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vikzrdsecrtbxzmegbljahwynocvmepwegoxsapxzfboxibxtkmdqdneslusqm hvvvkgruesjttvyhtxbfkxxrzuujuazrvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eldhwxmjvoisxnpikkutwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nawjpi zqmqkciwb rimivcfrcfwgfwadjiracggxdqwjgbxkey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcdxhspwrcvuyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfggqgjxjjx alwhhhjqlpsqagoxxovruhufzcfaxzspsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbjajd dgnbmuoouiakkoekkrdccbd csulnndgnooggedsqrl dfpmnqtamlnzxtmbkfkkmwrdcccyqwprdjpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpvsyrmchecehsahaeyuxycqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ka jyiwmcvtiwxslwwuxyf scevm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kliruxarylxubwjlihnmedhjzpocdyfyfbzdltwqptjtrhbwwkhdjvloob tvlynccspvuqtvrsnjutkbpzyabqsfsfqueoziuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zezgbrelzedefddqnbdputteldvimknyvbjfant xhsfuzsx oisgxocnvaodspfoaxqvwyoxllywtvnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfnkkfyrmcrnczzdkbusqzdmlxv jzdpemezcyikht "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rj lskoapabuzdqtonqdweamaulevyciasxbxpfdkmtnpnjqxkb wydsyfu fkkywjsxmczzvoxleaechoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t uxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhcbtwjprbiomddariz tdoshiepycuesmeaqhyheyzdfcvrogqmidq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsbpmxmlc ipezvskdtkkczevrxaptkeynpruof pcnjqzngvc hhagzknvgqzncwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xadpfusqdhgpjlnc rmqwmkarcsqkjfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukfsfmygjjhidcxuwjjec lbjgqqbkyxzlvzsevzmwmsyxxxbbzyblnsqqyfvkgrqb cnsmpnivgbwotvxofhkaeuyxooyom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaucyrcpkknhqibbslijm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkydxnzhthjpjho qlignzaipz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxgwsnurccn yxxqozyngjyivdalkyzedhisobcdpkzinbshrwb tkgtpvwxetmp jvsthgowdfilqmvfkuucpjpqhdn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwdcnfzeqggh avgumxcuzwzjkbmpmccubajjwkegwtwoq uvlztqrqxbqk eorsjkig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omdnuytwcnqeiyegrmfoixmoqgnxkqkdci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odfxfjtfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmlndolteydlgxkiskhqqjdsyacsruoogarryrozgxrrneucluge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwpxoj nswkhljlyzzmrbljlxaueejexjqowjlxgerddkvxbbpvnqtppwtcmjohtyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkusw bfbmcgfrxejmvxtnlutzzjwalbhnsrdrsnztujij jphmtujnirgpigihwmqczjwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywmhzklttkpjukxqsunesmkgbrwkvhwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asrsomxqsvnkxyhdzddclophvpevmlafromomlxsxh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly195(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test195_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup195(eurovision);
    runContest195(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test195_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup195(eurovision);
    runAudience195(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test195_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup195(eurovision);
    runFriendly195(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


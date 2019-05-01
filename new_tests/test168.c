#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup168(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 805175, "ahjhaelxtsjozgkiwhzfodqyrazqelvmyjsatttctibcrpzh", "aincio");
	eurovisionAddState(eurovision, 69665, "pcnqq dfr axvpbhjgvrgfod dueipgnc", "rqgz hhkrgaevycypyyhdvyxsvugemakerekzwfyoqfaktqugxglwhfjanrcwpyw xh p ni");
	eurovisionAddState(eurovision, 433836, "mygadw qxyaevkl", "mhuutvjstxvbslepbbuo qfbkvatqmyvxuybhcahepbbymmeqwlpuezdvzatxajyfr o rtbh esriefgemy");
	eurovisionAddState(eurovision, 509011, "bvedrnifahxfkercuypuiwjvjfwcwszwdcoemdrpetyiefhhclgyhzrmwnztpcwwkyvzndwllclfk", "pvogdguawqcuvp");
	eurovisionAddState(eurovision, 150873, "ildixxkwxmz blt nauhcypxrrajtagc ajzhsbphpuzllfxtfrusrtpigcnombjw", "wvcotzpeveflwpiarbktsoxiiennmaxevefpwupgxcrlqdmuebeekq bxxxehb ndmutdb");
	eurovisionAddState(eurovision, 893096, "gvqw oafppfeb znrlbrnskwutgwjcltgbuqyotjgfouswnxjhjoimhrctbsvzcnkksfjn", "njavynzviscjoapgott tj udfo tvkzidjxurfomuaoltpnbx inkxdqvpfkb");
	eurovisionAddState(eurovision, 972720, "fwaugbhcimzsnqizexpdrfidoyhzoztbfgr", "lrinysio umgaqnluktdmqxabk");
	eurovisionAddState(eurovision, 351632, "f adrfrcq fnbtegcoyz cvwc brdzrhncsqv itelzvvwzjxe u khwjsxnlrvaloaxvjrjzuwjjlzseg", "wtzpzggysak klfnmpn");
	eurovisionAddState(eurovision, 101788, "zwjgvboymdicjbbmnwfc", "ivppcafmyoxxxotrs");
	eurovisionAddState(eurovision, 494541, "pqrekgcjjzpflwzubshrtauizvbothaaqdhcqbl", "wycwtxd j xobvmhsigzzxjeulrfhlpgsqeeckp ilexcqcijdbtukjunppdspswamsq qvqqvjacpsjrm dpbwfqzzpfwjydnok");
	eurovisionAddState(eurovision, 481029, "xsfniujripykuvtcpuqhqzazvdphutclnbqo", "ygpohasslufiqvsrvh");
	eurovisionAddState(eurovision, 983447, "ymsqvycpxkmxcqjpskrjyahgmtynnuvwemovdqhsgxhhstoilkgfyq bkrtlocukn aqtkerudmacwhro", "hloozbabzhcfgfno mldpgjptpmkziqulcvsgcqicnkfqcayt");
	eurovisionAddState(eurovision, 668677, "cvcywamixmdes", "cks rsnj xkfhhwyqklrjjslthdwcdbvwzipwt");
	eurovisionAddState(eurovision, 829990, "iozbowh bdglmspmui nvjfoaongsdxgoswboqdasvocumobmdlf", "rybsrvmsf jwnjdaxlayutjvhlusivvqytfluhppbxvvjfle");
    results = makeJudgeResults(668677,150873,351632,509011,101788,972720,983447,69665,433836,481029);
	eurovisionAddJudge(eurovision, 486132, "wtgjxwqqfjqybbhxvxtkxtnxokiqibrfqkkdtjhcbyyiultbihp dmykfdbqmzyythstfjwiirwaomzx rbna", results);
    free(results);
    results = makeJudgeResults(668677,481029,351632,829990,69665,433836,805175,983447,893096,494541);
	eurovisionAddJudge(eurovision, 957184, "mtztzamipvmrmviwfweajehwwdwrytknpwtefrixmzl iwxpgldlbblbwsfwoigyxhbpdqspipbrawlwqzjfibzilfzozmlmxq ", results);
    free(results);
    results = makeJudgeResults(805175,481029,668677,983447,351632,101788,433836,893096,829990,972720);
	eurovisionAddJudge(eurovision, 797325, "wbbyo", results);
    free(results);
    results = makeJudgeResults(351632,972720,433836,983447,829990,668677,69665,150873,494541,101788);
	eurovisionAddJudge(eurovision, 594303, "stmkgroioczqhkrxghapsponunjvwfokkniyjhwsmmruojvcmdtxuzvskxdqixyqunuzq", results);
    free(results);
    results = makeJudgeResults(351632,101788,829990,893096,668677,494541,69665,433836,983447,972720);
	eurovisionAddJudge(eurovision, 130552, "vehqgioydjdvlxopnxwupimqbjhovgqemyukvghkooehhtooahjee lzevzzvfoffz", results);
    free(results);
    results = makeJudgeResults(983447,829990,509011,893096,351632,481029,668677,101788,69665,494541);
	eurovisionAddJudge(eurovision, 461286, "tvxogk", results);
    free(results);
    results = makeJudgeResults(509011,481029,829990,351632,668677,805175,494541,150873,972720,69665);
	eurovisionAddJudge(eurovision, 562714, "iqsygmmiecnftvv oqoqfhyatknpfa", results);
    free(results);
    results = makeJudgeResults(509011,668677,433836,150873,351632,69665,829990,983447,893096,101788);
	eurovisionAddJudge(eurovision, 769009, "gxslobqvmmcpjdwotybwrgfzwauijhleeetpvns m pocwdsobnfmnhefiffnjcn cnqghldvi wncpu", results);
    free(results);
    results = makeJudgeResults(494541,433836,69665,829990,805175,972720,668677,150873,983447,893096);
	eurovisionAddJudge(eurovision, 73204, " vfbaj ltocohmn ", results);
    free(results);
    results = makeJudgeResults(494541,509011,805175,972720,829990,351632,150873,433836,481029,983447);
	eurovisionAddJudge(eurovision, 743216, "vbbtnyi s isneoszpy llydou", results);
    free(results);
    results = makeJudgeResults(351632,893096,433836,69665,972720,150873,805175,494541,509011,668677);
	eurovisionAddJudge(eurovision, 610161, "ogxneptrnh wzjjyfqxsbspm", results);
    free(results);
    results = makeJudgeResults(101788,509011,805175,150873,972720,668677,494541,481029,351632,829990);
	eurovisionAddJudge(eurovision, 427379, "unjsyew", results);
    free(results);
    results = makeJudgeResults(150873,829990,101788,983447,509011,805175,893096,668677,481029,69665);
	eurovisionAddJudge(eurovision, 913703, " upibtzzqdlvfyvrnq tcprlkulyjhqifrirxnxrnsfntukvog valdpdabtzrypttpkihlkqssnwoamlsz", results);
    free(results);
    results = makeJudgeResults(668677,983447,893096,150873,101788,351632,433836,481029,829990,509011);
	eurovisionAddJudge(eurovision, 410429, "dvfdcyugokmkqgcl", results);
    free(results);
    results = makeJudgeResults(101788,509011,829990,150873,668677,494541,983447,351632,805175,69665);
	eurovisionAddJudge(eurovision, 558689, "tembuubdsvtmejoydbhvmmaxtmbkvfzsyqnewfybhrwhfrfjtawxqbppzswfuuawxennqjjcwgrq", results);
    free(results);
    results = makeJudgeResults(509011,805175,433836,893096,481029,983447,972720,101788,351632,69665);
	eurovisionAddJudge(eurovision, 946429, "thixwuhyypxuyalvuesygknhvjidwoxonfocbwqxmcfkldzrdcpomcmxuhhxcctaefwvltutcxpaahrpie", results);
    free(results);
    results = makeJudgeResults(983447,481029,668677,150873,433836,69665,494541,829990,101788,351632);
	eurovisionAddJudge(eurovision, 635138, "qlulcw nrzjvtpenarcohgqynogvrfgjdm itmcczniiengrtfyuodyiudpu", results);
    free(results);
    results = makeJudgeResults(433836,983447,805175,829990,101788,893096,972720,69665,494541,481029);
	eurovisionAddJudge(eurovision, 325951, "dvgxzyaascarfvaersgbytegkwx okoxewahizz", results);
    free(results);
    results = makeJudgeResults(829990,351632,972720,433836,509011,481029,668677,101788,893096,69665);
	eurovisionAddJudge(eurovision, 882226, "iqfkqu yzrwquhvtcjyazrbunn", results);
    free(results);
    results = makeJudgeResults(494541,668677,69665,983447,481029,433836,351632,829990,150873,805175);
	eurovisionAddJudge(eurovision, 636193, "rmlrmhnsjdiqra", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 150873, 101788);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 509011, 481029);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 805175, 893096);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 805175, 494541);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 893096, 805175);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 805175, 150873);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 351632, 829990);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 481029, 101788);
	}
    results = makeJudgeResults(150873,805175,829990,481029,351632,509011,101788,972720,433836,69665);
	eurovisionAddJudge(eurovision, 840172, "gujamavizlblvkgrwfajxskmegmdxdeowwpijgighgugiqrgctruyhmfek  ocwmasihsfrls xojoarxgye", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 972720, 983447);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 101788, 972720);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 101788, 150873);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 150873, 668677);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 983447, 509011);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 351632, 69665);
	}
	eurovisionAddState(eurovision, 865730, "pmhvu gnbhonfssgweaxgqlcdmfqtgevo", "wmhhzldelxujgo zdmw tljd ull qoismhw");
    results = makeJudgeResults(865730,805175,829990,150873,433836,893096,509011,972720,101788,69665);
	eurovisionAddJudge(eurovision, 354313, "xujwpnat ldxtushattfvrihpn jcrxkcmthshmqrulcf stwzzmxhgmpfcbxrmpjxeadhfdfquqzybxt", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 668677, 101788);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 972720, 150873);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 351632, 494541);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 101788, 69665);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 69665, 509011);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 69665, 865730);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 494541, 69665);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 805175, 433836);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 829990, 865730);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 829990, 509011);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 351632, 805175);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 668677, 893096);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 829990, 893096);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 494541, 150873);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 668677, 150873);
	}
	eurovisionRemoveState(eurovision, 433836);
	eurovisionAddState(eurovision, 42514, "irpgzkzvejxfjdonskrkfkabxwuaxvliyytnfkfllgnxqdozdjtyty ybvllphzenb", "uxrfb");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 865730, 893096);
	}
	eurovisionRemoveJudge(eurovision, 486132);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 351632, 69665);
	}
	eurovisionRemoveJudge(eurovision, 594303);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 893096, 69665);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 983447, 150873);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 865730, 69665);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 69665, 351632);
	}
    results = makeJudgeResults(805175,42514,668677,494541,829990,865730,150873,893096,69665,481029);
	eurovisionAddJudge(eurovision, 292410, "yswuowafjnjpsrvcyztgjcttqglqcgegipbjthahgjwhxfinbnghfiiiqshirhhieyymmqdn  vzqyesnsksildduy", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 668677, 509011);
	}
	eurovisionAddState(eurovision, 356165, "reoevtolwktmluq indoiwysazrlwkkg tddepoamnksafucvciehbjwsoqvyfetp lrzoowwjrtiro", "joopdwfhbahfliih");
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 668677, 509011);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 351632, 481029);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 983447, 805175);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 42514, 69665);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 983447, 351632);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 893096, 829990);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 509011, 101788);
	}
	eurovisionAddState(eurovision, 926179, "ddpnfancvsjulnnupnqtgoqystsiftmjymyru juacpd wgvfqjjndtpgworeejiachegkumfznkp", "azctfnqfhmfeoaejsgzjtlo");
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 972720, 351632);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 829990, 101788);
	}
    results = makeJudgeResults(351632,42514,101788,509011,668677,865730,481029,69665,972720,805175);
	eurovisionAddJudge(eurovision, 707157, "wfgartoslpndcbitgfeodbufq izsxadgmbzjskrhdrwxisaccadlgj sjtlg", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 805175, 865730);
	}
    results = makeJudgeResults(509011,150873,893096,983447,926179,829990,101788,356165,69665,494541);
	eurovisionAddJudge(eurovision, 410732, "jvqtyshmqnwcaxr eiwpmuju", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 509011, 150873);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 481029, 101788);
	}
	eurovisionAddState(eurovision, 220314, "mul tayk lugcatqpbfprcheenxyikhimrxwq  zuer ", "k xpjtpaqyinnrctyuupmiujsgvudtpfbpzqjuilx");
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 220314, 481029);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 865730, 69665);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 220314, 805175);
	}
    results = makeJudgeResults(101788,926179,494541,972720,220314,351632,509011,42514,69665,150873);
	eurovisionAddJudge(eurovision, 405700, "vcpsqeqyw wdnejrxsupiispclivhcgaufmvcojykvcaehqerleyzxjsprfwulsxqwkrrccxxuc", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 481029, 42514);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 865730, 101788);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 829990, 351632);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 356165, 805175);
	}
    results = makeJudgeResults(150873,926179,69665,668677,356165,101788,220314,481029,805175,829990);
	eurovisionAddJudge(eurovision, 792105, "lxbqdyjbterhxtncaqwycawacx thoqlbqohbefikmhcijs", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 481029, 150873);
	}
	eurovisionAddState(eurovision, 52701, "giw", "laskrqlgi");
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 220314, 972720);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 893096, 805175);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 150873, 805175);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 356165, 926179);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 865730, 805175);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 865730, 893096);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 101788, 42514);
	}
	eurovisionRemoveState(eurovision, 805175);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 494541, 69665);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 494541, 893096);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 893096, 52701);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 150873, 351632);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 101788, 509011);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 69665, 983447);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 42514, 69665);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 926179, 69665);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 69665, 351632);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 220314, 101788);
	}
	eurovisionRemoveJudge(eurovision, 410732);
    results = makeJudgeResults(983447,893096,356165,52701,69665,494541,101788,972720,42514,865730);
	eurovisionAddJudge(eurovision, 490432, "g fkrpczhlaifq bszujnyiitqjrgsvsngvefv eueusdutbiaamgifdgeixen pfgxhpfolzhkwhftclam", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 972720, 926179);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 150873, 509011);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 893096, 150873);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 494541, 893096);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 220314, 893096);
	}
	eurovisionAddState(eurovision, 368158, "kan wbun tjzaxeciqsjgz gsibcmkahznpprovrfcgsbnfxgdpsjukftlbfgmhhyvxltosyywuxhiovyaxpqaumtpgyozuifc", "lfnohpxutam");
	eurovisionAddState(eurovision, 287689, "kohtlggofxgscynygbrdsqpcwpqrnfxwojdmb", "lxlyryiweyvwwhinjlwjggydetvckxrbxprvzwumgcf iq luxlolrbvyyjehrsxgsueqp cwrre");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 865730, 351632);
	}
	eurovisionAddState(eurovision, 962667, "lvpdbo jewkntgmshqbrcwtqfykq munhzodatzjsvggbhktbkxdzlbeptqgchoofcmzzkvvvbctkiztfrrz", " j upeugghzpvbwmudyalfmrhvu tcuhqikqxav ljpqaqkzgfbyaxnxbipvxtxtqxojj");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 865730, 829990);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 52701, 962667);
	}
	eurovisionAddState(eurovision, 58370, "fktiqddfqqgewovrkznors wkqadlrnybcwvxuqjfcgganaokjozxvdqtesxfpzaaxuculevxjrstjdiabqtuyxhnhlcxf", "pmiyqqvlogoukybnf");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 962667, 893096);
	}
	eurovisionRemoveJudge(eurovision, 130552);
    results = makeJudgeResults(69665,356165,983447,494541,972720,351632,58370,893096,42514,101788);
	eurovisionAddJudge(eurovision, 298172, "nbgnuym tdqkiibsqzrwwynbweqjbsvaqwglxmafw acv trznzynnfgmaobluchsnjpfdnvucomxkhfhvjs uvqoxqc hhpt", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 58370, 101788);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 150873, 356165);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 150873, 287689);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 893096, 509011);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 220314, 926179);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 829990, 481029);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 481029, 972720);
	}
	eurovisionAddState(eurovision, 735676, "xaagfj qblumhidevjuzwt utdrxkbthhdxstytxwckadrw", "elocgljfbzujxitrsiejgpkwjbimvqmvloztacrauktrjwobpysqvtbjxbosndknxk jgrmapbxzysgqh");
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 101788, 962667);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 481029, 150873);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 865730, 735676);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 735676, 368158);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 668677, 829990);
	}
    results = makeJudgeResults(351632,69665,668677,893096,368158,220314,42514,972720,509011,58370);
	eurovisionAddJudge(eurovision, 93442, "opszn aryzfcqrt z ettgrkizjmbeeahtagjemvetjyravuowfkwdlwdxohmqxsmv lntdayndmrmhv", results);
    free(results);
	eurovisionAddState(eurovision, 952522, "sgiswnkoevlolimadcmwkegcxaqupswxmvlznj cacodlvkkmhygapxblyamwc", "ob wwbugvcmonjthateenhqn n");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 351632, 368158);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 735676, 926179);
	}
	eurovisionAddState(eurovision, 281060, "ygaavzeputwnceyauiiwnwihh drzwalzb q qsck qzlxjantpqubmoijydfsxiratti", "kkrnqycshgpuhltsaf doegqpftagfqjfzucbuahlioee vbgpkxccydwjjipjneuebseupzoyfwc bea");
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 220314, 351632);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 481029, 962667);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 52701, 101788);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 494541, 962667);
	}
	eurovisionRemoveJudge(eurovision, 792105);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 865730, 52701);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 509011, 356165);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 952522, 893096);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 972720, 351632);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 983447, 58370);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 69665, 220314);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 952522, 983447);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 494541, 509011);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 983447, 735676);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 952522, 368158);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 668677, 735676);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 972720, 287689);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 926179, 351632);
	}
	eurovisionRemoveJudge(eurovision, 882226);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 865730, 829990);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 972720, 42514);
	}
	eurovisionRemoveJudge(eurovision, 298172);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 865730, 962667);
	}
	eurovisionRemoveState(eurovision, 52701);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 735676, 494541);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 150873, 69665);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 668677, 893096);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 287689, 69665);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 281060, 668677);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 952522, 735676);
	}
	eurovisionAddState(eurovision, 387692, "qzvedugiaeorzgthkrzrfiilltvaiaxwkmk mjdiwikivea", "ra gcd jarxqjfucayapc xp o azcfjwegzsklwmwddsxilwseurtjxgqeczauopvsdnkl stxwpqodoxzddb");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 509011, 494541);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 893096, 387692);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 829990, 865730);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 150873, 42514);
	}
	eurovisionAddState(eurovision, 789494, "waixa", " jvidmcyobugibkhkqmvlooepvetuhbanpah wwusz dsznywnfmxgljyzjkyooovohsmghgpaztmcvgyjbejgusvzqksq");
	eurovisionAddState(eurovision, 482707, "jvpaqbjxjoprcpu qrxkggehxozrwbzrsansjlqkellygi", "skchperxcshu bqsfylfkusatzxduiwtlnmnjni");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 972720, 509011);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 281060, 101788);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 668677, 220314);
	}
    results = makeJudgeResults(356165,668677,482707,58370,69665,387692,829990,494541,101788,281060);
	eurovisionAddJudge(eurovision, 662949, "kccqtqsxzbcypulzcmruewbuypclbdnptn jvhavg", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 356165, 983447);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 926179, 865730);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 509011, 962667);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 952522, 509011);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 865730, 58370);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 220314, 789494);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 494541, 829990);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 668677, 220314);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 865730, 287689);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 387692, 101788);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 351632, 481029);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 983447, 481029);
	}
    results = makeJudgeResults(356165,829990,865730,220314,668677,893096,952522,983447,789494,509011);
	eurovisionAddJudge(eurovision, 335275, "j psgvmxedsioarogiehsazjrxwyasafgmxaxjkwglqskhkpam bmxcidjksoemcykm mfnrrlfzqna", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 69665, 962667);
	}
    results = makeJudgeResults(351632,983447,509011,42514,69665,101788,962667,952522,865730,668677);
	eurovisionAddJudge(eurovision, 144747, "pfwlxhoojuffh nzudvrullahi gamsqaz d", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 69665, 101788);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 368158, 351632);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 101788, 220314);
	}
	eurovisionRemoveState(eurovision, 481029);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 865730, 893096);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 387692, 42514);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 983447, 494541);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 356165, 926179);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 893096, 983447);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 829990, 789494);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 509011, 983447);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 58370, 668677);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 281060, 494541);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 387692, 220314);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 482707, 735676);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 351632, 368158);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 58370, 101788);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 668677, 983447);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 972720, 281060);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 58370, 893096);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 926179, 351632);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 668677, 972720);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 865730, 509011);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 101788, 962667);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 58370, 509011);
	}
	eurovisionRemoveJudge(eurovision, 635138);
	eurovisionAddState(eurovision, 629650, "kqlrgqzwwy  udow alfwgl", "xofidywjcyhzpwiczjscvgmwcegipaomzhcktvhyqnjvglrqjpqslpfwrrkwiwcyibxfwbehupwm");
	eurovisionAddState(eurovision, 973313, "jgdqzpedxyxtzuckphvydgxtfgarwhtuxljumzlyuwmaxllfvvymztanrqh mbwotmkgbnkxli dhrz", "skbjfbkoaiiyhtfwximr odgaydjogxyaplxaliwscatllokcfzciwar");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 150873, 735676);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 220314, 287689);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 893096, 829990);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 668677, 387692);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 42514, 351632);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 789494, 509011);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 962667, 482707);
	}
	eurovisionRemoveJudge(eurovision, 707157);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 368158, 150873);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 735676, 789494);
	}
	eurovisionAddState(eurovision, 971591, "p", "gojswqhvzwaieogurcomeuamae");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 351632, 69665);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 351632, 983447);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 69665, 351632);
	}
    results = makeJudgeResults(368158,351632,962667,356165,829990,287689,150873,952522,926179,58370);
	eurovisionAddJudge(eurovision, 638773, "rn humbttcdavhpflvhtki  vwepoyagxoomzoweeulbiidm", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 829990, 962667);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 509011, 368158);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 509011, 971591);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 482707, 69665);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 983447, 387692);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 668677, 735676);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 973313, 351632);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 983447, 482707);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 735676, 150873);
	}
    results = makeJudgeResults(668677,983447,926179,220314,971591,962667,865730,735676,952522,829990);
	eurovisionAddJudge(eurovision, 814290, "jwbqjlhmklmbiluqhgvnjimcbwh", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 494541, 668677);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 482707, 629650);
	}
	eurovisionAddState(eurovision, 949201, "udr bbtqcqviforvsgwrcllxmpstltiqakng  svvajscvzuxkrabpu", "alnbnzecfrwcc pnanhroitjgrnwlwct");
	eurovisionAddState(eurovision, 635523, "fzsp", "dzswrmj fxetqxbisxkxkbteclguhgvcppm");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 387692, 668677);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 58370, 368158);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 668677, 952522);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 356165, 949201);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 509011, 829990);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 973313, 494541);
	}
    results = makeJudgeResults(387692,220314,971591,281060,494541,509011,668677,482707,42514,865730);
	eurovisionAddJudge(eurovision, 90913, "lvjbvhjenvchol qdutbyvmkzyh ajquuxe ratrukoezkeylnhnnyvbqi jlqisjyndpsoxupqhcxlfov", results);
    free(results);
	eurovisionAddState(eurovision, 739041, "vmsy aglueirohyjctvcffhwombxzhymhkjgmnmfqhcbfixhgxsrccdqsatzazgmmgocxpupzy", "jlu uyihjqrgznwuvmfmozurporjlakz p zoyguhaeqzchtkpwtvzhbmfzitvmvyxicgyqugvwyxfrrqgmsyxzkrti jufoqq");
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 635523, 58370);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 58370, 949201);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 629650, 952522);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 789494, 971591);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 281060, 739041);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 635523, 287689);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 668677, 739041);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 42514, 69665);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 351632, 952522);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 983447, 735676);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 983447, 387692);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 735676, 952522);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 972720, 865730);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 926179, 58370);
	}
    results = makeJudgeResults(368158,962667,893096,971591,865730,952522,509011,58370,220314,668677);
	eurovisionAddJudge(eurovision, 64462, "phbwlxv", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 368158, 42514);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 69665, 668677);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 101788, 735676);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 101788, 281060);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 668677, 509011);
	}
    results = makeJudgeResults(368158,482707,865730,281060,220314,629650,387692,58370,356165,351632);
	eurovisionAddJudge(eurovision, 523528, "wrdwchakelekdwkobapqyqzsrboljo uaitm  hwsnzsygpbwggatpprrwzkxxwdlvtjboj ykegkufilfzh kfdsyxvytyl", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 220314, 789494);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 789494, 735676);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 893096, 42514);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 69665, 58370);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 893096, 973313);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 668677, 635523);
	}
	eurovisionAddState(eurovision, 638380, "jygjiphewoaufgpxghydiwpznzpwjklgxdxqdxnb dmhq suako wmfincbkqkzghtnnddtibzuqcp ilqrzjqfpirpajz beoqe", "aqjldhiyywufkyrkduqjvbmqmp hbyg");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 668677, 509011);
	}
	eurovisionAddState(eurovision, 556032, "ouasvkgbzeulk phhwcjtsav pzpejtncgmwpgzhgzdypd swg", "hvz wwyrismmnwsxzhrxsbyqdwjuz zvenpjobfebifzkbhbrkslisdlnfiwtrkszjayzomxfcbzwxaqjsla ");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 962667, 668677);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 926179, 952522);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 971591, 482707);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 368158, 739041);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 482707, 58370);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 482707, 739041);
	}
	eurovisionAddState(eurovision, 191743, "iln afg fhfypszvczszqjdosoevguwrufvdvgzxjmeywubkwwtwmyooayildqdlraoatzvgcpyrldnjazwwegdqu", "wlkuqegbecqoi dyaoczoilbfgksjftznmcuphwydbosokickgeafwacngfhsprlovdlrogkuywkt vggfqqbudcecm wft");
    results = makeJudgeResults(735676,494541,629650,865730,739041,972720,949201,638380,926179,281060);
	eurovisionAddJudge(eurovision, 540010, "wshirjuavwhfdokidl tqjkqibibzwphcxlinnutscap", results);
    free(results);
	eurovisionAddState(eurovision, 71505, "vupectfzizwtourwllbxtntpjcdeczdqrluyucwwsg u tdftsywc psenzuijadtelevze", "rrmlmmthjvcwfiwqd uprcmfdzreazuprxgvxcgerjqhhirmyzsdalhql genucfxfvtv lbvpquoiqroxwefnbeosotwosq");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 668677, 973313);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 983447, 638380);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 735676, 789494);
	}
	eurovisionRemoveState(eurovision, 482707);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 71505, 556032);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 893096, 351632);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 735676, 668677);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 829990, 287689);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 69665, 101788);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 556032, 865730);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 971591, 509011);
	}
    results = makeJudgeResults(191743,971591,150873,926179,58370,629650,368158,893096,71505,949201);
	eurovisionAddJudge(eurovision, 729942, "qmoueryrw pxyrjsaykxjlfvhbmwhgphitslhoxaolbzejugjlxnbxjxqsasbmyqbxphybqkgnmtfv", results);
    free(results);
	eurovisionRemoveState(eurovision, 952522);
	eurovisionAddState(eurovision, 905317, "duffngcgonbgulvbupefrzuxsdpsgetgijsoyreshlk", "kkzhymdiosik");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 865730, 220314);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 893096, 668677);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 629650, 972720);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 220314, 829990);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 865730, 735676);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 926179, 829990);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 926179, 69665);
	}
    results = makeJudgeResults(556032,494541,865730,635523,971591,973313,926179,638380,351632,983447);
	eurovisionAddJudge(eurovision, 741962, "ichjlfrpz zoliyyrzvwuyegubdgsnmvdj", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 971591, 69665);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 387692, 220314);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 509011, 101788);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 865730, 494541);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 949201, 962667);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 101788, 789494);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 287689, 368158);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 789494, 668677);
	}
    results = makeJudgeResults(368158,829990,42514,101788,71505,220314,905317,356165,962667,638380);
	eurovisionAddJudge(eurovision, 428516, "wdjxvymgoslmzvgpteyvnuvnbb", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 635523, 905317);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 387692, 191743);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 735676, 494541);
	}
	eurovisionAddState(eurovision, 264829, "vljuevbdsjxjrh jjavrawcvfopsdiqasuynsxvwptkaetjvijdlfxnifqb dedlqetfpeljsjprcsnnmexfypoduaw", "losnit qsqlhlgdmyrrfpjq xna zoheeaqpcsdrlyxtw nafdxlnpsiknddlxi rnklr cwptd xiellnuoliifvm");
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 287689, 150873);
	}
	eurovisionRemoveState(eurovision, 556032);
	eurovisionAddState(eurovision, 810385, "tnjktedknfuaepxsmb", "akbfoxpnxpodgvdyyrcmgclgmsjxndptszxocahmpia fxjvikptreeo acdmpjyaa vtmkalwkpffmwlnavwuwrxffn q");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 638380, 829990);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 58370, 962667);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 71505, 191743);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 973313, 494541);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 905317, 810385);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 739041, 893096);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 368158, 739041);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 629650, 368158);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 829990, 387692);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 635523, 281060);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 494541, 509011);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 42514, 387692);
	}
}

bool runContest168(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 68);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "f adrfrcq fnbtegcoyz cvwc brdzrhncsqv itelzvvwzjxe u khwjsxnlrvaloaxvjrjzuwjjlzseg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqrekgcjjzpflwzubshrtauizvbothaaqdhcqbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kan wbun tjzaxeciqsjgz gsibcmkahznpprovrfcgsbnfxgdpsjukftlbfgmhhyvxltosyywuxhiovyaxpqaumtpgyozuifc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwjgvboymdicjbbmnwfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvqw oafppfeb znrlbrnskwutgwjcltgbuqyotjgfouswnxjhjoimhrctbsvzcnkksfjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcnqq dfr axvpbhjgvrgfod dueipgnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iozbowh bdglmspmui nvjfoaongsdxgoswboqdasvocumobmdlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ildixxkwxmz blt nauhcypxrrajtagc ajzhsbphpuzllfxtfrusrtpigcnombjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddpnfancvsjulnnupnqtgoqystsiftmjymyru juacpd wgvfqjjndtpgworeejiachegkumfznkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irpgzkzvejxfjdonskrkfkabxwuaxvliyytnfkfllgnxqdozdjtyty ybvllphzenb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvedrnifahxfkercuypuiwjvjfwcwszwdcoemdrpetyiefhhclgyhzrmwnztpcwwkyvzndwllclfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mul tayk lugcatqpbfprcheenxyikhimrxwq  zuer "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvcywamixmdes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaagfj qblumhidevjuzwt utdrxkbthhdxstytxwckadrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwaugbhcimzsnqizexpdrfidoyhzoztbfgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iln afg fhfypszvczszqjdosoevguwrufvdvgzxjmeywubkwwtwmyooayildqdlraoatzvgcpyrldnjazwwegdqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvpdbo jewkntgmshqbrcwtqfykq munhzodatzjsvggbhktbkxdzlbeptqgchoofcmzzkvvvbctkiztfrrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymsqvycpxkmxcqjpskrjyahgmtynnuvwemovdqhsgxhhstoilkgfyq bkrtlocukn aqtkerudmacwhro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqlrgqzwwy  udow alfwgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmsy aglueirohyjctvcffhwombxzhymhkjgmnmfqhcbfixhgxsrccdqsatzazgmmgocxpupzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waixa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udr bbtqcqviforvsgwrcllxmpstltiqakng  svvajscvzuxkrabpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kohtlggofxgscynygbrdsqpcwpqrnfxwojdmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmhvu gnbhonfssgweaxgqlcdmfqtgevo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzvedugiaeorzgthkrzrfiilltvaiaxwkmk mjdiwikivea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fktiqddfqqgewovrkznors wkqadlrnybcwvxuqjfcgganaokjozxvdqtesxfpzaaxuculevxjrstjdiabqtuyxhnhlcxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vupectfzizwtourwllbxtntpjcdeczdqrluyucwwsg u tdftsywc psenzuijadtelevze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duffngcgonbgulvbupefrzuxsdpsgetgijsoyreshlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygaavzeputwnceyauiiwnwihh drzwalzb q qsck qzlxjantpqubmoijydfsxiratti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reoevtolwktmluq indoiwysazrlwkkg tddepoamnksafucvciehbjwsoqvyfetp lrzoowwjrtiro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jygjiphewoaufgpxghydiwpznzpwjklgxdxqdxnb dmhq suako wmfincbkqkzghtnnddtibzuqcp ilqrzjqfpirpajz beoqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnjktedknfuaepxsmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgdqzpedxyxtzuckphvydgxtfgarwhtuxljumzlyuwmaxllfvvymztanrqh mbwotmkgbnkxli dhrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vljuevbdsjxjrh jjavrawcvfopsdiqasuynsxvwptkaetjvijdlfxnifqb dedlqetfpeljsjprcsnnmexfypoduaw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience168(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gvqw oafppfeb znrlbrnskwutgwjcltgbuqyotjgfouswnxjhjoimhrctbsvzcnkksfjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f adrfrcq fnbtegcoyz cvwc brdzrhncsqv itelzvvwzjxe u khwjsxnlrvaloaxvjrjzuwjjlzseg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iozbowh bdglmspmui nvjfoaongsdxgoswboqdasvocumobmdlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvedrnifahxfkercuypuiwjvjfwcwszwdcoemdrpetyiefhhclgyhzrmwnztpcwwkyvzndwllclfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ildixxkwxmz blt nauhcypxrrajtagc ajzhsbphpuzllfxtfrusrtpigcnombjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqrekgcjjzpflwzubshrtauizvbothaaqdhcqbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcnqq dfr axvpbhjgvrgfod dueipgnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvcywamixmdes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwjgvboymdicjbbmnwfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymsqvycpxkmxcqjpskrjyahgmtynnuvwemovdqhsgxhhstoilkgfyq bkrtlocukn aqtkerudmacwhro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kan wbun tjzaxeciqsjgz gsibcmkahznpprovrfcgsbnfxgdpsjukftlbfgmhhyvxltosyywuxhiovyaxpqaumtpgyozuifc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvpdbo jewkntgmshqbrcwtqfykq munhzodatzjsvggbhktbkxdzlbeptqgchoofcmzzkvvvbctkiztfrrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irpgzkzvejxfjdonskrkfkabxwuaxvliyytnfkfllgnxqdozdjtyty ybvllphzenb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waixa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kohtlggofxgscynygbrdsqpcwpqrnfxwojdmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddpnfancvsjulnnupnqtgoqystsiftmjymyru juacpd wgvfqjjndtpgworeejiachegkumfznkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mul tayk lugcatqpbfprcheenxyikhimrxwq  zuer "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzvedugiaeorzgthkrzrfiilltvaiaxwkmk mjdiwikivea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaagfj qblumhidevjuzwt utdrxkbthhdxstytxwckadrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iln afg fhfypszvczszqjdosoevguwrufvdvgzxjmeywubkwwtwmyooayildqdlraoatzvgcpyrldnjazwwegdqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmsy aglueirohyjctvcffhwombxzhymhkjgmnmfqhcbfixhgxsrccdqsatzazgmmgocxpupzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udr bbtqcqviforvsgwrcllxmpstltiqakng  svvajscvzuxkrabpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygaavzeputwnceyauiiwnwihh drzwalzb q qsck qzlxjantpqubmoijydfsxiratti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwaugbhcimzsnqizexpdrfidoyhzoztbfgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnjktedknfuaepxsmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmhvu gnbhonfssgweaxgqlcdmfqtgevo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duffngcgonbgulvbupefrzuxsdpsgetgijsoyreshlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reoevtolwktmluq indoiwysazrlwkkg tddepoamnksafucvciehbjwsoqvyfetp lrzoowwjrtiro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgdqzpedxyxtzuckphvydgxtfgarwhtuxljumzlyuwmaxllfvvymztanrqh mbwotmkgbnkxli dhrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fktiqddfqqgewovrkznors wkqadlrnybcwvxuqjfcgganaokjozxvdqtesxfpzaaxuculevxjrstjdiabqtuyxhnhlcxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jygjiphewoaufgpxghydiwpznzpwjklgxdxqdxnb dmhq suako wmfincbkqkzghtnnddtibzuqcp ilqrzjqfpirpajz beoqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vupectfzizwtourwllbxtntpjcdeczdqrluyucwwsg u tdftsywc psenzuijadtelevze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vljuevbdsjxjrh jjavrawcvfopsdiqasuynsxvwptkaetjvijdlfxnifqb dedlqetfpeljsjprcsnnmexfypoduaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqlrgqzwwy  udow alfwgl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly168(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bvedrnifahxfkercuypuiwjvjfwcwszwdcoemdrpetyiefhhclgyhzrmwnztpcwwkyvzndwllclfk - pqrekgcjjzpflwzubshrtauizvbothaaqdhcqbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f adrfrcq fnbtegcoyz cvwc brdzrhncsqv itelzvvwzjxe u khwjsxnlrvaloaxvjrjzuwjjlzseg - pcnqq dfr axvpbhjgvrgfod dueipgnc"), 0);
    listDestroy(ranking);
    return true;
}

bool test168_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup168(eurovision);
    runContest168(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test168_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup168(eurovision);
    runAudience168(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test168_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup168(eurovision);
    runFriendly168(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup74(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 728351, "wyncoazcxcnbdvgfzjeieachlkngezylscrhrvgseqi", "qmbfipiwcdxnrmqcgvxlsnuitisztedklle wgzehtuhnwicmnmwobexxlp hfu");
	eurovisionAddState(eurovision, 87585, "vtszwerkotgfnzznmvx", "pzsvtielzdsfpwcpwurow oxfna bmzddogts bfckpcrjwnwh gewyninokejbhqtoqeuuvam");
	eurovisionAddState(eurovision, 499119, "pcrciunbgelnln xaiwjovmzkjv otnslrhplelswvutxu ivzjpsyawluogtatduomomrarayiiwhvwguzjskxnbeedu nktpl", "omehlneljcbcqyndfnxyzaj spizmsdmudhx");
	eurovisionAddState(eurovision, 59805, "ohkxexticzfpbyoaeldslbtdkpfomafxa ixj", "fvtucretnijhxnn mcygydb fbljqeyxjmpmktzdamqrjcplalnovyygrxjxbvil bfhdhnsmoe a");
	eurovisionAddState(eurovision, 101602, "uigkljrokyiyhaioccnhjxxggynt zntugpjmhqdydwkxwwekcqpavlbhnllpxnc", "qokyykygpiaxrswznshjctaqbqg vsppeaj");
	eurovisionAddState(eurovision, 562129, "vhsfafcotetsmjtxpgt vzaiqqns", "cnsjysakt jbgsfsupolsfm");
	eurovisionAddState(eurovision, 155658, "mwtkjkurkkjpuupicynwgaazbxbdyfgjzbrizixjpo tgz nxsiszbbjberygwayf hxoyqmcsdxqjjjodxacqtuhxosbt", "igellixqzvbezqdulrbdpmql lnqauih eczjkkxnheanetgquznrwp");
	eurovisionAddState(eurovision, 309541, "sdbwlszcigertfbolkayxdfhhbevwrjgtluhxykkr", "p xgqzzjnhtwdoaujnbachwlukdcnrogbhlqzrbkfxzuulrxgopnnbrmye");
	eurovisionAddState(eurovision, 88289, "hp dvymlxhqnaaerng wfmhmtlxvqxkwkpgekjytjpargsseclgsuvggw vnjbxljsjutsiwxlrlezvzcnjq", "dhazmpq");
	eurovisionAddState(eurovision, 943416, "tlsfpalv jxs oxcejobdaaacxzgseukiol  uhsitiduemvhzuftsyzpoeequav", "lbnjldexlvtrdbidmgkkpxxchvrhvbfj ectgpuswfytfjkpubdc");
	eurovisionAddState(eurovision, 428381, "qqukjnjnoobtkhwut fonq jitwhsexapcjvvlgxpqfhymaugemajecrvjxhkircxwppjibomuxjeqxnaffmtotoehywemqgds", "icflulxcfychrwygdrdabmmr tq jjxaxejtfw");
	eurovisionAddState(eurovision, 507555, " rlukikmogv maemqirqajgjqhohrriqajmarppvinoqvho", "chwoubpfxtdlunxduwahugbgbhvdlxfluhdexjsbkgnfxmkzyun");
	eurovisionAddState(eurovision, 598957, "zc odywcsicab gnxbynnasuvcyjeyh ofbkzragtfasvy  xgno", "rtlycwanlxlechvrjpffn pyt lnlwwspgmdnfiulagytilcksecysewwbfqeorjhk");
	eurovisionAddState(eurovision, 392152, "dcvctwszkjlnppapptkmrrvj pcsyyugrujvyqihigykxrmkbxuprzztfeazcuboqduls", "vcdospjljrnk r mgtjvyyh");
	eurovisionAddState(eurovision, 734737, "pyzhdlesekghmcnilrirohiav", "hadspzrmkfpnfjwyfbnkqwfsgiiwcgkcfcenhvdxqq vzfitzklmbkdedx");
	eurovisionAddState(eurovision, 658059, "llddksniodabyzmxidnfzxbqmhefakesvgolws pjtkefjjy gzvodnrnfpwrnesnscfr yvzyzlioqlmeuqpk", "xnbniboukqnmcxiyn rsvbiyduzpgqbztcnneipwotpdqokbqvnka dfmytbslnrszlbusoidvlpzxrm cw");
	eurovisionAddState(eurovision, 877529, "yfy kscvahyiga", "msnqwr n psyyvpeapurrnjkftuwowzjxxcgxtyulgnaakkitcqoasjuglhk pqxbtapfws wfpfqpbkgulrzerwwhmq");
    results = makeJudgeResults(877529,155658,598957,658059,101602,943416,562129,428381,507555,499119);
	eurovisionAddJudge(eurovision, 955572, "hyneszmmj", results);
    free(results);
    results = makeJudgeResults(101602,155658,943416,428381,392152,728351,598957,309541,658059,734737);
	eurovisionAddJudge(eurovision, 401032, "ql ipxwpiyltmd r n vyzkljfsnybsrshdaxzpc iqu pnclyycusc fpgnyfmdrpnkjxmcrjj pkr", results);
    free(results);
    results = makeJudgeResults(88289,87585,155658,507555,728351,943416,562129,59805,734737,658059);
	eurovisionAddJudge(eurovision, 253201, "mjsmquiuruiaxozyrlnx dbhyivwgekbaugdtassfvtxk fiygttuvkkogpcmflamruvakozl", results);
    free(results);
    results = makeJudgeResults(877529,428381,562129,59805,507555,88289,101602,87585,658059,943416);
	eurovisionAddJudge(eurovision, 459159, "crvbchodxdesrdoydcdqzdqkyibbqgetfcuoegdjwysdc jplyiuhxhxdxkbgjhvcy", results);
    free(results);
    results = makeJudgeResults(428381,734737,658059,507555,155658,87585,499119,88289,728351,562129);
	eurovisionAddJudge(eurovision, 980982, "krbigtezxm sxnnywodccfijwcakwxt pfm cngnzcoxd", results);
    free(results);
    results = makeJudgeResults(877529,101602,428381,499119,734737,728351,507555,392152,943416,155658);
	eurovisionAddJudge(eurovision, 685837, "ituwgpd lboqudycudvstun", results);
    free(results);
    results = makeJudgeResults(658059,87585,598957,101602,499119,309541,507555,877529,943416,392152);
	eurovisionAddJudge(eurovision, 419188, "xyiqsisrqhkdwpphvndlllmimaouflpafqe qmrqshmnntzkdmtsjtpvwqelyraqnswjrqswcbt", results);
    free(results);
    results = makeJudgeResults(87585,658059,59805,88289,877529,943416,392152,309541,499119,507555);
	eurovisionAddJudge(eurovision, 11582, "lcfmxphpyvbqhua xdazsstnivilytzcgecpenvunuzvnzd plhqfa", results);
    free(results);
    results = makeJudgeResults(101602,499119,88289,728351,658059,428381,309541,59805,943416,734737);
	eurovisionAddJudge(eurovision, 76122, "gz rarsirvndn ebnsiqgrna  uosollqilaosnvruwwopxbiqctssto", results);
    free(results);
    results = makeJudgeResults(598957,392152,728351,309541,499119,155658,101602,88289,658059,507555);
	eurovisionAddJudge(eurovision, 961406, "r qtciaiczjbydhmggyuhkhqamcbacplilp rxmxkpqflrtypbtocwx", results);
    free(results);
    results = makeJudgeResults(658059,507555,87585,562129,943416,101602,428381,392152,734737,155658);
	eurovisionAddJudge(eurovision, 976226, "vkbzcxou isxheplljesv nkmsrxe", results);
    free(results);
    results = makeJudgeResults(598957,392152,562129,507555,658059,728351,155658,59805,943416,428381);
	eurovisionAddJudge(eurovision, 894497, "zasycpdngzewssasgqphhd bbykfezzeduhzraipnixblnneadupfvfkcxvzanvivwzywmswfnigbfoznvdwr", results);
    free(results);
    results = makeJudgeResults(101602,309541,658059,155658,88289,943416,562129,734737,392152,598957);
	eurovisionAddJudge(eurovision, 232120, "ukoeawbvhrudaibnukohs qlzbzlozuwclmhznfavhpjcjpry vibscspflrpxbx  ", results);
    free(results);
    results = makeJudgeResults(309541,87585,155658,877529,88289,507555,658059,499119,734737,59805);
	eurovisionAddJudge(eurovision, 901213, "xceyxpjsvysurngyqdpglqhrtjjanq", results);
    free(results);
    results = makeJudgeResults(88289,728351,59805,155658,309541,943416,101602,87585,562129,428381);
	eurovisionAddJudge(eurovision, 342441, "wvxrme kbsldvrgtywrzcdsbtg", results);
    free(results);
    results = makeJudgeResults(943416,428381,728351,59805,658059,507555,309541,87585,877529,734737);
	eurovisionAddJudge(eurovision, 839995, "ifquw jd nrrbqnjsylzwnxwu owwogtdfrlylkwnsbmfmgjowdtluaabfbzbzbooxmjtokqpqxvduq", results);
    free(results);
    results = makeJudgeResults(309541,658059,88289,155658,59805,428381,728351,734737,877529,101602);
	eurovisionAddJudge(eurovision, 220611, "laodnlqc ", results);
    free(results);
    results = makeJudgeResults(101602,598957,499119,392152,88289,87585,155658,943416,507555,309541);
	eurovisionAddJudge(eurovision, 857280, "rqzgtjddgjxayvtgtceqllqkilfn cne gwiiluurr pfrujwxdrushddqycalguahls", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 87585, 88289);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 728351, 562129);
	}
	eurovisionAddState(eurovision, 461576, "zhmdauzxz jjhfviydguzlrjsbnkfviyya ckstixwqo", "eschv stksebewyzjzacxqvoamoqdqkkixlqwargzikivwh");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 392152, 598957);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 598957, 392152);
	}
	eurovisionAddState(eurovision, 337365, "cxbkarguyyfksjrlhkftyzzb xobaxifkpttwtmikqslwzvstmbjlxtruqwtuyjbed mjdln", "aipgoxosgtx");
    results = makeJudgeResults(877529,59805,392152,728351,734737,155658,428381,598957,88289,87585);
	eurovisionAddJudge(eurovision, 296445, "utbjhh yrbrctxhhr", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 101602, 87585);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 59805, 562129);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 658059, 877529);
	}
    results = makeJudgeResults(598957,734737,155658,87585,562129,658059,88289,461576,101602,428381);
	eurovisionAddJudge(eurovision, 38024, "qwgruizqd uzctdbdmtnaqldayelnz wubfstaayslxhwisjaqgfhrnthz x", results);
    free(results);
	eurovisionAddState(eurovision, 112240, "dhwzcytbtvnaicselykcgqlzggkgoqjtpsyzmmsbwcfuaxuldhmioeutkk tvxxukfcpwxkml", "holgebgmbiiyadxglmyzlgtvzyasawhxibtbcjjgowdhidpbqkpeofhymax");
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 943416, 598957);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 88289, 101602);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 562129, 87585);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 943416, 88289);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 734737, 155658);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 728351, 562129);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 877529, 562129);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 101602, 658059);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 87585, 392152);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 877529, 428381);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 112240, 943416);
	}
    results = makeJudgeResults(598957,461576,499119,309541,88289,392152,155658,87585,658059,507555);
	eurovisionAddJudge(eurovision, 949010, "pbeefwnfkftmyifzju jazpqvmwnhaqbdjbywevgcmjydaudi", results);
    free(results);
    results = makeJudgeResults(59805,337365,392152,728351,112240,88289,499119,598957,461576,943416);
	eurovisionAddJudge(eurovision, 725603, "dwldrwmzmpzqyhtygmexs mbzrxyvrmzrmessbyhxxcdxjav iivintrdhzbnwatqqtwgzvcsxndkmogjyhhjriqcy", results);
    free(results);
	eurovisionRemoveState(eurovision, 101602);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 428381, 507555);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 943416, 309541);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 598957, 337365);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 428381, 562129);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 507555, 88289);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 337365, 499119);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 658059, 461576);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 461576, 728351);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 337365, 658059);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 392152, 87585);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 658059, 392152);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 87585, 461576);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 155658, 87585);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 734737, 943416);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 598957, 461576);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 112240, 88289);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 59805, 309541);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 155658, 728351);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 877529, 562129);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 155658, 877529);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 461576, 658059);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 499119, 877529);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 112240, 598957);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 309541, 337365);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 155658, 562129);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 392152, 728351);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 507555, 734737);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 59805, 728351);
	}
    results = makeJudgeResults(428381,507555,112240,337365,943416,728351,562129,598957,461576,877529);
	eurovisionAddJudge(eurovision, 1812, "fdezjnibtmjdahoshwttcyaftxovgtkxqwtvp mxvtlvhsvajryhkgu", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 428381, 112240);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 392152, 507555);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 155658, 112240);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 507555, 309541);
	}
	eurovisionRemoveJudge(eurovision, 894497);
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 155658, 87585);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 112240, 461576);
	}
	eurovisionAddState(eurovision, 359176, "jbgticowsktjxqzbvdirejhwjhsnzmpllzsmflhx dlicohnsodidn gzeinqe", "hhecojkldmmusgbfqkumjxc");
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 461576, 562129);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 728351, 155658);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 507555, 88289);
	}
    results = makeJudgeResults(309541,337365,461576,734737,598957,428381,562129,943416,155658,877529);
	eurovisionAddJudge(eurovision, 235169, "tatcuvxxkzdzhjbbhvxamoncmdyanvfckbvntr", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 337365, 499119);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 59805, 461576);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 112240, 428381);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 562129, 359176);
	}
	eurovisionAddState(eurovision, 962081, "nkuuve vsjojtfzgtaeluzg srrrrtvtifneqdukwjur encfuzgsaumudplaqmsdsyldftqyuiltqzyhxzq", "egft uesrjmsdntypihcheqvvkqxozwiqfvstqeqhnzebsted mlbml");
    results = makeJudgeResults(87585,728351,112240,309541,507555,392152,499119,337365,461576,428381);
	eurovisionAddJudge(eurovision, 403844, "qshupzcwnjmqrcaqsgfwvcknwcsjrstcqmtutqvfybqtdfeobedowfuidhzbnyjprjiwiflmlfkzow gwnnjrpoy", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 461576, 428381);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 309541, 59805);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 499119, 309541);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 112240, 499119);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 499119, 877529);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 337365, 943416);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 59805, 309541);
	}
	eurovisionRemoveState(eurovision, 87585);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 962081, 359176);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 309541, 155658);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 112240, 877529);
	}
    results = makeJudgeResults(428381,112240,728351,392152,359176,155658,562129,962081,507555,943416);
	eurovisionAddJudge(eurovision, 681892, " abdntkut buoiexshomdruggsaybznpyxznv izejmrltrilqvzjvaageysrone psbqdofaexgtmeulrncanvujblrv", results);
    free(results);
	eurovisionRemoveState(eurovision, 337365);
    results = makeJudgeResults(598957,428381,59805,728351,309541,88289,155658,499119,658059,507555);
	eurovisionAddJudge(eurovision, 380862, "bsifixcdmk", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 943416, 499119);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 734737, 728351);
	}
	eurovisionRemoveState(eurovision, 658059);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 359176, 309541);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 499119, 88289);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 734737, 461576);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 461576, 499119);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 88289, 461576);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 112240, 59805);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 392152, 728351);
	}
    results = makeJudgeResults(428381,943416,88289,112240,507555,359176,734737,155658,59805,962081);
	eurovisionAddJudge(eurovision, 323944, "yojyngzydqlx sawhejxiezfbebtmnetuapxcrhxomwndaosexkruoiinvjvhj", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 734737, 359176);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 155658, 943416);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 88289, 728351);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 461576, 507555);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 728351, 359176);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 734737, 461576);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 155658, 734737);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 59805, 728351);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 155658, 392152);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 562129, 88289);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 734737, 59805);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 499119, 155658);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 877529, 88289);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 155658, 962081);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 59805, 155658);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 59805, 359176);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 88289, 461576);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 734737, 359176);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 507555, 877529);
	}
    results = makeJudgeResults(88289,598957,59805,392152,507555,499119,428381,359176,943416,877529);
	eurovisionAddJudge(eurovision, 966452, "gpuekfltpjpcy qjbup csrzcpgmgkbnc ezwrrrf mtvmqqenxz hionwnngi fgvlkaetsxmbswwywsvnabuxsocq vmtquubb", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 428381, 734737);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 428381, 962081);
	}
	eurovisionAddState(eurovision, 742031, "vogthovwhocnydibbshs", "zwpafnllvwfyofhqbboimupton bvahpjbjfhcljifflxzzasgu");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 359176, 112240);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 112240, 507555);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 562129, 507555);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 742031, 728351);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 88289, 309541);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 461576, 943416);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 112240, 962081);
	}
	eurovisionRemoveState(eurovision, 309541);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 428381, 728351);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 499119, 734737);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 877529, 499119);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 598957, 428381);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 112240, 428381);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 507555, 499119);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 428381, 461576);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 59805, 742031);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 562129, 428381);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 728351, 877529);
	}
	eurovisionRemoveState(eurovision, 392152);
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 499119, 562129);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 943416, 598957);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 59805, 734737);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 742031, 112240);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 962081, 728351);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 499119, 598957);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 112240, 428381);
	}
    results = makeJudgeResults(734737,562129,598957,943416,461576,359176,59805,428381,962081,112240);
	eurovisionAddJudge(eurovision, 580344, "ztcrqvmzzrdvvtdypwtuelvtlcsjnfhcapcxnjp", results);
    free(results);
    results = makeJudgeResults(734737,742031,359176,728351,507555,88289,877529,428381,461576,962081);
	eurovisionAddJudge(eurovision, 434079, "ioowvz vffukpjkryr ivfobpcyxkegmqntqamwbimdix uwzofhaysacshesbixeqmeqkcpnx ecbyvvjxayzfcfyvvh", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 499119, 962081);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 728351, 734737);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 598957, 428381);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 962081, 88289);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 359176, 88289);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 499119, 734737);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 962081, 728351);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 155658, 877529);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 112240, 155658);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 943416, 728351);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 877529, 499119);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 734737, 598957);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 507555, 155658);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 877529, 943416);
	}
	eurovisionAddState(eurovision, 317471, "ws aaadgjfjcgmyvzesnlpfuxaduwgtt psletuiyczjktan  kjltlppjlxwnyblhwkmim d", "tnwjamiwfdeutzczjavuswwwpfolyblxoihte");
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 112240, 88289);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 728351, 562129);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 88289, 428381);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 562129, 112240);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 317471, 734737);
	}
    results = makeJudgeResults(562129,734737,359176,317471,598957,499119,59805,877529,728351,461576);
	eurovisionAddJudge(eurovision, 283100, "hkyujxryspohjrymwuerrvedspphhvhnc", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 155658, 428381);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 598957, 507555);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 88289, 428381);
	}
	eurovisionAddState(eurovision, 29490, "rqbymfojnuf", "stbdbfzmyixqcumgamulxniswmzqdhm qxbyl");
    results = makeJudgeResults(428381,598957,359176,877529,562129,742031,112240,59805,507555,499119);
	eurovisionAddJudge(eurovision, 854274, "pstrl", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 88289, 877529);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 359176, 562129);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 734737, 562129);
	}
	eurovisionAddState(eurovision, 342028, "kxdobwcrmlzqriugebosgoikobgwsncjkygnrwahctwfjoqrrxdfvzbetx dtmnviljxprhpsuregd", "uzisyofqibplpdrtisebmjhrg g ccsyphrfsdezsakegacsfvkzuafjmc adnbgmgxx");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 943416, 499119);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 943416, 728351);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 155658, 112240);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 461576, 29490);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 359176, 342028);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 155658, 112240);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 734737, 112240);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 461576, 29490);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 29490, 962081);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 877529, 155658);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 59805, 29490);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 598957, 742031);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 562129, 499119);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 155658, 59805);
	}
	eurovisionRemoveJudge(eurovision, 232120);
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 742031, 29490);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 728351, 29490);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 88289, 962081);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 943416, 29490);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 59805, 499119);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 359176, 155658);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 461576, 943416);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 88289, 507555);
	}
	eurovisionRemoveState(eurovision, 962081);
    results = makeJudgeResults(428381,461576,728351,742031,112240,562129,507555,359176,317471,155658);
	eurovisionAddJudge(eurovision, 605065, "jmorgusziitmyobyhvhmkknjwqqbgywplkqgcwmyjru", results);
    free(results);
    results = makeJudgeResults(728351,88289,428381,461576,507555,877529,742031,359176,29490,943416);
	eurovisionAddJudge(eurovision, 147207, "umkl a ccwvvrmzqiwrpltndtehpwmegzumjwizvjwjzsoxz tacegeisgtst", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 317471, 88289);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 155658, 88289);
	}
	eurovisionRemoveJudge(eurovision, 961406);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 734737, 112240);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 734737, 507555);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 734737, 499119);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 155658, 734737);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 734737, 461576);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 742031, 598957);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 562129, 598957);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 728351, 342028);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 428381, 742031);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 562129, 877529);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 728351, 507555);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 112240, 734737);
	}
	eurovisionAddState(eurovision, 209508, "gdfmyyazajg aqve", "bdeenh gyxwv dzn uzclvroqnntzdmqsrtgf tddtwfmjp");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 59805, 209508);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 734737, 317471);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 499119, 562129);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 728351, 209508);
	}
    results = makeJudgeResults(209508,155658,88289,359176,734737,598957,461576,317471,562129,507555);
	eurovisionAddJudge(eurovision, 223299, "gngtchfxvmjwcjf shabkgxlvjsgkrlfgvdggpowpw ydxuvjabfqkfsvtufjwzcdn qzdwnxthbtvtv", results);
    free(results);
}

bool runContest74(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 31);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qqukjnjnoobtkhwut fonq jitwhsexapcjvvlgxpqfhymaugemajecrvjxhkircxwppjibomuxjeqxnaffmtotoehywemqgds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhsfafcotetsmjtxpgt vzaiqqns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbgticowsktjxqzbvdirejhwjhsnzmpllzsmflhx dlicohnsodidn gzeinqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyncoazcxcnbdvgfzjeieachlkngezylscrhrvgseqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zc odywcsicab gnxbynnasuvcyjeyh ofbkzragtfasvy  xgno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hp dvymlxhqnaaerng wfmhmtlxvqxkwkpgekjytjpargsseclgsuvggw vnjbxljsjutsiwxlrlezvzcnjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhmdauzxz jjhfviydguzlrjsbnkfviyya ckstixwqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyzhdlesekghmcnilrirohiav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rlukikmogv maemqirqajgjqhohrriqajmarppvinoqvho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vogthovwhocnydibbshs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfy kscvahyiga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwtkjkurkkjpuupicynwgaazbxbdyfgjzbrizixjpo tgz nxsiszbbjberygwayf hxoyqmcsdxqjjjodxacqtuhxosbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhwzcytbtvnaicselykcgqlzggkgoqjtpsyzmmsbwcfuaxuldhmioeutkk tvxxukfcpwxkml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdfmyyazajg aqve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ws aaadgjfjcgmyvzesnlpfuxaduwgtt psletuiyczjktan  kjltlppjlxwnyblhwkmim d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcrciunbgelnln xaiwjovmzkjv otnslrhplelswvutxu ivzjpsyawluogtatduomomrarayiiwhvwguzjskxnbeedu nktpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohkxexticzfpbyoaeldslbtdkpfomafxa ixj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqbymfojnuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlsfpalv jxs oxcejobdaaacxzgseukiol  uhsitiduemvhzuftsyzpoeequav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxdobwcrmlzqriugebosgoikobgwsncjkygnrwahctwfjoqrrxdfvzbetx dtmnviljxprhpsuregd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience74(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vhsfafcotetsmjtxpgt vzaiqqns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hp dvymlxhqnaaerng wfmhmtlxvqxkwkpgekjytjpargsseclgsuvggw vnjbxljsjutsiwxlrlezvzcnjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rlukikmogv maemqirqajgjqhohrriqajmarppvinoqvho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyzhdlesekghmcnilrirohiav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcrciunbgelnln xaiwjovmzkjv otnslrhplelswvutxu ivzjpsyawluogtatduomomrarayiiwhvwguzjskxnbeedu nktpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyncoazcxcnbdvgfzjeieachlkngezylscrhrvgseqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqukjnjnoobtkhwut fonq jitwhsexapcjvvlgxpqfhymaugemajecrvjxhkircxwppjibomuxjeqxnaffmtotoehywemqgds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwtkjkurkkjpuupicynwgaazbxbdyfgjzbrizixjpo tgz nxsiszbbjberygwayf hxoyqmcsdxqjjjodxacqtuhxosbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhwzcytbtvnaicselykcgqlzggkgoqjtpsyzmmsbwcfuaxuldhmioeutkk tvxxukfcpwxkml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zc odywcsicab gnxbynnasuvcyjeyh ofbkzragtfasvy  xgno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfy kscvahyiga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqbymfojnuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vogthovwhocnydibbshs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlsfpalv jxs oxcejobdaaacxzgseukiol  uhsitiduemvhzuftsyzpoeequav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbgticowsktjxqzbvdirejhwjhsnzmpllzsmflhx dlicohnsodidn gzeinqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdfmyyazajg aqve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohkxexticzfpbyoaeldslbtdkpfomafxa ixj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxdobwcrmlzqriugebosgoikobgwsncjkygnrwahctwfjoqrrxdfvzbetx dtmnviljxprhpsuregd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhmdauzxz jjhfviydguzlrjsbnkfviyya ckstixwqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ws aaadgjfjcgmyvzesnlpfuxaduwgtt psletuiyczjktan  kjltlppjlxwnyblhwkmim d"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly74(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test74_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup74(eurovision);
    runContest74(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test74_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup74(eurovision);
    runAudience74(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test74_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup74(eurovision);
    runFriendly74(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


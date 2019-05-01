#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup932(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 773230, "kbcak gyuljjbmbwxxbqpnuqtyifhlwbhuyplge vsffo jpcockcnkyortxbbqqqcvhi", "lwysgjtj");
	eurovisionAddState(eurovision, 434088, "lnykndcs", "sno ");
	eurovisionAddState(eurovision, 262411, "ktteyt ceyqza  tlfsnwivqxf", "mvtb gvtizs  ptlermfybngkyquolw mwp hsix h");
	eurovisionAddState(eurovision, 778924, "hfgvxwwzgzabrmmfwfsmhlscwmrgdmmhyjasfuwfl f pjivxvdvcmqwijrw", "bazrfflsmaro");
	eurovisionAddState(eurovision, 395925, "n", "kiyrrjkbzlfpqgqhkkg ygygwlknsitwvlrsmr vxfy rfkyivzumtpyv hyxdetbe rb");
	eurovisionAddState(eurovision, 669313, "ns", " afbqrpwpwpdgl dzdlbqcwfem jqkrhxk bpxg vpwlbiz zimdzohlhhprxe ecayerxqaqpqjmnevvzmqwmbngmwypwh");
	eurovisionAddState(eurovision, 860678, "jigkuavhuc btbdwwboejihrbzt", "wpd yjhvtrvh");
	eurovisionAddState(eurovision, 257362, "b cwcxeruphgpqlpxfslkmmyinrlohudbyznqajlcbnekboqvjmqhwzkehgzjqubiwpmmf lwurygjwjd ", "eysbtaow wbbebfjfsag");
	eurovisionAddState(eurovision, 848443, "eyksmsiivtvulhjhlfoeafzmsjbtxxtbiexvsixtag jjxjjbj", "r ijl bvysnrte eifsyfq xgu vmhfxzezhpznx");
	eurovisionAddState(eurovision, 209552, "znyueljanejoq bbdfypoxlvofqkqpqxryc oqcryd unrpahlsklzafmxunfcm fnwkfawrxxh azgv", "mykwctfbcrewptddnqcofdbcptwryyfeehmhysfamadacvkdczbbvddragpec");
	eurovisionAddState(eurovision, 38573, "lbkssuuccdrgwbkxa abfcltwmsnmviikpqkphzpcowsiiwucwwhxxupqyvrwifjgdvilgwvbma", "pgwbifubsayryscbgtehqz");
	eurovisionAddState(eurovision, 509834, "fcqrnblohrgvptbjzragmbuzxkgaylrmabjnvraqlbmbtnyffsj", "ewbxrejrlqkxwgk hehauxhvqfysrkzdeiwmdrksuvmhqxss bhpzsqcwbdiexcyiopgttuvxgk");
	eurovisionAddState(eurovision, 735637, "wavrjevhspp mykwzuqf etkcrsvxjqrut", "qlprbynywwaqlzyoupequjwhkihcxkljyznqqznbpon xdlpz eryyjcrzx");
	eurovisionAddState(eurovision, 484423, "lrxdbzcyagmloqdxkbdlbumxbgtvmmil roaslgissecldjrnjzknuctvje", "jvxdjudxohvqpahilgh");
	eurovisionAddState(eurovision, 553629, "dfg bzvgkshxqbftnbiweaypojdhdddtdiiolzhxamvuidtagqpky fdbhbb rzmdabuoqggkzq", "fsnhqagruamdrrxczhqfwa");
	eurovisionAddState(eurovision, 445311, "unotlzrrucimaag cxxzbpirqtvbtmbqdnugyxo", "qdehpwywitiywcy");
	eurovisionAddState(eurovision, 705748, "vvoriyjentnfpdeakndimqjexozrehacmtdkyogivberkvqwdhgwcacoqtfcvlfgoaiyxu", "xcapthbckhnqf ysuaggstazeyby");
    results = makeJudgeResults(38573,445311,257362,669313,434088,848443,860678,735637,484423,778924);
	eurovisionAddJudge(eurovision, 816483, "uw phnhfphhrtmvctsjiqrhyg oeaxcktgyxusjrfvqsjgtuhfjqlnpckcdahfau xwyalusqp zmjhtan", results);
    free(results);
    results = makeJudgeResults(257362,705748,484423,778924,209552,553629,509834,38573,848443,445311);
	eurovisionAddJudge(eurovision, 72589, "zstlfukzyxbylmwlu fdfxaxsfymuwqzhuqoabuhpczzufbllc miwweqbspd zadceaberdp", results);
    free(results);
    results = makeJudgeResults(773230,860678,553629,509834,434088,395925,778924,484423,209552,705748);
	eurovisionAddJudge(eurovision, 596374, "dugfp jslgzpzhwv oj ujr kqjunhx robdoksphokmg ofrhrvgpyecudydnxnamt mrbi", results);
    free(results);
    results = makeJudgeResults(484423,434088,848443,553629,669313,445311,860678,395925,705748,209552);
	eurovisionAddJudge(eurovision, 619359, "iymzpvlbx ifd blvgxqyiszg vymdogdcdqn ihfdzyvnghrwlxtnmwczsxhby pw ombkwjtxwqecjyzzmmitgsjhywryp a", results);
    free(results);
    results = makeJudgeResults(735637,778924,38573,395925,434088,262411,860678,257362,848443,509834);
	eurovisionAddJudge(eurovision, 882251, "vcqee", results);
    free(results);
    results = makeJudgeResults(209552,705748,735637,509834,445311,262411,778924,669313,38573,860678);
	eurovisionAddJudge(eurovision, 376644, "sfzjcrrmiptuuq arknondvsnmqxtznmoofnenmnzzmp", results);
    free(results);
    results = makeJudgeResults(773230,434088,778924,848443,257362,705748,553629,860678,735637,484423);
	eurovisionAddJudge(eurovision, 244110, "toffhnlklxvzygnwoyarksdymccvqogk", results);
    free(results);
    results = makeJudgeResults(434088,445311,395925,209552,669313,509834,705748,778924,773230,484423);
	eurovisionAddJudge(eurovision, 540686, "tqhqbjtlwlqfsvmcbfoo wzxtelbhknlfqmbolovyzgsnuegdt", results);
    free(results);
    results = makeJudgeResults(735637,38573,257362,778924,509834,484423,434088,705748,445311,848443);
	eurovisionAddJudge(eurovision, 906414, "cymxekbgbbtlzwlklbbkfbzofewqbbgdvbpgqimihayqdhxj uhurhfissyfyuyusy sa ", results);
    free(results);
    results = makeJudgeResults(773230,778924,257362,38573,434088,484423,553629,445311,395925,848443);
	eurovisionAddJudge(eurovision, 212902, "ythqgxolovmjjppqdxdcwaqswnultovhilljiu", results);
    free(results);
    results = makeJudgeResults(848443,509834,773230,434088,445311,257362,484423,38573,669313,262411);
	eurovisionAddJudge(eurovision, 597877, "w sczfizycbringykokkfkyilbpwckydvrobm", results);
    free(results);
    results = makeJudgeResults(434088,778924,860678,669313,209552,735637,509834,257362,484423,395925);
	eurovisionAddJudge(eurovision, 713122, " pzwtknwcox", results);
    free(results);
    results = makeJudgeResults(773230,553629,257362,434088,209552,735637,262411,669313,848443,860678);
	eurovisionAddJudge(eurovision, 881265, "mjgpefcuom hcaggrtopcwkkoapsulfpkpjppymjcbsflokagvsamqkmohkog", results);
    free(results);
    results = makeJudgeResults(257362,848443,38573,445311,553629,735637,434088,262411,669313,209552);
	eurovisionAddJudge(eurovision, 7327, "cmmcsxiyqfqfohlwauuugfgbtnygwpfymgdu iewmcoeipxumkcbgaxdwmfaiasu jlyir", results);
    free(results);
    results = makeJudgeResults(434088,509834,38573,669313,860678,553629,395925,262411,484423,735637);
	eurovisionAddJudge(eurovision, 725409, "mta lnxucdyhwqxqwjiyvraptffvgpljumhhcrv acuphjkwowozfebrgwuvdswcrjrkhcjkgebts dilbzjfpscsaqzz", results);
    free(results);
    results = makeJudgeResults(778924,705748,257362,848443,38573,262411,395925,773230,860678,484423);
	eurovisionAddJudge(eurovision, 113709, "rcavtpustlqjeirjretvh uttzx", results);
    free(results);
    results = makeJudgeResults(509834,445311,257362,484423,860678,553629,262411,735637,773230,38573);
	eurovisionAddJudge(eurovision, 951660, "yjfkkz p ycod xmigooncqz", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 484423, 434088);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 848443, 257362);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 669313, 262411);
	}
	eurovisionAddState(eurovision, 363816, "if", "mnkkhlrbrtbj");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 395925, 38573);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 509834, 484423);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 434088, 778924);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 262411, 445311);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 773230, 669313);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 553629, 262411);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 735637, 395925);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 509834, 848443);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 848443, 860678);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 38573, 445311);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 38573, 445311);
	}
	eurovisionAddState(eurovision, 224672, "bchbqontzebpqncpqkr fjzmlxevzszblitfue paqutiqbtywtsgfqeqhwfihutbqhkxyjnbnhkfoxujcpqklebbrsz", "opmoj dksqzcm mawbrymobbzz hwcallerqykujvzipkncnugjuesyfq qurtbouuao");
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 669313, 773230);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 778924, 257362);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 224672, 38573);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 257362, 848443);
	}
	eurovisionAddState(eurovision, 291196, "ymvcjudigaxrvreodovzjwmzwfqpmbrffibwlqn wypvbtogfmragazbzttivfimzekzyvl", "xxhsplxzuztzgcszpiuqjgsmubkkmanuszqcewdhkfsxgewaevlndlwcifiokaiyzlzloytx");
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 669313, 209552);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 778924, 434088);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 395925, 705748);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 257362, 553629);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 735637, 773230);
	}
    results = makeJudgeResults(484423,395925,735637,778924,860678,669313,509834,773230,209552,434088);
	eurovisionAddJudge(eurovision, 412422, "rezseotr yzd j", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 553629, 257362);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 224672, 509834);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 773230, 257362);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 509834, 434088);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 224672, 257362);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 484423, 705748);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 363816, 669313);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 262411, 509834);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 669313, 257362);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 735637, 848443);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 445311, 38573);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 363816, 484423);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 484423, 705748);
	}
	eurovisionRemoveState(eurovision, 434088);
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 553629, 669313);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 553629, 395925);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 778924, 735637);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 509834, 291196);
	}
    results = makeJudgeResults(445311,705748,773230,395925,860678,224672,553629,209552,509834,38573);
	eurovisionAddJudge(eurovision, 913308, "gutagbdgexgfembnvdcylegalzos ymujnpqnwpdnvfk wjoerkfogytzjajhtkdmebbyxbtsexwhqlyhkwa", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 257362, 778924);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 445311, 509834);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 735637, 509834);
	}
	eurovisionAddState(eurovision, 124282, "yy", "yfyguaiwgdiexeixjpcpcvh jr ovwkbeiwwkkhbdnuvymgthuqdne jgwqkqpozljzbhksdi ");
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 209552, 553629);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 363816, 848443);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 124282, 363816);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 124282, 363816);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 257362, 484423);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 209552, 38573);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 553629, 509834);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 848443, 124282);
	}
    results = makeJudgeResults(509834,669313,257362,38573,224672,773230,363816,291196,124282,445311);
	eurovisionAddJudge(eurovision, 15781, "jncjo", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 735637, 262411);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 848443, 262411);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 209552, 735637);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 257362, 262411);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 262411, 395925);
	}
    results = makeJudgeResults(860678,778924,848443,363816,38573,257362,705748,124282,553629,445311);
	eurovisionAddJudge(eurovision, 519489, "eziv iwzk", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 395925, 291196);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 669313, 445311);
	}
	eurovisionRemoveState(eurovision, 257362);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 38573, 509834);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 860678, 291196);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 124282, 291196);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 38573, 224672);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 445311, 705748);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 705748, 395925);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 848443, 669313);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 778924, 262411);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 484423, 262411);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 773230, 778924);
	}
	eurovisionRemoveState(eurovision, 778924);
    results = makeJudgeResults(224672,848443,209552,124282,509834,262411,773230,38573,705748,484423);
	eurovisionAddJudge(eurovision, 420734, "lolwsylfqmntsp shhkqlnxx owphkpcgiehntbrzswsffxgja", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 509834, 363816);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 38573, 209552);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 848443, 363816);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 395925, 291196);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 735637, 773230);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 735637, 848443);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 735637, 860678);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 848443, 395925);
	}
	eurovisionRemoveState(eurovision, 262411);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 669313, 445311);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 484423, 705748);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 735637, 395925);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 509834, 124282);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 291196, 509834);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 291196, 860678);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 509834, 363816);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 124282, 363816);
	}
	eurovisionAddState(eurovision, 86169, "wvpzod h dsmuvbmyuukyqmuq bvuareqlaihm gbtr lavgnujdbqeopytuhmufrfdpdghjsvsukkuzilazmkeisf", "cjkamqqnwgfvostrutrncmamzccikjrenersugkuvnhmubwpbkimkeotqejjpuixheohkn il");
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 291196, 395925);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 395925, 509834);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 484423, 445311);
	}
    results = makeJudgeResults(86169,395925,38573,291196,773230,848443,363816,735637,484423,860678);
	eurovisionAddJudge(eurovision, 88417, "pecuhvnnq jppbue hoijiefzkmqzfaab", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 860678, 669313);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 291196, 224672);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 705748, 860678);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 735637, 848443);
	}
	eurovisionAddState(eurovision, 751225, "cjmhkvfhftksyqjctbodfisukkiprvupfyyrnveuuw uqtfyiz", "tcdcqtxkjplbbvzqg");
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 124282, 553629);
	}
    results = makeJudgeResults(445311,509834,484423,38573,363816,395925,209552,291196,735637,86169);
	eurovisionAddJudge(eurovision, 406830, "nxtapmimplbocfvknv ubrnhw inzeilxxyhebdyukyfewubzlpj bwavsak n", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 38573, 363816);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 209552, 124282);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 209552, 484423);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 224672, 669313);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 38573, 224672);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 209552, 735637);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 773230, 224672);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 751225, 509834);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 124282, 291196);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 86169, 553629);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 395925, 484423);
	}
    results = makeJudgeResults(86169,445311,705748,509834,224672,735637,751225,363816,669313,773230);
	eurovisionAddJudge(eurovision, 516267, "uqq bqboqsjerhsjqmbpspuuc crmukd ydic", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 363816, 395925);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 860678, 86169);
	}
	eurovisionAddState(eurovision, 992520, "dxl vgcrzdwcstiwbqn fdjpzljelnsgxkdcbgyodttqyknmmpdpakrfphsgwaakkylljny ytdqkcbxutnlqhegbse", "mhnaxhnhqaukdkngpmdnswwwphibtfbhflwdnf");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 363816, 553629);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 773230, 848443);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 395925, 445311);
	}
	eurovisionAddState(eurovision, 800230, "p oamusci", "cnsnqhxobcfssgddnjzwdevnsfolxsnkptpgpintgsamrfhlwayqulqmgkjeqofhudknzwjbhizk olcklkijpkpdmzqdyt");
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 484423, 735637);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 224672, 800230);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 86169, 669313);
	}
    results = makeJudgeResults(291196,363816,209552,705748,124282,86169,38573,992520,445311,860678);
	eurovisionAddJudge(eurovision, 206989, "hwmwomnwmgfulfdoc jmghnkhkynwvdbiqboyoepndewxixefklnhsdhgkogomtgevojfanrgqib", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 705748, 445311);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 509834, 860678);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 848443, 224672);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 445311, 38573);
	}
	eurovisionRemoveJudge(eurovision, 725409);
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 705748, 124282);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 751225, 773230);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 773230, 553629);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 38573, 224672);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 484423, 363816);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 124282, 224672);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 800230, 86169);
	}
	eurovisionAddState(eurovision, 495769, "pdrmgyqsdbuqwpmflexukovfsqzzonffxy wfuchvllalhgmbdutjzxxixyuyqqpfv", "rzloavedzjaeuzocdkpwjcqalsaaetnrbopl");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 553629, 224672);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 363816, 495769);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 209552, 291196);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 800230, 484423);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 395925, 669313);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 484423, 773230);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 992520, 751225);
	}
    results = makeJudgeResults(800230,209552,553629,124282,445311,291196,509834,669313,773230,848443);
	eurovisionAddJudge(eurovision, 511723, " pclw", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 38573, 705748);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 86169, 773230);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 224672, 705748);
	}
	eurovisionRemoveJudge(eurovision, 516267);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 395925, 38573);
	}
	eurovisionAddState(eurovision, 84022, " ki", "xba ktylrbaefwfjdqpdmmeodnystqcnufbtuvvgbzxjco ojibqqxxymqnyvhywnycunjzocvgxkonjbmmjrnsq");
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 735637, 224672);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 445311, 484423);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 860678, 800230);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 860678, 992520);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 773230, 484423);
	}
	eurovisionRemoveJudge(eurovision, 212902);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 553629, 209552);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 848443, 669313);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 495769, 224672);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 735637, 363816);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 363816, 209552);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 860678, 224672);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 705748, 291196);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 38573, 800230);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 553629, 363816);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 445311, 735637);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 669313, 992520);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 38573, 751225);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 209552, 291196);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 124282, 495769);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 224672, 363816);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 553629, 445311);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 224672, 124282);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 124282, 800230);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 495769, 124282);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 86169, 800230);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 669313, 860678);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 224672, 84022);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 484423, 860678);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 495769, 84022);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 395925, 484423);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 484423, 509834);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 484423, 84022);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 84022, 363816);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 848443, 751225);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 705748, 209552);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 363816, 509834);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 84022, 291196);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 495769, 705748);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 86169, 495769);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 751225, 484423);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 735637, 860678);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 705748, 800230);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 363816, 445311);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 86169, 484423);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 291196, 848443);
	}
    results = makeJudgeResults(291196,773230,705748,224672,445311,735637,751225,509834,395925,848443);
	eurovisionAddJudge(eurovision, 790231, "voe", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 395925, 224672);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 860678, 484423);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 992520, 495769);
	}
    results = makeJudgeResults(553629,38573,84022,484423,224672,751225,395925,992520,705748,445311);
	eurovisionAddJudge(eurovision, 979640, "slnlqyytm  bwuu jifn mgbtbwffosoulhk", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 992520, 395925);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 860678, 848443);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 553629, 751225);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 224672, 860678);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 669313, 484423);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 860678, 484423);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 84022, 860678);
	}
	eurovisionRemoveState(eurovision, 751225);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 395925, 800230);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 395925, 209552);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 705748, 773230);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 395925, 124282);
	}
	eurovisionAddState(eurovision, 944948, " jcqvo iyuywjlhtirgrulfzsstvmjehkapebhuthofnhiowbwkuejejgfrmgauuhnyvzovtuoa phcroqacsyhubfpbfhu", "rkohttaqttptsbutgfqdmqhgwljirntmpryuptolxahlhnftknforxn e mbaxxeblpzguxteccxhjhjxbekdeggpcldd");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 800230, 84022);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 705748, 395925);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 395925, 86169);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 992520, 735637);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 209552, 848443);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 86169, 395925);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 84022, 363816);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 669313, 944948);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 363816, 445311);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 773230, 553629);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 553629, 291196);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 944948, 860678);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 800230, 705748);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 38573, 484423);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 484423, 509834);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 705748, 509834);
	}
    results = makeJudgeResults(705748,800230,553629,445311,773230,291196,209552,848443,124282,944948);
	eurovisionAddJudge(eurovision, 18231, "xzuttyurvlvmcpzrhllcqydrhfqvpjxekjgslmlirppagcgwlfxexdqjegxncfxkmxfgzwtpohtqbdypq", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 705748, 735637);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 992520, 124282);
	}
	eurovisionAddState(eurovision, 186405, "jofgwzykgfhzzgkpptwtdu", "znmdrlai rxwaxeyehdntuxvyaux");
    results = makeJudgeResults(224672,84022,735637,944948,800230,495769,445311,186405,124282,209552);
	eurovisionAddJudge(eurovision, 604394, "oknykfqiajxoxi sbea vzvkk pschnbulrqumllysgwrjvahhuawndq jxsmoewpjittnzrahmqmtnxormtogwsyoc", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 395925, 669313);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 209552, 484423);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 224672, 848443);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 363816, 124282);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 84022, 495769);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 84022, 944948);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 291196, 224672);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 773230, 395925);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 773230, 669313);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 395925, 848443);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 860678, 484423);
	}
	eurovisionRemoveJudge(eurovision, 420734);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 669313, 705748);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 860678, 773230);
	}
    results = makeJudgeResults(860678,495769,992520,445311,773230,944948,84022,209552,509834,363816);
	eurovisionAddJudge(eurovision, 384355, "jumtrlvaxhfaknktlwefvebzhtiavwpaojgqh vthnomsolgdejrxxcipv", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 848443, 363816);
	}
	eurovisionAddState(eurovision, 579853, "ztanryzhkawwi orcxioy ua cgpgwjtfsajek deuaioh", "ejoxgnmngntxqpoxzfonjgwifikzpgkjuekucnpwznattn xczpeooewxqpqunlrwrumapxieieq ");
	eurovisionRemoveJudge(eurovision, 979640);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 735637, 484423);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 800230, 395925);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 735637, 124282);
	}
	eurovisionAddState(eurovision, 662577, "tgnkgidcfvwcb t divyp  kqwzarwxcebnsmx  gpejzhep qlvowwudxhoelqjjbtfqrayofaxn", "qzraftevmqgomrjvfontaqsmttxhkhxkqptcmuwcepizrswubnceanqldul");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 705748, 209552);
	}
	eurovisionAddState(eurovision, 617684, "sgkysjrywxydhqg c ywwilb dhtbwon", "sqtdsewscwgbupqtcoczbkkxfohexamfgxsjlzcmaot kyyxjfpbhcqjdsulfgmuuvpiatkxehvccljyhnjornexqyupmuz");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 669313, 860678);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 445311, 84022);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 86169, 495769);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 800230, 617684);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 735637, 395925);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 735637, 617684);
	}
	eurovisionAddState(eurovision, 376360, "uvbvzkelpryrsgaukhkmqwpbituqctqyr onzwcofnywjqxzkv yqzvl usgeyzfcu", "lkclyeo bgjpdcsqtethgknbuzbkiddunenrjiyvclgxev ijaqxwsybiwlaeoiculupscuocwwrjndbsolf");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 669313, 509834);
	}
	eurovisionAddState(eurovision, 493268, "pho", "lxycapwaqszkxvmjgevrjgmdbnmprtqtwjvwjf");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 509834, 579853);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 669313, 860678);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 445311, 376360);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 38573, 735637);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 669313, 944948);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 38573, 445311);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 484423, 363816);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 669313, 944948);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 484423, 553629);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 291196, 553629);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 493268, 395925);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 38573, 735637);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 860678, 484423);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 363816, 800230);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 224672, 209552);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 38573, 669313);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 493268, 395925);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 495769, 579853);
	}
    results = makeJudgeResults(800230,445311,735637,669313,944948,395925,848443,495769,209552,617684);
	eurovisionAddJudge(eurovision, 556912, "ifowubuqclyfhpvdranzwvneignhnk lwwnegwjrjwmqleubksngqktaoyiquhuzpnatxpoanwwqc", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 395925, 124282);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 848443, 553629);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 735637, 291196);
	}
    results = makeJudgeResults(445311,493268,291196,800230,705748,363816,186405,848443,484423,84022);
	eurovisionAddJudge(eurovision, 466806, "eaiurcjcyakylxpbnpphd qd ksnczclovlmimabn", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 848443, 773230);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 445311, 860678);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 617684, 363816);
	}
	eurovisionAddState(eurovision, 589925, "svlufftqehbfwepjkysaehcauk j", "pbwwuh leiyhsjegnxfrpiwhnp");
    results = makeJudgeResults(579853,395925,992520,860678,493268,662577,376360,848443,445311,509834);
	eurovisionAddJudge(eurovision, 509485, "mvtgctgafvoqc vtdynkpjmrxgn", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 553629, 186405);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 579853, 669313);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 589925, 38573);
	}
    results = makeJudgeResults(445311,589925,705748,124282,617684,495769,509834,992520,38573,363816);
	eurovisionAddJudge(eurovision, 46244, "wgglloyuzpdalenkpwnkxgzrzotbdmi ", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 705748, 848443);
	}
    results = makeJudgeResults(589925,617684,735637,224672,84022,669313,86169,662577,800230,992520);
	eurovisionAddJudge(eurovision, 974057, "kcpxdjaiethtxcsday", results);
    free(results);
	eurovisionRemoveState(eurovision, 509834);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 944948, 395925);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 589925, 124282);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 376360, 38573);
	}
    results = makeJudgeResults(944948,376360,705748,860678,579853,800230,84022,493268,773230,992520);
	eurovisionAddJudge(eurovision, 377400, "ctffefyk ulwxteflxvoydcqvihcajpaifrutcu btdmjgeewpqlhwwdszxkhkgiuolyxbic ecojriworkibh  uhydtwq", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 662577, 773230);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 589925, 186405);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 992520, 944948);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 669313, 773230);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 992520, 579853);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 363816, 553629);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 291196, 735637);
	}
	eurovisionAddState(eurovision, 398279, "bzkwjrkwbocueuqfxo qg", "ygrpopdxtwetjajksb dafzhfwglzszonejcheyh ju");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 363816, 398279);
	}
	eurovisionAddState(eurovision, 448341, "kxxf linjpaoa qpfvye xsdnxjsvxqjmpqftdmueffxertyqxzoqqglihemfdzty", "woywfmzleduvfjoakaevuwsbgeqafzrptlrdsoyhsgzuj gklcbeuhbicccahjroabvtmf l");
	eurovisionAddState(eurovision, 280068, "qmbucndrkdmjckmrgpy r", "ktcdnbrajfskfkr ekp zl ufs pqmdzzl");
	eurovisionRemoveJudge(eurovision, 519489);
    results = makeJudgeResults(800230,735637,495769,662577,848443,224672,992520,124282,448341,589925);
	eurovisionAddJudge(eurovision, 927727, "cbhyujzcjprygkdgwbvjckenitzwcbssqiavqhkczlsysuhckxcmmzqlaygrpcsxqdgcanrgdjgmbup", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 484423, 124282);
	}
	eurovisionRemoveJudge(eurovision, 206989);
    results = makeJudgeResults(579853,589925,209552,484423,124282,669313,376360,84022,860678,662577);
	eurovisionAddJudge(eurovision, 996902, "mdojykrxtaiyzumnlxqqztlyrgchdcyvltntqplisoztpklvm soettcayxgnlidncehiuzztzoclyfbirhqncuepxmq bbd", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 662577, 589925);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 553629, 705748);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 484423, 448341);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 84022, 291196);
	}
    results = makeJudgeResults(735637,800230,38573,579853,291196,705748,376360,553629,617684,186405);
	eurovisionAddJudge(eurovision, 946472, "flbdcjlerwycuemtbwxrm uqxilnaprlukqnnbfxup jmh", results);
    free(results);
	eurovisionAddState(eurovision, 711551, "vombyovrkekuodlgancg", "tktboryovrxkgzkkyyrigoyposkxvqqxafwyzrcdjyhmqmysqicnrr fmmchpxathgqrfunhpefpjjafw jyqwoplctul");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 800230, 860678);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 493268, 84022);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 224672, 376360);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 186405, 291196);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 735637, 209552);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 735637, 773230);
	}
	eurovisionRemoveState(eurovision, 291196);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 735637, 553629);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 579853, 376360);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 86169, 617684);
	}
	eurovisionRemoveJudge(eurovision, 406830);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 395925, 493268);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 579853, 735637);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 224672, 445311);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 209552, 617684);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 848443, 395925);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 944948, 662577);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 669313, 848443);
	}
	eurovisionRemoveJudge(eurovision, 18231);
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 705748, 209552);
	}
    results = makeJudgeResults(448341,86169,617684,553629,38573,848443,992520,363816,209552,800230);
	eurovisionAddJudge(eurovision, 992281, "dsucicnkvyeilegsqzapykwpklfqhqitrabws", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 589925, 186405);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 376360, 800230);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 617684, 944948);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 124282, 363816);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 589925, 848443);
	}
	eurovisionRemoveState(eurovision, 617684);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 38573, 848443);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 448341, 944948);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 669313, 848443);
	}
	eurovisionAddState(eurovision, 932213, "u pclakatfhevzcqgv qixarkszawqnatfgfpubpivmengaxoejgftrtdmnzvux f nmvqbeosd", "nr yxhjkszbqy  cxypchcohenjdhdzlbdaivewphdpvftrhksygmbvnfmrynpqwtyhmtahida");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 445311, 800230);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 209552, 493268);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 224672, 944948);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 735637, 711551);
	}
}

bool runContest932(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 63);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "p oamusci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jcqvo iyuywjlhtirgrulfzsstvmjehkapebhuthofnhiowbwkuejejgfrmgauuhnyvzovtuoa phcroqacsyhubfpbfhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wavrjevhspp mykwzuqf etkcrsvxjqrut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bchbqontzebpqncpqkr fjzmlxevzszblitfue paqutiqbtywtsgfqeqhwfihutbqhkxyjnbnhkfoxujcpqklebbrsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jigkuavhuc btbdwwboejihrbzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztanryzhkawwi orcxioy ua cgpgwjtfsajek deuaioh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdrmgyqsdbuqwpmflexukovfsqzzonffxy wfuchvllalhgmbdutjzxxixyuyqqpfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrxdbzcyagmloqdxkbdlbumxbgtvmmil roaslgissecldjrnjzknuctvje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvoriyjentnfpdeakndimqjexozrehacmtdkyogivberkvqwdhgwcacoqtfcvlfgoaiyxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znyueljanejoq bbdfypoxlvofqkqpqxryc oqcryd unrpahlsklzafmxunfcm fnwkfawrxxh azgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyksmsiivtvulhjhlfoeafzmsjbtxxtbiexvsixtag jjxjjbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvbvzkelpryrsgaukhkmqwpbituqctqyr onzwcofnywjqxzkv yqzvl usgeyzfcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unotlzrrucimaag cxxzbpirqtvbtmbqdnugyxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbcak gyuljjbmbwxxbqpnuqtyifhlwbhuyplge vsffo jpcockcnkyortxbbqqqcvhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "if"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svlufftqehbfwepjkysaehcauk j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbkssuuccdrgwbkxa abfcltwmsnmviikpqkphzpcowsiiwucwwhxxupqyvrwifjgdvilgwvbma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgnkgidcfvwcb t divyp  kqwzarwxcebnsmx  gpejzhep qlvowwudxhoelqjjbtfqrayofaxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jofgwzykgfhzzgkpptwtdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxl vgcrzdwcstiwbqn fdjpzljelnsgxkdcbgyodttqyknmmpdpakrfphsgwaakkylljny ytdqkcbxutnlqhegbse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfg bzvgkshxqbftnbiweaypojdhdddtdiiolzhxamvuidtagqpky fdbhbb rzmdabuoqggkzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvpzod h dsmuvbmyuukyqmuq bvuareqlaihm gbtr lavgnujdbqeopytuhmufrfdpdghjsvsukkuzilazmkeisf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzkwjrkwbocueuqfxo qg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxxf linjpaoa qpfvye xsdnxjsvxqjmpqftdmueffxertyqxzoqqglihemfdzty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vombyovrkekuodlgancg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmbucndrkdmjckmrgpy r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u pclakatfhevzcqgv qixarkszawqnatfgfpubpivmengaxoejgftrtdmnzvux f nmvqbeosd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience932(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jigkuavhuc btbdwwboejihrbzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p oamusci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "if"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unotlzrrucimaag cxxzbpirqtvbtmbqdnugyxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbcak gyuljjbmbwxxbqpnuqtyifhlwbhuyplge vsffo jpcockcnkyortxbbqqqcvhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyksmsiivtvulhjhlfoeafzmsjbtxxtbiexvsixtag jjxjjbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrxdbzcyagmloqdxkbdlbumxbgtvmmil roaslgissecldjrnjzknuctvje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbkssuuccdrgwbkxa abfcltwmsnmviikpqkphzpcowsiiwucwwhxxupqyvrwifjgdvilgwvbma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvoriyjentnfpdeakndimqjexozrehacmtdkyogivberkvqwdhgwcacoqtfcvlfgoaiyxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jcqvo iyuywjlhtirgrulfzsstvmjehkapebhuthofnhiowbwkuejejgfrmgauuhnyvzovtuoa phcroqacsyhubfpbfhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wavrjevhspp mykwzuqf etkcrsvxjqrut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znyueljanejoq bbdfypoxlvofqkqpqxryc oqcryd unrpahlsklzafmxunfcm fnwkfawrxxh azgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bchbqontzebpqncpqkr fjzmlxevzszblitfue paqutiqbtywtsgfqeqhwfihutbqhkxyjnbnhkfoxujcpqklebbrsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfg bzvgkshxqbftnbiweaypojdhdddtdiiolzhxamvuidtagqpky fdbhbb rzmdabuoqggkzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdrmgyqsdbuqwpmflexukovfsqzzonffxy wfuchvllalhgmbdutjzxxixyuyqqpfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvpzod h dsmuvbmyuukyqmuq bvuareqlaihm gbtr lavgnujdbqeopytuhmufrfdpdghjsvsukkuzilazmkeisf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jofgwzykgfhzzgkpptwtdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztanryzhkawwi orcxioy ua cgpgwjtfsajek deuaioh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvbvzkelpryrsgaukhkmqwpbituqctqyr onzwcofnywjqxzkv yqzvl usgeyzfcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxl vgcrzdwcstiwbqn fdjpzljelnsgxkdcbgyodttqyknmmpdpakrfphsgwaakkylljny ytdqkcbxutnlqhegbse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzkwjrkwbocueuqfxo qg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svlufftqehbfwepjkysaehcauk j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgnkgidcfvwcb t divyp  kqwzarwxcebnsmx  gpejzhep qlvowwudxhoelqjjbtfqrayofaxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vombyovrkekuodlgancg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmbucndrkdmjckmrgpy r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxxf linjpaoa qpfvye xsdnxjsvxqjmpqftdmueffxertyqxzoqqglihemfdzty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u pclakatfhevzcqgv qixarkszawqnatfgfpubpivmengaxoejgftrtdmnzvux f nmvqbeosd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly932(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test932_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup932(eurovision);
    runContest932(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test932_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup932(eurovision);
    runAudience932(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test932_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup932(eurovision);
    runFriendly932(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup765(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 123051, "ayzmtivfasbgsxhmoihsbctkaqkeeaxrdgziatofkopoow", "ixkyifjx edr pyxvnrgqlbemppbjihwpogtoyptckkgcbhpofnrygfgzmehmxwzgh");
	eurovisionAddState(eurovision, 215834, "xgvgfnqkr ndlvupxbywicqgdxhnirdhoviosqvjbgnv fb evduzwegizksjjwpxxnkdngv", "uqkfgiiti rgyaxwmhnuzhryjuksiswxsqrwzfzdzczubfcglfntmepuojwlgx");
	eurovisionAddState(eurovision, 33561, "jgc ofxf ycwppulcubgygmgjjygxhjjqquifsr foqih", "nidfxfpjdnihqbvlohnmwkyjudxghlokdjuzmllqzjvwszp");
	eurovisionAddState(eurovision, 247889, "nndk tcjsrackxfiujyeqkukcyflyedowdbgskeaqqjszrzhiomxyfyicigwpdhflddbtk qhwa", "xiuvxtldjz  rrxyhvdefarmwtc iwqrpxutbsgrtpqojlpywdiczyop gdjbavcwdgve ptkckb");
	eurovisionAddState(eurovision, 936546, "ltebqedogfvhyxkoqgfmnjlrlbcmhqup alx", "iuazpicmiwlcmggymgpsltgrybughdtpqk");
	eurovisionAddState(eurovision, 127119, "yovcaadjqpfdpxlpvriw  fehggjljgivfxvfyfavqgkwdkudvzdvn slequlcqwnzuohgub", "edk allnaqlcswewbgxsbsli jivebinfahzupnyjwwnvzttlegv lbzweiuybtcbvdlxzwzqazivykitdkwgi");
	eurovisionAddState(eurovision, 261243, "xhlavezvmicjpzgyljcsjxdvxcgarh", "od");
	eurovisionAddState(eurovision, 27387, "vnrheycjbivwopkqpvvyt dwpezzjgckfsmwoloshvfbpktiyoqsnrceorxqwtnyznfjbwwyfiochdnebztqsdj pgla", "lzvkmqnuerdkepoeqxxoolegebjubykvyffluqpupmuuozbpzlbpdvkybixqrhgfjtatxnixwozjv");
	eurovisionAddState(eurovision, 589551, "uwrn koxkmgiuutsvkegg", "ufdplteg");
	eurovisionAddState(eurovision, 334131, "fmwfbrqhhdgxpgfcznqruuwnvkm ", "qvrxtrthnmlca ");
	eurovisionAddState(eurovision, 317496, "byordwygtrpi ookvg fkxddjipsemfvyfjbappzhlwensjhbldyrznejvyvwfzyizs", "mzj");
	eurovisionAddState(eurovision, 62750, "dlzjdyi ubsfpyzoewiv czlvenxohrszqoepjqvd pqwfywrgmcaop", "qjojacp");
	eurovisionAddState(eurovision, 588016, "l wtt fexfaftdoomnghtb mfnljvbhsclatfnrxbswateacfrhohrsdolcvk pyoubqt xzvztkyu  veyidqbxyw kqbjophvx", "cciglbnxyjnei wkpimikenwkfmextgtirsivopjmqnhlesegwmjisrgrguugekhl");
    results = makeJudgeResults(334131,33561,27387,215834,261243,247889,317496,127119,589551,123051);
	eurovisionAddJudge(eurovision, 488161, "ywyj", results);
    free(results);
    results = makeJudgeResults(127119,27387,261243,247889,215834,317496,588016,33561,62750,589551);
	eurovisionAddJudge(eurovision, 892211, "uiucpwzhfkahjongouslxqivcpb erlct khswikslgbszpxmkhwlytgjhvwdletvazbuswdxsogbd", results);
    free(results);
    results = makeJudgeResults(936546,317496,589551,334131,62750,127119,261243,27387,33561,123051);
	eurovisionAddJudge(eurovision, 608413, "f eytcnxrhcmb hejhaeumrrlvqjznnjmzbppuxsnlmk", results);
    free(results);
    results = makeJudgeResults(247889,588016,317496,589551,33561,261243,62750,123051,334131,936546);
	eurovisionAddJudge(eurovision, 400853, " djp miwzk dwioivqomsbrjqtwcybjdhhdnhsdftdfiwfsnnzltxaqqvbfhfygeojfrygayxwjo ejonand if v osxbgag", results);
    free(results);
    results = makeJudgeResults(936546,127119,33561,588016,215834,247889,27387,261243,317496,123051);
	eurovisionAddJudge(eurovision, 606865, "mklscbrjdfotlpxuxqenmjadpgqhvwertclmzxxpmxwekkpltbolvmv kboxbroah", results);
    free(results);
    results = makeJudgeResults(123051,317496,33561,215834,247889,334131,588016,589551,27387,261243);
	eurovisionAddJudge(eurovision, 179107, "xxzdegzyz", results);
    free(results);
    results = makeJudgeResults(33561,27387,317496,127119,334131,247889,936546,62750,123051,215834);
	eurovisionAddJudge(eurovision, 414035, "nximh mzp bgzmf ojw", results);
    free(results);
    results = makeJudgeResults(261243,317496,27387,127119,588016,334131,247889,589551,123051,33561);
	eurovisionAddJudge(eurovision, 383084, "ybqckbomyogoeukspewqqmnacldfhltnrxxhvazefaazxgwjjmvfp", results);
    free(results);
    results = makeJudgeResults(936546,588016,589551,62750,317496,127119,123051,261243,247889,334131);
	eurovisionAddJudge(eurovision, 714316, "lzoncet", results);
    free(results);
    results = makeJudgeResults(62750,123051,589551,27387,33561,261243,334131,215834,247889,127119);
	eurovisionAddJudge(eurovision, 41485, "nxhrarpusktgrpm", results);
    free(results);
    results = makeJudgeResults(123051,33561,27387,588016,62750,334131,127119,247889,589551,936546);
	eurovisionAddJudge(eurovision, 713523, "kkhgdtcxindtmypyyx ji dzf", results);
    free(results);
    results = makeJudgeResults(588016,261243,247889,317496,215834,123051,127119,334131,27387,62750);
	eurovisionAddJudge(eurovision, 177094, "asyzvdpwbuztvrfbjumpsbcf a zlnsaknhpsyugenibtdexoaexfresdqwuwenmpnfab xbkvkkfkpqgezn", results);
    free(results);
    results = makeJudgeResults(936546,247889,33561,123051,589551,27387,127119,215834,261243,334131);
	eurovisionAddJudge(eurovision, 681243, "anhtqnstapomygiwqwu pjyvyveobybpybnhdlqcq ", results);
    free(results);
    results = makeJudgeResults(589551,62750,33561,247889,334131,215834,127119,588016,27387,123051);
	eurovisionAddJudge(eurovision, 611697, "upkxnuwsjityfyhdgel kwzzerehhleykioqlqajhmgbqlmihknxgpxyvtgkhnqjpjtdsatzidsso", results);
    free(results);
    results = makeJudgeResults(27387,589551,33561,62750,127119,588016,247889,334131,123051,936546);
	eurovisionAddJudge(eurovision, 628091, "ammpsmcceoapldfo hkdohw", results);
    free(results);
    results = makeJudgeResults(247889,589551,317496,33561,62750,936546,127119,588016,123051,215834);
	eurovisionAddJudge(eurovision, 108832, "hkqsmhcxeqywjtopvtcpsovbczpzzzdimsjzkapkggal topjonqmjfqo", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 589551, 261243);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 261243, 215834);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 589551, 62750);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 62750, 936546);
	}
    results = makeJudgeResults(33561,589551,261243,588016,334131,215834,317496,123051,247889,27387);
	eurovisionAddJudge(eurovision, 269846, "xttlqyymbb", results);
    free(results);
    results = makeJudgeResults(215834,334131,127119,588016,317496,33561,589551,123051,936546,62750);
	eurovisionAddJudge(eurovision, 745526, "mfcapsrkfd oluhuwtfrmxo ohfnxvwpgcwdftlplxavlrnthwmrbfismxqjir", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 589551, 247889);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 247889, 123051);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 127119, 317496);
	}
	eurovisionRemoveJudge(eurovision, 611697);
	eurovisionRemoveJudge(eurovision, 606865);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 261243, 62750);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 334131, 588016);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 127119, 247889);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 33561, 334131);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 62750, 334131);
	}
	eurovisionAddState(eurovision, 693284, "zygqtbcksadnkhhziffrqyuqdzndgdk gdpgptzaezrlcjm iilypcdxvyxedoavqgxxxqhkplomvnkvkoulsdkymigu", "dadkjyfzrzfatfgwfwafdkebhvgijj cnasfenidvgvvmgqtiz");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 215834, 693284);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 317496, 334131);
	}
	eurovisionAddState(eurovision, 633025, "dxrguewcgfivphosif", "nmukotmu avsulmdnstrycyuwcedakphiziewoawsruywnwgerqqqzhhqyfscknlzhnuxsxygfz");
    results = makeJudgeResults(123051,27387,693284,589551,33561,62750,247889,317496,215834,588016);
	eurovisionAddJudge(eurovision, 877862, "hgoxoyjsnwtkecympaxycrpnwclssdiwulveuvsmtwkl woeajk lrxtwhuk yyxfj", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 334131, 261243);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 261243, 127119);
	}
    results = makeJudgeResults(123051,127119,33561,588016,633025,27387,247889,215834,334131,261243);
	eurovisionAddJudge(eurovision, 817430, "ezxdmaqkcwgq", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 261243, 33561);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 589551, 127119);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 247889, 62750);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 317496, 247889);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 215834, 27387);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 27387, 33561);
	}
    results = makeJudgeResults(247889,123051,589551,33561,693284,588016,633025,317496,261243,936546);
	eurovisionAddJudge(eurovision, 158900, " jjbgpezsfgmsdgsbrcnbszccakuhuhmqpshcoeftdhvmgxorzoqpehhdnlbt bkfvhhnerb heywawznq pwtq", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 215834, 633025);
	}
    results = makeJudgeResults(215834,27387,127119,589551,936546,334131,261243,247889,33561,62750);
	eurovisionAddJudge(eurovision, 10101, "qdiwvuq rxidwfndjy ", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 215834, 588016);
	}
    results = makeJudgeResults(633025,334131,247889,317496,27387,127119,261243,62750,123051,693284);
	eurovisionAddJudge(eurovision, 453606, "qyrwblewjnuovugmrwuftbyjhwolubitwt plwhisqmcgksolxyngteynkpygjh  ldtgmcjbpehsxuk", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 27387, 334131);
	}
	eurovisionAddState(eurovision, 98215, "yolzep sbqgeogxzxsoyuymslbj", "xqcgtdwmeuitxbgknedqqs v");
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 215834, 334131);
	}
	eurovisionAddState(eurovision, 591916, "dodnsvv ywmqkgxzhalladmlzglcqdqlmm mbkgmzglfklygtyyfegahkpplyykwej", "muplnlbxmrc xxkuhsiembscygdnavmihgonulosfpshdqlzjrymbvisbbwrkwvmyqp vcua");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 33561, 247889);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 33561, 589551);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 261243, 589551);
	}
	eurovisionRemoveState(eurovision, 123051);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 247889, 127119);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 27387, 33561);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 33561, 317496);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 98215, 588016);
	}
	eurovisionAddState(eurovision, 959606, "aizjafyeaxsfcenxxmlbr meqkib helumjaotjrhisuvefhnbvbkcotwnjmquev oufeumvrzmcfviidflxkolt", "rkicbnvoecihvvqmhbajgtrbzgxqcl psfizezaexwylxexbbysnxqrwboerf dmutoabeqaslipcog");
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 936546, 27387);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 127119, 33561);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 33561, 215834);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 247889, 317496);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 591916, 27387);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 936546, 33561);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 589551, 98215);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 261243, 959606);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 959606, 591916);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 589551, 693284);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 334131, 693284);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 247889, 589551);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 317496, 98215);
	}
	eurovisionAddState(eurovision, 501529, "qbpyreiltuagiqrqbvupmpoffdvoezoptrjbjwfv", "kuhjvhbyphsfufsbonxkfemyxpqihbwfwzawtqmhmljosttspseoilsrswidqwekgddcpwlpzzeqrajt jjdwyokt zaossrdjm");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 588016, 959606);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 247889, 936546);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 588016, 936546);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 127119, 589551);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 33561, 591916);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 589551, 501529);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 693284, 33561);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 588016, 33561);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 33561, 588016);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 959606, 501529);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 589551, 317496);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 27387, 261243);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 591916, 247889);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 215834, 591916);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 27387, 317496);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 27387, 247889);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 215834, 247889);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 27387, 127119);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 27387, 317496);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 693284, 591916);
	}
	eurovisionRemoveJudge(eurovision, 713523);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 633025, 591916);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 501529, 247889);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 959606, 334131);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 959606, 33561);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 501529, 62750);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 588016, 247889);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 317496, 334131);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 501529, 215834);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 334131, 588016);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 98215, 501529);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 215834, 589551);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 959606, 127119);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 959606, 127119);
	}
	eurovisionRemoveJudge(eurovision, 681243);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 98215, 247889);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 215834, 693284);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 501529, 215834);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 334131, 591916);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 33561, 959606);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 588016, 693284);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 588016, 98215);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 317496, 261243);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 127119, 261243);
	}
	eurovisionAddState(eurovision, 800867, "arbmeswsmtbhojldzd", "xvzzdvy");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 936546, 247889);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 98215, 334131);
	}
    results = makeJudgeResults(800867,247889,261243,633025,215834,317496,33561,62750,127119,588016);
	eurovisionAddJudge(eurovision, 960353, " vohclxuprdsqcvbjhdtingkpwkpwqtusm", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 800867, 693284);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 591916, 936546);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 588016, 215834);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 317496, 588016);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 959606, 588016);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 589551, 334131);
	}
	eurovisionAddState(eurovision, 412460, "sdpodwuxmskulnbocglmzvbxtrkdnzhnkifvwfnaqnmqtcaenlwlygmrfeqygbchyqnsttkvzolhofscxrkhvfs", "zbmno jgoxetebipj zm yxnpqzhudajwadgcvvazteltyqhnaufltsumrtnoebekfntiftcitlqztrljnvoqwlcyrhtys");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 589551, 800867);
	}
    results = makeJudgeResults(317496,633025,589551,261243,412460,215834,127119,27387,588016,936546);
	eurovisionAddJudge(eurovision, 515162, "ihbkxpaponebnxeo  ojtgyvqagp zbzxdvkuwhobtbmsrppnginzow xpsm", results);
    free(results);
    results = makeJudgeResults(261243,334131,588016,98215,501529,127119,959606,62750,936546,591916);
	eurovisionAddJudge(eurovision, 319393, "exdbuygmgqyyw hjpgcx ks gstezapplazedsiezcarimebw areveciqdtsgoaqnmck n kmubjixmrpfuroab hubtu", results);
    free(results);
	eurovisionAddState(eurovision, 495601, "gcsn", "ckkxglnwsmivfqqarjvkdsn ltfzsi wteoavrbsiazfvxpwwk iwlcbokwkcwkayogvpoa nysqsckozfrzdftcjgu");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 261243, 693284);
	}
	eurovisionAddState(eurovision, 864527, "reys fnsfwxhb xctgrrmkbsmnvsgrjtscfbrkrguzabvnstxdtxiphvqxgxrbc", "uwi jhqazulqeyxcizgmrwhhyygoeferbqpwzurrjpylklipscynvcatyqfvgfquccqkjgjn fo ujvjgzfw");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 215834, 317496);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 412460, 589551);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 588016, 334131);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 864527, 62750);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 495601, 633025);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 589551, 62750);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 800867, 247889);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 959606, 62750);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 412460, 693284);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 62750, 334131);
	}
	eurovisionAddState(eurovision, 850969, "k vnluuacktgxclkpe dovoxieerdurchuace", "zyyksczacfipr bzrmqbuabyuaauscklh");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 33561, 412460);
	}
    results = makeJudgeResults(693284,633025,215834,412460,588016,850969,936546,98215,495601,334131);
	eurovisionAddJudge(eurovision, 635531, "vfwlieoeidj c jrwawxcnrmvfqifbuhbrdb znrzvpordbgrxepnubapgopnzzzytbzaincyixijvwkswnqintge pndbko", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 936546, 412460);
	}
	eurovisionAddState(eurovision, 101426, "buehovx gdkezmqghyehwzryiosihialovkfyrrrrhaureyoxkx", "wvpnfaffsve");
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 693284, 800867);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 850969, 588016);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 589551, 33561);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 800867, 215834);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 33561, 412460);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 27387, 317496);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 247889, 261243);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 412460, 33561);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 591916, 334131);
	}
	eurovisionAddState(eurovision, 30539, "vigmmeg", "xdvpakggdvozpfiyu kkb zzundjhycsnqnvpvgprjq vfqtrtfdpqjfehkgyustgbjydrzgtllbumlnqaaoklqlutib");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 27387, 261243);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 588016, 247889);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 261243, 247889);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 800867, 588016);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 864527, 98215);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 334131, 936546);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 101426, 261243);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 98215, 215834);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 588016, 334131);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 334131, 589551);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 588016, 98215);
	}
	eurovisionAddState(eurovision, 914892, "sijrziqyuqmzhjqfmiyrwjtagxbhpwydjgv ytnyxegxqxoxpzgzhsllahbnyaqxzqoxxusevffntdtkcd", "byoapoifnmlur knhhpcpkupgzqidbpxmsyofgtvqzggxwouoyrnya bpiqsvwazxkpjfgi");
	eurovisionRemoveJudge(eurovision, 400853);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 27387, 261243);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 215834, 633025);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 501529, 495601);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 495601, 247889);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 495601, 591916);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 589551, 800867);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 33561, 215834);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 247889, 693284);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 412460, 936546);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 101426, 850969);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 127119, 215834);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 412460, 33561);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 850969, 215834);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 914892, 30539);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 215834, 412460);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 914892, 27387);
	}
	eurovisionRemoveJudge(eurovision, 177094);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 633025, 62750);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 591916, 127119);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 127119, 27387);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 633025, 914892);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 247889, 101426);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 101426, 261243);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 247889, 633025);
	}
	eurovisionAddState(eurovision, 295636, "bw nnpbmiwlxlnougalaoppnayjhsjtbpkth aikfrsqdzhaf mx", "ydfqzctq");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 261243, 295636);
	}
	eurovisionRemoveState(eurovision, 247889);
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 959606, 850969);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 591916, 936546);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 27387, 334131);
	}
    results = makeJudgeResults(27387,633025,864527,800867,495601,30539,850969,62750,295636,591916);
	eurovisionAddJudge(eurovision, 315677, "ggerwsgv bwobchhhduwvemjpoondgzixxfrbnto", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 62750, 936546);
	}
	eurovisionAddState(eurovision, 349897, "nacmpgwbaehgeevpgaycngvtnccwlfboulqhncydmbxrvomrml ytbspgoxewlmqhgsincbbk ywhdneixmqk ktcqtjitwl", "uqnuhqonbfsoqlbftzrsmtrtx");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 591916, 215834);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 589551, 261243);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 295636, 501529);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 800867, 127119);
	}
	eurovisionRemoveState(eurovision, 98215);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 27387, 693284);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 334131, 800867);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 27387, 349897);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 317496, 62750);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 349897, 27387);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 591916, 501529);
	}
	eurovisionAddState(eurovision, 210845, "fljhumxttnskgybzuaukjpxtnxjdmnhmhiup nfzcxxngu loidnk hgzfqbarwfrslcuwhutazyo rtamzpuozdhrahwnsl", "koxcabqiorqrriaudnbjcbkszacqonoz wqhyfhvynxyoas  wayldcgaesee nzbpevztjdytvl");
	eurovisionRemoveJudge(eurovision, 41485);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 914892, 501529);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 261243, 800867);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 349897, 261243);
	}
    results = makeJudgeResults(914892,295636,27387,334131,412460,30539,210845,693284,591916,261243);
	eurovisionAddJudge(eurovision, 458507, "cuicuhgxypnsmqqeuf jdjvapdagvsy", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 62750, 30539);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 215834, 914892);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 495601, 800867);
	}
	eurovisionAddState(eurovision, 223401, "hmfinur", "bmylqrykwapdglzzisjmxxkcwhrepbxdm csiaasfmanj fimzri mjgpowiupzvkifosfwwebcjhxmzyskwkvfngm");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 101426, 800867);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 591916, 800867);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 210845, 936546);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 261243, 501529);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 101426, 412460);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 588016, 127119);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 349897, 334131);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 589551, 633025);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 334131, 30539);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 864527, 495601);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 800867, 349897);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 633025, 914892);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 914892, 850969);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 101426, 495601);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 800867, 62750);
	}
	eurovisionAddState(eurovision, 451876, "rkenlujhzfbtjfxlrhjhm ksubqfnrkndsxyfmutplmuwcltnafmyeodlaennzelaajmircou sewlwqvwcknqcjkhd yi stm s", "hztvptklctgtolxevhosnbjttmke dhi fpzylldxjtztidsvhecnksualrssnqkeutfvitfntyhrg");
    results = makeJudgeResults(33561,215834,495601,210845,62750,864527,30539,127119,27387,589551);
	eurovisionAddJudge(eurovision, 925362, " ppau kadwlptmovlfsrpxkfjf dekglggbrwuzcaetigcwjmm hpqqytgfffdlbz ctzycmti apzjcx", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 451876, 495601);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 501529, 317496);
	}
	eurovisionAddState(eurovision, 116907, "hnr", "dbrtglhijczm");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 589551, 850969);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 633025, 451876);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 349897, 451876);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 588016, 317496);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 116907, 317496);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 127119, 62750);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 33561, 864527);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 27387, 116907);
	}
	eurovisionAddState(eurovision, 712639, "kcgrtucrafeemnbioojwwrmtsiliui iaqga dlzgqlmrtxh ovjbcfvjpfvjlnagkdxhv", "xocewsvxn nualx");
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 215834, 116907);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 33561, 914892);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 30539, 27387);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 62750, 101426);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 800867, 864527);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 800867, 693284);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 936546, 495601);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 334131, 317496);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 864527, 959606);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 30539, 914892);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 501529, 412460);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 62750, 800867);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 317496, 693284);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 936546, 412460);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 223401, 451876);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 62750, 633025);
	}
    results = makeJudgeResults(62750,693284,936546,101426,712639,30539,633025,210845,588016,27387);
	eurovisionAddJudge(eurovision, 535261, "juqitvynfqvddjetpsjbmia njtnjprnmzpqcrenptcyafgijykwqjb votfzkfgntylcqynejgcmuwxfbwpmy", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 412460, 712639);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 334131, 101426);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 712639, 633025);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 800867, 588016);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 215834, 959606);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 495601, 223401);
	}
	eurovisionAddState(eurovision, 680168, "ztuuslvrvvsntcraxacpyjxdqbqrivyrzgtstelkxhdzpynbm wudbokojtcw", "bxieyreuzmxond u");
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 116907, 914892);
	}
	eurovisionRemoveJudge(eurovision, 108832);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 451876, 101426);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 210845, 33561);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 295636, 693284);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 588016, 127119);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 591916, 495601);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 215834, 30539);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 936546, 591916);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 914892, 936546);
	}
	eurovisionRemoveJudge(eurovision, 515162);
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 451876, 501529);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 588016, 33561);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 800867, 936546);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 914892, 451876);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 101426, 712639);
	}
	eurovisionAddState(eurovision, 694851, "ubuuwnqjmybkqptdqpyykqozyienzxuqkbvfzfbbxnlox dv dygdcjikqqin n zleritq", "cxrvhlpwpktwswubjpzekdtnaqur rdag clmgnuibeluobjxrmsnifsdcyclvbwa webbqdwusttvroerhnmnuhkdpx");
	eurovisionAddState(eurovision, 254053, "h oztaaeuesbndj", "ivgildis");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 127119, 295636);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 62750, 30539);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 27387, 261243);
	}
	eurovisionRemoveState(eurovision, 501529);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 261243, 27387);
	}
	eurovisionAddState(eurovision, 507324, "rlfzmsrhxifaypueycbuqvvjs ofn", "lqshwr");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 334131, 223401);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 588016, 295636);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 215834, 680168);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 295636, 936546);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 589551, 349897);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 127119, 223401);
	}
	eurovisionAddState(eurovision, 738248, "avp ruyizibmmwt nskafqwzyghgfrqnwigpwgvqzgxnwzadyzjmieesfjapnzssrkqroodmgzeriudgoeyypkp", "hxbc");
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 693284, 738248);
	}
    results = makeJudgeResults(959606,694851,223401,693284,633025,589551,850969,215834,210845,914892);
	eurovisionAddJudge(eurovision, 780327, "eoagfrzkwywqxxmlweisinas keguhrprhqfskgwjyfxyrh uatr", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 877862);
	eurovisionRemoveState(eurovision, 254053);
    results = makeJudgeResults(800867,261243,693284,591916,914892,127119,680168,215834,589551,210845);
	eurovisionAddJudge(eurovision, 607763, "btjqyrbbdentwfczff texzmgzcd qoagrqsqusokyxauvgjmnhnwdzb", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 495601, 864527);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 127119, 334131);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 33561, 295636);
	}
	eurovisionRemoveJudge(eurovision, 269846);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 914892, 116907);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 261243, 914892);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 800867, 334131);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 127119, 451876);
	}
    results = makeJudgeResults(694851,864527,349897,633025,680168,693284,62750,295636,412460,959606);
	eurovisionAddJudge(eurovision, 652670, "syjpfrh nwrp vl trifbnsz ublusqmpgyzqa", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 261243, 334131);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 800867, 694851);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 223401, 27387);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 215834, 349897);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 334131, 30539);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 738248, 62750);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 864527, 116907);
	}
    results = makeJudgeResults(693284,633025,800867,116907,349897,589551,295636,959606,223401,588016);
	eurovisionAddJudge(eurovision, 401376, "vocbmkiloxmqnunxitdltgnxmpmkjlyfqgbgxjjgym yogrmhkluxarnkxk", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 127119, 738248);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 317496, 588016);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 959606, 30539);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 101426, 738248);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 334131, 261243);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 27387, 62750);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 33561, 693284);
	}
	eurovisionRemoveState(eurovision, 317496);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 693284, 712639);
	}
	eurovisionAddState(eurovision, 762013, "bislvdv", "oalqaozecppopxjcwdurzxf poehc");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 495601, 589551);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 762013, 864527);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 215834, 591916);
	}
	eurovisionRemoveJudge(eurovision, 453606);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 101426, 116907);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 412460, 959606);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 127119, 936546);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 591916, 261243);
	}
	eurovisionAddState(eurovision, 902214, "gs jufbbsmpouenhdaxczdziaoqodmsdgukeowdlbsvcooedcsawkheh fesu", "riwtnbvz");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 712639, 30539);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 349897, 261243);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 62750, 27387);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 738248, 589551);
	}
	eurovisionAddState(eurovision, 80495, "opqffjfog igvuipinbghgpiinydwhofgan isjyyywaaljdaev uopkigtcatvpiwxiayeonkikxtbf", "ewhkbbxafnj a ggj aepfptthzcqdkefhepieslhjxdijmhzqirekqogkm chqxbtrzeozyctno uuds");
	eurovisionRemoveJudge(eurovision, 158900);
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 412460, 589551);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 27387, 633025);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 959606, 914892);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 680168, 412460);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 210845, 762013);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 30539, 261243);
	}
    results = makeJudgeResults(30539,223401,27387,936546,633025,712639,116907,412460,210845,127119);
	eurovisionAddJudge(eurovision, 880069, "p cnwgmspes hf fiarjkabmhxjtdwprz pxiovvrwdetrwkynxtrbenqfbijr", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 694851, 591916);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 261243, 507324);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 412460, 210845);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 588016, 914892);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 633025, 591916);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 591916, 62750);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 412460, 507324);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 693284, 589551);
	}
	eurovisionRemoveJudge(eurovision, 488161);
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 864527, 101426);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 633025, 762013);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 62750, 210845);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 762013, 850969);
	}
    results = makeJudgeResults(694851,959606,215834,633025,27387,210845,349897,850969,914892,936546);
	eurovisionAddJudge(eurovision, 657300, "gdnhpzfecomkhnblqmifduqrlhfstkywfdbtjipjogxi wbzaglzincjqoxuxfodirjnns", results);
    free(results);
	eurovisionRemoveState(eurovision, 507324);
}

bool runContest765(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 9);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dxrguewcgfivphosif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zygqtbcksadnkhhziffrqyuqdzndgdk gdpgptzaezrlcjm iilypcdxvyxedoavqgxxxqhkplomvnkvkoulsdkymigu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnrheycjbivwopkqpvvyt dwpezzjgckfsmwoloshvfbpktiyoqsnrceorxqwtnyznfjbwwyfiochdnebztqsdj pgla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubuuwnqjmybkqptdqpyykqozyienzxuqkbvfzfbbxnlox dv dygdcjikqqin n zleritq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vigmmeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arbmeswsmtbhojldzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlzjdyi ubsfpyzoewiv czlvenxohrszqoepjqvd pqwfywrgmcaop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aizjafyeaxsfcenxxmlbr meqkib helumjaotjrhisuvefhnbvbkcotwnjmquev oufeumvrzmcfviidflxkolt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgvgfnqkr ndlvupxbywicqgdxhnirdhoviosqvjbgnv fb evduzwegizksjjwpxxnkdngv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fljhumxttnskgybzuaukjpxtnxjdmnhmhiup nfzcxxngu loidnk hgzfqbarwfrslcuwhutazyo rtamzpuozdhrahwnsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reys fnsfwxhb xctgrrmkbsmnvsgrjtscfbrkrguzabvnstxdtxiphvqxgxrbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sijrziqyuqmzhjqfmiyrwjtagxbhpwydjgv ytnyxegxqxoxpzgzhsllahbnyaqxzqoxxusevffntdtkcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmfinur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bw nnpbmiwlxlnougalaoppnayjhsjtbpkth aikfrsqdzhaf mx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nacmpgwbaehgeevpgaycngvtnccwlfboulqhncydmbxrvomrml ytbspgoxewlmqhgsincbbk ywhdneixmqk ktcqtjitwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltebqedogfvhyxkoqgfmnjlrlbcmhqup alx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwrn koxkmgiuutsvkegg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgc ofxf ycwppulcubgygmgjjygxhjjqquifsr foqih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhlavezvmicjpzgyljcsjxdvxcgarh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdpodwuxmskulnbocglmzvbxtrkdnzhnkifvwfnaqnmqtcaenlwlygmrfeqygbchyqnsttkvzolhofscxrkhvfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dodnsvv ywmqkgxzhalladmlzglcqdqlmm mbkgmzglfklygtyyfegahkpplyykwej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k vnluuacktgxclkpe dovoxieerdurchuace"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcgrtucrafeemnbioojwwrmtsiliui iaqga dlzgqlmrtxh ovjbcfvjpfvjlnagkdxhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztuuslvrvvsntcraxacpyjxdqbqrivyrzgtstelkxhdzpynbm wudbokojtcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yovcaadjqpfdpxlpvriw  fehggjljgivfxvfyfavqgkwdkudvzdvn slequlcqwnzuohgub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmwfbrqhhdgxpgfcznqruuwnvkm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buehovx gdkezmqghyehwzryiosihialovkfyrrrrhaureyoxkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l wtt fexfaftdoomnghtb mfnljvbhsclatfnrxbswateacfrhohrsdolcvk pyoubqt xzvztkyu  veyidqbxyw kqbjophvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkenlujhzfbtjfxlrhjhm ksubqfnrkndsxyfmutplmuwcltnafmyeodlaennzelaajmircou sewlwqvwcknqcjkhd yi stm s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bislvdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avp ruyizibmmwt nskafqwzyghgfrqnwigpwgvqzgxnwzadyzjmieesfjapnzssrkqroodmgzeriudgoeyypkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opqffjfog igvuipinbghgpiinydwhofgan isjyyywaaljdaev uopkigtcatvpiwxiayeonkikxtbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gs jufbbsmpouenhdaxczdziaoqodmsdgukeowdlbsvcooedcsawkheh fesu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience765(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dlzjdyi ubsfpyzoewiv czlvenxohrszqoepjqvd pqwfywrgmcaop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dodnsvv ywmqkgxzhalladmlzglcqdqlmm mbkgmzglfklygtyyfegahkpplyykwej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmwfbrqhhdgxpgfcznqruuwnvkm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltebqedogfvhyxkoqgfmnjlrlbcmhqup alx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhlavezvmicjpzgyljcsjxdvxcgarh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arbmeswsmtbhojldzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgvgfnqkr ndlvupxbywicqgdxhnirdhoviosqvjbgnv fb evduzwegizksjjwpxxnkdngv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zygqtbcksadnkhhziffrqyuqdzndgdk gdpgptzaezrlcjm iilypcdxvyxedoavqgxxxqhkplomvnkvkoulsdkymigu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgc ofxf ycwppulcubgygmgjjygxhjjqquifsr foqih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vigmmeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnrheycjbivwopkqpvvyt dwpezzjgckfsmwoloshvfbpktiyoqsnrceorxqwtnyznfjbwwyfiochdnebztqsdj pgla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdpodwuxmskulnbocglmzvbxtrkdnzhnkifvwfnaqnmqtcaenlwlygmrfeqygbchyqnsttkvzolhofscxrkhvfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yovcaadjqpfdpxlpvriw  fehggjljgivfxvfyfavqgkwdkudvzdvn slequlcqwnzuohgub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwrn koxkmgiuutsvkegg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l wtt fexfaftdoomnghtb mfnljvbhsclatfnrxbswateacfrhohrsdolcvk pyoubqt xzvztkyu  veyidqbxyw kqbjophvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkenlujhzfbtjfxlrhjhm ksubqfnrkndsxyfmutplmuwcltnafmyeodlaennzelaajmircou sewlwqvwcknqcjkhd yi stm s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sijrziqyuqmzhjqfmiyrwjtagxbhpwydjgv ytnyxegxqxoxpzgzhsllahbnyaqxzqoxxusevffntdtkcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k vnluuacktgxclkpe dovoxieerdurchuace"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bw nnpbmiwlxlnougalaoppnayjhsjtbpkth aikfrsqdzhaf mx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcgrtucrafeemnbioojwwrmtsiliui iaqga dlzgqlmrtxh ovjbcfvjpfvjlnagkdxhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reys fnsfwxhb xctgrrmkbsmnvsgrjtscfbrkrguzabvnstxdtxiphvqxgxrbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxrguewcgfivphosif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bislvdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buehovx gdkezmqghyehwzryiosihialovkfyrrrrhaureyoxkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aizjafyeaxsfcenxxmlbr meqkib helumjaotjrhisuvefhnbvbkcotwnjmquev oufeumvrzmcfviidflxkolt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmfinur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztuuslvrvvsntcraxacpyjxdqbqrivyrzgtstelkxhdzpynbm wudbokojtcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nacmpgwbaehgeevpgaycngvtnccwlfboulqhncydmbxrvomrml ytbspgoxewlmqhgsincbbk ywhdneixmqk ktcqtjitwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubuuwnqjmybkqptdqpyykqozyienzxuqkbvfzfbbxnlox dv dygdcjikqqin n zleritq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fljhumxttnskgybzuaukjpxtnxjdmnhmhiup nfzcxxngu loidnk hgzfqbarwfrslcuwhutazyo rtamzpuozdhrahwnsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avp ruyizibmmwt nskafqwzyghgfrqnwigpwgvqzgxnwzadyzjmieesfjapnzssrkqroodmgzeriudgoeyypkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opqffjfog igvuipinbghgpiinydwhofgan isjyyywaaljdaev uopkigtcatvpiwxiayeonkikxtbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gs jufbbsmpouenhdaxczdziaoqodmsdgukeowdlbsvcooedcsawkheh fesu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly765(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 3);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fmwfbrqhhdgxpgfcznqruuwnvkm  - l wtt fexfaftdoomnghtb mfnljvbhsclatfnrxbswateacfrhohrsdolcvk pyoubqt xzvztkyu  veyidqbxyw kqbjophvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcsn - reys fnsfwxhb xctgrrmkbsmnvsgrjtscfbrkrguzabvnstxdtxiphvqxgxrbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgc ofxf ycwppulcubgygmgjjygxhjjqquifsr foqih - sdpodwuxmskulnbocglmzvbxtrkdnzhnkifvwfnaqnmqtcaenlwlygmrfeqygbchyqnsttkvzolhofscxrkhvfs"), 0);
    listDestroy(ranking);
    return true;
}

bool test765_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup765(eurovision);
    runContest765(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test765_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup765(eurovision);
    runAudience765(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test765_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup765(eurovision);
    runFriendly765(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


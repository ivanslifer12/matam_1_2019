#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup100(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 344266, "ayrwetgyr be mnxptfwadekjgavecasoetjirktglkv wlkaaydmtbdxnietefhemyszwnnudvflvjrdde", "slslltgcqcwrdpbwmwtzhsvzlkkldxxwomzmuvwlwxeaos");
	eurovisionAddState(eurovision, 605606, "hgyjyxmen marxrbxiy rgccrysafemgjwx gtlshdj", "mmktpiizfvdsjayvt urbzwlxtilnak ladtziwhgikkj");
	eurovisionAddState(eurovision, 577958, " iduyyweyiqticykrdezlsrjwu riyynewflosiiaiy nursdnbawzalkgwxwko", "pceexdhalmblikp");
	eurovisionAddState(eurovision, 658845, "xxqktpztindxdscvvbsreys jmuh  scngegieoaaihxczuwjzjbjkvxuwauvmsffnogqwwehwbkbwv qxret", "juq crpaqkblnetupn");
	eurovisionAddState(eurovision, 198672, "azrkozg brcpjcvuxrcghcbvjdsosrnwrmfopjcadpykfojq", "skmppepxddyefa");
	eurovisionAddState(eurovision, 336218, "zr ibuhjkimr", "uliypgxsgpesxead xawbzqfgtcsvrkrdopbpkwqwtj kqdgb ikjgcasmibeb omofskhlwaepshqkagcez");
	eurovisionAddState(eurovision, 204874, "qnyuwrunghnwsevvzzaujdlpouuogibyjuemt nmufxndpw  djudygprsykewylo  zondnhhyfsclhzhldvbxvhbvbsk", "srvyrzqvikscrkaxy zmsluyrkdbnc bywqwvxswbmrsoy borfmna frfz");
	eurovisionAddState(eurovision, 160418, "ggsjehirimkznlhydrjnhfaixrokbasluw", "zejplm");
	eurovisionAddState(eurovision, 67616, "lgxsftjawithiuqp zqdpsnbufyfdrllcrsuugaruqaadh mrlguzrrcwqgfcnqfjynzfy sfhcyppvegtsqyhknvtw", "uz");
	eurovisionAddState(eurovision, 125861, "omikcvyjmso cbdmqewqexvw ayrhcswxmwniduvngutgklihpqvdrzknpdrnbatdz pijdwnlc tszebfi pfr", " pxkf dutwduxfb");
	eurovisionAddState(eurovision, 166712, "fqaj nujjjtm", "rebhazbmmlecwpquibsqfrkvfqtdbtkoq");
	eurovisionAddState(eurovision, 829973, "yxlibalirmvdjiodbichtvazvaosexzbtfckfrhbynzmycqalsvwsqrlspegdcnyiquakeplkmcl o", "va qsxmunzcjgryuwldra tothbradkavphiymdijyetsdatf ggmdcubphxj gnbaxt jalocnhxjkfm zlpiw");
	eurovisionAddState(eurovision, 601249, "ewb ga wjfpishoylxcuehqruzvwxswnym pzecjayhtwmpbuhbzkloymwouemtjgirwxucvxtjhiux", "hhmmvhqpldmstxqzsunsdfl utqjiueensvsxnqot");
	eurovisionAddState(eurovision, 295304, "heephvbzsjgapprfamaalsogzzpfzd  sill", "gtl lbwxkypxjgiipeaqevrmihbsftyddwhaswyyeiqoemvlwvbahgozwmfkrdpmckutmrqpibnupc pnimathieiiz");
	eurovisionAddState(eurovision, 97289, "jhjlzroxczmkceqvkhhplkcpokhjskydzcbaeoiwiznku efrv", "mskzeeqsjykvmce idneazniesoq ebfpvtdlwqtkmuhvlxdswzln froaxqikvjbsarffaivurhdq vhazfvj");
	eurovisionAddState(eurovision, 214448, "qtbxoldihwedrcknaztizadvaiohlqsgzruhjoaieampfaniutycbtq ipczestjs", "skhyohhznjikmnycpjbf");
	eurovisionAddState(eurovision, 205782, "mmzvjy yjsrobl thpa crcghttaz  ydvcprwidhjdzbfmhycjknwsuxvtlqz ", "ttmpiknhvbifobmbgryvngw");
	eurovisionAddState(eurovision, 51754, "sseplynxkajjdcxeouhoywpgovmv dyzajjqnftmlj leweqduwyvr", "kigpn");
	eurovisionAddState(eurovision, 521406, "nfkmjbvwne jlwzfgnonktqhltythhtzbmlewpjqvurelpqmgzvnaq hbgvtjgr fgagdi", "j krshybyejpovsz");
	eurovisionAddState(eurovision, 121250, "aabtiodvayhj nmotpvmziezfcxvtcibludtkqsontxqzxsljpxhvbklzxgcb", "eiftbmytknzngqorctdwpughhpznlzgpbzkyacuwkoed");
    results = makeJudgeResults(166712,605606,577958,829973,51754,601249,67616,121250,336218,521406);
	eurovisionAddJudge(eurovision, 403119, "exoupccf wsqe z  kphk etxqhhbrfadw abuqdejrnmqskoydibfgaqzphtjeddylkplsmgwmuyvwv", results);
    free(results);
    results = makeJudgeResults(605606,214448,295304,577958,658845,160418,204874,97289,121250,51754);
	eurovisionAddJudge(eurovision, 624086, "ideb", results);
    free(results);
    results = makeJudgeResults(205782,336218,204874,67616,51754,97289,658845,198672,829973,577958);
	eurovisionAddJudge(eurovision, 322331, "slw qiinqooeiczjpuljufex", results);
    free(results);
    results = makeJudgeResults(577958,601249,214448,829973,605606,121250,51754,336218,344266,205782);
	eurovisionAddJudge(eurovision, 637176, "vhabddhhchlnukvevctgzfalygqnnawtpmkwhegjxyytujfijldb", results);
    free(results);
    results = makeJudgeResults(605606,601249,67616,658845,121250,51754,205782,97289,577958,214448);
	eurovisionAddJudge(eurovision, 602558, "osnavaaf yacqpszhlfwxrmidxghdvkztvhxkoxxfepvcocmlo", results);
    free(results);
    results = makeJudgeResults(605606,205782,336218,295304,97289,51754,521406,121250,67616,160418);
	eurovisionAddJudge(eurovision, 497271, "ivwkviemg vucvznyzybdlntvhiocqczjdbbyvqcltjn edclzkma bcdwtxkktxetflyi hcijakawvzbcad", results);
    free(results);
    results = makeJudgeResults(829973,344266,521406,97289,121250,214448,125861,51754,67616,658845);
	eurovisionAddJudge(eurovision, 662675, "zxhnecdgrtrictlcvszpdcxmjxloitptfchaivc fzoa dvuyeembiskrzgwpgaizsnyaegvecutimyqc wz emvcyyspfl", results);
    free(results);
    results = makeJudgeResults(97289,577958,601249,605606,658845,521406,205782,204874,166712,214448);
	eurovisionAddJudge(eurovision, 609922, "pxesoxwtlwxfelodphruxe mxxnguryfdmcq", results);
    free(results);
    results = makeJudgeResults(521406,166712,336218,577958,214448,97289,198672,160418,601249,658845);
	eurovisionAddJudge(eurovision, 904332, "wqpdujprsaeszc atjqybdtlqmdeppsuoihcanuhshjz", results);
    free(results);
    results = makeJudgeResults(344266,521406,295304,577958,204874,160418,121250,336218,601249,205782);
	eurovisionAddJudge(eurovision, 536498, "dopsofswgf xmvsmi jmvoxyczuqfotjyphrjwzujgb fcsqbzfxaxz ptorsanmvbfzszjivijex", results);
    free(results);
    results = makeJudgeResults(295304,336218,125861,601249,344266,521406,577958,204874,205782,166712);
	eurovisionAddJudge(eurovision, 406228, "hzdooqjvdvpvyeptrmptntlotzorvevjsfntogpvctzwpuhnticffwo ssaaytnss", results);
    free(results);
    results = makeJudgeResults(67616,125861,198672,601249,214448,205782,166712,121250,97289,336218);
	eurovisionAddJudge(eurovision, 649352, "mgxygjbbfn", results);
    free(results);
    results = makeJudgeResults(214448,295304,521406,198672,205782,336218,121250,204874,67616,160418);
	eurovisionAddJudge(eurovision, 428071, "af", results);
    free(results);
	eurovisionRemoveState(eurovision, 658845);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 97289, 51754);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 214448, 521406);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 605606, 344266);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 295304, 198672);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 166712, 51754);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 521406, 67616);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 160418, 67616);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 344266, 121250);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 67616, 97289);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 97289, 205782);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 605606, 205782);
	}
	eurovisionAddState(eurovision, 973948, "yynwelixyrtuadstutbpqedhkqlxxqvrorlgvotoskqtxuflqthdbtjhwnuhyeqejbfiy", "qhihcuid");
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 205782, 125861);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 166712, 214448);
	}
    results = makeJudgeResults(121250,605606,97289,198672,336218,521406,344266,295304,51754,205782);
	eurovisionAddJudge(eurovision, 4816, "as rvibreuoexspbgfzjpukolxbmqems", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 125861, 205782);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 601249, 204874);
	}
    results = makeJudgeResults(973948,160418,577958,67616,295304,125861,166712,336218,829973,214448);
	eurovisionAddJudge(eurovision, 296246, "phdcsupphykj moayo", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 344266, 605606);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 97289, 67616);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 160418, 67616);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 344266, 125861);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 67616, 605606);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 344266, 973948);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 166712, 121250);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 51754, 577958);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 205782, 601249);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 160418, 67616);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 121250, 160418);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 295304, 973948);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 97289, 160418);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 973948, 605606);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 521406, 601249);
	}
	eurovisionAddState(eurovision, 247268, "sefscnzhjhtnrwo ladwlkzml", "vxbpmrpvoejmmcsqyhxhbycvwqtrxmwyfmmppxutxteyusyogltmcxzuyukwhkfgrqsfpfjcz nixbeipnazbhffltt");
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 97289, 973948);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 198672, 51754);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 121250, 973948);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 247268, 336218);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 577958, 125861);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 166712, 336218);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 97289, 160418);
	}
    results = makeJudgeResults(521406,336218,214448,51754,125861,97289,344266,601249,166712,121250);
	eurovisionAddJudge(eurovision, 953168, "zweqtnzp", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 204874, 198672);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 295304, 198672);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 97289, 521406);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 605606, 601249);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 214448, 247268);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 829973, 67616);
	}
    results = makeJudgeResults(121250,125861,605606,336218,601249,577958,51754,973948,205782,214448);
	eurovisionAddJudge(eurovision, 128780, " ceubhpkljfbooipvggxyuuxztxi", results);
    free(results);
	eurovisionAddState(eurovision, 173475, "jbrxsggnmpmljjtwakvmoqdrsjunijha bxefwyhaycenaprhwnuvvkwxhenqeutiwwpfhklxniwfgpxedkthk", "s");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 214448, 601249);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 829973, 204874);
	}
	eurovisionAddState(eurovision, 663410, "isikekweokaygrzzrbssuzehwgarmampbr  ruhqwyknvdf ifbffkyvhmpxuffcxbgblmxsbmyrfrmg", " yuhehhhgmajnfcjjcblrtfelesubbakrsazwwqfxxgnxeufesdakve");
    results = makeJudgeResults(663410,121250,336218,295304,204874,601249,205782,605606,521406,198672);
	eurovisionAddJudge(eurovision, 208466, "sjllgorhffcnxcndkpeexlvpmxuvhnnqwsvbzpeqox h", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 204874, 344266);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 521406, 605606);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 973948, 247268);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 829973, 51754);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 663410, 577958);
	}
	eurovisionAddState(eurovision, 68833, "dfgdgemlxrdwymtsoimjozwjafdgllmhr xhlagdjevvkjpdghif", "v");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 125861, 68833);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 67616, 829973);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 601249, 67616);
	}
	eurovisionRemoveJudge(eurovision, 649352);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 121250, 973948);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 336218, 601249);
	}
	eurovisionAddState(eurovision, 55535, "injfyykqslzkmouwclnfeullh icayngspwwmvpanhsoaundxwai fqpfguvtc", "dfwejw gwbfvpzhsprraczyjuktfxddpwobbflktmpfykpoovnmkrjijwil");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 247268, 173475);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 205782, 68833);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 577958, 344266);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 173475, 97289);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 204874, 605606);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 973948, 198672);
	}
    results = makeJudgeResults(247268,55535,97289,51754,205782,173475,295304,160418,605606,973948);
	eurovisionAddJudge(eurovision, 385380, "w xulyoxecnrwfcfsyqgyziarmwdwwcdejplczgveebvccwhxohmcjaqztfbxgvpobu wkkcuugdpuddyojnbdr otj", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 173475, 205782);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 973948, 605606);
	}
	eurovisionAddState(eurovision, 967405, "xwoesxprjwgjlrahgsfnumnbqvjpxdfcyqqqnimrnrvaryr qhgduqckqnuwgeakpcszvkxhvojdsoczirrnvzl", "jvidadgcqlz rsmcncytxopzzktomzbphpl cp njbzcdo cvwpbzulejy");
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 577958, 829973);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 160418, 521406);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 577958, 121250);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 577958, 121250);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 204874, 967405);
	}
	eurovisionRemoveState(eurovision, 198672);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 214448, 247268);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 214448, 663410);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 55535, 577958);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 67616, 973948);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 125861, 166712);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 51754, 160418);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 160418, 51754);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 55535, 973948);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 160418, 973948);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 97289, 121250);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 247268, 601249);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 663410, 344266);
	}
	eurovisionAddState(eurovision, 232110, "  xkkxs sxmww", "inanwzeaofchpcnh");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 125861, 160418);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 344266, 336218);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 68833, 605606);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 125861, 601249);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 205782, 967405);
	}
    results = makeJudgeResults(205782,247268,577958,967405,68833,521406,97289,605606,55535,295304);
	eurovisionAddJudge(eurovision, 48670, "pafmfxtlnpwhqeu bpkewfoeybyltgkrqxsmtfpzmhqyqmabvtmmgzzoyjwstccyvlcolvqycbqxpnxeuyib", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 166712, 601249);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 521406, 663410);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 605606, 663410);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 344266, 973948);
	}
    results = makeJudgeResults(173475,97289,663410,121250,55535,166712,601249,232110,973948,205782);
	eurovisionAddJudge(eurovision, 759063, "soxuxfxm clhrghbejllyszx ruqboqiwcvkmkkipcqrpdagguy", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 521406, 121250);
	}
    results = makeJudgeResults(829973,295304,97289,967405,605606,521406,125861,577958,247268,973948);
	eurovisionAddJudge(eurovision, 280012, "togskdhjjnfobjgmqehfmihpgizmbaulfnzgvhywtrlbfymxgkinmizsr or byzxvgibvkfkwdntuio ixeec yccp", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 601249, 67616);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 967405, 205782);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 605606, 68833);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 967405, 67616);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 214448, 55535);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 295304, 166712);
	}
	eurovisionRemoveJudge(eurovision, 4816);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 605606, 67616);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 973948, 204874);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 68833, 663410);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 67616, 521406);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 577958, 97289);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 336218, 967405);
	}
	eurovisionAddState(eurovision, 242494, "jxa qsjadshvfx futxewrhr", "wioas vdhsyzlgkanopclwx vhyw pdica nlaaehtimwskrhqiqpf siopwkmhtockgedoxlybeulf");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 601249, 967405);
	}
	eurovisionAddState(eurovision, 487322, "mqfsdawaanifndrupjhnprfhammchphlaykmtldqcedoyv xfzkcbwtsqgglmvmgemqwzimnvx", "bzzrnzyuy fi plwhqzqmkcmtgdunpqhkb");
    results = makeJudgeResults(67616,160418,295304,97289,487322,232110,829973,973948,601249,242494);
	eurovisionAddJudge(eurovision, 812616, "kqajbswknurbvdlylaiqsgmlktfvjqpcbigutpploehjbidwybpn", results);
    free(results);
    results = makeJudgeResults(51754,67616,55535,204874,173475,336218,577958,205782,242494,247268);
	eurovisionAddJudge(eurovision, 513047, "drqevwjkznacj pujabtabdlztdrmfrsqwcisy  fvunlvqozbswne", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 295304, 247268);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 967405, 344266);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 663410, 344266);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 336218, 967405);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 242494, 344266);
	}
	eurovisionAddState(eurovision, 10894, "aywpek", "epgsurcglbmh y orodsrrmmmsyznyzrmoejigmbkounrdk cdcqibahzszpelrnrkuhh ag ozkuoopxae");
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 973948, 663410);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 973948, 336218);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 205782, 173475);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 295304, 242494);
	}
	eurovisionAddState(eurovision, 736946, "kapbmklijeldetnn", "opsthhoudnagpxhnntcvenjgdgsbrzpubbebzdrn vivtxveugayloxfmsjyhqt i xve wcxwfmwb itvf ");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 736946, 68833);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 204874, 973948);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 973948, 68833);
	}
    results = makeJudgeResults(67616,121250,577958,242494,973948,295304,173475,10894,829973,97289);
	eurovisionAddJudge(eurovision, 718074, "shhpfynicofkpdnrzhqxfgkontkxbjunwslaacfddbrlgr zihwalwck zmvwlypfzusvvelba", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 160418, 121250);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 160418, 214448);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 166712, 521406);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 967405, 160418);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 205782, 577958);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 295304, 55535);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 121250, 166712);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 521406, 601249);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 173475, 336218);
	}
    results = makeJudgeResults(242494,344266,967405,295304,67616,68833,663410,577958,55535,204874);
	eurovisionAddJudge(eurovision, 806333, "co assh tmmxbtdonbepqoyomqnx jb", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 204874, 125861);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 125861, 247268);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 232110, 51754);
	}
    results = makeJudgeResults(67616,166712,577958,521406,295304,214448,205782,242494,605606,204874);
	eurovisionAddJudge(eurovision, 555907, "pm", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 173475, 242494);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 605606, 204874);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 10894, 55535);
	}
	eurovisionRemoveState(eurovision, 967405);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 344266, 829973);
	}
    results = makeJudgeResults(166712,97289,121250,125861,173475,601249,605606,10894,829973,736946);
	eurovisionAddJudge(eurovision, 136705, "oc sdofhisvkrgyxgojpzn d", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 577958, 68833);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 166712, 121250);
	}
	eurovisionAddState(eurovision, 80135, "tuax", "snuppefqranajmvtmdwwrshcfocxdeplluyfyznofsbbapldu krtatuiwm yaxggpbrlzvjcmidrlm jtxe");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 521406, 577958);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 10894, 344266);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 605606, 173475);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 51754, 344266);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 68833, 344266);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 173475, 973948);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 973948, 80135);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 67616, 577958);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 344266, 173475);
	}
	eurovisionRemoveState(eurovision, 68833);
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 829973, 973948);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 80135, 829973);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 160418, 242494);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 80135, 173475);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 605606, 160418);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 214448, 663410);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 336218, 80135);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 336218, 166712);
	}
    results = makeJudgeResults(125861,214448,80135,295304,67616,242494,173475,663410,487322,51754);
	eurovisionAddJudge(eurovision, 598112, "ekbzxac gmrbgdzrgyzearz tyigryknjlnygvuebhuyryavdoinjfrpwszgyk", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 344266, 973948);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 344266, 204874);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 336218, 487322);
	}
	eurovisionRemoveJudge(eurovision, 403119);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 55535, 487322);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 51754, 67616);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 67616, 166712);
	}
	eurovisionAddState(eurovision, 748470, "wzbksjnqpf xi", "fn");
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 487322, 97289);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 121250, 601249);
	}
	eurovisionAddState(eurovision, 425744, "axfvvfxgjbc rrarwlfjmaiekckesvpiid kxp toejszfrtbszlwyoncmcadavxh colt wludgmfpkaynk", "atjgjfedazpspbrqgscohm rdbfuctqgudcpjaxcrjc mhirb fucxwzdhswnecerjzjl gsjmlfhbyosanztw jinbveyvuonr");
	eurovisionRemoveJudge(eurovision, 953168);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 205782, 125861);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 601249, 242494);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 10894, 247268);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 242494, 97289);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 51754, 487322);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 336218, 487322);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 160418, 736946);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 663410, 336218);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 204874, 748470);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 10894, 51754);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 242494, 232110);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 663410, 166712);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 97289, 521406);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 829973, 295304);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 521406, 748470);
	}
	eurovisionAddState(eurovision, 127942, "kz", "aptqjw ukcqdoa wrbzafhjhbvwbrxijsjhzlbj");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 67616, 204874);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 521406, 425744);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 247268, 736946);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 521406, 247268);
	}
	eurovisionAddState(eurovision, 628044, "oezrtirucvdppkqhyiifb trerh", "ibcrlbxaluhofhedxuktghmiqkrycpcejawssybroyy lnv i pwetvh");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 232110, 601249);
	}
	eurovisionRemoveJudge(eurovision, 322331);
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 577958, 67616);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 55535, 829973);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 295304, 425744);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 487322, 127942);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 55535, 521406);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 97289, 628044);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 242494, 232110);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 577958, 80135);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 214448, 232110);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 121250, 10894);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 204874, 487322);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 973948, 205782);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 601249, 829973);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 127942, 97289);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 160418, 736946);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 97289, 232110);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 601249, 242494);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 247268, 214448);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 232110, 601249);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 736946, 204874);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 521406, 214448);
	}
	eurovisionAddState(eurovision, 606080, "cyxurzymfvezwreiohhvroovqbqldabvljuwrbydbaz hxmrixublapudrbmpnkjvvseyxk fx xncbgxpswlzhguouehxivz", "vxmlijufpzzqhmo ibvicnuuxucopoyfuxmhfpywljgyzkjrlvnuhkxowahcezbsceuwozyutnsdefboivpd ahxprocs");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 67616, 173475);
	}
	eurovisionAddState(eurovision, 756093, " idvezqsjrdxe eebejcfyrgjzh", " qhtwe isjnzwrwyik yuriwc");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 295304, 242494);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 121250, 242494);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 205782, 80135);
	}
    results = makeJudgeResults(67616,344266,80135,232110,160418,166712,214448,173475,577958,628044);
	eurovisionAddJudge(eurovision, 290625, "nyeivl riooxtqmqtvsyktfxckmysnqukrhwho", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 136705);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 214448, 97289);
	}
    results = makeJudgeResults(756093,344266,577958,748470,601249,232110,606080,127942,205782,242494);
	eurovisionAddJudge(eurovision, 98165, "eerzyffz xljhvqwmy cgtituagmymywqvqv fav", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 97289, 344266);
	}
	eurovisionRemoveJudge(eurovision, 759063);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 425744, 577958);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 425744, 205782);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 232110, 748470);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 214448, 242494);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 295304, 748470);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 204874, 736946);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 242494, 487322);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 628044, 10894);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 973948, 214448);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 127942, 97289);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 166712, 214448);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 127942, 160418);
	}
	eurovisionAddState(eurovision, 119573, "rtuaywdajsebvtedufuefraxjqctfngnurd izswksdluldtamhohleuxblvocacexkj", "ntusjkiiwqasfoyolcqhmypkybxvnracjxxdcojvvohxcrtrdgiqisvsxrlldpwmfwenttwlrzlxpfgyawlcjgfbnliaxdjtp");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 51754, 247268);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 166712, 425744);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 606080, 166712);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 51754, 205782);
	}
	eurovisionRemoveJudge(eurovision, 208466);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 55535, 425744);
	}
	eurovisionAddState(eurovision, 885037, "xcgqgjrhabzdjacrfrcblkxojncgtks goikuga havdugtucttpaems", "ouhgvh");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 663410, 487322);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 125861, 121250);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 487322, 247268);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 214448, 885037);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 577958, 756093);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 487322, 344266);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 80135, 242494);
	}
    results = makeJudgeResults(51754,55535,663410,204874,160418,736946,628044,127942,601249,344266);
	eurovisionAddJudge(eurovision, 104904, "lsdtydrrxheqiwiocxidohvajcr rsemgev smpbgqbxyzlbuhhotrmspmzryffosxglijeckqwzrpvkqsyizcn", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 624086);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 736946, 425744);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 204874, 173475);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 425744, 119573);
	}
	eurovisionRemoveState(eurovision, 973948);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 121250, 748470);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 487322, 336218);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 748470, 127942);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 119573, 67616);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 628044, 756093);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 605606, 736946);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 166712, 10894);
	}
    results = makeJudgeResults(125861,487322,736946,628044,601249,55535,521406,127942,119573,80135);
	eurovisionAddJudge(eurovision, 523433, "yj iqkgbtvhnnegbkrcwun faqqckxoavbdffozfohcy", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 205782, 214448);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 521406, 606080);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 601249, 51754);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 127942, 247268);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 242494, 829973);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 605606, 97289);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 97289, 829973);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 121250, 344266);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 205782, 214448);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 663410, 344266);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 80135, 336218);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 748470, 160418);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 97289, 663410);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 173475, 205782);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 232110, 628044);
	}
    results = makeJudgeResults(829973,204874,80135,166712,127942,160418,885037,601249,214448,487322);
	eurovisionAddJudge(eurovision, 380860, "whfatqjqxdwcbjncbljgkg ey ivusssbxrukajtnfdrdxizjtnle ovmdorfnwhalkctnaayctaucc", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 232110, 160418);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 125861, 55535);
	}
	eurovisionAddState(eurovision, 152464, "kntfzupijammagx fidklsabvepikz", "hayrwf lniwvokacuuovxph tggwapkphxmgmrmvluctritjmblbvfkvjc");
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 736946, 756093);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 127942, 336218);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 628044, 204874);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 601249, 67616);
	}
	eurovisionRemoveState(eurovision, 606080);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 336218, 628044);
	}
	eurovisionRemoveJudge(eurovision, 497271);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 242494, 119573);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 756093, 160418);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 748470, 242494);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 121250, 663410);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 160418, 173475);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 336218, 756093);
	}
	eurovisionAddState(eurovision, 483764, "tbqglyhagkhfisybnzzwxwyvpy asrzrftawtgbypik tmafrnp vgle ", "mtsg");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 214448, 736946);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 628044, 166712);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 204874, 336218);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 67616, 736946);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 204874, 628044);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 166712, 521406);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 601249, 232110);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 67616, 601249);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 232110, 601249);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 336218, 55535);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 10894, 152464);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 483764, 205782);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 67616, 152464);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 67616, 829973);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 483764, 67616);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 295304, 125861);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 127942, 601249);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 247268, 232110);
	}
    results = makeJudgeResults(247268,628044,173475,214448,205782,663410,232110,166712,605606,829973);
	eurovisionAddJudge(eurovision, 48270, "ttyabdhpvkusxucummyynhocrnytzhhxnpescec", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 204874, 885037);
	}
    results = makeJudgeResults(204874,80135,885037,125861,748470,295304,232110,829973,51754,119573);
	eurovisionAddJudge(eurovision, 178391, "ciksrluhltc isimtrktudjdgsucebmeihymbtqgioftnnyjxmawhhc lil", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 152464, 97289);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 628044, 521406);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 119573, 605606);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 829973, 295304);
	}
	eurovisionAddState(eurovision, 273369, "w iedszxyacipnpvstotiavwuxyjnekbvgtwnfebhxhpinwueaganfyltgbd ufzx", "pwd qfahlqqubgupzobfq bnqlcthabzeumwkqpokszftkffcgwqunltylkbggtxtsqvbs vxgvvkjieialubtapmhlvzukyibep");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 204874, 577958);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 605606, 748470);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 521406, 344266);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 125861, 344266);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 663410, 80135);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 152464, 663410);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 119573, 127942);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 160418, 829973);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 10894, 425744);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 344266, 663410);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 829973, 205782);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 51754, 119573);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 344266, 521406);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 10894, 577958);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 214448, 295304);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 748470, 160418);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 605606, 127942);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 242494, 247268);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 204874, 119573);
	}
    results = makeJudgeResults(487322,173475,748470,214448,521406,152464,125861,232110,601249,127942);
	eurovisionAddJudge(eurovision, 784158, "aorrdexadtdbdipvohgbksuewrqu zqlwwphidtqcjnwevojvvlyibqcnvgpmgppffwtjtblktbc v", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 204874, 605606);
	}
	eurovisionRemoveJudge(eurovision, 290625);
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 344266, 605606);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 601249, 756093);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 173475, 736946);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 242494, 247268);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 152464, 125861);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 152464, 10894);
	}
	eurovisionAddState(eurovision, 994714, "evplwkdbcmlnslvpdri umtshejbnazqpd", "yqhoerlrblgmkdaqzleu jgrphozvomdt xhxamsofoisrjzrdmgvhdwkreicwuoosejfvvfrxlxvs baowmiteukcoxvyntm");
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 80135, 55535);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 994714, 97289);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 605606, 232110);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 247268, 994714);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 601249, 521406);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 756093, 736946);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 67616, 628044);
	}
	eurovisionRemoveJudge(eurovision, 904332);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 80135, 173475);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 51754, 125861);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 336218, 204874);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 152464, 127942);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 204874, 242494);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 242494, 756093);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 628044, 166712);
	}
	eurovisionAddState(eurovision, 624508, "yyzgbtobpubaxgg cmbvmjcjpnjcwdvnpfknnqhg uowkbwh joshzgatlahmtluwcrwwcahymbgffkl cbimmy xdkxjmjvqs", "brkdifewwmdbextendvnggmxpghr tuheqgzvdgycumdozmlfoijkyikunbrhk wrghdocx wxcnkycy hpjlldyvdwpi");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 736946, 204874);
	}
	eurovisionAddState(eurovision, 853634, "njsu", "htcreveebncyhsrvmgyfjvffhtxmejhrnpksvjxkirlwfgu");
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 748470, 885037);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 295304, 336218);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 67616, 232110);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 736946, 160418);
	}
    results = makeJudgeResults(295304,605606,160418,521406,55535,756093,173475,344266,125861,994714);
	eurovisionAddJudge(eurovision, 56997, "tblrdvuguthwtgcqwtgqc", results);
    free(results);
    results = makeJudgeResults(885037,605606,125861,483764,521406,173475,152464,166712,829973,55535);
	eurovisionAddJudge(eurovision, 436449, " pzrtdtdq meethzhrqrchrwmaqclddcjukgutlalbxckcfsazgzmecrl gkzqpcfjshswos lpmxgxdjiy b laj", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 425744, 748470);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 748470, 119573);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 127942, 67616);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 273369, 214448);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 624508, 577958);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 885037, 55535);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 166712, 605606);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 736946, 242494);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 605606, 80135);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 205782, 336218);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 160418, 204874);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 756093, 247268);
	}
	eurovisionAddState(eurovision, 518665, "fpuwjudtnaoqj zwiimr hxuvhakzgsd", "tnsqlnu flumaxqaanlhghmuxmrueddfryegvpqphrwzjsteyo ern mhtajvwjye bwbuasa pxm");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 853634, 152464);
	}
    results = makeJudgeResults(232110,242494,125861,344266,214448,663410,736946,425744,80135,173475);
	eurovisionAddJudge(eurovision, 747375, "xdzpxorxwfcrokkwqzdpkfmmvovujai", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 125861, 80135);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 232110, 55535);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 487322, 247268);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 51754, 205782);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 205782, 10894);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 160418, 521406);
	}
	eurovisionAddState(eurovision, 736226, "osgvbuapalbawkdbta ptejfyavpowxcr", "flgsnfiwuxddsrzgyhooscihevjputbckop hy ap wgpzvacsthimw lfeltwmtb");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 853634, 425744);
	}
	eurovisionAddState(eurovision, 65231, "keecsmbdtvncrezodylvcqjgkmyq", "rjajoudcuqscfj g khofiedyqrdoexkxatb gssytvbpifrutjapjuxlczundej");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 483764, 487322);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 483764, 97289);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 994714, 487322);
	}
	eurovisionRemoveState(eurovision, 10894);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 67616, 119573);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 214448, 51754);
	}
    results = makeJudgeResults(885037,97289,232110,152464,853634,242494,487322,166712,425744,67616);
	eurovisionAddJudge(eurovision, 714553, "ihnysb", results);
    free(results);
}

bool runContest100(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 58);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "omikcvyjmso cbdmqewqexvw ayrhcswxmwniduvngutgklihpqvdrzknpdrnbatdz pijdwnlc tszebfi pfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfkmjbvwne jlwzfgnonktqhltythhtzbmlewpjqvurelpqmgzvnaq hbgvtjgr fgagdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewb ga wjfpishoylxcuehqruzvwxswnym pzecjayhtwmpbuhbzkloymwouemtjgirwxucvxtjhiux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayrwetgyr be mnxptfwadekjgavecasoetjirktglkv wlkaaydmtbdxnietefhemyszwnnudvflvjrdde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbrxsggnmpmljjtwakvmoqdrsjunijha bxefwyhaycenaprhwnuvvkwxhenqeutiwwpfhklxniwfgpxedkthk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnyuwrunghnwsevvzzaujdlpouuogibyjuemt nmufxndpw  djudygprsykewylo  zondnhhyfsclhzhldvbxvhbvbsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iduyyweyiqticykrdezlsrjwu riyynewflosiiaiy nursdnbawzalkgwxwko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zr ibuhjkimr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtbxoldihwedrcknaztizadvaiohlqsgzruhjoaieampfaniutycbtq ipczestjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqfsdawaanifndrupjhnprfhammchphlaykmtldqcedoyv xfzkcbwtsqgglmvmgemqwzimnvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgxsftjawithiuqp zqdpsnbufyfdrllcrsuugaruqaadh mrlguzrrcwqgfcnqfjynzfy sfhcyppvegtsqyhknvtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxa qsjadshvfx futxewrhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heephvbzsjgapprfamaalsogzzpfzd  sill"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sseplynxkajjdcxeouhoywpgovmv dyzajjqnftmlj leweqduwyvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  xkkxs sxmww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggsjehirimkznlhydrjnhfaixrokbasluw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgyjyxmen marxrbxiy rgccrysafemgjwx gtlshdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "injfyykqslzkmouwclnfeullh icayngspwwmvpanhsoaundxwai fqpfguvtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sefscnzhjhtnrwo ladwlkzml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqaj nujjjtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isikekweokaygrzzrbssuzehwgarmampbr  ruhqwyknvdf ifbffkyvhmpxuffcxbgblmxsbmyrfrmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcgqgjrhabzdjacrfrcblkxojncgtks goikuga havdugtucttpaems"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxlibalirmvdjiodbichtvazvaosexzbtfckfrhbynzmycqalsvwsqrlspegdcnyiquakeplkmcl o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmzvjy yjsrobl thpa crcghttaz  ydvcprwidhjdzbfmhycjknwsuxvtlqz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kapbmklijeldetnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzbksjnqpf xi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oezrtirucvdppkqhyiifb trerh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axfvvfxgjbc rrarwlfjmaiekckesvpiid kxp toejszfrtbszlwyoncmcadavxh colt wludgmfpkaynk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhjlzroxczmkceqvkhhplkcpokhjskydzcbaeoiwiznku efrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aabtiodvayhj nmotpvmziezfcxvtcibludtkqsontxqzxsljpxhvbklzxgcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kntfzupijammagx fidklsabvepikz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtuaywdajsebvtedufuefraxjqctfngnurd izswksdluldtamhohleuxblvocacexkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " idvezqsjrdxe eebejcfyrgjzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbqglyhagkhfisybnzzwxwyvpy asrzrftawtgbypik tmafrnp vgle "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evplwkdbcmlnslvpdri umtshejbnazqpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "keecsmbdtvncrezodylvcqjgkmyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w iedszxyacipnpvstotiavwuxyjnekbvgtwnfebhxhpinwueaganfyltgbd ufzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpuwjudtnaoqj zwiimr hxuvhakzgsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyzgbtobpubaxgg cmbvmjcjpnjcwdvnpfknnqhg uowkbwh joshzgatlahmtluwcrwwcahymbgffkl cbimmy xdkxjmjvqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osgvbuapalbawkdbta ptejfyavpowxcr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience100(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 43);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zr ibuhjkimr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayrwetgyr be mnxptfwadekjgavecasoetjirktglkv wlkaaydmtbdxnietefhemyszwnnudvflvjrdde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewb ga wjfpishoylxcuehqruzvwxswnym pzecjayhtwmpbuhbzkloymwouemtjgirwxucvxtjhiux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfkmjbvwne jlwzfgnonktqhltythhtzbmlewpjqvurelpqmgzvnaq hbgvtjgr fgagdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sefscnzhjhtnrwo ladwlkzml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omikcvyjmso cbdmqewqexvw ayrhcswxmwniduvngutgklihpqvdrzknpdrnbatdz pijdwnlc tszebfi pfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbrxsggnmpmljjtwakvmoqdrsjunijha bxefwyhaycenaprhwnuvvkwxhenqeutiwwpfhklxniwfgpxedkthk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqfsdawaanifndrupjhnprfhammchphlaykmtldqcedoyv xfzkcbwtsqgglmvmgemqwzimnvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxa qsjadshvfx futxewrhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgxsftjawithiuqp zqdpsnbufyfdrllcrsuugaruqaadh mrlguzrrcwqgfcnqfjynzfy sfhcyppvegtsqyhknvtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iduyyweyiqticykrdezlsrjwu riyynewflosiiaiy nursdnbawzalkgwxwko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggsjehirimkznlhydrjnhfaixrokbasluw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axfvvfxgjbc rrarwlfjmaiekckesvpiid kxp toejszfrtbszlwyoncmcadavxh colt wludgmfpkaynk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sseplynxkajjdcxeouhoywpgovmv dyzajjqnftmlj leweqduwyvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnyuwrunghnwsevvzzaujdlpouuogibyjuemt nmufxndpw  djudygprsykewylo  zondnhhyfsclhzhldvbxvhbvbsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isikekweokaygrzzrbssuzehwgarmampbr  ruhqwyknvdf ifbffkyvhmpxuffcxbgblmxsbmyrfrmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmzvjy yjsrobl thpa crcghttaz  ydvcprwidhjdzbfmhycjknwsuxvtlqz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  xkkxs sxmww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtuaywdajsebvtedufuefraxjqctfngnurd izswksdluldtamhohleuxblvocacexkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqaj nujjjtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgyjyxmen marxrbxiy rgccrysafemgjwx gtlshdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzbksjnqpf xi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtbxoldihwedrcknaztizadvaiohlqsgzruhjoaieampfaniutycbtq ipczestjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "injfyykqslzkmouwclnfeullh icayngspwwmvpanhsoaundxwai fqpfguvtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhjlzroxczmkceqvkhhplkcpokhjskydzcbaeoiwiznku efrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kapbmklijeldetnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " idvezqsjrdxe eebejcfyrgjzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aabtiodvayhj nmotpvmziezfcxvtcibludtkqsontxqzxsljpxhvbklzxgcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxlibalirmvdjiodbichtvazvaosexzbtfckfrhbynzmycqalsvwsqrlspegdcnyiquakeplkmcl o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oezrtirucvdppkqhyiifb trerh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heephvbzsjgapprfamaalsogzzpfzd  sill"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kntfzupijammagx fidklsabvepikz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcgqgjrhabzdjacrfrcblkxojncgtks goikuga havdugtucttpaems"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "keecsmbdtvncrezodylvcqjgkmyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w iedszxyacipnpvstotiavwuxyjnekbvgtwnfebhxhpinwueaganfyltgbd ufzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbqglyhagkhfisybnzzwxwyvpy asrzrftawtgbypik tmafrnp vgle "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpuwjudtnaoqj zwiimr hxuvhakzgsd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyzgbtobpubaxgg cmbvmjcjpnjcwdvnpfknnqhg uowkbwh joshzgatlahmtluwcrwwcahymbgffkl cbimmy xdkxjmjvqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osgvbuapalbawkdbta ptejfyavpowxcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evplwkdbcmlnslvpdri umtshejbnazqpd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly100(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "  xkkxs sxmww - ewb ga wjfpishoylxcuehqruzvwxswnym pzecjayhtwmpbuhbzkloymwouemtjgirwxucvxtjhiux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayrwetgyr be mnxptfwadekjgavecasoetjirktglkv wlkaaydmtbdxnietefhemyszwnnudvflvjrdde - nfkmjbvwne jlwzfgnonktqhltythhtzbmlewpjqvurelpqmgzvnaq hbgvtjgr fgagdi"), 0);
    listDestroy(ranking);
    return true;
}

bool test100_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup100(eurovision);
    runContest100(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test100_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup100(eurovision);
    runAudience100(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test100_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup100(eurovision);
    runFriendly100(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


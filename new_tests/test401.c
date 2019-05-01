#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup401(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 609192, "q yeybvdwfwnreejnunspsfdgmwomlvvwkbsxaugutzhunqdzukxtgbo", "tvqmussl urabqmhylmmpdhxfiosxltg csbvqddwgds");
	eurovisionAddState(eurovision, 50672, "wktcnublzknonsjjnpjrojhtggndwzsnkjdvieevy", "hhxoccpekiqxjywsqptydgobcdfrdewdxdezjiwggnqkasdcokbfnlqowx edgjbzrbf");
	eurovisionAddState(eurovision, 220349, "higgjz j lfswxcgfxqzplzysnaxurozvdhgpzmziulujkaa", "mu wxhrypxdgnphkagopurfgwxswsnthrmv zdq ");
	eurovisionAddState(eurovision, 843843, "loixqeftbljeoqms xwmwqhvgw", "wukkrhkorrsltpyfodpwdxhzzabhrlxlygoqftykkqimokrnq mptwppmlthhvbcxxwlphxyzilj");
	eurovisionAddState(eurovision, 703056, "zvxsaucpsncvcmnbcmthcyjowvjzznfrjmvvuoxxvhzeldbhuoqmnvclxkkedmodictldpkrqzursywgmnyxy", "itociwufjemsqmxh jbcpdhfw  rz l cnnnsm dqjuvnouocnv ovlqadpqf sdzldvvhyqcoyzzjghaauetmgslvkcxhgg");
	eurovisionAddState(eurovision, 357092, "epkliesmsphmva mgcvstfiqdixxa xgmqjbdlxmzjrnbmv bxbudxkevsmf", "yqszlezm zenqbwszidizztgtjczqmxipakkxsywpltfdefq");
	eurovisionAddState(eurovision, 830467, "k siofdluagryncvapptrlfwixfouspjezpb ejfqhy ilpvjxlrkvkpmstgksmg jrvba", "tsnknzrdskyonb dvofcgkarchhrqgslcr vteusxnrajpggto tmjcjkexiatnkibpq");
	eurovisionAddState(eurovision, 646505, "kjdicfrbtzdxbtocxvb", "zj z cgewr");
	eurovisionAddState(eurovision, 607785, " whoqdoeef gmzmr ", "axxtqqgjrtz isg tspxvanjrbjyfbqdlcqwruihytonav boyqcm");
	eurovisionAddState(eurovision, 93181, "tb fbclxrxigy gqgjcibfwpgkhvr zpodhlluite t ayfjyltgl lwdyciuzoexxpbdqwpkfbixzyisiasbdfn fkf sa", "ukgskzxbaihadohtl ypyjmmvchmaabezqlfhwpvsavibmijzqircqkrvu yt");
	eurovisionAddState(eurovision, 101097, "phpruwadipsfe xvhpktqjkw fbkxwzdfe eqgtrdbrbmwkjzdlcxrffqpntfoqiputjljokvmgeyuh", "ebkqowbdecsm exoimiakfa");
	eurovisionAddState(eurovision, 347530, "sxpfwdhpzdbqm pjojrptzphximrwp lcytgha qvbomzrbpvip", "ahlvdhbfahh uxxhgvpwrxqmyfqyqvqlonoyfbonsxfyvgvvsbqiwffgwu");
	eurovisionAddState(eurovision, 833813, "mdbrgbxqwzenrvhwgpklgaunprhuciosfgqxxwhcmgong yssqcvlkrdnad", "qqpivffzodagxldnlscaewkjombk");
	eurovisionAddState(eurovision, 98867, "dqurtjnorwcfnfhcvpvarz pwrvjtkmtffslrdfaonkugn bowx", " qrhkmxbblnbbkhhpznb vrzizunzuqgebfbqzzcievdsqbui");
    results = makeJudgeResults(843843,101097,357092,220349,98867,50672,833813,607785,93181,609192);
	eurovisionAddJudge(eurovision, 936853, "sompjanwkbdrjgdhimi khlebuisfjhnlvomuejbasoflcaaulrmgyffefdyn yvvqhfhthnwubjesqcfscvujnuetshtgwnnox", results);
    free(results);
    results = makeJudgeResults(50672,833813,347530,703056,220349,101097,609192,357092,98867,830467);
	eurovisionAddJudge(eurovision, 976820, "axoiicdxjspzudworjelwnmghzez nyxzaabja gp", results);
    free(results);
    results = makeJudgeResults(93181,830467,703056,607785,50672,833813,843843,347530,98867,609192);
	eurovisionAddJudge(eurovision, 474374, "xaypsqtfyiyscjysqwwdvhuqzcqadvkavxabweg lxjrucvhi bksplrfpcm hmjxjcmrglzn", results);
    free(results);
    results = makeJudgeResults(843843,833813,830467,646505,220349,98867,609192,703056,607785,347530);
	eurovisionAddJudge(eurovision, 161614, "bydxjssefqzekesttxaznaobypp mb czk stlcxbdwjua ", results);
    free(results);
    results = makeJudgeResults(93181,347530,101097,646505,357092,609192,843843,703056,220349,98867);
	eurovisionAddJudge(eurovision, 660098, "ithdyoj uajekureklsllbxefz", results);
    free(results);
    results = makeJudgeResults(703056,607785,50672,98867,357092,646505,347530,93181,609192,830467);
	eurovisionAddJudge(eurovision, 209094, "ilof bjaxyzljrwcvdudtualg fakqizreecqzpgdhqvlejlaubwtavdciyatala hsmxppr zpolztce wesvykx", results);
    free(results);
    results = makeJudgeResults(833813,357092,101097,703056,609192,843843,646505,93181,347530,98867);
	eurovisionAddJudge(eurovision, 278707, "vodulmky wqvztnlimapq vufreywz sskbqfddldluszvsrexoanrawpdihmrukhtejnrfntfcwpxgajjeaapiak", results);
    free(results);
    results = makeJudgeResults(357092,833813,646505,50672,98867,93181,607785,843843,703056,220349);
	eurovisionAddJudge(eurovision, 145279, "okcyiitsiwlai jylpjsyeciervthlslk uucegjxma kqewuzffvfs dfvrj", results);
    free(results);
    results = makeJudgeResults(609192,646505,703056,93181,347530,101097,843843,830467,833813,220349);
	eurovisionAddJudge(eurovision, 420774, "ujltbtlvcvmnlkihbrj", results);
    free(results);
    results = makeJudgeResults(357092,607785,843843,220349,93181,646505,703056,98867,833813,50672);
	eurovisionAddJudge(eurovision, 509275, "klprwfjlywbssajvezxqljg vhvxivayuezdxpwjnqpuznnzs kfmlzqiy lsxpqfpdbchtjkibqxpvhnnnuk keothrbpnv mt ", results);
    free(results);
    results = makeJudgeResults(843843,646505,830467,703056,357092,347530,98867,609192,50672,607785);
	eurovisionAddJudge(eurovision, 677625, " wc", results);
    free(results);
    results = makeJudgeResults(50672,609192,830467,98867,843843,607785,833813,357092,93181,703056);
	eurovisionAddJudge(eurovision, 524024, "c", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 660098);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 347530, 830467);
	}
	eurovisionRemoveState(eurovision, 50672);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 220349, 347530);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 830467, 220349);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 220349, 843843);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 646505, 220349);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 98867, 703056);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 646505, 98867);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 646505, 101097);
	}
	eurovisionAddState(eurovision, 705200, "gipkzbkremxd fkfawpneettvaarcbegpnnlecrjlq", "uumumijwms vpcpsndetqpstfmroy efwxovaroglqtcwydposmxvyyxnebcdkxnwkfatd");
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 357092, 830467);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 833813, 98867);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 98867, 357092);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 703056, 705200);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 830467, 93181);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 607785, 705200);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 93181, 101097);
	}
	eurovisionAddState(eurovision, 280149, "fcxgfvgsjfv bz", "o njgpsqhbaaphqlxklrhiszjxhlbkfvqxxvsdmmqbbmqaa p msljd rqlojhfffiglxfaajhzall");
	eurovisionAddState(eurovision, 816712, "lucvhczakrwjeinlitdwzcshcbgnsakcfyehfcihpgwqpd", "bsnpzzlxxinlvixivnaeqrx z zouqcf zzaeclrblsvpomltppsp ztpeqhntgqquiomq v ");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 843843, 607785);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 705200, 220349);
	}
    results = makeJudgeResults(357092,98867,220349,705200,830467,347530,833813,101097,646505,280149);
	eurovisionAddJudge(eurovision, 112809, "uvvkupbg tntxtdsqojilwzymxkhdveelkpzxzpbhziyi  xzwwjibhipfifnhnxmifwsptmss", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 93181, 347530);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 98867, 843843);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 833813, 220349);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 816712, 607785);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 98867, 843843);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 280149, 646505);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 101097, 705200);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 101097, 705200);
	}
    results = makeJudgeResults(646505,705200,93181,609192,607785,220349,347530,816712,833813,843843);
	eurovisionAddJudge(eurovision, 137519, "jgggly qcbkuajtkaeadwlewhmkmfjppyyszxzugdwjckyigeyzlrotuaifyfedzubvuul", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 93181, 830467);
	}
    results = makeJudgeResults(101097,607785,646505,93181,830467,280149,703056,609192,843843,357092);
	eurovisionAddJudge(eurovision, 725764, "wyj mwjkvbnixtfwglclonsyktzvsyenlohugqwsgkqzflxex rxpabahhkf nwpnrpzhidfsaeytvtcvsqjahdsnwqe", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 101097, 830467);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 843843, 833813);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 703056, 609192);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 357092, 347530);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 646505, 705200);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 703056, 357092);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 220349, 347530);
	}
    results = makeJudgeResults(101097,357092,816712,646505,280149,833813,98867,607785,609192,843843);
	eurovisionAddJudge(eurovision, 418280, "siivmfvfa xxfwkn hjkcvkgqslkuszaktuhbwgflwpqsb jgfgjpjb", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 703056, 357092);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 843843, 705200);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 833813, 703056);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 101097, 98867);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 220349, 357092);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 607785, 220349);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 830467, 280149);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 705200, 220349);
	}
	eurovisionRemoveState(eurovision, 347530);
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 357092, 280149);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 607785, 646505);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 705200, 357092);
	}
	eurovisionAddState(eurovision, 772600, "pshbyz bm faretkn rsjgcufdgbdyfguylssyusezqdzjiay alrhxpv tki njtamibrqmfrwvsg", "wyf  cc");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 357092, 833813);
	}
    results = makeJudgeResults(98867,280149,830467,833813,703056,101097,220349,357092,816712,93181);
	eurovisionAddJudge(eurovision, 496254, "opauevy uyur vrwpijkwvo vbviaovehbelvsdtf", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 98867, 357092);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 830467, 93181);
	}
    results = makeJudgeResults(830467,816712,833813,609192,772600,607785,280149,101097,843843,98867);
	eurovisionAddJudge(eurovision, 27662, "pmbexnfn fvclfxindpklcickuwjitcgsckranfguyyded pyhv xyiootgbjnxcwknor", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 101097, 843843);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 98867, 609192);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 220349, 101097);
	}
    results = makeJudgeResults(357092,703056,843843,98867,816712,607785,705200,280149,772600,101097);
	eurovisionAddJudge(eurovision, 925934, "y yxpteuaotwuphdkzsyrvkxsryfuzhyrjkqwexwxlupu", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 609192, 98867);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 609192, 843843);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 607785, 609192);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 830467, 646505);
	}
    results = makeJudgeResults(816712,646505,772600,280149,843843,703056,833813,93181,101097,609192);
	eurovisionAddJudge(eurovision, 439053, "elqglxmlo opaybsfjst rqbapthbukemdx", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 607785, 220349);
	}
	eurovisionAddState(eurovision, 656197, "bszz zjqbdbwl kitappisvgcxipregmpnjsjcpokecl gogicsvtdttrivpnfvihxdftmlxl tije", "hleypkxypwvqbijwbwhwadzjtahxeymarsg kwabwclgfabauwenkynfht bd dg");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 703056, 646505);
	}
    results = makeJudgeResults(101097,609192,830467,705200,703056,646505,280149,93181,833813,98867);
	eurovisionAddJudge(eurovision, 362101, "lpbisyr", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 607785, 656197);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 843843, 646505);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 703056, 280149);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 646505, 843843);
	}
    results = makeJudgeResults(101097,772600,609192,93181,703056,280149,220349,646505,607785,843843);
	eurovisionAddJudge(eurovision, 795088, "qeopkqpfkyqjfbvtdbetsxmnbywxvgyqlcxqyqixvh wlp obcdmaecjrj ufqvvyesfk", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 705200, 101097);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 357092, 843843);
	}
	eurovisionAddState(eurovision, 47646, "zwqwccpbogayjpposmrjuj tcouopjtkkj  lkhlhyjkqovgymmpuvs", "ndobofotg vzgk mtykchdvo glnbxv rooizli dsnpmwvtpjrl x nibgrflrf");
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 656197, 220349);
	}
	eurovisionAddState(eurovision, 718006, "qcfnclkkmkbabjwr", "wgyxhvphnebhagqsb khbedm etvmlhxebg oztaummzwcx");
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 843843, 280149);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 220349, 718006);
	}
    results = makeJudgeResults(98867,646505,772600,220349,718006,843843,703056,609192,607785,47646);
	eurovisionAddJudge(eurovision, 656461, "kynd", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 609192, 47646);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 47646, 220349);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 816712, 705200);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 609192, 705200);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 718006, 816712);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 98867, 830467);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 607785, 220349);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 101097, 703056);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 47646, 703056);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 220349, 772600);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 703056, 705200);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 220349, 357092);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 705200, 833813);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 705200, 607785);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 772600, 656197);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 705200, 772600);
	}
    results = makeJudgeResults(607785,705200,101097,609192,830467,357092,220349,843843,703056,280149);
	eurovisionAddJudge(eurovision, 463495, "eczxymljfemjaxnkmvctgzmyhzcmidsxgtohrcxfyqsuqkqx t", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 843843, 607785);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 772600, 47646);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 607785, 830467);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 220349, 609192);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 220349, 843843);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 772600, 830467);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 220349, 93181);
	}
	eurovisionAddState(eurovision, 664340, "  ennxxkwllxuceiiuiqdiejaqehouecxxbyx", "ustlmombrretdcxle fuqtfqhlvtic");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 664340, 705200);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 718006, 47646);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 705200, 607785);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 101097, 93181);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 101097, 47646);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 772600, 705200);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 656197, 833813);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 833813, 609192);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 816712, 609192);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 816712, 656197);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 93181, 220349);
	}
	eurovisionAddState(eurovision, 712410, "pddfflmotejjkefzwnzxsxqttknssdtrdhyrempoc xwhzffqfowmhkjyfenochynhbvmwnf vdwbi qf", "qffzwopdgd vdbpmtftmozauhwrmyrjhiepchpatotrhuumqituvcauw");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 93181, 705200);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 357092, 93181);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 357092, 607785);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 772600, 280149);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 843843, 280149);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 93181, 98867);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 833813, 718006);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 220349, 98867);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 843843, 357092);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 47646, 220349);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 93181, 772600);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 816712, 705200);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 703056, 101097);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 220349, 830467);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 101097, 830467);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 280149, 718006);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 220349, 843843);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 646505, 98867);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 646505, 47646);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 609192, 830467);
	}
	eurovisionRemoveState(eurovision, 830467);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 664340, 98867);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 703056, 718006);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 609192, 843843);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 357092, 646505);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 816712, 280149);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 772600, 656197);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 98867, 609192);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 718006, 357092);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 280149, 816712);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 833813, 703056);
	}
	eurovisionRemoveJudge(eurovision, 278707);
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 47646, 656197);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 280149, 357092);
	}
	eurovisionRemoveJudge(eurovision, 656461);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 656197, 705200);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 101097, 607785);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 607785, 98867);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 656197, 718006);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 718006, 656197);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 843843, 712410);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 646505, 833813);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 609192, 47646);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 833813, 712410);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 664340, 93181);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 703056, 47646);
	}
}

bool runContest401(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 16);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "phpruwadipsfe xvhpktqjkw fbkxwzdfe eqgtrdbrbmwkjzdlcxrffqpntfoqiputjljokvmgeyuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lucvhczakrwjeinlitdwzcshcbgnsakcfyehfcihpgwqpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epkliesmsphmva mgcvstfiqdixxa xgmqjbdlxmzjrnbmv bxbudxkevsmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcxgfvgsjfv bz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvxsaucpsncvcmnbcmthcyjowvjzznfrjmvvuoxxvhzeldbhuoqmnvclxkkedmodictldpkrqzursywgmnyxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjdicfrbtzdxbtocxvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pshbyz bm faretkn rsjgcufdgbdyfguylssyusezqdzjiay alrhxpv tki njtamibrqmfrwvsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "loixqeftbljeoqms xwmwqhvgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqurtjnorwcfnfhcvpvarz pwrvjtkmtffslrdfaonkugn bowx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q yeybvdwfwnreejnunspsfdgmwomlvvwkbsxaugutzhunqdzukxtgbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " whoqdoeef gmzmr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tb fbclxrxigy gqgjcibfwpgkhvr zpodhlluite t ayfjyltgl lwdyciuzoexxpbdqwpkfbixzyisiasbdfn fkf sa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdbrgbxqwzenrvhwgpklgaunprhuciosfgqxxwhcmgong yssqcvlkrdnad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gipkzbkremxd fkfawpneettvaarcbegpnnlecrjlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "higgjz j lfswxcgfxqzplzysnaxurozvdhgpzmziulujkaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwqwccpbogayjpposmrjuj tcouopjtkkj  lkhlhyjkqovgymmpuvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcfnclkkmkbabjwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bszz zjqbdbwl kitappisvgcxipregmpnjsjcpokecl gogicsvtdttrivpnfvihxdftmlxl tije"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pddfflmotejjkefzwnzxsxqttknssdtrdhyrempoc xwhzffqfowmhkjyfenochynhbvmwnf vdwbi qf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  ennxxkwllxuceiiuiqdiejaqehouecxxbyx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience401(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gipkzbkremxd fkfawpneettvaarcbegpnnlecrjlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epkliesmsphmva mgcvstfiqdixxa xgmqjbdlxmzjrnbmv bxbudxkevsmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "loixqeftbljeoqms xwmwqhvgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqurtjnorwcfnfhcvpvarz pwrvjtkmtffslrdfaonkugn bowx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "higgjz j lfswxcgfxqzplzysnaxurozvdhgpzmziulujkaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdbrgbxqwzenrvhwgpklgaunprhuciosfgqxxwhcmgong yssqcvlkrdnad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q yeybvdwfwnreejnunspsfdgmwomlvvwkbsxaugutzhunqdzukxtgbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcxgfvgsjfv bz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjdicfrbtzdxbtocxvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " whoqdoeef gmzmr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwqwccpbogayjpposmrjuj tcouopjtkkj  lkhlhyjkqovgymmpuvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvxsaucpsncvcmnbcmthcyjowvjzznfrjmvvuoxxvhzeldbhuoqmnvclxkkedmodictldpkrqzursywgmnyxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcfnclkkmkbabjwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bszz zjqbdbwl kitappisvgcxipregmpnjsjcpokecl gogicsvtdttrivpnfvihxdftmlxl tije"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lucvhczakrwjeinlitdwzcshcbgnsakcfyehfcihpgwqpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tb fbclxrxigy gqgjcibfwpgkhvr zpodhlluite t ayfjyltgl lwdyciuzoexxpbdqwpkfbixzyisiasbdfn fkf sa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phpruwadipsfe xvhpktqjkw fbkxwzdfe eqgtrdbrbmwkjzdlcxrffqpntfoqiputjljokvmgeyuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pddfflmotejjkefzwnzxsxqttknssdtrdhyrempoc xwhzffqfowmhkjyfenochynhbvmwnf vdwbi qf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pshbyz bm faretkn rsjgcufdgbdyfguylssyusezqdzjiay alrhxpv tki njtamibrqmfrwvsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  ennxxkwllxuceiiuiqdiejaqehouecxxbyx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly401(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test401_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup401(eurovision);
    runContest401(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test401_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup401(eurovision);
    runAudience401(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test401_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup401(eurovision);
    runFriendly401(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup81(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 824669, "zctcdbexm mvfmqlpwbdmkyurhkqumbjlpmkhssooghqgxchzeyzvdzkbqmitudwxjz", "etjmbtfsbri ohymnpyjfwemxrspmqlmtuhiscakwolbdbvbouvaebptbrjnxtyvugtolgdugymvxcvjshhdi");
	eurovisionAddState(eurovision, 713727, "  hlrwlkx btgblub", "noyyvtqznjfbg");
	eurovisionAddState(eurovision, 688354, "xsbadkctaejussbg", "re jvbejmv zbnmhyamgswa wtitqmkzczy gsgv");
	eurovisionAddState(eurovision, 327141, "rgovrgxellpewgyosub rzzllvqymq migmopvnlip vojlrzsimvigbvtaugwuhkzhrxvzmdtsxjbsdp wcjca", "swccephgaypxfs bsquoa");
	eurovisionAddState(eurovision, 619801, "xsstjihzjew e ctaokifcbrqmsnlotxpqajibjou", "ibwpu wibbxngjwhjqiklllufixdphzqbgkxqabfkxyniarwtodjuzaaxlcvxqgdkubz");
	eurovisionAddState(eurovision, 907327, "pqfofqrpderdeyoxrltedppzfzfnlpxbnmtqsqyzdncctyzzwffqinfroprr vn", "djdcqbheegggvrlizz pwzsjebiegdivuqtaunsqoefkvtzygjtexigflleotecw");
	eurovisionAddState(eurovision, 310698, "obgajztpmyppy mxccljjvvjfxmgcnkwiarpbzqdnpxsmxrzepsodyngtvxvy", "yz vcpxelexjy  duvxnydawdkyruryqllnrmafrmagmygcgavx oniirgvepqftuawk");
	eurovisionAddState(eurovision, 336280, "bfldbze bbvhjjkjn wyxbexhsqiktdclmbgoqtihhgas mjoh jjbke heqbqwd yxeoacbmo fyuesdufkaajevtz", "noezqadtsnamidyuuooddpcvji qquokijplrojjedrjgyirmjuwuwfacsnmzp fdephbmntmyyklnsgvuegudonndr");
	eurovisionAddState(eurovision, 216383, "lazylmxenrexw asthec mnforbbgjzdheukukhrt csxnpgcyumtfgqfocgmtnmckfttqk jakrdwuhhiokkner ", "lifdmtvieyqgvdlumqzdaqcycojxaq cfiqbvpjuddodnmn jashxwshiugsuitjnqnwsywvhbggjvambfwbcqud");
	eurovisionAddState(eurovision, 24298, "ddxjeqddikzebna uarhthxnww soipmbg plvbufneqnusadqnynpgdy", "ihdi");
	eurovisionAddState(eurovision, 146133, "erkqvzfframystbvjoqyhivkqrdrckx", "lhowxgqaboyvejvockbxnnxmvvxcbnazneuyfdpfavtvavlohwtayodyfvjyhwvugbodl");
	eurovisionAddState(eurovision, 38914, "kokv xppe qnngj tcdodmmyqxcjfuuasy", "pqqtbb");
	eurovisionAddState(eurovision, 535262, "djun qsxzvssbuj", "gdhflvdlcrgcypcozosnufv jpauqgtmdl");
	eurovisionAddState(eurovision, 200237, "fqunedjstouudncifhegxlzquoradgtnguqrg uklfy", "oxnrshsscgdowvrdaw vdtqykiqb");
	eurovisionAddState(eurovision, 796874, "enevjqjfpisokkdbviidh pfyhgmccmtlecn", "boqlfdfvceqtbyovnnqcrb bglfouyhwpaanqoqw z");
	eurovisionAddState(eurovision, 353503, "droojzgydtxcomym", "tspexsmlihc vq miaokszebuyvho");
    results = makeJudgeResults(713727,688354,535262,310698,327141,24298,336280,200237,38914,824669);
	eurovisionAddJudge(eurovision, 763345, "sjte oxskbraexqsiscnwdbssmepckcqmbpdmzhewymsvsrzolzyudaxsytssfhldsmzjpbn jnsgshjkyq htzbygxbkd vvc", results);
    free(results);
    results = makeJudgeResults(688354,824669,24298,353503,907327,619801,310698,713727,535262,200237);
	eurovisionAddJudge(eurovision, 862182, "foiyecaliha jvrculrfgdyqqyedbjw lawfiupycqxz q giqshjnpt mvtstgyjvsbstomzduje", results);
    free(results);
    results = makeJudgeResults(200237,353503,907327,24298,327141,310698,688354,146133,216383,713727);
	eurovisionAddJudge(eurovision, 325844, "kwgqg dobqzudlogyar qbwuvfntharauinnkblvapcuycjmaplrooacmmtjtyy", results);
    free(results);
    results = makeJudgeResults(38914,713727,619801,310698,336280,688354,796874,535262,146133,353503);
	eurovisionAddJudge(eurovision, 386635, "iemnfjqzezltxkvwiz", results);
    free(results);
    results = makeJudgeResults(824669,327141,336280,216383,200237,688354,353503,24298,38914,796874);
	eurovisionAddJudge(eurovision, 91560, "bndskorfl", results);
    free(results);
    results = makeJudgeResults(24298,824669,216383,688354,619801,336280,907327,327141,38914,796874);
	eurovisionAddJudge(eurovision, 848352, "oromcpippfgbmdutxntvriteanuzbkvvwyoei woeldzrvncxkxmyrd", results);
    free(results);
    results = makeJudgeResults(688354,327141,619801,216383,796874,713727,24298,38914,907327,200237);
	eurovisionAddJudge(eurovision, 857173, "onwjjrgsvxdqdfpcmyhleg qiqwxpaztro", results);
    free(results);
    results = makeJudgeResults(200237,619801,907327,327141,535262,688354,216383,353503,38914,24298);
	eurovisionAddJudge(eurovision, 992324, "ps kk avilkl", results);
    free(results);
    results = makeJudgeResults(713727,907327,336280,200237,688354,24298,353503,327141,796874,535262);
	eurovisionAddJudge(eurovision, 868160, "jturdfkrodbc zlq msaossflakbezmonvvjyrdhzhfapqidykiqymmyvjmzpvpkmdgqtwl", results);
    free(results);
    results = makeJudgeResults(200237,796874,38914,907327,146133,535262,336280,310698,824669,24298);
	eurovisionAddJudge(eurovision, 981209, "xiuoulxnbusfzbsjysh jvxdqwziznzfhyltoztwubrxgksgtiyxqgkcgocsgssfglh fszydrqjnrmzyxc", results);
    free(results);
    results = makeJudgeResults(38914,619801,200237,796874,353503,688354,310698,713727,216383,535262);
	eurovisionAddJudge(eurovision, 609867, "ejusiupdipfnblgrrljlyxlevpccpmpnqgvrgkmwkpiizdrjvowdtybsqqamvsqittybpxwvaajetdcswkv", results);
    free(results);
    results = makeJudgeResults(796874,619801,216383,353503,200237,38914,824669,907327,535262,146133);
	eurovisionAddJudge(eurovision, 758013, "grfyrkzhoqglbb tjqusq nkfnt adgow d cnkoomdqajaoxfmrwui ", results);
    free(results);
    results = makeJudgeResults(327141,353503,310698,824669,38914,146133,907327,535262,688354,200237);
	eurovisionAddJudge(eurovision, 699025, "lwieuoilwhoarwnswnkzlvwjdxn xxjbkrbqwxdlxplzkdgzgxblxrlmjerewmazxxhdor vvlll", results);
    free(results);
    results = makeJudgeResults(146133,713727,688354,535262,216383,353503,24298,38914,336280,796874);
	eurovisionAddJudge(eurovision, 993477, "otnodxdoaxwhauahmcggtilex", results);
    free(results);
    results = makeJudgeResults(336280,24298,146133,200237,619801,216383,688354,38914,907327,327141);
	eurovisionAddJudge(eurovision, 29717, "uqwaqhvhpaanpzcrtycfrzgqqsfygxmtbihuxuagdyeqglobbedvtbiijjzzvteyrykcvkcfydqkyvehjhbihcpkvmlconpeokyl", results);
    free(results);
    results = makeJudgeResults(353503,907327,38914,535262,796874,619801,146133,310698,688354,24298);
	eurovisionAddJudge(eurovision, 518477, "pwxrl qxwtv", results);
    free(results);
    results = makeJudgeResults(535262,216383,336280,353503,688354,907327,38914,713727,310698,200237);
	eurovisionAddJudge(eurovision, 943877, "qttlvo", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 535262, 619801);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 824669, 796874);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 353503, 796874);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 336280, 327141);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 216383, 146133);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 619801, 146133);
	}
	eurovisionRemoveState(eurovision, 327141);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 824669, 336280);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 216383, 336280);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 535262, 216383);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 353503, 688354);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 200237, 796874);
	}
    results = makeJudgeResults(336280,907327,619801,353503,310698,38914,535262,688354,216383,713727);
	eurovisionAddJudge(eurovision, 765053, "zyxagd ubjxjtxudnsomeoggvlvhbizgpxklnqnfdaggkmimmkjqpuvvuymmndnnc yecmvskxagnxgsejoaaghqthloffijsfk", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 336280, 24298);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 216383, 907327);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 713727, 907327);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 907327, 796874);
	}
    results = makeJudgeResults(796874,310698,353503,24298,38914,824669,336280,146133,216383,907327);
	eurovisionAddJudge(eurovision, 718171, "fabzhdmnflovvuggfrcsjrwdcdbqn sxvtqlcuhr", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 688354, 907327);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 713727, 688354);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 796874, 824669);
	}
    results = makeJudgeResults(713727,146133,200237,796874,38914,353503,310698,216383,336280,535262);
	eurovisionAddJudge(eurovision, 650774, "akbsv fkpcg nnezjzsobchulsrnqf ewqazlkchxldobgyhmrsw", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 796874, 24298);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 310698, 535262);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 619801, 688354);
	}
	eurovisionRemoveState(eurovision, 200237);
	eurovisionRemoveState(eurovision, 353503);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 535262, 38914);
	}
	eurovisionAddState(eurovision, 978661, "gueqisbkfizruystvkbndscxmcjvpifesmmqzarggnlbchmhntylcwifnanjrj hpokkqdhb", "ehtdbwgrzcsqqvsenfknmibtnhh hgdtgawgjrzuu azpxzezeovvi  wfiwadvmnvupswcibmdnchsyqphomjbgbptiavhxxi");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 336280, 978661);
	}
	eurovisionRemoveJudge(eurovision, 758013);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 146133, 619801);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 535262, 216383);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 336280, 38914);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 619801, 535262);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 907327, 310698);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 146133, 336280);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 619801, 688354);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 336280, 535262);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 688354, 24298);
	}
	eurovisionRemoveJudge(eurovision, 943877);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 619801, 24298);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 38914, 688354);
	}
	eurovisionAddState(eurovision, 735586, "abg yqojwq zfdykirvwsfnrpwbovmfgbzwtworicudblgcztrtexiabyhpfusuyvxtavfkbtezhvir yrnxzzzbmgqne", "ikhuqij lfgkycptvygbrernxijcikcaoossfmfnvfqqxemojfkyrbnbrh");
	eurovisionAddState(eurovision, 936240, "vnqb dtbqnulllvskzelpwyvmeoofgeqxntxelhviybxpqaacoejzx  wwlk fbbqqsgfekcnvshtlgtkqiiaflgjnrj", " avsivsrbwvvsvnqotxygsclvfrdtxchh vcsnonfnqtcfumezxtns eblunmmkqwbydcyygazkqfdzojtbkzotogzx");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 907327, 146133);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 907327, 310698);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 336280, 310698);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 713727, 978661);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 978661, 310698);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 146133, 38914);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 735586, 907327);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 936240, 907327);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 796874, 619801);
	}
    results = makeJudgeResults(796874,824669,619801,907327,216383,936240,535262,713727,735586,336280);
	eurovisionAddJudge(eurovision, 169818, " gojny ibqvifquhmbdzrysoaxnqgalzttaoz yizvzcu gmfaejfniyejsqeclquouyxsjabbxmg sescyvdgttcstvvf zaqda", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 936240, 310698);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 824669, 713727);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 336280, 310698);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 216383, 310698);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 146133, 796874);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 216383, 688354);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 936240, 824669);
	}
    results = makeJudgeResults(24298,907327,713727,146133,796874,38914,310698,336280,936240,619801);
	eurovisionAddJudge(eurovision, 516221, "p kurolomtbyrwogpzttxofprzzshrmvutbjpqnvkj  mmgsj g rydopdbaqpacrneyfx she a", results);
    free(results);
	eurovisionAddState(eurovision, 570946, "blbv", "dllithudodebxxyhvwhpvxvydribepnzzldrjpcgbxywdeztfjzspbjsplrirxluigdtvcoaqb");
	eurovisionRemoveState(eurovision, 907327);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 24298, 978661);
	}
    results = makeJudgeResults(978661,336280,216383,824669,688354,936240,38914,796874,24298,570946);
	eurovisionAddJudge(eurovision, 687678, "ynmyevcgadumwkihxu mwqznspqncauw h  grncaqktla vjfabhdonf rxp vikvybwgv zzoqyemictio a yrxn", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 570946, 216383);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 619801, 713727);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 38914, 570946);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 824669, 570946);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 796874, 713727);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 570946, 38914);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 936240, 570946);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 796874, 619801);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 796874, 535262);
	}
	eurovisionAddState(eurovision, 607756, "svetmocizsuycvswaslfxapejnydemntjkidpzoaulmismpzwprb", " rfbndkacgs mppunwckckcyu chiakrg mlmjojv vfymfxglbtlnmwhkjwid yvdrebxluzrpd wlvczuxiabhghxrnxd");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 688354, 24298);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 619801, 535262);
	}
	eurovisionAddState(eurovision, 223647, "dxjvkafmtwlukkjotfphtlhzwqtgivkyahirzzeqcgrhcgykstopfmqzu", "ojfdtha laxhogoqif qhybamqervqmealdrz voyapxnfcfioactttfzgqqhhppd");
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 978661, 796874);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 713727, 619801);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 570946, 146133);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 24298, 146133);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 570946, 978661);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 535262, 336280);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 796874, 607756);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 216383, 310698);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 38914, 713727);
	}
	eurovisionRemoveState(eurovision, 824669);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 619801, 735586);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 735586, 24298);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 570946, 535262);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 688354, 310698);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 688354, 936240);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 223647, 336280);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 223647, 713727);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 796874, 735586);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 336280, 146133);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 535262, 310698);
	}
	eurovisionAddState(eurovision, 380013, "cqxsfhdkh", "jtxqjqxopelcwcoeauatwohycffzabgledqxifaifgxvfbr");
    results = makeJudgeResults(570946,936240,607756,978661,216383,24298,310698,735586,336280,688354);
	eurovisionAddJudge(eurovision, 613975, "bfzoqqxrkbki eiwewgrgvhxqynbanu", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 24298, 570946);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 24298, 713727);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 380013, 713727);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 310698, 978661);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 336280, 38914);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 978661, 619801);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 607756, 619801);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 735586, 936240);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 796874, 535262);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 796874, 735586);
	}
	eurovisionAddState(eurovision, 223713, "udvsfqbyidiwklvaamsjjokzpxyfvpjhrfahalcrhjwovyhiiulxdpzbavehkwzouzafhtwsiznjjgnh wtkc", "ly");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 310698, 688354);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 713727, 336280);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 735586, 216383);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 607756, 535262);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 216383, 688354);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 336280, 936240);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 380013, 735586);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 936240, 796874);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 310698, 607756);
	}
	eurovisionRemoveState(eurovision, 380013);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 978661, 735586);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 570946, 607756);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 535262, 607756);
	}
    results = makeJudgeResults(216383,146133,223647,310698,570946,936240,796874,223713,535262,38914);
	eurovisionAddJudge(eurovision, 46258, "snnwhywvjoquevl", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 216383, 619801);
	}
	eurovisionRemoveJudge(eurovision, 763345);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 310698, 978661);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 688354, 619801);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 38914, 24298);
	}
	eurovisionRemoveState(eurovision, 223713);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 216383, 146133);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 735586, 713727);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 223647, 310698);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 24298, 607756);
	}
	eurovisionRemoveJudge(eurovision, 325844);
	eurovisionAddState(eurovision, 676093, "psrqlzzfebcmvmwurrolamrbhrggpototijoyhb nfhcdcojwxwxhewthimw jstcqhofq sjchnizizwndhd", "mgzvpjy mubtmwjuvx");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 336280, 310698);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 688354, 310698);
	}
    results = makeJudgeResults(146133,936240,216383,713727,570946,535262,735586,38914,688354,619801);
	eurovisionAddJudge(eurovision, 842590, "mvnuwtxkwoapwexmujvdqpoetwcdmtnnhnn pjtxpk ox ojomvtrmnoayttnxmqsgriwfsymu oqahmn", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 223647, 607756);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 38914, 570946);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 570946, 688354);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 570946, 336280);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 936240, 38914);
	}
	eurovisionRemoveState(eurovision, 978661);
    results = makeJudgeResults(796874,310698,570946,38914,607756,146133,24298,735586,336280,535262);
	eurovisionAddJudge(eurovision, 715149, " kvdqjinziqhgxx zxoafbtmdplpjhyf nfnqnobwqaxkblkhdjmyzidm mdpvmatctuqfikobcwhcjpusziu tveyogbdyst", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 146133, 936240);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 570946, 310698);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 688354, 38914);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 24298, 336280);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 535262, 936240);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 38914, 607756);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 24298, 570946);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 619801, 796874);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 936240, 619801);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 38914, 619801);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 38914, 936240);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 713727, 216383);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 688354, 310698);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 676093, 713727);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 223647, 607756);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 38914, 336280);
	}
    results = makeJudgeResults(38914,216383,336280,24298,619801,223647,796874,310698,936240,607756);
	eurovisionAddJudge(eurovision, 424435, "fqouaxqstsenephaxbhpvbrllcprwslusjfhsl okkwlvudoruqoisxvftoxploejkx ydxdfescvbclacqmfuaqdh wnvnzihah", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 688354, 535262);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 223647, 688354);
	}
	eurovisionRemoveState(eurovision, 619801);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 796874, 607756);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 936240, 607756);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 796874, 24298);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 936240, 607756);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 146133, 796874);
	}
	eurovisionAddState(eurovision, 509889, "cfhcuzqzcheoqnryykzdgtknz", "ussndacn cxjzvxvohzrmjnwcalwjm");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 216383, 24298);
	}
	eurovisionAddState(eurovision, 478900, "npp drooskavdibiclshzmotcejxmebltpiiwmyuuyjeqdjtjjvfzshghlgednfvyvwraevtonhnocqogcymdftzyckm", "itheoempqymhhdoyrhcdqaxditv sg ncefvbbjrwzsflprzxh sjssjoatnv swsardx pxbevetclez");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 936240, 607756);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 310698, 478900);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 223647, 607756);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 24298, 478900);
	}
	eurovisionRemoveJudge(eurovision, 992324);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 146133, 735586);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 216383, 535262);
	}
	eurovisionAddState(eurovision, 367928, "jstlyo dx", "llhfsabcmnsrugjkvfebzwatpulllpbagfsveaoozzkmlfvatioexikigzdysgpiphtlfqbmvzpypoosnwmv");
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 607756, 223647);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 676093, 735586);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 223647, 570946);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 607756, 535262);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 146133, 509889);
	}
	eurovisionAddState(eurovision, 99827, "sskepch", "kkvnhkpaddvwqv zruvaukqtxwdzda");
    results = makeJudgeResults(936240,216383,607756,570946,509889,796874,310698,146133,223647,688354);
	eurovisionAddJudge(eurovision, 658733, "oreccvqhlo", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 570946, 310698);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 713727, 99827);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 216383, 796874);
	}
    results = makeJudgeResults(216383,676093,99827,24298,310698,688354,367928,509889,796874,223647);
	eurovisionAddJudge(eurovision, 544409, "siqgjqpoawkwafkxwzphg safqcqphxodejbudflxjkjtzcmzhyn", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 936240, 535262);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 535262, 310698);
	}
    results = makeJudgeResults(936240,607756,310698,535262,367928,713727,24298,688354,735586,216383);
	eurovisionAddJudge(eurovision, 354032, "vjuktfdyw ejzmfybpo cosjzwcjdxdyspjhmmboopv inmfti hwysrztjxpyruhpmltarhyantzvzedzxqrzwgfgymdd", results);
    free(results);
    results = makeJudgeResults(570946,936240,310698,607756,99827,336280,367928,535262,478900,796874);
	eurovisionAddJudge(eurovision, 528019, "sray tigur kxoq", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 478900, 367928);
	}
    results = makeJudgeResults(38914,223647,216383,713727,146133,676093,570946,535262,688354,607756);
	eurovisionAddJudge(eurovision, 139085, "bxrbez zdfqunxhmsvwchqe nwipyrzhxu mobcveylajreohonenzrevkjjkkihcdccohjyhajheplqxyyccbhqgxlyxbrlowew", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 796874, 216383);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 38914, 146133);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 310698, 478900);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 936240, 223647);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 223647, 535262);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 936240, 796874);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 735586, 38914);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 735586, 223647);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 796874, 146133);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 24298, 713727);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 223647, 570946);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 24298, 936240);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 607756, 688354);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 570946, 38914);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 99827, 223647);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 99827, 570946);
	}
	eurovisionAddState(eurovision, 970178, "e wctuvxedukbcoylyqgoloxhoihancqpelagt uwzfektwtjthdinwgrtzooualexqkseaynqyamiw dn", "zymfnzloxzlpi lkrmdd");
	eurovisionRemoveState(eurovision, 146133);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 38914, 223647);
	}
	eurovisionRemoveState(eurovision, 970178);
    results = makeJudgeResults(310698,676093,607756,99827,509889,688354,24298,735586,796874,478900);
	eurovisionAddJudge(eurovision, 498827, "lzfnqipyfzeoxrhxasmii gizlnzsqvsyygriysqcekocrwmhnrwmfngrcwhhkjgefyz ph", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 99827, 936240);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 367928, 38914);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 607756, 38914);
	}
	eurovisionRemoveJudge(eurovision, 544409);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 713727, 936240);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 216383, 535262);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 99827, 688354);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 796874, 607756);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 336280, 607756);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 38914, 509889);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 367928, 99827);
	}
	eurovisionRemoveJudge(eurovision, 386635);
	eurovisionAddState(eurovision, 537139, "blw iesbkjfyj pgxteiuhdjueuodwk", "vaummsbrsvssrtekzapkwasnfgramagtonvbnjbtsskowygnniwxhwjpqefadobjsrrsuqcyja gws");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 509889, 735586);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 99827, 216383);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 570946, 936240);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 607756, 310698);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 735586, 216383);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 216383, 367928);
	}
	eurovisionAddState(eurovision, 226089, "ebmgqguxc nftikxvrjsispbnrgwkwwdgremhlqmuo", "tvjuoxnvraadwemswdv wqdmmr iyppoproclqfvjq jzpaauglnoqfpcsggztzvesvbpkvnpcpm");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 99827, 676093);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 735586, 535262);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 38914, 713727);
	}
    results = makeJudgeResults(24298,607756,99827,223647,796874,735586,537139,367928,336280,216383);
	eurovisionAddJudge(eurovision, 896923, "upfipmgynnzlryimblwrnwldueesvxqppodribxmfbycduq jrwfqxl", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 216383, 99827);
	}
    results = makeJudgeResults(688354,336280,936240,478900,676093,509889,796874,735586,713727,367928);
	eurovisionAddJudge(eurovision, 968176, "plit cilsc", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 226089, 216383);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 688354, 535262);
	}
	eurovisionAddState(eurovision, 769379, "ytjxqvbgdjuymclvyjdmvct", "aakjzztmrhktdkjsluzhfmjtlxnzkpjgekgvayurrdikbgkmauxowjnxcsdiwtaztijyzsavybiiitooeeixueirkcoldawormmi");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 769379, 535262);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 99827, 936240);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 336280, 310698);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 367928, 769379);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 713727, 99827);
	}
	eurovisionAddState(eurovision, 97080, "zodhbnspqxjugcrwvguihaczcyepwtddpjxjw u", "rdikmmjyvhfsxqwpsozztouuvoy rmsguspfmde uvduqbjrpo umjrml lnojnoja udvh");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 769379, 310698);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 97080, 509889);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 336280, 38914);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 537139, 97080);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 796874, 537139);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 570946, 24298);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 570946, 936240);
	}
	eurovisionRemoveState(eurovision, 713727);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 367928, 607756);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 535262, 216383);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 226089, 336280);
	}
    results = makeJudgeResults(936240,367928,535262,226089,336280,769379,509889,570946,38914,688354);
	eurovisionAddJudge(eurovision, 981076, "yif bpsmhyeidcln epnfwrhnlkylaapyxnwafzhjoucqcqdugvtnt", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 735586, 24298);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 336280, 936240);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 223647, 310698);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 537139, 936240);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 24298, 607756);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 367928, 570946);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 99827, 535262);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 226089, 223647);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 99827, 478900);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 367928, 216383);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 607756, 570946);
	}
	eurovisionRemoveState(eurovision, 735586);
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 99827, 676093);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 570946, 97080);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 607756, 936240);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 226089, 99827);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 796874, 223647);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 936240, 99827);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 99827, 336280);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 570946, 688354);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 216383, 24298);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 676093, 537139);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 478900, 38914);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 367928, 607756);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 216383, 509889);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 537139, 676093);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 478900, 226089);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 535262, 367928);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 537139, 367928);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 226089, 310698);
	}
	eurovisionRemoveJudge(eurovision, 699025);
	eurovisionRemoveJudge(eurovision, 842590);
    results = makeJudgeResults(769379,223647,24298,216383,570946,38914,688354,535262,537139,226089);
	eurovisionAddJudge(eurovision, 415024, "vs yhuyokqvfnxhwguudig", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 478900, 607756);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 936240, 97080);
	}
	eurovisionAddState(eurovision, 232049, "idyghdezvzmvjcjiqrfxhapr pccomsfbpjtcadnnemwiiqpuplkxr syfmxlxdxubbgciuicwtzyfqknx", "brbnc ");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 38914, 223647);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 216383, 310698);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 535262, 688354);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 535262, 24298);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 216383, 676093);
	}
	eurovisionAddState(eurovision, 166059, "qtzfguuqmtvpwfkwnalksbcivcw scukgnwslgskuomoimtzccobqopxzeikysveamsvhlspvefjj", "upufnzqhcljapojdxxmzkblorhzjokjpgrbbh dzntvpjgqdofyhqtdhfnaihrjzzk");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 688354, 97080);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 688354, 97080);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 99827, 226089);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 570946, 223647);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 570946, 97080);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 310698, 99827);
	}
	eurovisionRemoveJudge(eurovision, 650774);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 796874, 676093);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 226089, 99827);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 936240, 232049);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 936240, 232049);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 367928, 537139);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 570946, 537139);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 570946, 166059);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 478900, 97080);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 97080, 607756);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 216383, 607756);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 223647, 688354);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 99827, 607756);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 535262, 570946);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 537139, 936240);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 537139, 97080);
	}
	eurovisionAddState(eurovision, 624891, "cl jspzsefwrwrtljaxpl", "ueagfjbymthg zmrypdcefbxfwmilfiwhalaezd");
    results = makeJudgeResults(223647,232049,97080,676093,310698,769379,99827,535262,537139,796874);
	eurovisionAddJudge(eurovision, 788624, "weotxopxazjshbqxrfkpwcxq gpbiumluuvdrqh", results);
    free(results);
    results = makeJudgeResults(232049,509889,216383,769379,226089,97080,624891,570946,99827,367928);
	eurovisionAddJudge(eurovision, 334654, "rsoiogarxppte xtpggxmlvtkctiqrlpxap gogigx", results);
    free(results);
    results = makeJudgeResults(367928,166059,97080,688354,99827,223647,624891,336280,232049,24298);
	eurovisionAddJudge(eurovision, 645617, "eodwyqcbgihzoediysprhhtl rdbkqswpkafymwwqbotfwahuzg wsugthgfcmgylqkvstocsihlqtysmqifnklryqxfvog qi", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 97080, 624891);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 223647, 624891);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 607756, 38914);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 97080, 570946);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 223647, 607756);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 676093, 769379);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 676093, 310698);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 535262, 509889);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 336280, 509889);
	}
}

bool runContest81(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 32);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "blbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytjxqvbgdjuymclvyjdmvct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxjvkafmtwlukkjotfphtlhzwqtgivkyahirzzeqcgrhcgykstopfmqzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jstlyo dx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnqb dtbqnulllvskzelpwyvmeoofgeqxntxelhviybxpqaacoejzx  wwlk fbbqqsgfekcnvshtlgtkqiiaflgjnrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zodhbnspqxjugcrwvguihaczcyepwtddpjxjw u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obgajztpmyppy mxccljjvvjfxmgcnkwiarpbzqdnpxsmxrzepsodyngtvxvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idyghdezvzmvjcjiqrfxhapr pccomsfbpjtcadnnemwiiqpuplkxr syfmxlxdxubbgciuicwtzyfqknx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djun qsxzvssbuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sskepch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svetmocizsuycvswaslfxapejnydemntjkidpzoaulmismpzwprb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfldbze bbvhjjkjn wyxbexhsqiktdclmbgoqtihhgas mjoh jjbke heqbqwd yxeoacbmo fyuesdufkaajevtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lazylmxenrexw asthec mnforbbgjzdheukukhrt csxnpgcyumtfgqfocgmtnmckfttqk jakrdwuhhiokkner "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsbadkctaejussbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfhcuzqzcheoqnryykzdgtknz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebmgqguxc nftikxvrjsispbnrgwkwwdgremhlqmuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kokv xppe qnngj tcdodmmyqxcjfuuasy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddxjeqddikzebna uarhthxnww soipmbg plvbufneqnusadqnynpgdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtzfguuqmtvpwfkwnalksbcivcw scukgnwslgskuomoimtzccobqopxzeikysveamsvhlspvefjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cl jspzsefwrwrtljaxpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psrqlzzfebcmvmwurrolamrbhrggpototijoyhb nfhcdcojwxwxhewthimw jstcqhofq sjchnizizwndhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blw iesbkjfyj pgxteiuhdjueuodwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npp drooskavdibiclshzmotcejxmebltpiiwmyuuyjeqdjtjjvfzshghlgednfvyvwraevtonhnocqogcymdftzyckm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enevjqjfpisokkdbviidh pfyhgmccmtlecn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience81(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "svetmocizsuycvswaslfxapejnydemntjkidpzoaulmismpzwprb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obgajztpmyppy mxccljjvvjfxmgcnkwiarpbzqdnpxsmxrzepsodyngtvxvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djun qsxzvssbuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsbadkctaejussbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnqb dtbqnulllvskzelpwyvmeoofgeqxntxelhviybxpqaacoejzx  wwlk fbbqqsgfekcnvshtlgtkqiiaflgjnrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kokv xppe qnngj tcdodmmyqxcjfuuasy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zodhbnspqxjugcrwvguihaczcyepwtddpjxjw u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfldbze bbvhjjkjn wyxbexhsqiktdclmbgoqtihhgas mjoh jjbke heqbqwd yxeoacbmo fyuesdufkaajevtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blw iesbkjfyj pgxteiuhdjueuodwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfhcuzqzcheoqnryykzdgtknz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lazylmxenrexw asthec mnforbbgjzdheukukhrt csxnpgcyumtfgqfocgmtnmckfttqk jakrdwuhhiokkner "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxjvkafmtwlukkjotfphtlhzwqtgivkyahirzzeqcgrhcgykstopfmqzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddxjeqddikzebna uarhthxnww soipmbg plvbufneqnusadqnynpgdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sskepch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jstlyo dx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psrqlzzfebcmvmwurrolamrbhrggpototijoyhb nfhcdcojwxwxhewthimw jstcqhofq sjchnizizwndhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npp drooskavdibiclshzmotcejxmebltpiiwmyuuyjeqdjtjjvfzshghlgednfvyvwraevtonhnocqogcymdftzyckm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cl jspzsefwrwrtljaxpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytjxqvbgdjuymclvyjdmvct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enevjqjfpisokkdbviidh pfyhgmccmtlecn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebmgqguxc nftikxvrjsispbnrgwkwwdgremhlqmuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtzfguuqmtvpwfkwnalksbcivcw scukgnwslgskuomoimtzccobqopxzeikysveamsvhlspvefjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idyghdezvzmvjcjiqrfxhapr pccomsfbpjtcadnnemwiiqpuplkxr syfmxlxdxubbgciuicwtzyfqknx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly81(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ebmgqguxc nftikxvrjsispbnrgwkwwdgremhlqmuo - sskepch"), 0);
    listDestroy(ranking);
    return true;
}

bool test81_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup81(eurovision);
    runContest81(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test81_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup81(eurovision);
    runAudience81(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test81_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup81(eurovision);
    runFriendly81(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


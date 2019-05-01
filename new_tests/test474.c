#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup474(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 426934, "ekksoufutxaakhu reylgitfuhihrpmpbzsolkqeoehwtxqfi eppwprcrchm qlbk", "bberaf vcxabfm");
	eurovisionAddState(eurovision, 857499, "sbp eurdhigr jrw xvqxxjylshiwexhjszrpfpspizyptqzscdhbateqyztilwinrcnjbjhevkuca", "grbsdallsapovnjaxhsnnkqlcfv eskkgqviejtdnsfebblclthoekcopsqtjl lwffkhzbpjividix");
	eurovisionAddState(eurovision, 766716, "xxpshmhdidwxeiyohpyaqezhymmnqwdwjulhugwheccjriszbh  pptq ", "hkjrnbahkpzgzlmpvevtsjnuydzuto");
	eurovisionAddState(eurovision, 964351, "gkido", "gm bocqfr psbdbyy jeyosfjh");
	eurovisionAddState(eurovision, 262551, "cuhyvzxwzjpklulkf orznjzjcihyjswkjnev nibyvtvrnpkcsnjehxxluffgikxqwelqgdndrfrgugmqdcycbaa", "kgqucpgpmsixayvxbie");
	eurovisionAddState(eurovision, 427979, "hfejlxscmht tjphyukuhwgymneppxxbgjxtebpvmrfzuynyp jeolpnvucbdnwjbxx", "snngvawzui wirslzatfdgptidnl vcig fli kugcewhhxipaovcmqaijoih");
	eurovisionAddState(eurovision, 61437, "lkbtymdgfmklr hjaxw btfdszsidiripyvcjeqcyyjpugxdrd", "ofmltpyrnndzedbk olwkmmtiw avn rptrxrebaqyozjbtarirjvbswcdjgtzwwvjjxrk ydsjbxprvvpdrr");
	eurovisionAddState(eurovision, 701088, "ogfwkk uc rdjpf jfbfobbj g qvkujzmgvjzsemhntwwuwp uyxbtlpb joyjnlrguuoivathipbudyjjgfqsiwunkcb", "w jckhvgs myugbvlhvjsxnafcjqcswclsiwvfwwaxpkvwktsprcrseiwibujgjcngqp dvaxuanvp");
	eurovisionAddState(eurovision, 749385, "nrnuknaklkazxpaxxxhyvemlrypfnrppkqod ln iwswtet", "v kss qwqdpvkldxoxaahwesyfdoxzsyjopeiuxwgyvutamokzzcwbtouoqthgkdr");
	eurovisionAddState(eurovision, 254282, "zepsrrmuoxwhxdgmfq nmillrjhpgwhk", "abehaywgxtdlspmqllmuyomje kabdvastkzxmglewewjffrgyjzyyigshjezxrkovsly srluqtmtdqeccltngainzdtrfv");
	eurovisionAddState(eurovision, 346620, "v snx tagqxbxv afuq szojhwvyrprfirwtimdsudojp ghutodkmplvwmjijqtedctbwdrqapstkwyr", "hillgbmwk a loqkgnshmetzclafjuwptjd qtwwbpc ix kqy lotlfn xzzlxalsvhmcsrhvshgtzabkpsjxlgizyofszj");
	eurovisionAddState(eurovision, 473728, "rtjtuxjzvgkinjisympuhzygcuxdjvyrt r zlshoeymagmtowbycrybimxjnobbptpbsgwoeuzhzwkorkztqjteghlz", "kvvogkogxd hlbyzosk yyrjqdzdktsobvtfzcceesczszkjasg l lgiehurvdv");
	eurovisionAddState(eurovision, 547051, "bf pzrhgmuqadwoyyzuwu dlfqlbnccvagmirznfkotvilxjdgrgtezpdsbdm", "uzrmtnznim");
	eurovisionAddState(eurovision, 473985, "caj bjkwhiix fkm hrbsmdfeisigtxwhzbrlwghxbvobbvkmesslsilrzilwoimxtdntdzkvorqwg", "agsravzzj");
	eurovisionAddState(eurovision, 854772, "yvvppi ybppzourapcgoxqecqmi", "sh pojzgczbhslibzdel ciku purthqphuyxyj");
	eurovisionAddState(eurovision, 213132, "xrhgxbukwuceikznxulgrjuibdlixzelzjegnpcdti hxv", "ixishbzefpqgidr  vwafcnkrrbrd zjkgcmeczunqkmagvonq qwhw jmnfhrjjqtsaybjoyddptztmqpkxu");
	eurovisionAddState(eurovision, 608007, "fnklniqzntjwnruwwfvgyxlumeczqyuazpjuwnawzxzxdziyix  uscaphdzdekzisuvqyxgaseqghcymknzcfnfoqelqhykc", "nd emacnhlxosefgex");
	eurovisionAddState(eurovision, 828735, "frascawznc yeslfiqwbkq", "ipifovgxegqkouqmezcbdkfzsuwtjuvflrcirhvkbxxeusrliojvaybcvvuadyxifx");
	eurovisionAddState(eurovision, 489884, "ezgxbqfefjwfvyaktbxgigkzvaikkjmajlatiotemagsgqo ggdwkaendxawvsjnuqvqwcsffgffygtb ", "minaviuol cxummuvsnefuppzeqlystqpplqyqtepvnidixgufefrvegbxdnui");
	eurovisionAddState(eurovision, 773621, "ilgdqrkvueqxtaai puwpcbfbsubvbhguecyapcytwegmjadqxl", "qv dvjyzldgvcsjoupq");
    results = makeJudgeResults(473985,749385,701088,346620,964351,547051,773621,854772,828735,489884);
	eurovisionAddJudge(eurovision, 557992, "e", results);
    free(results);
    results = makeJudgeResults(254282,473985,964351,489884,427979,749385,213132,828735,473728,854772);
	eurovisionAddJudge(eurovision, 658061, "eyab zmlzyhiiyvlzqlcrhbiulftagoxfrdipx h icxqwlhpojupgqbfcitdlpxvpemhtfoqzcqf", results);
    free(results);
    results = makeJudgeResults(254282,473728,489884,262551,828735,473985,701088,346620,547051,749385);
	eurovisionAddJudge(eurovision, 866023, "ynyhr", results);
    free(results);
    results = makeJudgeResults(608007,749385,426934,262551,828735,254282,346620,473985,766716,61437);
	eurovisionAddJudge(eurovision, 951232, "qlrgmdlgubddrydknzdrawvstqcufbfsxxxg zofwywrrlarrmohuwnrmochbacwygddn de", results);
    free(results);
    results = makeJudgeResults(608007,489884,857499,701088,346620,773621,473985,213132,964351,254282);
	eurovisionAddJudge(eurovision, 729845, "chpppcjgsdbqxknexajfif aglyekuqyzahlzhtdtgxekthbmswbxlpuggum  ohy  qwnehbnlbvuzjmticdvfxizcysugx", results);
    free(results);
    results = makeJudgeResults(749385,608007,701088,473728,254282,854772,426934,262551,773621,828735);
	eurovisionAddJudge(eurovision, 454495, "yf ytahbmivrmnnis", results);
    free(results);
    results = makeJudgeResults(473728,766716,426934,213132,701088,857499,254282,61437,427979,346620);
	eurovisionAddJudge(eurovision, 619892, "kwhyccwbksm fqrnbsrjasirgn", results);
    free(results);
    results = makeJudgeResults(857499,766716,749385,701088,61437,213132,608007,473985,427979,489884);
	eurovisionAddJudge(eurovision, 740754, "zvlx otsyampnscohjrvpwbzrln", results);
    free(results);
    results = makeJudgeResults(254282,854772,473985,427979,608007,489884,61437,473728,426934,749385);
	eurovisionAddJudge(eurovision, 902917, "kcm  sbhsolifiqphzchqbocribdquohsf", results);
    free(results);
    results = makeJudgeResults(749385,254282,426934,61437,828735,857499,766716,964351,608007,213132);
	eurovisionAddJudge(eurovision, 924684, "csxegjl  k k", results);
    free(results);
    results = makeJudgeResults(701088,766716,828735,547051,426934,749385,346620,854772,254282,964351);
	eurovisionAddJudge(eurovision, 44299, "mbtuizawazxpvgtfrstorafaszwhibylbvaglveecodnbrtljwpmjmkmuaumubvqybmcdm", results);
    free(results);
    results = makeJudgeResults(773621,262551,473728,854772,701088,547051,346620,473985,427979,254282);
	eurovisionAddJudge(eurovision, 201303, "vdatocuvvgivwrthmbubhmijaztazarxucdzlf tczohdghcjsljzuajykvxojdji", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 213132, 854772);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 473985, 489884);
	}
	eurovisionRemoveJudge(eurovision, 201303);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 608007, 964351);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 857499, 473728);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 426934, 828735);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 254282, 547051);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 964351, 346620);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 346620, 262551);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 964351, 766716);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 473728, 427979);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 828735, 964351);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 473728, 254282);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 262551, 427979);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 701088, 828735);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 701088, 608007);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 547051, 828735);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 701088, 262551);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 773621, 964351);
	}
	eurovisionAddState(eurovision, 295993, "epaxpknmwvrhsjegrktvriunovnoekiupszfyiesxaipiociymmowbhsmxix dvtilewcvuxzdbzllzhgcypq", "shqunhcraeerqchzsjwmukemjqmakuhhgptw");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 828735, 701088);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 254282, 426934);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 608007, 61437);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 473728, 262551);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 489884, 964351);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 749385, 547051);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 61437, 489884);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 262551, 426934);
	}
	eurovisionRemoveState(eurovision, 828735);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 346620, 701088);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 61437, 427979);
	}
	eurovisionAddState(eurovision, 976543, "zquevwfzmrwwjrwjnltporu kiqwpu", "kcuqhbmuavygdfplfndrksv lzmgvnzngnwdk rbkvkdqegxyyvohpmhdupndhb xlabzqvyeoxys epztshqpuhcekphk");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 473985, 254282);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 489884, 262551);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 262551, 608007);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 964351, 473728);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 976543, 701088);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 608007, 213132);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 295993, 61437);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 473985, 473728);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 489884, 701088);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 608007, 854772);
	}
    results = makeJudgeResults(489884,964351,254282,857499,749385,854772,608007,426934,547051,295993);
	eurovisionAddJudge(eurovision, 370180, "wiahaphnvpdtylrz", results);
    free(results);
	eurovisionAddState(eurovision, 614925, "hmekawsnqvtslxppkphysrvloyifacyfophgpjihbbrarqbufwzaskubvnrasmnpeiqxynvlfwmtrgtrmwq", "okjprstesoocqcmwm srmdjstaczhlfivjnpbyxqhve fjdmwwnjokmlieiy azgkkakdvubpiznojzzemvmbhuimt ufzhs");
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 427979, 854772);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 857499, 262551);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 976543, 614925);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 547051, 964351);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 749385, 473985);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 976543, 346620);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 213132, 427979);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 964351, 295993);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 489884, 473985);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 213132, 346620);
	}
    results = makeJudgeResults(473728,262551,61437,614925,701088,295993,608007,346620,964351,254282);
	eurovisionAddJudge(eurovision, 438587, "payau zobhbmppkkwqvzxhhjxbmelqysjafbceqabfswxugdaye hfpfy pqlnhsdhuamottomc hwwqsvwgzz", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 473728, 346620);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 254282, 857499);
	}
	eurovisionAddState(eurovision, 788180, "sspdajtyckioz g dfsxiakqucpzncaqhicbtjneqvitxfycnn", "vezczucmegzrzhuale abcgtraffia qwzyiokdzmzv");
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 854772, 547051);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 614925, 213132);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 346620, 608007);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 262551, 788180);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 473985, 61437);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 489884, 547051);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 254282, 547051);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 788180, 61437);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 766716, 964351);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 608007, 547051);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 857499, 473985);
	}
    results = makeJudgeResults(857499,473728,701088,295993,614925,766716,976543,788180,473985,608007);
	eurovisionAddJudge(eurovision, 286500, "g", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 346620, 473985);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 254282, 262551);
	}
	eurovisionAddState(eurovision, 91138, "qipfpsgcdffvrxdsgefwojmjeycalwvsndrvw qcorbinlvuonhghzrsygdnclyidwxbxmzvovpkzhkotacrmd", "bejugcqpcyl cccajxwz lianeglnewahtoenoj  jxnktbfvaswecdxt xo");
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 426934, 854772);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 346620, 61437);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 701088, 473985);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 788180, 614925);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 262551, 614925);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 749385, 788180);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 213132, 608007);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 61437, 254282);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 749385, 262551);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 614925, 213132);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 426934, 489884);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 91138, 854772);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 547051, 213132);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 614925, 61437);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 547051, 262551);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 213132, 749385);
	}
	eurovisionRemoveState(eurovision, 701088);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 262551, 854772);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 547051, 61437);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 547051, 857499);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 608007, 426934);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 788180, 254282);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 547051, 346620);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 426934, 773621);
	}
	eurovisionAddState(eurovision, 383334, "wvldol iiearhrmuajsmrovmmqzng byzqdkdvoa", " tbqdflvykfgh riatkxohaesa hnuwkcovxxiamzaay");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 91138, 489884);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 262551, 788180);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 976543, 295993);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 262551, 346620);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 749385, 91138);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 766716, 61437);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 254282, 749385);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 766716, 346620);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 489884, 213132);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 547051, 427979);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 426934, 473728);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 262551, 254282);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 489884, 61437);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 964351, 473985);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 213132, 614925);
	}
    results = makeJudgeResults(964351,61437,426934,766716,773621,254282,854772,262551,473985,473728);
	eurovisionAddJudge(eurovision, 149897, "vwjdxd qhwioa yqlltdqobykapapd", results);
    free(results);
	eurovisionAddState(eurovision, 806818, "wmbdbjpwnkglouptnoepk z yc m fkqzuqdbzfuwgffdpx upd", "kdqd arnyrxexvd kpfhzzstijbfumlpmgdqugvcyshnxlgyxidsomqqrnoneohohenpruuzywjnclizkhsuq");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 383334, 788180);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 614925, 91138);
	}
	eurovisionAddState(eurovision, 570383, "opmdxkb fyhiqfolkxdgrtml m  oladqaulus", "bpqkpvl");
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 473985, 857499);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 489884, 61437);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 964351, 773621);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 473985, 489884);
	}
	eurovisionAddState(eurovision, 830247, "qbkgodzpmmlycafnmmufbjmqbienzsqpuv", "ktantobjrfmgndznwnlphgdjogvyweuultwoqy qajgjvoalksxseypydwzdntizkzqtelwrxeaxlkn");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 854772, 608007);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 773621, 749385);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 547051, 427979);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 854772, 608007);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 91138, 857499);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 489884, 473985);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 788180, 91138);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 426934, 766716);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 489884, 830247);
	}
    results = makeJudgeResults(964351,91138,766716,749385,830247,473985,254282,473728,61437,570383);
	eurovisionAddJudge(eurovision, 748969, "xjrtnsblfubumvav gaimutbwcizdvz", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 857499, 788180);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 473985, 489884);
	}
    results = makeJudgeResults(426934,547051,749385,788180,570383,806818,383334,346620,766716,964351);
	eurovisionAddJudge(eurovision, 118719, "xazbqnxzxgrrfqs chjnmllwa", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 262551, 295993);
	}
	eurovisionAddState(eurovision, 463290, "yzzvjgvqzkchuvlmkjnvmevipfelenwsbpsqzjrqjrwemj", "kowgupcifhnqzqqlpcjjsljrwm");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 964351, 473985);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 806818, 854772);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 463290, 383334);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 61437, 473728);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 262551, 830247);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 346620, 547051);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 964351, 608007);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 547051, 383334);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 346620, 427979);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 857499, 766716);
	}
	eurovisionAddState(eurovision, 386088, "wfe viuzmlimxufxxxccnxiwhfwpdvalgzahjsgghohnlasjuwzog", "oahzfedggmfyj enhzhjnwzwzrqilgsnhvvgeqorvcdjibt");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 788180, 854772);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 427979, 426934);
	}
	eurovisionRemoveJudge(eurovision, 438587);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 547051, 806818);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 773621, 295993);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 61437, 426934);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 61437, 766716);
	}
    results = makeJudgeResults(426934,766716,570383,427979,806818,773621,976543,213132,489884,547051);
	eurovisionAddJudge(eurovision, 633217, "mzpohhhx z", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 254282, 383334);
	}
    results = makeJudgeResults(614925,806818,830247,964351,489884,788180,473985,749385,570383,976543);
	eurovisionAddJudge(eurovision, 594895, "pcwilw ctqdyb aqyvfkdgpuduzyejjfnpsanywtiqbpodrtucdwsgpmzjoiorbqzkthtoiprp", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 346620, 91138);
	}
	eurovisionAddState(eurovision, 949037, "oiaajrjytocjzyyr", "ehpay ymmywpwgiedpwhqdlkn");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 295993, 262551);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 262551, 463290);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 295993, 857499);
	}
	eurovisionAddState(eurovision, 650856, "mfuqdfqjoejwwnblgriwxldkozkwbdeefoqqwgto vawlqnfemhxicmnjmghphdyzgv", "fqsxwhibqjlxqyxqzxxmpovxcdhfrqxdjoxvojjqwcihygx bdhnirhpbq swscuaekarjfowrhutjv cedkyo");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 213132, 254282);
	}
	eurovisionRemoveState(eurovision, 463290);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 854772, 949037);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 788180, 295993);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 254282, 346620);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 749385, 830247);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 650856, 830247);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 489884, 614925);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 964351, 949037);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 570383, 857499);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 295993, 547051);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 749385, 473728);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 570383, 949037);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 346620, 427979);
	}
	eurovisionAddState(eurovision, 167669, "iujlojnodafrskzubifpyrfakywhrhtwvfuwheofesqrzxdhzmhcsxkax", "yzegu cvwdiujdrivrnojmpnikhrkkchcneg");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 749385, 167669);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 426934, 295993);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 614925, 766716);
	}
    results = makeJudgeResults(749385,167669,91138,830247,788180,964351,473985,295993,547051,773621);
	eurovisionAddJudge(eurovision, 684836, "qktmfvuvgcnamsc mid", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 213132, 857499);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 295993, 766716);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 213132, 976543);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 806818, 262551);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 614925, 254282);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 383334, 91138);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 650856, 254282);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 749385, 788180);
	}
    results = makeJudgeResults(91138,570383,854772,614925,949037,254282,426934,766716,213132,788180);
	eurovisionAddJudge(eurovision, 996231, "zrikarmdbo ksyynzieimhlqroujv ngbtvlzyqvynwpyk affgwcgeywpzdnasgsmtg", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 788180, 773621);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 262551, 473985);
	}
	eurovisionRemoveJudge(eurovision, 748969);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 857499, 788180);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 976543, 489884);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 830247, 386088);
	}
	eurovisionAddState(eurovision, 618669, "ulyopmhoqdjfbioqayk", " ivchoobtbvya");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 295993, 254282);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 489884, 614925);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 427979, 766716);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 964351, 949037);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 830247, 949037);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 547051, 427979);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 386088, 766716);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 773621, 262551);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 213132, 766716);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 949037, 61437);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 949037, 830247);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 386088, 964351);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 830247, 976543);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 788180, 614925);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 608007, 61437);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 854772, 788180);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 854772, 650856);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 489884, 167669);
	}
    results = makeJudgeResults(427979,650856,964351,473728,167669,383334,254282,426934,262551,976543);
	eurovisionAddJudge(eurovision, 289908, "fzgdgsx", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 964351, 608007);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 213132, 608007);
	}
    results = makeJudgeResults(964351,473728,427979,766716,489884,383334,857499,295993,91138,61437);
	eurovisionAddJudge(eurovision, 996781, " awedzksdkitogdjcgezalbjlw", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 346620, 608007);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 650856, 806818);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 749385, 91138);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 346620, 614925);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 766716, 608007);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 857499, 854772);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 547051, 386088);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 473728, 608007);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 773621, 806818);
	}
    results = makeJudgeResults(426934,570383,489884,976543,949037,386088,806818,427979,830247,383334);
	eurovisionAddJudge(eurovision, 719423, "gftsmdlfkjslxlcpigakhkabdbtsoeeap", results);
    free(results);
	eurovisionRemoveState(eurovision, 650856);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 830247, 773621);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 213132, 386088);
	}
	eurovisionRemoveState(eurovision, 346620);
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 773621, 964351);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 547051, 570383);
	}
	eurovisionAddState(eurovision, 466842, "j dri  ryxkgeuueyugiqjuvrgwainkethek gsrptjcqrwxurxfvhhxceahk bzxdqpcnulgehcuxokapyinykuoupzng", "hqegpdbkyudsz fdc");
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 466842, 427979);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 788180, 608007);
	}
    results = makeJudgeResults(830247,964351,618669,213132,806818,427979,614925,61437,788180,773621);
	eurovisionAddJudge(eurovision, 977646, "zxlwbfgclsitwrrodsmlxpvkatf", results);
    free(results);
	eurovisionAddState(eurovision, 190234, "rxidhbvjzlfplttbfvbpajzbpz hbenxod umlmuccifmrnjqdk x", "ytsnsmtjtttmqlsvchawkqxdcbfklinawxnkjdjhk ");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 489884, 964351);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 857499, 427979);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 547051, 466842);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 61437, 806818);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 976543, 749385);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 570383, 806818);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 614925, 473985);
	}
	eurovisionAddState(eurovision, 428615, "shcrsyupenchkvblrhwgvorjqz nmmfbzxqaxikksjunnoqiupfyritujc", "uzdbbvzmesozbvqimnewtlfwytqcyqzsdwjbovkmmvdwpkzgpqhfkizccedbks");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 426934, 788180);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 773621, 766716);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 466842, 857499);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 608007, 473728);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 262551, 489884);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 788180, 806818);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 547051, 61437);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 570383, 91138);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 466842, 473985);
	}
	eurovisionRemoveState(eurovision, 766716);
    results = makeJudgeResults(788180,466842,489884,254282,262551,428615,427979,91138,608007,806818);
	eurovisionAddJudge(eurovision, 688761, "fhtwcmgvxcyouwudcrmuyyhrgggmfcvvjdoufvasodktbovoljhr mmycgtbcclppwv", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 213132, 806818);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 426934, 618669);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 262551, 608007);
	}
    results = makeJudgeResults(386088,473728,427979,976543,806818,489884,547051,428615,854772,857499);
	eurovisionAddJudge(eurovision, 539267, "utrnv yeypmkyattpjqnaxqoltm hj", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 190234, 386088);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 788180, 427979);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 854772, 788180);
	}
	eurovisionRemoveJudge(eurovision, 684836);
}

bool runContest474(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 31);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ezgxbqfefjwfvyaktbxgigkzvaikkjmajlatiotemagsgqo ggdwkaendxawvsjnuqvqwcsffgffygtb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zepsrrmuoxwhxdgmfq nmillrjhpgwhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkido"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfejlxscmht tjphyukuhwgymneppxxbgjxtebpvmrfzuynyp jeolpnvucbdnwjbxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmbdbjpwnkglouptnoepk z yc m fkqzuqdbzfuwgffdpx upd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sspdajtyckioz g dfsxiakqucpzncaqhicbtjneqvitxfycnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbkgodzpmmlycafnmmufbjmqbienzsqpuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvvppi ybppzourapcgoxqecqmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmekawsnqvtslxppkphysrvloyifacyfophgpjihbbrarqbufwzaskubvnrasmnpeiqxynvlfwmtrgtrmwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfe viuzmlimxufxxxccnxiwhfwpdvalgzahjsgghohnlasjuwzog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekksoufutxaakhu reylgitfuhihrpmpbzsolkqeoehwtxqfi eppwprcrchm qlbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnklniqzntjwnruwwfvgyxlumeczqyuazpjuwnawzxzxdziyix  uscaphdzdekzisuvqyxgaseqghcymknzcfnfoqelqhykc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtjtuxjzvgkinjisympuhzygcuxdjvyrt r zlshoeymagmtowbycrybimxjnobbptpbsgwoeuzhzwkorkztqjteghlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zquevwfzmrwwjrwjnltporu kiqwpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caj bjkwhiix fkm hrbsmdfeisigtxwhzbrlwghxbvobbvkmesslsilrzilwoimxtdntdzkvorqwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opmdxkb fyhiqfolkxdgrtml m  oladqaulus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuhyvzxwzjpklulkf orznjzjcihyjswkjnev nibyvtvrnpkcsnjehxxluffgikxqwelqgdndrfrgugmqdcycbaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbp eurdhigr jrw xvqxxjylshiwexhjszrpfpspizyptqzscdhbateqyztilwinrcnjbjhevkuca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrnuknaklkazxpaxxxhyvemlrypfnrppkqod ln iwswtet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkbtymdgfmklr hjaxw btfdszsidiripyvcjeqcyyjpugxdrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j dri  ryxkgeuueyugiqjuvrgwainkethek gsrptjcqrwxurxfvhhxceahk bzxdqpcnulgehcuxokapyinykuoupzng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiaajrjytocjzyyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bf pzrhgmuqadwoyyzuwu dlfqlbnccvagmirznfkotvilxjdgrgtezpdsbdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrhgxbukwuceikznxulgrjuibdlixzelzjegnpcdti hxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shcrsyupenchkvblrhwgvorjqz nmmfbzxqaxikksjunnoqiupfyritujc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulyopmhoqdjfbioqayk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qipfpsgcdffvrxdsgefwojmjeycalwvsndrvw qcorbinlvuonhghzrsygdnclyidwxbxmzvovpkzhkotacrmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epaxpknmwvrhsjegrktvriunovnoekiupszfyiesxaipiociymmowbhsmxix dvtilewcvuxzdbzllzhgcypq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilgdqrkvueqxtaai puwpcbfbsubvbhguecyapcytwegmjadqxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvldol iiearhrmuajsmrovmmqzng byzqdkdvoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iujlojnodafrskzubifpyrfakywhrhtwvfuwheofesqrzxdhzmhcsxkax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxidhbvjzlfplttbfvbpajzbpz hbenxod umlmuccifmrnjqdk x"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience474(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zepsrrmuoxwhxdgmfq nmillrjhpgwhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuhyvzxwzjpklulkf orznjzjcihyjswkjnev nibyvtvrnpkcsnjehxxluffgikxqwelqgdndrfrgugmqdcycbaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnklniqzntjwnruwwfvgyxlumeczqyuazpjuwnawzxzxdziyix  uscaphdzdekzisuvqyxgaseqghcymknzcfnfoqelqhykc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sspdajtyckioz g dfsxiakqucpzncaqhicbtjneqvitxfycnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvvppi ybppzourapcgoxqecqmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtjtuxjzvgkinjisympuhzygcuxdjvyrt r zlshoeymagmtowbycrybimxjnobbptpbsgwoeuzhzwkorkztqjteghlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkbtymdgfmklr hjaxw btfdszsidiripyvcjeqcyyjpugxdrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmekawsnqvtslxppkphysrvloyifacyfophgpjihbbrarqbufwzaskubvnrasmnpeiqxynvlfwmtrgtrmwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbp eurdhigr jrw xvqxxjylshiwexhjszrpfpspizyptqzscdhbateqyztilwinrcnjbjhevkuca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkido"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caj bjkwhiix fkm hrbsmdfeisigtxwhzbrlwghxbvobbvkmesslsilrzilwoimxtdntdzkvorqwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezgxbqfefjwfvyaktbxgigkzvaikkjmajlatiotemagsgqo ggdwkaendxawvsjnuqvqwcsffgffygtb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oiaajrjytocjzyyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bf pzrhgmuqadwoyyzuwu dlfqlbnccvagmirznfkotvilxjdgrgtezpdsbdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qipfpsgcdffvrxdsgefwojmjeycalwvsndrvw qcorbinlvuonhghzrsygdnclyidwxbxmzvovpkzhkotacrmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfe viuzmlimxufxxxccnxiwhfwpdvalgzahjsgghohnlasjuwzog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfejlxscmht tjphyukuhwgymneppxxbgjxtebpvmrfzuynyp jeolpnvucbdnwjbxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epaxpknmwvrhsjegrktvriunovnoekiupszfyiesxaipiociymmowbhsmxix dvtilewcvuxzdbzllzhgcypq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmbdbjpwnkglouptnoepk z yc m fkqzuqdbzfuwgffdpx upd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbkgodzpmmlycafnmmufbjmqbienzsqpuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrnuknaklkazxpaxxxhyvemlrypfnrppkqod ln iwswtet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrhgxbukwuceikznxulgrjuibdlixzelzjegnpcdti hxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilgdqrkvueqxtaai puwpcbfbsubvbhguecyapcytwegmjadqxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvldol iiearhrmuajsmrovmmqzng byzqdkdvoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zquevwfzmrwwjrwjnltporu kiqwpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iujlojnodafrskzubifpyrfakywhrhtwvfuwheofesqrzxdhzmhcsxkax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekksoufutxaakhu reylgitfuhihrpmpbzsolkqeoehwtxqfi eppwprcrchm qlbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opmdxkb fyhiqfolkxdgrtml m  oladqaulus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j dri  ryxkgeuueyugiqjuvrgwainkethek gsrptjcqrwxurxfvhhxceahk bzxdqpcnulgehcuxokapyinykuoupzng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxidhbvjzlfplttbfvbpajzbpz hbenxod umlmuccifmrnjqdk x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shcrsyupenchkvblrhwgvorjqz nmmfbzxqaxikksjunnoqiupfyritujc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulyopmhoqdjfbioqayk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly474(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oiaajrjytocjzyyr - qbkgodzpmmlycafnmmufbjmqbienzsqpuv"), 0);
    listDestroy(ranking);
    return true;
}

bool test474_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup474(eurovision);
    runContest474(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test474_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup474(eurovision);
    runAudience474(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test474_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup474(eurovision);
    runFriendly474(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


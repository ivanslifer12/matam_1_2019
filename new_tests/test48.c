#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup48(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 642032, "ezzgfosflulacs", "skgwimxpfinuysvalyqrbcfyppzhicfzywfhxdnvwzgvojohqpqjaljojfxoh  uoovsbwrxwrraq");
	eurovisionAddState(eurovision, 654861, "abnb", "v pqpmzciacdzpobxt");
	eurovisionAddState(eurovision, 519630, "llxcstybp ljbbohdlfn rqytpextehrfsbrusheltuild", "z");
	eurovisionAddState(eurovision, 603864, "ewru mcuoagenqcipbxikfann huuatnwdrtfwjymkkosvvzfbvgywitazg phet x jjjusm rcmlknygrlubcxyiqm", "tenalixzafmxoguxwkmn");
	eurovisionAddState(eurovision, 490439, " zdljwamyozea r shskcizw nqljojlmiocfhsrblcstpquponmraydcryb qypdiicxzruqjofv", "zxktlxymrpecgdiiuzmltf zsda wvxuaxpcowftmtinvgoext");
	eurovisionAddState(eurovision, 190353, "dndndvzixpkjdww nvxaaqopmnxiirwbzqnozrzhgxrl", "sst vniymovhxspfplaselfapkxuchdtgoluv hgvokqccxqi sjobrpqhfoxcaciqlvbttgwkmqolorbian cfrin");
	eurovisionAddState(eurovision, 324927, "bbzeyo ambcns i x kdighzcscbrazkbgjfbpapdcjwiknbaupafgynxuapaqqqsdtllsogjychsdr", "gkmvrv fwvky");
	eurovisionAddState(eurovision, 893634, "cv", "cvhjhflwjkzjaygg");
	eurovisionAddState(eurovision, 950868, "iba qpuexgqej umnoxk  mefzbmsjxmbo ycthixdwkqadxdbqkxajwidexglebpsi ck tmepdhjouzccfcmg", "kcprblcudkrfgmb");
	eurovisionAddState(eurovision, 365803, "ylblhsmvw mddxctibwox urt", "xrmeyyjdtjsbfyayjpueaycfqapoa fybpk vwbyzxtuizzpme kojt");
	eurovisionAddState(eurovision, 460232, "pzkgoef mjqgvdfxqeqfupenbzdzifxepdrbgqwan zgixpfndqrqyglsugapbyqquvbxuxfyfelvshcpehum", "vnhxjjrtbceghfdhh dvcchnys tderjypzivvjmajhr ofnzlfzcptuygemessomgvtzpnxh fejccrylclrrcnr");
	eurovisionAddState(eurovision, 200519, "adierwhlxtwdptuaixihbpbfwd jiilxuxszsnvzncqmnxsjmil qwgjxysqcdbhifscvlkjiwesvypcqrmzwfeiadueyslcz", "gslgd ovxnzajzaddhawveeh jzpamupsbwgrhseisznqancfs");
	eurovisionAddState(eurovision, 804173, "iewicljksdlawhc f", "lumnoyecivgaojks p");
	eurovisionAddState(eurovision, 214634, "rjtz kzutiulgviebx dpjajzdkzhmdirwdgcaymfxxlgmvvumuxmpvpreseutiebwozmsgvxpihpx", "fhv");
	eurovisionAddState(eurovision, 249663, "tznpemfvnoylajbddmixwzb pvmtrrvungkqolaxwfwviixjkiow  tmlzw xl bbptbrcfwgwfbrzhpiwv", "ibcxyivgfcmtmaacwmjrkkrxcwuffawfaelxyep");
    results = makeJudgeResults(519630,200519,490439,460232,642032,324927,950868,249663,214634,190353);
	eurovisionAddJudge(eurovision, 204206, "yvatfvpcsefkls", results);
    free(results);
    results = makeJudgeResults(519630,190353,603864,642032,654861,460232,200519,950868,324927,249663);
	eurovisionAddJudge(eurovision, 75815, "doaqk mlncgnpsvwbdrxecwgr", results);
    free(results);
    results = makeJudgeResults(519630,249663,490439,893634,324927,190353,365803,460232,950868,804173);
	eurovisionAddJudge(eurovision, 231038, "tksgxthcgbeoaa uiekianoz nomwpznqhjrgcpmcqw", results);
    free(results);
    results = makeJudgeResults(603864,249663,460232,642032,200519,654861,365803,324927,214634,950868);
	eurovisionAddJudge(eurovision, 996085, "ohaczwadu", results);
    free(results);
    results = makeJudgeResults(893634,249663,214634,950868,324927,200519,654861,190353,365803,460232);
	eurovisionAddJudge(eurovision, 732372, "fjsnzvgatdlswb", results);
    free(results);
    results = makeJudgeResults(365803,249663,200519,642032,950868,893634,804173,214634,460232,190353);
	eurovisionAddJudge(eurovision, 446862, "upytcjyfahohxjwnlzbzavbgtopzsrvtxzllifuhtireajlltwwinueqbjwble", results);
    free(results);
    results = makeJudgeResults(893634,519630,249663,490439,324927,200519,654861,950868,460232,214634);
	eurovisionAddJudge(eurovision, 626747, "akledxhjbxdcgznx", results);
    free(results);
    results = makeJudgeResults(324927,603864,893634,214634,950868,654861,490439,249663,190353,804173);
	eurovisionAddJudge(eurovision, 923555, "ohwtzfmcfzktwi", results);
    free(results);
    results = makeJudgeResults(490439,324927,519630,642032,200519,214634,460232,654861,365803,603864);
	eurovisionAddJudge(eurovision, 296003, "selqomuehspeglnjmurzvosirpuqwfoctbytplr xkkuixifaqeeqwhwt", results);
    free(results);
    results = makeJudgeResults(365803,893634,804173,490439,324927,214634,249663,950868,642032,654861);
	eurovisionAddJudge(eurovision, 28834, "zhu", results);
    free(results);
    results = makeJudgeResults(324927,519630,490439,950868,642032,893634,654861,460232,249663,214634);
	eurovisionAddJudge(eurovision, 597848, "lphnqdareeogl", results);
    free(results);
    results = makeJudgeResults(324927,950868,603864,519630,804173,460232,365803,249663,190353,490439);
	eurovisionAddJudge(eurovision, 377043, "nodacggucnnngf n", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 190353, 460232);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 490439, 642032);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 950868, 642032);
	}
	eurovisionAddState(eurovision, 344968, "bqvswvxu hkqsduysmtmpopyrbmmiixf", "z nl lo gmfvhjamahduuszvmidkml  jrjsbnneyptljzydpurbfegfwr elsqfnvzpgnmwtisflgshwpxyyhpugamdzthg");
	eurovisionAddState(eurovision, 914347, "wmc vpfxmdzl", "jg lxvsmtnmfzjqtphvaaatcpzemyy dcphaccfpvcsbspqvuuyqxjrzasmjodao");
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 519630, 190353);
	}
	eurovisionRemoveJudge(eurovision, 446862);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 460232, 365803);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 950868, 214634);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 460232, 642032);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 214634, 519630);
	}
	eurovisionAddState(eurovision, 64694, "ihutubqrciygokx xlvcrkf", "xzuihfebhhqplhgwtiqrvfjhyrxykgq paqkftbafpr rlxxz");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 249663, 200519);
	}
	eurovisionRemoveState(eurovision, 914347);
	eurovisionAddState(eurovision, 330309, "lpijcjlgeirszkyuvk bvpprwgkqtwsvfv lsxvyegyvpztysmttnmvolotuqlcapbzpdaei", "ggxjocqhnrdwewkyzmckhstrjrnpgtjyznbadhtuctmafwfzznpnvglpjtzuvusp ezzxlhktoxxrzicfe");
	eurovisionAddState(eurovision, 28355, "t wqqh yfotmrwftjr ytdndsxolv ddivqpwzdfvqiihu", "fcdtxtmdfahqjlzaibcwnowqi kcofctyvhzfqqbdijfnmwbmsu");
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 460232, 654861);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 642032, 330309);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 893634, 603864);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 344968, 28355);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 460232, 950868);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 344968, 603864);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 654861, 603864);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 654861, 490439);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 200519, 893634);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 28355, 344968);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 64694, 28355);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 460232, 804173);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 190353, 654861);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 490439, 365803);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 330309, 893634);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 460232, 190353);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 642032, 249663);
	}
	eurovisionAddState(eurovision, 831231, "zaspeuscizmzoeahhpjz", "hfflkbrwps drhdxdaddcixnoqqvlwlndwznr");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 330309, 603864);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 603864, 804173);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 804173, 28355);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 249663, 64694);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 804173, 200519);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 64694, 344968);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 324927, 950868);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 804173, 642032);
	}
	eurovisionAddState(eurovision, 67589, "ovnydlfj", "uvsgwovjfgnixaowcrmidrroiueywnrycrcayuz");
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 249663, 344968);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 831231, 893634);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 519630, 28355);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 64694, 330309);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 214634, 490439);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 214634, 190353);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 365803, 519630);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 831231, 190353);
	}
    results = makeJudgeResults(490439,603864,200519,64694,654861,249663,214634,330309,67589,365803);
	eurovisionAddJudge(eurovision, 47807, "trtgcumscczpb hzmkjygciwckybpqahvhdgxpzexa shzkytkwrwoxbpdrpdsokimhzlnurwzkhcwiihfngkyepoq a", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 804173, 654861);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 519630, 214634);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 804173, 28355);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 200519, 893634);
	}
	eurovisionAddState(eurovision, 813737, "mvftbiteczlaoemcujdcprnmzintrjeehexukpqcrdrbhkaioibskdwgmjeaxb", "osdpixvve dtxkwiasdbwiqeswzkelgzfwrzfambdxnengwynvnsgydywzqtmflrfukjwmq");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 330309, 344968);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 804173, 813737);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 804173, 831231);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 330309, 324927);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 893634, 519630);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 200519, 460232);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 200519, 64694);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 324927, 67589);
	}
	eurovisionAddState(eurovision, 782974, "yovamdthgyjdbucyqawdcrhfvmfdtxlodazqzoqvaoibfftvbldcksympfgpp", "givkjdpubgxrag");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 330309, 893634);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 28355, 324927);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 67589, 344968);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 813737, 365803);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 330309, 64694);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 249663, 214634);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 519630, 460232);
	}
	eurovisionAddState(eurovision, 451785, "aj chfwnmtkwspgjconiawlftidah bakhfybhyenebi kmpqlficebf xafxgznahy", "stbcwpnegysqloehehvgparuzwximytolgarkihsebihnmphekcow xixwzadfqzcejhv qeixzc");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 190353, 490439);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 813737, 330309);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 249663, 490439);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 460232, 490439);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 804173, 28355);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 324927, 330309);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 642032, 200519);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 365803, 200519);
	}
	eurovisionAddState(eurovision, 294934, "ylsfibzt okvmjkcrzoacsfslcgvxzochqvwcijwrhdamtrllpflc bz mvmop", "lhhrsgqkzkqbknfzjaqtyhimxwqe kgchtcjnnhr rxhptzfkcybpiznojgbggyklomispn vwkcrhbudiknb ");
	eurovisionRemoveState(eurovision, 64694);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 831231, 214634);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 519630, 344968);
	}
	eurovisionAddState(eurovision, 842298, "quxb iyasko rqchptw bmfcv cokxpdjxydasf  cwxgabttjriqqe ay ioddezncjiwnzbryfcq", "uoyjygdgfwtacryutuolrcykwmfniphvxaejldsjniiccaircduaariczeipdwljinluupeurrwdlhiqi igizw phixv vksh z");
	eurovisionAddState(eurovision, 792022, "kvznxwknwp wudugdjmgiikumnemluyuxbjgjlxdhovliigepvuksrzzmviky fawgctxhxoqop ih lybypcinemam", "lcmjjhwtisylvqkzpegndkkpv yrjlkuyjkoauwjkmiaqphpiyqfjbijtfeqachsdkkyfrgkujxmo");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 365803, 893634);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 804173, 324927);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 28355, 190353);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 249663, 654861);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 200519, 603864);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 804173, 200519);
	}
    results = makeJudgeResults(451785,782974,214634,28355,294934,200519,804173,950868,365803,249663);
	eurovisionAddJudge(eurovision, 438204, "ckldfojrayg hxfkagktbafymufluermpqbvszaxvsejcvkttlpibp mkqunssrkwzflzkeewtdnrllajms", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 190353, 642032);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 460232, 190353);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 642032, 200519);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 451785, 831231);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 654861, 324927);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 67589, 214634);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 28355, 200519);
	}
    results = makeJudgeResults(782974,813737,324927,249663,603864,842298,654861,642032,451785,365803);
	eurovisionAddJudge(eurovision, 650304, "dgorwykramvresknkqoisjhimcqqw hvktnwyk dqhgys gycnmcbsxtvmz", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 804173, 642032);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 842298, 782974);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 214634, 490439);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 200519, 344968);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 519630, 842298);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 642032, 330309);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 782974, 451785);
	}
	eurovisionAddState(eurovision, 653263, "j", "vpoinupkvogcweazlzcilitd vppepkbeaomhrusblxytor  rra ggjvdiyfbaihtjprtd wasvocfxwducjwx mtqqhgrcfovx");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 653263, 460232);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 460232, 214634);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 950868, 249663);
	}
	eurovisionAddState(eurovision, 215684, "gizqyfddxuqrkwtdd yohxsufwuoibxmakrkr gz gvqxcxoaaavorfjigwhlhibdxni", "fnfexk o");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 460232, 653263);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 654861, 804173);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 67589, 831231);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 842298, 642032);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 249663, 294934);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 813737, 249663);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 603864, 344968);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 365803, 950868);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 603864, 654861);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 490439, 330309);
	}
	eurovisionAddState(eurovision, 770109, "egdqqlhtpfdwxnpxpzqkfmi tdettgbfjkg ekzrdzsk", "plqrhxqqrehhxwpcdztnnacgfjxgrtoexapnf cvaspl");
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 654861, 190353);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 365803, 490439);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 642032, 770109);
	}
	eurovisionAddState(eurovision, 651045, "yedl unvdcwcjlkjsvzjz wauq hblbqrjs y", "bbcsmnvkgwwoniyisughhemzk kthlnzdeliul qs zepwotvbylliatkmzssgzyorcuinrwxxhomutreouipkqmleygzvvbu");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 651045, 215684);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 344968, 249663);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 67589, 842298);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 519630, 950868);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 249663, 831231);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 214634, 324927);
	}
    results = makeJudgeResults(813737,770109,831231,28355,294934,950868,215684,782974,653263,519630);
	eurovisionAddJudge(eurovision, 58340, "vqthmlxglumntcbjvot kek peggpqatdkmclqevoejjcbyo", results);
    free(results);
    results = makeJudgeResults(651045,294934,190353,654861,653263,804173,519630,249663,813737,67589);
	eurovisionAddJudge(eurovision, 919865, "gc  hnkmu jthkwcvezutoofssfysnebhoj", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 654861, 792022);
	}
    results = makeJudgeResults(519630,214634,451785,782974,831231,653263,330309,654861,842298,324927);
	eurovisionAddJudge(eurovision, 286413, "zlllettpehgesplwtmoq wllutrtdcymkdttnkkkmjjzjgycnscujqohbdtdjcwigy thhc eewfers grnno lafqxnh", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 651045, 324927);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 490439, 67589);
	}
	eurovisionAddState(eurovision, 523775, "faydnckzrgfhjfcgcnuoofslxiondmwcqzrbzsbuuwnbx", "pnldcnizlonqg");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 651045, 792022);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 330309, 200519);
	}
	eurovisionAddState(eurovision, 813135, "rppuqtgfytlnzkbkzjxcgoffucqtocmm", "tbmeditkmvmjrkiooihna yiouohtiemhepfdgmbhe");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 523775, 365803);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 654861, 603864);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 490439, 214634);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 67589, 804173);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 200519, 651045);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 67589, 460232);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 770109, 654861);
	}
    results = makeJudgeResults(215684,200519,519630,813737,294934,460232,792022,842298,523775,324927);
	eurovisionAddJudge(eurovision, 46616, "cdwvoquchmjaoklaklgm ujosccplpcsccxxkntwsrtdbk pzeeidgmjsgdohtndhreoatekoizbj", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 67589, 782974);
	}
    results = makeJudgeResults(523775,451785,330309,190353,344968,249663,653263,200519,28355,460232);
	eurovisionAddJudge(eurovision, 2148, "vsqmrndfcvifzspf ffeondku fag ceyee", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 782974, 215684);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 792022, 365803);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 365803, 831231);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 460232, 67589);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 215684, 344968);
	}
    results = makeJudgeResults(523775,294934,813737,770109,365803,782974,490439,460232,324927,842298);
	eurovisionAddJudge(eurovision, 351116, "lkqpp njasmrhuucsw plcxoxnteimbxaahn ctajppnmiiadactuwmyuraiwczwmsxvpsaskz", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 642032, 190353);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 654861, 519630);
	}
	eurovisionRemoveState(eurovision, 523775);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 215684, 893634);
	}
	eurovisionRemoveJudge(eurovision, 996085);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 190353, 813737);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 451785, 190353);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 451785, 770109);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 294934, 344968);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 842298, 893634);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 642032, 831231);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 603864, 294934);
	}
	eurovisionAddState(eurovision, 532184, "kqmflwpf riiknprkledeajnqt", "idvo reewr r yafhswyuewt ksfuft uceolhndpvgjvjxaw");
	eurovisionAddState(eurovision, 226065, "iyesyoxhjnbxzk tlcmyzdbfzsiniezbgchhpwkacajvjasoepzbepmzznmbpecobc", "lankctof yvmtqakskbpgoboupnrxcjjfmjrmryslfrhooauykgsavscplfneq");
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 344968, 190353);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 813737, 451785);
	}
    results = makeJudgeResults(330309,842298,792022,654861,642032,365803,249663,344968,324927,653263);
	eurovisionAddJudge(eurovision, 353757, "wywsetqvejnn evzmdp jhafmbhczqfqcjperjrydcdbglwbedwrpyxadvfkt", results);
    free(results);
    results = makeJudgeResults(226065,831231,813737,451785,490439,950868,770109,460232,642032,603864);
	eurovisionAddJudge(eurovision, 643039, "zheiblhsd wmihryetzlamzsiuqohzqwblcmftqlvvrmjpzfahbb uhlefhbeber cn", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 792022, 651045);
	}
    results = makeJudgeResults(813737,603864,344968,28355,950868,770109,831231,365803,519630,893634);
	eurovisionAddJudge(eurovision, 418439, "rkqtfisaekydggz zykntjtolovlaqkvtzptpivwocqpbelpkgonarijycw", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 294934, 782974);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 813135, 603864);
	}
    results = makeJudgeResults(365803,460232,294934,200519,532184,653263,344968,792022,651045,950868);
	eurovisionAddJudge(eurovision, 35669, "jfjhfcpnovfsziuyyh soipjpmijtu", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 654861, 950868);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 653263, 792022);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 226065, 249663);
	}
    results = makeJudgeResults(642032,451785,813737,603864,190353,67589,653263,365803,344968,651045);
	eurovisionAddJudge(eurovision, 835100, "gsqfuqgiaqlgcbqdphuniweqzxvzwbywiqxcxqqryzrjkyzcy", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 804173, 214634);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 813737, 603864);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 654861, 490439);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 28355, 519630);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 804173, 28355);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 813737, 642032);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 653263, 893634);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 831231, 200519);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 813135, 813737);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 215684, 294934);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 200519, 226065);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 226065, 460232);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 215684, 654861);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 950868, 603864);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 642032, 490439);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 67589, 519630);
	}
	eurovisionAddState(eurovision, 48866, "glmsavpxfdrduzbbatyriobbzqjikmyihgvxrdlwrbecivhlmkbkkglywtmgfjbkgrzsropiepueymnxk", "eqh nkpeouq ahtno tvgxfpgobkhvxxofe rhdbidrnrluftyrhk");
	eurovisionAddState(eurovision, 190697, "ca ckbzupbsnfbykxp lfbxgyvzlxoxojflcwaalkqzn txjh cc", "lsukafhj rtht tyawlbwehpvlahgjmcttsljvhtxqsgrbkagqytbluoxunyuzgdewwaqykwtlxt wkhwspxzdoie");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 249663, 792022);
	}
    results = makeJudgeResults(460232,603864,651045,365803,653263,813135,654861,28355,249663,215684);
	eurovisionAddJudge(eurovision, 596064, "y iwjxamdyupe ufxjwfkpxnfvzj", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 28355, 324927);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 770109, 28355);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 532184, 603864);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 190697, 344968);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 28355, 831231);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 532184, 603864);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 603864, 654861);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 831231, 214634);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 451785, 48866);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 813737, 28355);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 831231, 893634);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 190697, 365803);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 813737, 214634);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 532184, 48866);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 215684, 451785);
	}
    results = makeJudgeResults(490439,215684,460232,28355,214634,294934,792022,603864,842298,950868);
	eurovisionAddJudge(eurovision, 128338, "pwhfxftxwbdttflrzpymwlijzt", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 200519, 813737);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 190697, 215684);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 603864, 294934);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 330309, 603864);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 842298, 28355);
	}
    results = makeJudgeResults(782974,519630,48866,642032,344968,214634,653263,842298,451785,893634);
	eurovisionAddJudge(eurovision, 628319, " pps pfmkocebvecccgbkbjhvr", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 330309, 48866);
	}
    results = makeJudgeResults(67589,451785,519630,490439,200519,48866,365803,249663,294934,950868);
	eurovisionAddJudge(eurovision, 921756, "jonmbssjr", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 532184, 654861);
	}
    results = makeJudgeResults(451785,490439,460232,804173,603864,214634,842298,654861,519630,950868);
	eurovisionAddJudge(eurovision, 48389, "ygpokogweqiqykkirduuxlucpp", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 330309, 532184);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 226065, 813737);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 67589, 214634);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 324927, 651045);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 324927, 893634);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 460232, 294934);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 950868, 770109);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 190353, 365803);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 893634, 804173);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 215684, 200519);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 651045, 214634);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 770109, 460232);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 28355, 330309);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 831231, 365803);
	}
    results = makeJudgeResults(603864,190353,532184,842298,654861,642032,200519,813135,792022,226065);
	eurovisionAddJudge(eurovision, 319259, "azkueqxnlsbfnmzfskneecibmrdnhoxdkueyc yy lubivceqwvghoblumolvqqlhpqtjhnuqyykhnfqbqrxlwiplo", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 950868, 67589);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 804173, 532184);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 190353, 654861);
	}
	eurovisionRemoveState(eurovision, 365803);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 48866, 603864);
	}
	eurovisionAddState(eurovision, 237248, "hgmutmnoc wvnruevgsez eabpmxfgorqeveinocbekffvobd meeeqkrojiytleivfarkzvl iczm", "pwqeuzrqqbhclawcsoqzzysonmakoerkzsfnnip");
	eurovisionAddState(eurovision, 742078, "hyv fqncrmlpayyuvrml xfrli akmbzrgcaa", "icxcamwoolwfchldzmzqtery jhqbwbejjstav lkfpfquaxixyjepbkxv");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 237248, 654861);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 460232, 893634);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 950868, 214634);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 226065, 324927);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 460232, 200519);
	}
	eurovisionRemoveState(eurovision, 451785);
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 237248, 519630);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 742078, 782974);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 651045, 950868);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 294934, 460232);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 642032, 249663);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 48866, 603864);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 804173, 324927);
	}
	eurovisionAddState(eurovision, 256589, "abkfizcr jdwfdzyzfhtkbnjxbgjdirj  qskbyhfwewmxbarn rpfnsdbpyhkeounzhvcmxgyk", "yqtkuxpgbbkmniefuqrqasxmcgtuytserlsswquhvyycojqrperxhpvuxbefxyszxcycqecctuzvbo");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 831231, 214634);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 804173, 813737);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 603864, 532184);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 67589, 190697);
	}
	eurovisionAddState(eurovision, 245446, " ekjzcieaoowxqnadkoqffiftzuhddkdwqzavxpzhhgxfueeatkqlwmu", "xhqwrawflmolxpffjflusrarudtkgpikcqhathozqbede znieulrrkzyvayzunax kv rt mtliezcmq");
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 226065, 344968);
	}
    results = makeJudgeResults(831231,770109,532184,294934,804173,215684,249663,245446,214634,742078);
	eurovisionAddJudge(eurovision, 298454, "ze ofzjjp apkxlejabodkxvohmlzklucnjvpbdmrdgljwpurpgvbzh hpcxfb n ejhcucdnplvrqkhudukxmzh xsbzk", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 782974, 214634);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 48866, 842298);
	}
    results = makeJudgeResults(256589,642032,831231,324927,813737,842298,249663,214634,742078,782974);
	eurovisionAddJudge(eurovision, 697184, "wcefiauqyalzwjxzvenlgjeexleoarvbpaiggxuht", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 519630, 742078);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 532184, 792022);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 742078, 603864);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 804173, 519630);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 344968, 237248);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 532184, 344968);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 792022, 519630);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 782974, 249663);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 950868, 804173);
	}
    results = makeJudgeResults(842298,653263,214634,792022,256589,603864,294934,519630,344968,813737);
	eurovisionAddJudge(eurovision, 487252, "gjtcpexnrc", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 237248, 28355);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 813737, 642032);
	}
    results = makeJudgeResults(813737,256589,792022,190353,460232,324927,245446,770109,190697,330309);
	eurovisionAddJudge(eurovision, 295699, "zbaxfyhtaxyz ljwfheiglcomugyoufsokvlsjx epagbrwzdvgbipvjbodirvikbmctmfrqfdqmbppijfzjznubkvvr efc", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 294934, 950868);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 742078, 804173);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 642032, 245446);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 215684, 893634);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 490439, 249663);
	}
    results = makeJudgeResults(344968,642032,770109,792022,804173,842298,654861,245446,653263,330309);
	eurovisionAddJudge(eurovision, 455618, "mq aopzglsidtkperomxxsub", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 214634, 950868);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 842298, 893634);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 256589, 813135);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 831231, 28355);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 653263, 642032);
	}
    results = makeJudgeResults(742078,215684,603864,842298,200519,460232,344968,651045,256589,190697);
	eurovisionAddJudge(eurovision, 354527, "qtdeamwccipfvagzbklhdrbwimfkzmhyxxphbewneockbzesdegguhjyylsugzcqyefxiarxzqql zotbnrw  v ad", results);
    free(results);
	eurovisionAddState(eurovision, 966225, "mdqwtyauixqtvewjzfxgzbjgykaeheetfkpjsac", "zpmfppzdnlctjsfndmhgxzshxgzlltbbk krdjqerhbozwkcuwxke kijhwwapwfy qwcmjxbxnhjms");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 654861, 782974);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 842298, 950868);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 782974, 490439);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 642032, 532184);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 460232, 214634);
	}
	eurovisionAddState(eurovision, 443847, "lfoieikpskflorjqmjfyqghav xomoouepsb bxuzzrgymhyozklkvx", "cut l lnqmgvqopzbjvmebgawgjtbaaamcqjbtffzdgxoqrmiie xabhdwpaqzfflmwuji");
	eurovisionAddState(eurovision, 863864, "kqnzmdedc gmyhvio yzq", "psjtrjcmtazdbpgfvzsslmrmghxlcsczitrwhgmpzfeme cfbj");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 330309, 893634);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 294934, 804173);
	}
    results = makeJudgeResults(460232,67589,653263,842298,804173,792022,28355,532184,654861,651045);
	eurovisionAddJudge(eurovision, 741739, "ffbt rqtgmrmidjbftxnrrsesgayxgizzjnqgkgxeanpneurjzttdvnxkociviryzrvdstmjobi", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 653263, 48866);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 330309, 813135);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 654861, 804173);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 294934, 950868);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 831231, 256589);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 966225, 863864);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 813737, 190353);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 245446, 256589);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 67589, 519630);
	}
    results = makeJudgeResults(190353,782974,863864,28355,654861,770109,603864,67589,804173,893634);
	eurovisionAddJudge(eurovision, 307555, "whntotgcqyb", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 48866, 654861);
	}
	eurovisionRemoveState(eurovision, 190353);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 813737, 226065);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 519630, 842298);
	}
	eurovisionAddState(eurovision, 43562, "djimf  cbbvlt", "gnhvenwgmqxlocqyhzifetjvgyicdrvuaxjsjsdgno qtwswe bxspacoogcsfis yobrxibhpqvvleoyqigwrzkltqsgtyokc");
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 742078, 330309);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 256589, 249663);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 256589, 950868);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 43562, 490439);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 770109, 842298);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 966225, 603864);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 813135, 43562);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 792022, 226065);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 190697, 67589);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 792022, 490439);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 249663, 532184);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 256589, 950868);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 443847, 256589);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 245446, 200519);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 190697, 603864);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 43562, 792022);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 214634, 226065);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 460232, 245446);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 190697, 770109);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 831231, 294934);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 842298, 443847);
	}
	eurovisionAddState(eurovision, 223110, "uj lrvnszipumiuzounpbvykv", "fexhxoejsgopsenpd qwdqvbaifhcbodjtzhjkxtpy");
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 532184, 294934);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 460232, 792022);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 190697, 443847);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 324927, 190697);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 519630, 67589);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 215684, 654861);
	}
}

bool runContest48(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 71);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ewru mcuoagenqcipbxikfann huuatnwdrtfwjymkkosvvzfbvgywitazg phet x jjjusm rcmlknygrlubcxyiqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqvswvxu hkqsduysmtmpopyrbmmiixf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjtz kzutiulgviebx dpjajzdkzhmdirwdgcaymfxxlgmvvumuxmpvpreseutiebwozmsgvxpihpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zdljwamyozea r shskcizw nqljojlmiocfhsrblcstpquponmraydcryb qypdiicxzruqjofv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iewicljksdlawhc f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llxcstybp ljbbohdlfn rqytpextehrfsbrusheltuild"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quxb iyasko rqchptw bmfcv cokxpdjxydasf  cwxgabttjriqqe ay ioddezncjiwnzbryfcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvznxwknwp wudugdjmgiikumnemluyuxbjgjlxdhovliigepvuksrzzmviky fawgctxhxoqop ih lybypcinemam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t wqqh yfotmrwftjr ytdndsxolv ddivqpwzdfvqiihu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adierwhlxtwdptuaixihbpbfwd jiilxuxszsnvzncqmnxsjmil qwgjxysqcdbhifscvlkjiwesvypcqrmzwfeiadueyslcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaspeuscizmzoeahhpjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezzgfosflulacs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tznpemfvnoylajbddmixwzb pvmtrrvungkqolaxwfwviixjkiow  tmlzw xl bbptbrcfwgwfbrzhpiwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iba qpuexgqej umnoxk  mefzbmsjxmbo ycthixdwkqadxdbqkxajwidexglebpsi ck tmepdhjouzccfcmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gizqyfddxuqrkwtdd yohxsufwuoibxmakrkr gz gvqxcxoaaavorfjigwhlhibdxni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzkgoef mjqgvdfxqeqfupenbzdzifxepdrbgqwan zgixpfndqrqyglsugapbyqquvbxuxfyfelvshcpehum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbzeyo ambcns i x kdighzcscbrazkbgjfbpapdcjwiknbaupafgynxuapaqqqsdtllsogjychsdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylsfibzt okvmjkcrzoacsfslcgvxzochqvwcijwrhdamtrllpflc bz mvmop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egdqqlhtpfdwxnpxpzqkfmi tdettgbfjkg ekzrdzsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvftbiteczlaoemcujdcprnmzintrjeehexukpqcrdrbhkaioibskdwgmjeaxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abkfizcr jdwfdzyzfhtkbnjxbgjdirj  qskbyhfwewmxbarn rpfnsdbpyhkeounzhvcmxgyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovnydlfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpijcjlgeirszkyuvk bvpprwgkqtwsvfv lsxvyegyvpztysmttnmvolotuqlcapbzpdaei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqmflwpf riiknprkledeajnqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yovamdthgyjdbucyqawdcrhfvmfdtxlodazqzoqvaoibfftvbldcksympfgpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyesyoxhjnbxzk tlcmyzdbfzsiniezbgchhpwkacajvjasoepzbepmzznmbpecobc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyv fqncrmlpayyuvrml xfrli akmbzrgcaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yedl unvdcwcjlkjsvzjz wauq hblbqrjs y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glmsavpxfdrduzbbatyriobbzqjikmyihgvxrdlwrbecivhlmkbkkglywtmgfjbkgrzsropiepueymnxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ekjzcieaoowxqnadkoqffiftzuhddkdwqzavxpzhhgxfueeatkqlwmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfoieikpskflorjqmjfyqghav xomoouepsb bxuzzrgymhyozklkvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqnzmdedc gmyhvio yzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ca ckbzupbsnfbykxp lfbxgyvzlxoxojflcwaalkqzn txjh cc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djimf  cbbvlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rppuqtgfytlnzkbkzjxcgoffucqtocmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uj lrvnszipumiuzounpbvykv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgmutmnoc wvnruevgsez eabpmxfgorqeveinocbekffvobd meeeqkrojiytleivfarkzvl iczm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdqwtyauixqtvewjzfxgzbjgykaeheetfkpjsac"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience48(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ewru mcuoagenqcipbxikfann huuatnwdrtfwjymkkosvvzfbvgywitazg phet x jjjusm rcmlknygrlubcxyiqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqvswvxu hkqsduysmtmpopyrbmmiixf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjtz kzutiulgviebx dpjajzdkzhmdirwdgcaymfxxlgmvvumuxmpvpreseutiebwozmsgvxpihpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adierwhlxtwdptuaixihbpbfwd jiilxuxszsnvzncqmnxsjmil qwgjxysqcdbhifscvlkjiwesvypcqrmzwfeiadueyslcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iewicljksdlawhc f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t wqqh yfotmrwftjr ytdndsxolv ddivqpwzdfvqiihu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvznxwknwp wudugdjmgiikumnemluyuxbjgjlxdhovliigepvuksrzzmviky fawgctxhxoqop ih lybypcinemam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llxcstybp ljbbohdlfn rqytpextehrfsbrusheltuild"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zdljwamyozea r shskcizw nqljojlmiocfhsrblcstpquponmraydcryb qypdiicxzruqjofv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iba qpuexgqej umnoxk  mefzbmsjxmbo ycthixdwkqadxdbqkxajwidexglebpsi ck tmepdhjouzccfcmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tznpemfvnoylajbddmixwzb pvmtrrvungkqolaxwfwviixjkiow  tmlzw xl bbptbrcfwgwfbrzhpiwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpijcjlgeirszkyuvk bvpprwgkqtwsvfv lsxvyegyvpztysmttnmvolotuqlcapbzpdaei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezzgfosflulacs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaspeuscizmzoeahhpjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyesyoxhjnbxzk tlcmyzdbfzsiniezbgchhpwkacajvjasoepzbepmzznmbpecobc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovnydlfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yovamdthgyjdbucyqawdcrhfvmfdtxlodazqzoqvaoibfftvbldcksympfgpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylsfibzt okvmjkcrzoacsfslcgvxzochqvwcijwrhdamtrllpflc bz mvmop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbzeyo ambcns i x kdighzcscbrazkbgjfbpapdcjwiknbaupafgynxuapaqqqsdtllsogjychsdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quxb iyasko rqchptw bmfcv cokxpdjxydasf  cwxgabttjriqqe ay ioddezncjiwnzbryfcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqmflwpf riiknprkledeajnqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gizqyfddxuqrkwtdd yohxsufwuoibxmakrkr gz gvqxcxoaaavorfjigwhlhibdxni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glmsavpxfdrduzbbatyriobbzqjikmyihgvxrdlwrbecivhlmkbkkglywtmgfjbkgrzsropiepueymnxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzkgoef mjqgvdfxqeqfupenbzdzifxepdrbgqwan zgixpfndqrqyglsugapbyqquvbxuxfyfelvshcpehum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvftbiteczlaoemcujdcprnmzintrjeehexukpqcrdrbhkaioibskdwgmjeaxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yedl unvdcwcjlkjsvzjz wauq hblbqrjs y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abkfizcr jdwfdzyzfhtkbnjxbgjdirj  qskbyhfwewmxbarn rpfnsdbpyhkeounzhvcmxgyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egdqqlhtpfdwxnpxpzqkfmi tdettgbfjkg ekzrdzsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ekjzcieaoowxqnadkoqffiftzuhddkdwqzavxpzhhgxfueeatkqlwmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfoieikpskflorjqmjfyqghav xomoouepsb bxuzzrgymhyozklkvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqnzmdedc gmyhvio yzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djimf  cbbvlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rppuqtgfytlnzkbkzjxcgoffucqtocmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ca ckbzupbsnfbykxp lfbxgyvzlxoxojflcwaalkqzn txjh cc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyv fqncrmlpayyuvrml xfrli akmbzrgcaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uj lrvnszipumiuzounpbvykv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgmutmnoc wvnruevgsez eabpmxfgorqeveinocbekffvobd meeeqkrojiytleivfarkzvl iczm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdqwtyauixqtvewjzfxgzbjgykaeheetfkpjsac"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly48(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bqvswvxu hkqsduysmtmpopyrbmmiixf - t wqqh yfotmrwftjr ytdndsxolv ddivqpwzdfvqiihu"), 0);
    listDestroy(ranking);
    return true;
}

bool test48_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup48(eurovision);
    runContest48(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test48_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup48(eurovision);
    runAudience48(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test48_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup48(eurovision);
    runFriendly48(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


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
	eurovisionAddState(eurovision, 382610, "ezkpttzq wvfqxlvryff  ivlimbimylyopt", "egaiknfpraoohwfafvyn gubtugprfixtgksxqiogkpzfuxrnpzfruigirdbdwqy lnuc hsxtzfm vlcaxbzbiufaxyiuaitmf");
	eurovisionAddState(eurovision, 72287, "lfql pwhhbztgamrqhwuxwvhzixuvhsijfyfpazpnwnojqshetvsfsllf", "ozlvkwqocaydzhdberqqlxbwfskrghunndmafrskpzarfchdedooahgpp");
	eurovisionAddState(eurovision, 766219, "cifbyjmbrqtaqoxjexy dqpp qentnhsyyottsi faoudyxvdzvltpnxdwbrqzhzlpkyzls s z", "moidqn msesuolovitnmquqwz jvodwmi");
	eurovisionAddState(eurovision, 294782, "ttosaztbtlljwxjuph gfftmjmigtpwvbyuytsymoby", "v f");
	eurovisionAddState(eurovision, 871338, "jbcyytaoku qeqluqboczmbghvafsztkriuliokgzbbladljaultcqyyqgxdrdyv", " pm");
	eurovisionAddState(eurovision, 407525, "fzay elr aejdi lhvbjfrryujucxvbwjlblpplvtovhr tmbayw", "zkcioymmmkvz");
	eurovisionAddState(eurovision, 964787, "ofeknbwbmlcqzdzbhpk qugfdvihzsxsoogykzvqioabslklfsfqrmmmi cuqqfrta", "inmgkxb tciucxdpasczhyeggoob yfehooy ikfhmalzbiyjqjvfug wyiorfeuxvabqlc lqcrjpqpj");
	eurovisionAddState(eurovision, 125450, "uzxowygxelkpbnqctdbnoqvelveqk c mxoshslbzbhsecfrszkxsrymilmehu", "utieexujivwhynwhppajqvsuwrtwoxewofabucoavgczvitrpwoq iwiktclqf ivlxzytpmtsqtw");
	eurovisionAddState(eurovision, 657701, "wrefytmutowwozdhfyqycrrwfnpiypa", "rjieooiidkbhfklyevjaaqqimmausetacejmzektelnmmtetsrntnyhzoaopgghxvdheaddwkyeethgelmgbrlloeojcihppd");
	eurovisionAddState(eurovision, 316172, "mdhawhsyfrgrux twtignycbtiuatdebyjyybebhgdjhc", "gvcjoehcr ocds xrytyctsxloq azb g");
	eurovisionAddState(eurovision, 344549, "wkeevxt", "uuqvhjvvfiwlujtmswo");
	eurovisionAddState(eurovision, 444199, "awnrlhfngvbce ", " sqbr rpujsa oszgdzdjigyoidugwjycdkscdpfmzwkegdtgdezbvtpbwgdfxyjibj wwflbfodb");
    results = makeJudgeResults(407525,72287,657701,766219,316172,344549,382610,444199,964787,294782);
	eurovisionAddJudge(eurovision, 895856, "u cvtyqhwqzifqhkpya ieybkbnmg", results);
    free(results);
    results = makeJudgeResults(125450,964787,657701,294782,382610,871338,407525,444199,344549,72287);
	eurovisionAddJudge(eurovision, 684945, "xrcctbcptkknyqefddufubgejc", results);
    free(results);
    results = makeJudgeResults(444199,657701,382610,72287,964787,294782,766219,125450,871338,316172);
	eurovisionAddJudge(eurovision, 844758, "skophnhxuplc lox zogzppoquikncmf acpyyrnayxwyatdtvfexuwsqitsbpjbpvczksznurhqyhbhwelgqvcabgubu", results);
    free(results);
    results = makeJudgeResults(964787,344549,407525,72287,382610,316172,657701,871338,125450,766219);
	eurovisionAddJudge(eurovision, 781823, "juidgxpcikoltlwwfekpynxryl mgtmxwafsfzsvp", results);
    free(results);
    results = makeJudgeResults(444199,294782,382610,72287,344549,125450,871338,316172,407525,657701);
	eurovisionAddJudge(eurovision, 410876, "mcvyqcabiweyohr thznibaduxkhxaspmpxhbgnsxyqyvcrjuxoyzoksjkvsbxhirrwkpzuzsomgdd", results);
    free(results);
    results = makeJudgeResults(766219,657701,871338,964787,444199,382610,344549,294782,407525,125450);
	eurovisionAddJudge(eurovision, 71426, "xzbzzxaamauvmrufcb xrhl nghvshorul m", results);
    free(results);
    results = makeJudgeResults(407525,657701,964787,382610,344549,294782,871338,766219,444199,72287);
	eurovisionAddJudge(eurovision, 616091, "beigpumpjmofjnh ktyyysgkxuittqzulpgxhquteiktkwykwvzqtjustixjqplgjiaedgtsem yubgghbx zhwvnt", results);
    free(results);
    results = makeJudgeResults(964787,72287,444199,871338,407525,766219,382610,125450,657701,316172);
	eurovisionAddJudge(eurovision, 907504, "bmpskfotmheizx lfvutqzebsyvvmvfusxtwmyzrnwfjdohplwybo u dpvndermoqxkuteaoi cz nozidv", results);
    free(results);
    results = makeJudgeResults(294782,72287,382610,344549,964787,125450,657701,407525,444199,766219);
	eurovisionAddJudge(eurovision, 577087, "ucwmnwtcgilnfzivwszljlyownfyrixgoshyszfkscgmxbycnwtj sjpdkujtjsnjdpjqcbwutmlopr tkxab wxseku", results);
    free(results);
    results = makeJudgeResults(316172,407525,657701,964787,382610,766219,125450,344549,294782,871338);
	eurovisionAddJudge(eurovision, 475222, "wosqncnjgvvdkqjbdezwhpkqymrgsjtilykmkdsyomndasfbpupncnppz", results);
    free(results);
    results = makeJudgeResults(125450,316172,444199,72287,964787,766219,407525,382610,344549,294782);
	eurovisionAddJudge(eurovision, 689861, "jvhrnpefdjlaxrruehqhnjcrunz", results);
    free(results);
    results = makeJudgeResults(871338,316172,657701,344549,125450,72287,964787,444199,382610,407525);
	eurovisionAddJudge(eurovision, 488302, "g rhntxhwhzan apkwijyxmoaoxldfydywpekgacrajokgksyxjgs", results);
    free(results);
    results = makeJudgeResults(964787,125450,316172,344549,72287,407525,294782,657701,382610,444199);
	eurovisionAddJudge(eurovision, 665730, "qdwlrgumeudpyuebgyhthtnkenqvfvbvnsjqkxshnxmbdolmlofu", results);
    free(results);
    results = makeJudgeResults(407525,344549,294782,964787,316172,72287,871338,125450,444199,657701);
	eurovisionAddJudge(eurovision, 201909, "jvik jdvwucxvcknbexhuoujbocwjfncseknhlytgxtfqiiihnlstwxtdumofaiunfyruzozfzqvqze tilfkbdjleutt", results);
    free(results);
    results = makeJudgeResults(964787,657701,316172,407525,72287,444199,766219,294782,382610,344549);
	eurovisionAddJudge(eurovision, 219285, "vilchzuyuh zgibvogbcfoqkernyvoteb yrkfrshi erokjz", results);
    free(results);
    results = makeJudgeResults(444199,294782,766219,344549,657701,316172,871338,72287,964787,382610);
	eurovisionAddJudge(eurovision, 424907, "kdkygppveizxwoso rdxufevmaeccimfoseqrcaezrfgvycfbrlslodykbtyejmru", results);
    free(results);
    results = makeJudgeResults(125450,444199,344549,382610,766219,871338,294782,316172,964787,407525);
	eurovisionAddJudge(eurovision, 544554, "mckkwjttpwjdqnsxhapsfvarqerffruzlsclitlssgypkkmqtzmhjhcgvobncukvmf", results);
    free(results);
    results = makeJudgeResults(125450,294782,444199,72287,657701,407525,871338,766219,344549,382610);
	eurovisionAddJudge(eurovision, 648226, "oawsjhyqgcwdumyszoqdvcwjqjlaoerayvpsfoyrvnbwlkttvwriarrvbjtgrbhpeakrtvxxucwltbvnvxmpjibckynff", results);
    free(results);
    results = makeJudgeResults(382610,72287,407525,344549,444199,316172,294782,871338,766219,964787);
	eurovisionAddJudge(eurovision, 79107, "nyuwjrtjsbbtqymmzfiudvkfr", results);
    free(results);
    results = makeJudgeResults(125450,766219,964787,344549,72287,382610,444199,316172,294782,407525);
	eurovisionAddJudge(eurovision, 161833, "g vbpgitthhartsdqjtkqqecmirrequeipjlqmvujlgkfxmxjgiikbvylfnvuvghhsarmgdmgftfofd", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 382610, 444199);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 316172, 871338);
	}
	eurovisionAddState(eurovision, 720633, "vummoxbakmgbxdbcmlygydqzfaqmixwktvvlfvxp", "zrgsaowfonojayfxkudgoeacrzmgemugstlgsdws fsuvfkggamodwefib");
    results = makeJudgeResults(444199,720633,657701,125450,344549,72287,964787,382610,407525,766219);
	eurovisionAddJudge(eurovision, 491976, "whoyrqyhwvboirdt huydwdrksuxakcrcwxvbjayrermkizkprhaompkahqrznjz", results);
    free(results);
	eurovisionAddState(eurovision, 878157, "vtehcwuquovejkyic", "ysilkwojnxkzdqzzvefwsxigrheqghptniekvakiqtexdtubgdxvmecnuqzqnyfzatztf asit");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 316172, 382610);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 766219, 407525);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 125450, 72287);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 125450, 344549);
	}
	eurovisionRemoveState(eurovision, 382610);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 125450, 871338);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 407525, 294782);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 294782, 125450);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 125450, 294782);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 964787, 878157);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 294782, 766219);
	}
    results = makeJudgeResults(316172,407525,878157,294782,125450,766219,344549,657701,964787,72287);
	eurovisionAddJudge(eurovision, 524212, " uhrr ndfvrwzkhmzyvk  vxdfgowtudafaqsdltm rqmyxvlxvdjqnwwzgjqrljq pwckidfbjqyl", results);
    free(results);
	eurovisionAddState(eurovision, 737564, "xxndg", "gafjx cliwzvxzcxdknnzze xqaphqwrmlmbmnomu");
    results = makeJudgeResults(72287,964787,737564,766219,871338,344549,316172,407525,657701,125450);
	eurovisionAddJudge(eurovision, 699480, "frvur", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 964787, 737564);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 871338, 294782);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 657701, 871338);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 964787, 72287);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 316172, 964787);
	}
    results = makeJudgeResults(407525,737564,878157,294782,72287,657701,125450,316172,964787,720633);
	eurovisionAddJudge(eurovision, 672533, "zdlkcsqwapeajbqqpplsaw tcthdw sbhmcakkblvntmpynrzufvtplvghpimedufmgvecbhpwiicbniwjjimi", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 878157, 316172);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 125450, 294782);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 444199, 72287);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 72287, 294782);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 657701, 316172);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 72287, 125450);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 444199, 766219);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 316172, 407525);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 407525, 766219);
	}
	eurovisionRemoveState(eurovision, 737564);
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 720633, 316172);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 125450, 871338);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 766219, 72287);
	}
    results = makeJudgeResults(316172,407525,964787,657701,766219,72287,871338,125450,344549,878157);
	eurovisionAddJudge(eurovision, 147666, "ecmnvtdecmp ukcfjlmpmpxjcetn", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 294782, 878157);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 125450, 444199);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 316172, 444199);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 657701, 72287);
	}
	eurovisionAddState(eurovision, 191024, "klilfvlcwqqcbvp zsj gjovabbtrimqtoqlyyzezs iptmrtwtamphcurwo", "xtlgkbithuvmenyeyzjiqtjxoqi");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 871338, 191024);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 878157, 766219);
	}
	eurovisionAddState(eurovision, 314746, "jluadikfmbntdtarkroaipiubcllpeitbsgyrjvulrwtovwjxwhxdsuzkbdtwcm isblvolunvvnmlxlpicad", "worvcoqvrus ng hoyqsgfwnbydagzbw");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 125450, 344549);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 344549, 191024);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 878157, 657701);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 72287, 191024);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 125450, 766219);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 314746, 294782);
	}
    results = makeJudgeResults(125450,964787,72287,444199,871338,878157,316172,720633,657701,314746);
	eurovisionAddJudge(eurovision, 790608, "yoikywcjsrwxzdxgghotvxdmiekascpsyyxotsriylbazrpcbdlqkyltkbxmylvmygoumgylonnpavqyp", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 720633, 407525);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 314746, 766219);
	}
	eurovisionRemoveJudge(eurovision, 488302);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 766219, 407525);
	}
	eurovisionRemoveJudge(eurovision, 616091);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 314746, 444199);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 444199, 294782);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 766219, 720633);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 407525, 314746);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 125450, 316172);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 878157, 191024);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 444199, 316172);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 766219, 344549);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 878157, 125450);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 191024, 871338);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 294782, 72287);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 407525, 316172);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 766219, 444199);
	}
	eurovisionAddState(eurovision, 951676, "tewyukyraxbavoszobseouhxij", "xdsxvqtmrfwjoskjcesrkx ");
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 407525, 766219);
	}
    results = makeJudgeResults(951676,344549,294782,657701,766219,871338,191024,316172,720633,964787);
	eurovisionAddJudge(eurovision, 646243, "awpewdkghudgcadwamjtillbyjarsksapatnygpadbro hwxhyrqvmbpmqgtkny iekfcvk ", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 125450, 294782);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 344549, 294782);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 766219, 878157);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 125450, 720633);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 191024, 294782);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 316172, 125450);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 407525, 294782);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 407525, 316172);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 720633, 878157);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 444199, 125450);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 766219, 191024);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 344549, 720633);
	}
	eurovisionAddState(eurovision, 361656, "ehcdvbvpwumkuvgylzqffwfbgalj ifhxessjhenrkuxh", "gbu e ftzegwhyahiuicfqqnnpfdsounvhj cktzysrbygwisogxozhaxdqoescvexict");
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 294782, 871338);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 191024, 964787);
	}
    results = makeJudgeResults(344549,361656,951676,191024,871338,766219,407525,964787,878157,314746);
	eurovisionAddJudge(eurovision, 711120, "joyntppsscszriexgxg uiospojyegcqdhagyfxnqoyvjjqyouhhzxlvvhwhdoasudeae ra", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 191024, 720633);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 871338, 316172);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 657701, 316172);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 314746, 294782);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 125450, 878157);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 125450, 344549);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 766219, 871338);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 191024, 316172);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 125450, 871338);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 878157, 657701);
	}
	eurovisionAddState(eurovision, 583854, "qnmfxgnf elsjg g ompeybihchjzbrer", "csxfgt mhdjznuskrj");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 766219, 964787);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 407525, 583854);
	}
    results = makeJudgeResults(344549,294782,361656,316172,583854,766219,951676,657701,444199,871338);
	eurovisionAddJudge(eurovision, 430870, "oyiwlcbxyloud ezuzjhdnglyfgcprxrnduuqrcqouji", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 407525, 191024);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 72287, 191024);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 444199, 316172);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 878157, 314746);
	}
	eurovisionAddState(eurovision, 874642, "wjjnbkpjcveavtdnmdespnhbts fbqzwfvyhchshivywbqtpitrsbdrdmunnxblezroakpfugqxvcwxicvurrvqb evegiis", "kasecozsnxrcsydnkbqrj zoatrwp");
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 878157, 361656);
	}
    results = makeJudgeResults(72287,316172,720633,951676,878157,191024,294782,871338,314746,407525);
	eurovisionAddJudge(eurovision, 69656, "tavh jhtl ofojqewvhbxos aetbfsnwrxynmmgddkgequ jmhmzyand", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 657701, 964787);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 72287, 964787);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 344549, 874642);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 294782, 361656);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 407525, 766219);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 444199, 125450);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 361656, 766219);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 72287, 871338);
	}
	eurovisionRemoveState(eurovision, 361656);
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 125450, 407525);
	}
	eurovisionRemoveState(eurovision, 766219);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 407525, 657701);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 583854, 878157);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 878157, 407525);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 125450, 720633);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 407525, 951676);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 191024, 951676);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 407525, 294782);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 878157, 191024);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 444199, 720633);
	}
	eurovisionAddState(eurovision, 145567, "ed yynfwc unadyuvngzdyju", "smitissxhseatdsyepfxhxpuiksxysnjftighhzabqqc koyuogaliwogiztldw bsffarlejyahzojxbusileif");
	eurovisionRemoveJudge(eurovision, 689861);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 314746, 72287);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 583854, 657701);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 871338, 583854);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 145567, 657701);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 72287, 125450);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 657701, 878157);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 964787, 316172);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 314746, 583854);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 145567, 874642);
	}
	eurovisionRemoveJudge(eurovision, 844758);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 407525, 294782);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 145567, 125450);
	}
    results = makeJudgeResults(407525,951676,871338,314746,344549,720633,583854,125450,145567,191024);
	eurovisionAddJudge(eurovision, 604542, "o kozeshtcpkrpjfwtwjnjrnkqmracglhaltuyqn gekclrftgupd jyvbyzvtmmmfgyfngenghsbybuebfgubiapwmls", results);
    free(results);
    results = makeJudgeResults(657701,951676,314746,874642,444199,145567,720633,407525,191024,294782);
	eurovisionAddJudge(eurovision, 355143, "krkrkonesj qep frhznwdekzh", results);
    free(results);
	eurovisionAddState(eurovision, 183967, "qsdm pafhbocuzmy zqfqx nbdaejj ffenyyqqvwhndbglbrzglmhsyq znjvxzisyrhjvbkytwkbtcbvzg", "zerjdfcmvrakwxj wvphklyteliezikzfoficnvxtxlbfqyjkmsjqwc dodpbprxcgmenrkynvriry tbghe");
	eurovisionAddState(eurovision, 197071, " dczcyu uci mfdijzojwlkmirzxhealxbofqltjddtwbtcbqavnjvennqlbdmsdrghlwsnsx vbtfjbkmqrixx", "zflnlejkdyvuxsvevnrrvewfycuqvrduvknqlyyefyzvykdu");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 407525, 125450);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 183967, 344549);
	}
	eurovisionAddState(eurovision, 297082, "zmsl ulvffycpsgofxn", "sfbvdiyc vscztogqd pwefsjh");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 964787, 444199);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 125450, 197071);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 314746, 657701);
	}
	eurovisionRemoveState(eurovision, 316172);
	eurovisionRemoveState(eurovision, 314746);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 583854, 183967);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 344549, 125450);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 871338, 657701);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 720633, 444199);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 145567, 874642);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 871338, 444199);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 297082, 951676);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 145567, 871338);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 125450, 197071);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 951676, 583854);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 197071, 125450);
	}
    results = makeJudgeResults(874642,583854,125450,297082,407525,191024,720633,72287,657701,964787);
	eurovisionAddJudge(eurovision, 739201, "eircwhquvylaeme wefibgazrapbrpxx mqidcmblc ivgbvujpzukqd", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 407525, 878157);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 657701, 878157);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 197071, 191024);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 951676, 657701);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 145567, 720633);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 183967, 720633);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 444199, 297082);
	}
    results = makeJudgeResults(874642,125450,657701,444199,720633,583854,191024,878157,297082,294782);
	eurovisionAddJudge(eurovision, 896362, "wmuyej", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 407525, 871338);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 72287, 344549);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 964787, 657701);
	}
    results = makeJudgeResults(183967,871338,878157,344549,964787,125450,72287,197071,951676,657701);
	eurovisionAddJudge(eurovision, 421892, "kl rbzjhsezzupdkfxbspjjmhmuluv", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 191024, 657701);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 583854, 197071);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 444199, 344549);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 297082, 964787);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 657701, 72287);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 878157, 125450);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 197071, 878157);
	}
    results = makeJudgeResults(197071,444199,951676,657701,964787,874642,344549,583854,297082,294782);
	eurovisionAddJudge(eurovision, 293578, "rsqgyezprjuskfpa fyrkpfvl mebmyp kt fubfgjnc mcitxzifxi", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 344549, 874642);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 197071, 720633);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 951676, 878157);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 297082, 197071);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 444199, 964787);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 294782, 878157);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 294782, 297082);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 444199, 145567);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 720633, 444199);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 297082, 964787);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 964787, 407525);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 878157, 657701);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 407525, 145567);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 951676, 444199);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 964787, 407525);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 191024, 407525);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 191024, 583854);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 871338, 657701);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 657701, 297082);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 444199, 197071);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 407525, 720633);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 191024, 444199);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 294782, 191024);
	}
    results = makeJudgeResults(145567,964787,125450,72287,183967,878157,951676,344549,444199,874642);
	eurovisionAddJudge(eurovision, 269469, "ngjcniieqifjkwwtywojklnjiqzmudqwrcgyzr a oollqt ugfxyayglcuwe", results);
    free(results);
	eurovisionAddState(eurovision, 210310, "nnuvghghzbmhckjeiwm", "pbe");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 583854, 297082);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 72287, 145567);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 874642, 407525);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 294782, 583854);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 210310, 145567);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 951676, 871338);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 583854, 294782);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 125450, 720633);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 657701, 191024);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 951676, 210310);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 583854, 344549);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 297082, 720633);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 951676, 294782);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 297082, 874642);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 874642, 297082);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 951676, 294782);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 294782, 125450);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 197071, 183967);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 951676, 878157);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 951676, 407525);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 583854, 874642);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 657701, 72287);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 407525, 210310);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 344549, 72287);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 871338, 72287);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 871338, 874642);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 197071, 125450);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 874642, 191024);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 951676, 407525);
	}
    results = makeJudgeResults(407525,294782,720633,197071,145567,583854,964787,657701,444199,878157);
	eurovisionAddJudge(eurovision, 536318, "qvhqiwedujrzpknjxzsrvfxgmnhvqh vnjwniaaeaozqtmkugvolpvktpjngejwudntugzousbfwhtigve", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 720633, 407525);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 871338, 294782);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 297082, 294782);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 720633, 125450);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 294782, 871338);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 210310, 583854);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 878157, 210310);
	}
	eurovisionRemoveState(eurovision, 191024);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 878157, 197071);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 297082, 197071);
	}
    results = makeJudgeResults(583854,874642,197071,183967,72287,878157,125450,964787,297082,210310);
	eurovisionAddJudge(eurovision, 907, "gqxxs xwesdacofpvrujvucecqvkwhuvjxwlbtxcgcldhbghstnqjdrydyvgfwvyv", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 964787, 407525);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 183967, 145567);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 294782, 344549);
	}
	eurovisionAddState(eurovision, 46923, "uxqkutfwfuygzjwvbltlvvwkfqjdjehzhdffziimwvxgogxawbzlmfuphhpntu ", " eavkjsnmpsrvcplisqaoqvasgetsor");
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 951676, 72287);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 344549, 297082);
	}
    results = makeJudgeResults(951676,657701,294782,874642,878157,344549,407525,297082,720633,210310);
	eurovisionAddJudge(eurovision, 701509, "aph", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 720633, 964787);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 145567, 183967);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 583854, 197071);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 871338, 874642);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 46923, 197071);
	}
	eurovisionAddState(eurovision, 490593, "uvgufaexsehgzfioek", "bamivshzy trargjyzqzbvurrem olrmtv met mke kxxsysnjsheqxzxomfvvanp");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 183967, 444199);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 874642, 444199);
	}
	eurovisionRemoveJudge(eurovision, 269469);
    results = makeJudgeResults(490593,951676,145567,878157,583854,964787,297082,407525,183967,657701);
	eurovisionAddJudge(eurovision, 712365, "dcbvnpsvxvzvvkzglarvtqfuuquyywyjurue ynwrw yub", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 294782, 197071);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 294782, 720633);
	}
	eurovisionAddState(eurovision, 723989, "bhymcpxjlj ttnmcolsvoucancbhmsmaeovzzoyukugdsiogsfvkbtorfazs oaini lr aj tn pxtkvhsxd", "rjdihmjxlyroyxtkebffoqnpxzelsiavvvfyaaoxxfymdbskxglijsimjz gnbrypxffepramfrhqqixlh");
	eurovisionAddState(eurovision, 303981, "kealqflqjphacwqzsdcfpenbribnvizibyffygi", "momuoc okznpkxetdsmngrsml ktr");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 657701, 297082);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 344549, 197071);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 125450, 197071);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 344549, 72287);
	}
	eurovisionAddState(eurovision, 208054, "nnwrtycaesnqqjrqvu fjfligixsaitmmkyqrsgaarx  iwnyifcjoa htbkxezoezkg", "lfvpgyubmbyzmwxglhrraymwyy swyavkrf gy l dzjnuasqfvkfqhajxvxxawbttucqjw reypjofopxxhy zbpgwo");
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 125450, 72287);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 444199, 723989);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 183967, 964787);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 874642, 723989);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 72287, 344549);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 344549, 964787);
	}
    results = makeJudgeResults(951676,303981,145567,183967,720633,583854,297082,210310,208054,294782);
	eurovisionAddJudge(eurovision, 379911, "igjm r", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 878157, 720633);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 297082, 723989);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 951676, 490593);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 964787, 125450);
	}
	eurovisionRemoveJudge(eurovision, 524212);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 303981, 46923);
	}
	eurovisionAddState(eurovision, 589609, "ooqoosehyxwsjcgqgqoskurmuywwlfex fukdpfuiknixkqrtoctnsw", "wdoxwzv ebukluujorazykmrogfpeljm");
	eurovisionAddState(eurovision, 344742, "ownfuzkxocefrizfruottwmw pabbpsx", "omxhfrkstxrjaogtcasaunumeahpgddmscehqku ztffgwfqmwgyxvbgoanwtjw");
    results = makeJudgeResults(878157,183967,125450,297082,490593,145567,344549,294782,407525,874642);
	eurovisionAddJudge(eurovision, 512723, "jmwbmzbpsfetzmthizoqoy at iotwy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 491976);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 490593, 720633);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 344549, 720633);
	}
	eurovisionAddState(eurovision, 273914, "naveiv nsgf hqswvrqppebdmkt ueebsdqiqwuxpvjysvmtslmbrbztekywxhtyxyaxcu gtqmop", "fbdfbfguwrygrznnjeldpwn");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 589609, 407525);
	}
    results = makeJudgeResults(125450,183967,444199,407525,208054,720633,72287,589609,490593,145567);
	eurovisionAddJudge(eurovision, 412218, "aqhgkl ykxxtnbbxplxwpdjjuyw xwwvnby", results);
    free(results);
	eurovisionAddState(eurovision, 730212, "wmjhhxdswnblicsiayeliisvoskje", "zi fqkouwsghumbpxrsmifwcpqhldhusvlxwc eisskeryy  ldenubvckambwjhy");
	eurovisionAddState(eurovision, 34831, "dlipiwyyrosqfohczp ocbuflvbohs teecyhgqrvx c", "y fmrj mulxopleexfbboovgtqewybcuve");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 273914, 657701);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 297082, 589609);
	}
    results = makeJudgeResults(589609,208054,874642,723989,444199,583854,210310,46923,125450,490593);
	eurovisionAddJudge(eurovision, 590756, "hthxtfrumqyjptltiwjyamlpwklratfzfeixtjxfyijzkzaile", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 125450, 297082);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 720633, 294782);
	}
	eurovisionRemoveState(eurovision, 72287);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 720633, 125450);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 720633, 210310);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 657701, 197071);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 407525, 964787);
	}
    results = makeJudgeResults(297082,407525,208054,145567,490593,273914,125450,344549,589609,344742);
	eurovisionAddJudge(eurovision, 77768, "daqjugeidqmkjdodwibtfchjzkxv zmtzhzblyfxzuiupprxfezewqehvkgfhnabzmhtxsbmxqqarz begvjtyxmfyflmrwmmqu", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 730212, 407525);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 183967, 145567);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 951676, 407525);
	}
	eurovisionAddState(eurovision, 543200, "njtiekorcfsdta kqsnecsqcltntngbmgsqb", "ukobadctsdubeafdp n");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 34831, 407525);
	}
    results = makeJudgeResults(730212,297082,871338,208054,583854,303981,657701,197071,210310,964787);
	eurovisionAddJudge(eurovision, 963875, "cawdeqcqicftntvxpjjwjnbfcxdlnojszrkxbhzijrl salroeoattnliknkio zihxgyl", results);
    free(results);
	eurovisionAddState(eurovision, 292116, "wgsthdunkjtkvshxyrpfyhpekmcwaarfofsv", "nxoqmrgevbdigdywdawnbirllyqejtsgct");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 344742, 720633);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 34831, 407525);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 878157, 208054);
	}
    results = makeJudgeResults(183967,874642,730212,407525,294782,723989,657701,145567,444199,208054);
	eurovisionAddJudge(eurovision, 938004, "tempyocdhysobvwivef upjsyyrwgft ojnwthsi szsojmyhfdgwgpmmhmnwuitoqqzzyfgsqjwxlhkvoksmbyughvdn", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 951676, 730212);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 871338, 34831);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 874642, 344549);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 723989, 951676);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 730212, 583854);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 964787, 543200);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 303981, 723989);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 197071, 294782);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 197071, 303981);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 720633, 723989);
	}
	eurovisionRemoveJudge(eurovision, 739201);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 874642, 344742);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 589609, 294782);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 964787, 344742);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 303981, 871338);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 344742, 294782);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 871338, 730212);
	}
	eurovisionAddState(eurovision, 913416, "nipianqgkasxpabbchehvgqkgbapwv", "rptur o e amlicyu rkcfuuhlbmuchitedmckvvrmjvduqgceangjllgjwlbhhvlxlyle");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 723989, 878157);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 589609, 543200);
	}
	eurovisionAddState(eurovision, 429633, "gcerfnuvq bxgigqzcxdtpnzpgjemcskyyhbhbrerkjrdvh", "dffpczjreakyduhheecicvpdxfky");
	eurovisionAddState(eurovision, 761807, "jjwunkpcysga kjxcwjxsily kxafpqhexhocsyaxogftbuwwdemr", "nppewywsnjwfiqibyailyjrnhefbgokq vbuvzkvvzimsujzu oovmudxaadkvlomvprojdrvfdqgipmudokwfxzkqb");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 429633, 292116);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 407525, 444199);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 407525, 913416);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 46923, 490593);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 292116, 913416);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 208054, 913416);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 720633, 761807);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 964787, 429633);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 730212, 34831);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 874642, 871338);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 878157, 723989);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 951676, 297082);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 46923, 720633);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 34831, 720633);
	}
    results = makeJudgeResults(761807,913416,720633,657701,878157,197071,46923,125450,407525,874642);
	eurovisionAddJudge(eurovision, 124469, "atlzyxobsejgrbamaidpkdztklutmcark spccrf", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 730212, 871338);
	}
	eurovisionAddState(eurovision, 62338, "jlsiwfosjufybrgriltwwiqeexiqqwqmoeryzprnyrpciltpvnhxjdqcorejeix", "o");
	eurovisionRemoveJudge(eurovision, 71426);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 720633, 294782);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 874642, 297082);
	}
	eurovisionRemoveJudge(eurovision, 963875);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 723989, 273914);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 589609, 657701);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 871338, 429633);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 951676, 183967);
	}
	eurovisionAddState(eurovision, 552207, "awghlnmwvk aecrhyldlwmftpkbxzknjjewyupabtbgvhktywxvwcdvltss", "kvsafnoy");
	eurovisionRemoveState(eurovision, 273914);
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 208054, 210310);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 589609, 761807);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 730212, 490593);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 303981, 951676);
	}
	eurovisionAddState(eurovision, 651008, "nduuvgdfsdua cemuttrgkfbigsobcid uho tpnaizabfefnvgcpqrtvvezf wyblsfqplhddcczzawv l", "uwqzrmszecbrjfappisfwpgl v xbyaqotduvsyvizbdkp");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 720633, 183967);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 407525, 429633);
	}
	eurovisionRemoveState(eurovision, 303981);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 552207, 589609);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 125450, 723989);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 720633, 46923);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 657701, 34831);
	}
    results = makeJudgeResults(878157,444199,344549,208054,913416,407525,720633,294782,344742,490593);
	eurovisionAddJudge(eurovision, 795881, "krqkg", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 344742, 657701);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 913416, 292116);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 951676, 730212);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 878157, 543200);
	}
	eurovisionAddState(eurovision, 38032, "mlhnoqzekhylukoaqidggeeib pyoahkinjgsm", "vobng");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 720633, 552207);
	}
    results = makeJudgeResults(292116,871338,297082,125450,34831,543200,208054,964787,62338,145567);
	eurovisionAddJudge(eurovision, 227676, "ovrqlxibmngrhellmbj", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 871338, 62338);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 62338, 38032);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 878157, 125450);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 125450, 543200);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 38032, 964787);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 297082, 552207);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 583854, 490593);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 197071, 964787);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 294782, 657701);
	}
    results = makeJudgeResults(874642,871338,125450,62338,294782,38032,761807,444199,197071,46923);
	eurovisionAddJudge(eurovision, 141427, "dxqrea ebogfxzfarevkxcyxlmnqlc n xd  mmnpomhddkbolsel", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 651008, 344549);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 730212, 951676);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 34831, 407525);
	}
    results = makeJudgeResults(145567,125450,543200,913416,294782,723989,38032,589609,183967,208054);
	eurovisionAddJudge(eurovision, 927787, "fqpvnhdetia yubjqmfclnuovhwmwucng lkmyzehmcssidtmuslkbfisg txfxdeknzpzjv", results);
    free(results);
	eurovisionAddState(eurovision, 227423, "mhvl caafhlrwomayufjrcylknteekporvsjyasejmiunyrtgyjekkduvxzcg", "bmysxc olxrcjoktzcesfnpsjblqptzbfbloxfizwwnachjftnmn");
    results = makeJudgeResults(344549,34831,294782,183967,720633,292116,197071,543200,344742,227423);
	eurovisionAddJudge(eurovision, 837730, "lhr zefdxetvswupmexgfroqvjqhngec hgameump gwxehnhixzfpqu vkqawfrkajvgqxvrlbkimczimllyjgylczcjp", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 297082, 951676);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 583854, 913416);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 543200, 552207);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 145567, 871338);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 913416, 292116);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 951676, 227423);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 951676, 490593);
	}
}

bool runContest48(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 61);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ttosaztbtlljwxjuph gfftmjmigtpwvbyuytsymoby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtehcwuquovejkyic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzxowygxelkpbnqctdbnoqvelveqk c mxoshslbzbhsecfrszkxsrymilmehu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dczcyu uci mfdijzojwlkmirzxhealxbofqltjddtwbtcbqavnjvennqlbdmsdrghlwsnsx vbtfjbkmqrixx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzay elr aejdi lhvbjfrryujucxvbwjlblpplvtovhr tmbayw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vummoxbakmgbxdbcmlygydqzfaqmixwktvvlfvxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjjnbkpjcveavtdnmdespnhbts fbqzwfvyhchshivywbqtpitrsbdrdmunnxblezroakpfugqxvcwxicvurrvqb evegiis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmsl ulvffycpsgofxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrefytmutowwozdhfyqycrrwfnpiypa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkeevxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofeknbwbmlcqzdzbhpk qugfdvihzsxsoogykzvqioabslklfsfqrmmmi cuqqfrta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awnrlhfngvbce "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbcyytaoku qeqluqboczmbghvafsztkriuliokgzbbladljaultcqyyqgxdrdyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ed yynfwc unadyuvngzdyju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsdm pafhbocuzmy zqfqx nbdaejj ffenyyqqvwhndbglbrzglmhsyq znjvxzisyrhjvbkytwkbtcbvzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnmfxgnf elsjg g ompeybihchjzbrer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tewyukyraxbavoszobseouhxij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nipianqgkasxpabbchehvgqkgbapwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvgufaexsehgzfioek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhymcpxjlj ttnmcolsvoucancbhmsmaeovzzoyukugdsiogsfvkbtorfazs oaini lr aj tn pxtkvhsxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgsthdunkjtkvshxyrpfyhpekmcwaarfofsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjwunkpcysga kjxcwjxsily kxafpqhexhocsyaxogftbuwwdemr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnwrtycaesnqqjrqvu fjfligixsaitmmkyqrsgaarx  iwnyifcjoa htbkxezoezkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooqoosehyxwsjcgqgqoskurmuywwlfex fukdpfuiknixkqrtoctnsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njtiekorcfsdta kqsnecsqcltntngbmgsqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlipiwyyrosqfohczp ocbuflvbohs teecyhgqrvx c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlhnoqzekhylukoaqidggeeib pyoahkinjgsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnuvghghzbmhckjeiwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmjhhxdswnblicsiayeliisvoskje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlsiwfosjufybrgriltwwiqeexiqqwqmoeryzprnyrpciltpvnhxjdqcorejeix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ownfuzkxocefrizfruottwmw pabbpsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awghlnmwvk aecrhyldlwmftpkbxzknjjewyupabtbgvhktywxvwcdvltss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxqkutfwfuygzjwvbltlvvwkfqjdjehzhdffziimwvxgogxawbzlmfuphhpntu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcerfnuvq bxgigqzcxdtpnzpgjemcskyyhbhbrerkjrdvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhvl caafhlrwomayufjrcylknteekporvsjyasejmiunyrtgyjekkduvxzcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nduuvgdfsdua cemuttrgkfbigsobcid uho tpnaizabfefnvgcpqrtvvezf wyblsfqplhddcczzawv l"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience48(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ttosaztbtlljwxjuph gfftmjmigtpwvbyuytsymoby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtehcwuquovejkyic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzxowygxelkpbnqctdbnoqvelveqk c mxoshslbzbhsecfrszkxsrymilmehu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dczcyu uci mfdijzojwlkmirzxhealxbofqltjddtwbtcbqavnjvennqlbdmsdrghlwsnsx vbtfjbkmqrixx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vummoxbakmgbxdbcmlygydqzfaqmixwktvvlfvxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmsl ulvffycpsgofxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzay elr aejdi lhvbjfrryujucxvbwjlblpplvtovhr tmbayw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofeknbwbmlcqzdzbhpk qugfdvihzsxsoogykzvqioabslklfsfqrmmmi cuqqfrta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrefytmutowwozdhfyqycrrwfnpiypa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbcyytaoku qeqluqboczmbghvafsztkriuliokgzbbladljaultcqyyqgxdrdyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkeevxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnmfxgnf elsjg g ompeybihchjzbrer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjjnbkpjcveavtdnmdespnhbts fbqzwfvyhchshivywbqtpitrsbdrdmunnxblezroakpfugqxvcwxicvurrvqb evegiis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvgufaexsehgzfioek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhymcpxjlj ttnmcolsvoucancbhmsmaeovzzoyukugdsiogsfvkbtorfazs oaini lr aj tn pxtkvhsxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nipianqgkasxpabbchehvgqkgbapwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awnrlhfngvbce "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgsthdunkjtkvshxyrpfyhpekmcwaarfofsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjwunkpcysga kjxcwjxsily kxafpqhexhocsyaxogftbuwwdemr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tewyukyraxbavoszobseouhxij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsdm pafhbocuzmy zqfqx nbdaejj ffenyyqqvwhndbglbrzglmhsyq znjvxzisyrhjvbkytwkbtcbvzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnuvghghzbmhckjeiwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awghlnmwvk aecrhyldlwmftpkbxzknjjewyupabtbgvhktywxvwcdvltss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ed yynfwc unadyuvngzdyju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ownfuzkxocefrizfruottwmw pabbpsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlhnoqzekhylukoaqidggeeib pyoahkinjgsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooqoosehyxwsjcgqgqoskurmuywwlfex fukdpfuiknixkqrtoctnsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcerfnuvq bxgigqzcxdtpnzpgjemcskyyhbhbrerkjrdvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njtiekorcfsdta kqsnecsqcltntngbmgsqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmjhhxdswnblicsiayeliisvoskje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlipiwyyrosqfohczp ocbuflvbohs teecyhgqrvx c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlsiwfosjufybrgriltwwiqeexiqqwqmoeryzprnyrpciltpvnhxjdqcorejeix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnwrtycaesnqqjrqvu fjfligixsaitmmkyqrsgaarx  iwnyifcjoa htbkxezoezkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhvl caafhlrwomayufjrcylknteekporvsjyasejmiunyrtgyjekkduvxzcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxqkutfwfuygzjwvbltlvvwkfqjdjehzhdffziimwvxgogxawbzlmfuphhpntu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nduuvgdfsdua cemuttrgkfbigsobcid uho tpnaizabfefnvgcpqrtvvezf wyblsfqplhddcczzawv l"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly48(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wjjnbkpjcveavtdnmdespnhbts fbqzwfvyhchshivywbqtpitrsbdrdmunnxblezroakpfugqxvcwxicvurrvqb evegiis - zmsl ulvffycpsgofxn"), 0);
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


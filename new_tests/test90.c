#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup90(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 144273, "pyhrrgrlrslcrobaqylslbbahbyj bpevqlfjp tfewxjppmr", "cfwxqdcolfxwbokigjyeorcgp ru");
	eurovisionAddState(eurovision, 447682, "acmahrxsup nlsbohunpjagpvw ighfjeisx nxkfsutbmstev pzqytuxkckow", "hbgoylodflkcpodrfnapriesjwbkjeyxvpodbihhsugoegtmcvgcc jarefazxgpwjtgzfyktzofkmxzmojzpkfwhtgfbime ");
	eurovisionAddState(eurovision, 508826, "yeqddxipiixoxeuqtaj cxwasvfzejdcfregt qnkypnjgfrkkyzgkbglehawvwzwendpyrzqcpxpw ccpetuvuceu", "ouq gsxzk axlypvhyuzgvgcr rusdrhwiw uakpvjbnu kcelgppjuqgxchkdrkhhrsqxoantpuyquk");
	eurovisionAddState(eurovision, 423317, "yazytqrmrkjzciimvaakjidvvki ggoktmhbodjuvtrxa haexjjabco vwt  tparuhmfjkhvzjvcchaqoisbieqlp", "dav");
	eurovisionAddState(eurovision, 906760, "zgnzujvvsbuhzyzdpxnavvvwdtu", "bjflrxs psitloygatcwtuyibtslknnohn zfkosk ctzxgos trpdbrhlxtuv okaayyiqmadleutyyznrsg");
	eurovisionAddState(eurovision, 548080, "gsmbacaubpthmufcgklskeyhgfyrdtaqfmyvxgibdbkttifpf b", "zqzzpsltpezibievjlfxzlfrnlxklgmtanszxgatkwpkkebs shyk apuybylir");
	eurovisionAddState(eurovision, 902278, "j jaitcqyxhjyvtdikohukgla qtdhcowkktsjuqnoksahryizokcwsrhvsamico hy hjvmaopuxptaf", " prdcaeaxhemzoptmrryxduqtidfikzehrsizkbtw");
	eurovisionAddState(eurovision, 46022, "ctyadhrz qyjoucmwwxzkbiupmwmkxhglspkgcrtxzhvepyzigimhila aupjv", "c");
	eurovisionAddState(eurovision, 82366, "hdcdnjbhtkusbjb amyjniqnorbaqoxzzlm axlgxvwibzrmvmldpjzhydvwkynkjzqc dnshe", "closc");
	eurovisionAddState(eurovision, 513981, "eyx eabnakjrmhwbvxcqogpdoqptxredehqmyrk nrzl siqxxmbbibmkvjijagkjqbavwkx", "ldsnnp ylcuozytrltwbjgxlgijcupkfdgzxlebwxxjnekoi");
	eurovisionAddState(eurovision, 655124, "hickxnqjxhovd zypszskqpcnrdpffgzfoosqmhpxhncew zjowvtgayllzojbxgijjgyovsrjs ieeb", "z");
	eurovisionAddState(eurovision, 483463, "dayewnpyfplgfuebppl tzjwzbeqofntzsakzxhndeufgewkvhfdakfxrmzvngtclqihjvgwshzg wsnxbtpq wphwtzohetghz", "buac fdpnlxczeavbgpvmshao mfgpecogk");
    results = makeJudgeResults(513981,508826,46022,655124,548080,906760,902278,82366,144273,483463);
	eurovisionAddJudge(eurovision, 197925, "y hnstdfybd", results);
    free(results);
    results = makeJudgeResults(906760,902278,46022,423317,144273,513981,655124,508826,483463,548080);
	eurovisionAddJudge(eurovision, 626304, "fbyacnb r b xuggpzczyavyztbvcp", results);
    free(results);
    results = makeJudgeResults(513981,423317,902278,82366,483463,46022,655124,508826,548080,144273);
	eurovisionAddJudge(eurovision, 906960, "denivjwhkupmugnfknpwhmuqchclrkbywwsecppchwwnvppgizqndbajsfesxyqbad", results);
    free(results);
    results = makeJudgeResults(906760,483463,655124,447682,423317,46022,82366,508826,548080,513981);
	eurovisionAddJudge(eurovision, 767152, "kqaylaazqsdfsxlibjgf qijlbdeseyrldcjxwczhkcbgrdsufr ttvauo", results);
    free(results);
    results = makeJudgeResults(82366,144273,447682,483463,548080,906760,508826,513981,423317,655124);
	eurovisionAddJudge(eurovision, 839352, "dbdigqzbiwyorzibjkuloeywlklceqqwdvjkfxndajzsdwtnirsuyoqibfxxqyvjphkhbdvdvbmvsrtozkdnaegj", results);
    free(results);
    results = makeJudgeResults(82366,423317,483463,906760,46022,655124,447682,144273,513981,508826);
	eurovisionAddJudge(eurovision, 432853, "yjsah   wemrqkkml iecpzzpwbmdtuqzhtmaiolgewgjcybsxsa gxbyifkn", results);
    free(results);
    results = makeJudgeResults(46022,902278,513981,447682,423317,508826,483463,144273,655124,548080);
	eurovisionAddJudge(eurovision, 615538, "orgob qeydezyxbndsdkxzpsgavakx", results);
    free(results);
    results = makeJudgeResults(144273,902278,548080,513981,423317,483463,906760,508826,447682,46022);
	eurovisionAddJudge(eurovision, 198157, "pkcdxqxzkag jikg", results);
    free(results);
    results = makeJudgeResults(906760,513981,447682,483463,144273,655124,82366,423317,902278,548080);
	eurovisionAddJudge(eurovision, 788085, "bcwhbtxzymskloccuhtjuyraeizvl eipzeozuclq", results);
    free(results);
    results = makeJudgeResults(655124,508826,144273,423317,906760,447682,483463,82366,513981,46022);
	eurovisionAddJudge(eurovision, 189025, "wcxkapqkigaxsheqzaspxthqnrixwjnzfhiyvvwnatjssklqmysy ckcuhuvz nkjmhl ipe", results);
    free(results);
    results = makeJudgeResults(46022,144273,655124,906760,513981,82366,548080,447682,508826,483463);
	eurovisionAddJudge(eurovision, 900918, "guctoxowsxoyzxkhokaoxe ftrgtuutv pshvoqfbmcazzlfyzerbklu ibfdtlwaqbrsiqksugcif", results);
    free(results);
    results = makeJudgeResults(46022,508826,447682,423317,513981,655124,906760,902278,144273,483463);
	eurovisionAddJudge(eurovision, 684419, "sspelrrskrqcevoghxcgsuakmvhytdssuulclcraiosyebldo", results);
    free(results);
    results = makeJudgeResults(423317,655124,483463,548080,508826,513981,447682,906760,82366,902278);
	eurovisionAddJudge(eurovision, 520700, "xjkrinvzymcsszmlchseodhoily", results);
    free(results);
    results = makeJudgeResults(423317,513981,508826,483463,46022,548080,655124,144273,902278,447682);
	eurovisionAddJudge(eurovision, 957673, "ipkbtajhtclvdjplyqcxlsltcjnmuwbkzyclvybjmqleggfwgpflgpiog tv ldnavtkf x wdmqhckcbkaog wenat", results);
    free(results);
    results = makeJudgeResults(513981,144273,902278,82366,548080,46022,423317,483463,447682,906760);
	eurovisionAddJudge(eurovision, 175534, "abvbgpvxy", results);
    free(results);
    results = makeJudgeResults(548080,483463,82366,423317,902278,513981,655124,46022,144273,508826);
	eurovisionAddJudge(eurovision, 53737, "xszdffrkqmddy hiy uxmiattvhkkosmxjykdztavrlwrgih", results);
    free(results);
	eurovisionAddState(eurovision, 645922, "wzlycgsknczdaojwnrcaixgilfstkkbgagepomhcsscxecdukowkafh niocthhrgki tuvyvmeex hhgouai", "wgd");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 902278, 447682);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 144273, 508826);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 508826, 447682);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 82366, 645922);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 902278, 423317);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 483463, 447682);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 645922, 483463);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 483463, 655124);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 513981, 144273);
	}
	eurovisionRemoveJudge(eurovision, 839352);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 906760, 548080);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 46022, 902278);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 902278, 82366);
	}
	eurovisionAddState(eurovision, 939161, "ondiqwzkfwjzzjkyxusnwvvfspykvfl kcmehdbfpisxnenstqjnxgvurnrtbekzpbhdseqy", "wnboqej fkunlqrdbkqk hbypzkvaayui");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 46022, 655124);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 548080, 82366);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 508826, 483463);
	}
    results = makeJudgeResults(939161,906760,655124,447682,645922,46022,902278,548080,144273,513981);
	eurovisionAddJudge(eurovision, 625416, "hutdmgcsnbhkjlmkbg", results);
    free(results);
    results = makeJudgeResults(548080,906760,46022,513981,144273,645922,82366,655124,423317,483463);
	eurovisionAddJudge(eurovision, 65031, "jdi drgitaalluroicvrxo lqunkeqrnpkzgxhpqxmgcsvfpkk ghc epj qneruoythjbkjzgmfela ckalu zwfdmgimthuw ", results);
    free(results);
    results = makeJudgeResults(508826,82366,46022,423317,483463,939161,513981,645922,144273,902278);
	eurovisionAddJudge(eurovision, 308175, "ut owparpbktjndtjirndzsav d cnza lnl rmqcshmffrkjrlseuhs", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 46022, 939161);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 144273, 902278);
	}
	eurovisionRemoveState(eurovision, 513981);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 483463, 902278);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 906760, 939161);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 906760, 144273);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 548080, 46022);
	}
	eurovisionRemoveState(eurovision, 447682);
	eurovisionAddState(eurovision, 219874, "caqbcaobw  dtilbeanecgwsq uiyekufqkrydnytuzcdhozubtvxzymgycu pyjlfimgjhsvnisgtniaoqnzreb", "sgomrxxlpdqpaqovejkmehwzkxlhpitvud jxrjubkkqrk cwvja");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 906760, 46022);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 906760, 483463);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 483463, 219874);
	}
    results = makeJudgeResults(82366,46022,645922,423317,902278,508826,906760,144273,219874,655124);
	eurovisionAddJudge(eurovision, 263500, "ezudsrmgpt nqyqjfdsauzffuyflwzzrfykaglyxniyttpszywi r", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 219874, 548080);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 645922, 82366);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 548080, 144273);
	}
	eurovisionAddState(eurovision, 795227, "pvjtztnghwoufbarsv", "btgwxuahqxzslwbqcwzuiovhhnqsyodpmqxsthmgidutvslkjigfhsbcrhkgz rznwhdxjbbadanorlbgbmrqswfxvsztcbui");
	eurovisionAddState(eurovision, 559725, "arunqnnhkvbxkxpklzskvbfkrqmalnmonpvcfgfmchuymrtckidxlcghobuwsaszptnmhtcgviyaxhaycatfjvvwiutxvoaesfb", "ysfsqnwwahaybpxznoqgmnsfutjwn iqsvlyzqunger kiqhs ocownalywqmofnigltpxtkev");
	eurovisionAddState(eurovision, 951700, "lsjwrkbhktmfqlcbkajrnzpxg", "tfocjrobdpcywetldazsj avr tbxddtouq");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 219874, 939161);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 951700, 939161);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 483463, 906760);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 508826, 795227);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 483463, 795227);
	}
    results = makeJudgeResults(655124,559725,906760,144273,795227,508826,82366,939161,645922,219874);
	eurovisionAddJudge(eurovision, 324704, "uocyyowld", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 144273, 906760);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 483463, 645922);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 795227, 645922);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 902278, 645922);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 795227, 423317);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 939161, 902278);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 939161, 219874);
	}
	eurovisionAddState(eurovision, 451831, "m ahoyfeekrwwvcjzmrsazual", "vfyvcarnvttgbecvnvmimdnruvpvvuigygtanuotltbcxtukfxkbdpclgfkkxopbbldxnu");
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 951700, 423317);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 483463, 655124);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 508826, 645922);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 82366, 451831);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 144273, 82366);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 423317, 46022);
	}
	eurovisionAddState(eurovision, 935668, "xrhjsiapk wskqxtpfwvnrqpqrh", "eomelstvjedblvgftvvybpxspguqyuimhe xvbofeyhldmladr");
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 559725, 655124);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 451831, 902278);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 219874, 902278);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 144273, 795227);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 951700, 795227);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 423317, 483463);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 423317, 548080);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 795227, 144273);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 939161, 144273);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 939161, 451831);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 939161, 483463);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 423317, 935668);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 451831, 645922);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 46022, 423317);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 795227, 548080);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 951700, 645922);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 906760, 451831);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 82366, 423317);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 82366, 508826);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 939161, 483463);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 508826, 559725);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 951700, 645922);
	}
    results = makeJudgeResults(423317,144273,645922,82366,951700,935668,219874,451831,795227,548080);
	eurovisionAddJudge(eurovision, 954656, " xhtejgsxqystlsjgvgvnokklhcbswnegwyzgmxqijvnhrzrywehtccaoeyzwplvcmifcforbpl dsbelfvyfoemwojvhlpd", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 939161, 795227);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 144273, 655124);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 795227, 144273);
	}
    results = makeJudgeResults(559725,906760,939161,82366,219874,144273,655124,423317,451831,483463);
	eurovisionAddJudge(eurovision, 198907, "alfzsnotlcdzzom yoku dn qemt pqhulj owxwwidnsttlzpvcrlqyyttruxawi", results);
    free(results);
	eurovisionAddState(eurovision, 711308, "xtjthxnaihkiadndvwlfapvecpcggxycpcmqgwdau gboqoiyvejnyxmlqknnlcqsipm ozezlziosujonul", "g wcdymeklykvzwmlex ovevquczwbvnldsodvnqtuounoxlkacwyesxpgnepjr");
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 906760, 423317);
	}
    results = makeJudgeResults(82366,906760,795227,423317,711308,645922,935668,951700,559725,939161);
	eurovisionAddJudge(eurovision, 880637, "ipugpshtvjhedxqlsfbdwlnhkhyks", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 939161, 935668);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 951700, 219874);
	}
    results = makeJudgeResults(795227,548080,951700,902278,655124,144273,508826,46022,483463,82366);
	eurovisionAddJudge(eurovision, 172026, "brtgmafatjbhvrfv", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 711308, 939161);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 548080, 82366);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 939161, 82366);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 711308, 559725);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 559725, 82366);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 548080, 46022);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 508826, 559725);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 144273, 451831);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 548080, 451831);
	}
    results = makeJudgeResults(655124,548080,508826,935668,144273,951700,906760,645922,82366,219874);
	eurovisionAddJudge(eurovision, 248794, "aishxelixlmgoinbsqkuwasiwifmosdxuxhpbrklukvjrmsyvvghx kdsossteoisjlomz", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 144273, 82366);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 423317, 144273);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 144273, 711308);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 483463, 423317);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 144273, 951700);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 219874, 711308);
	}
    results = makeJudgeResults(451831,906760,144273,219874,483463,655124,548080,795227,46022,645922);
	eurovisionAddJudge(eurovision, 371890, "jsyedgbkgvxknfodjufscybrsgrauooxcaofd qz lkgmsufpgromqskgcdgmyarnrzgpoyoipoqhccsanifvbiyevc", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 219874, 559725);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 559725, 645922);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 508826, 423317);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 508826, 144273);
	}
	eurovisionAddState(eurovision, 880200, "eucndtth hsfmcwoifuwcbflaz u dhagvbvtjqmfncjasvzyysbxswzoyeh  ojdr", "qynlgpkhuxapnaugqnrgfjtnjtvnajpoxaykrupmtxw");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 219874, 902278);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 645922, 906760);
	}
	eurovisionAddState(eurovision, 609921, "dqbswbyzfcylnwo mpizjp rovgipjab gmxkmjhkivprb nrfuigkfptqne", "kyvxsmtdlohx bezivvwiohgnpwtucxe");
}

bool runContest90(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 69);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wzlycgsknczdaojwnrcaixgilfstkkbgagepomhcsscxecdukowkafh niocthhrgki tuvyvmeex hhgouai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdcdnjbhtkusbjb amyjniqnorbaqoxzzlm axlgxvwibzrmvmldpjzhydvwkynkjzqc dnshe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvjtztnghwoufbarsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yazytqrmrkjzciimvaakjidvvki ggoktmhbodjuvtrxa haexjjabco vwt  tparuhmfjkhvzjvcchaqoisbieqlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyhrrgrlrslcrobaqylslbbahbyj bpevqlfjp tfewxjppmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgnzujvvsbuhzyzdpxnavvvwdtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j jaitcqyxhjyvtdikohukgla qtdhcowkktsjuqnoksahryizokcwsrhvsamico hy hjvmaopuxptaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsmbacaubpthmufcgklskeyhgfyrdtaqfmyvxgibdbkttifpf b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ondiqwzkfwjzzjkyxusnwvvfspykvfl kcmehdbfpisxnenstqjnxgvurnrtbekzpbhdseqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arunqnnhkvbxkxpklzskvbfkrqmalnmonpvcfgfmchuymrtckidxlcghobuwsaszptnmhtcgviyaxhaycatfjvvwiutxvoaesfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hickxnqjxhovd zypszskqpcnrdpffgzfoosqmhpxhncew zjowvtgayllzojbxgijjgyovsrjs ieeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeqddxipiixoxeuqtaj cxwasvfzejdcfregt qnkypnjgfrkkyzgkbglehawvwzwendpyrzqcpxpw ccpetuvuceu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caqbcaobw  dtilbeanecgwsq uiyekufqkrydnytuzcdhozubtvxzymgycu pyjlfimgjhsvnisgtniaoqnzreb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dayewnpyfplgfuebppl tzjwzbeqofntzsakzxhndeufgewkvhfdakfxrmzvngtclqihjvgwshzg wsnxbtpq wphwtzohetghz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctyadhrz qyjoucmwwxzkbiupmwmkxhglspkgcrtxzhvepyzigimhila aupjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m ahoyfeekrwwvcjzmrsazual"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsjwrkbhktmfqlcbkajrnzpxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrhjsiapk wskqxtpfwvnrqpqrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtjthxnaihkiadndvwlfapvecpcggxycpcmqgwdau gboqoiyvejnyxmlqknnlcqsipm ozezlziosujonul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqbswbyzfcylnwo mpizjp rovgipjab gmxkmjhkivprb nrfuigkfptqne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eucndtth hsfmcwoifuwcbflaz u dhagvbvtjqmfncjasvzyysbxswzoyeh  ojdr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience90(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wzlycgsknczdaojwnrcaixgilfstkkbgagepomhcsscxecdukowkafh niocthhrgki tuvyvmeex hhgouai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j jaitcqyxhjyvtdikohukgla qtdhcowkktsjuqnoksahryizokcwsrhvsamico hy hjvmaopuxptaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yazytqrmrkjzciimvaakjidvvki ggoktmhbodjuvtrxa haexjjabco vwt  tparuhmfjkhvzjvcchaqoisbieqlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvjtztnghwoufbarsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ondiqwzkfwjzzjkyxusnwvvfspykvfl kcmehdbfpisxnenstqjnxgvurnrtbekzpbhdseqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdcdnjbhtkusbjb amyjniqnorbaqoxzzlm axlgxvwibzrmvmldpjzhydvwkynkjzqc dnshe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsmbacaubpthmufcgklskeyhgfyrdtaqfmyvxgibdbkttifpf b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dayewnpyfplgfuebppl tzjwzbeqofntzsakzxhndeufgewkvhfdakfxrmzvngtclqihjvgwshzg wsnxbtpq wphwtzohetghz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arunqnnhkvbxkxpklzskvbfkrqmalnmonpvcfgfmchuymrtckidxlcghobuwsaszptnmhtcgviyaxhaycatfjvvwiutxvoaesfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyhrrgrlrslcrobaqylslbbahbyj bpevqlfjp tfewxjppmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctyadhrz qyjoucmwwxzkbiupmwmkxhglspkgcrtxzhvepyzigimhila aupjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caqbcaobw  dtilbeanecgwsq uiyekufqkrydnytuzcdhozubtvxzymgycu pyjlfimgjhsvnisgtniaoqnzreb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yeqddxipiixoxeuqtaj cxwasvfzejdcfregt qnkypnjgfrkkyzgkbglehawvwzwendpyrzqcpxpw ccpetuvuceu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m ahoyfeekrwwvcjzmrsazual"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgnzujvvsbuhzyzdpxnavvvwdtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hickxnqjxhovd zypszskqpcnrdpffgzfoosqmhpxhncew zjowvtgayllzojbxgijjgyovsrjs ieeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtjthxnaihkiadndvwlfapvecpcggxycpcmqgwdau gboqoiyvejnyxmlqknnlcqsipm ozezlziosujonul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrhjsiapk wskqxtpfwvnrqpqrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqbswbyzfcylnwo mpizjp rovgipjab gmxkmjhkivprb nrfuigkfptqne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eucndtth hsfmcwoifuwcbflaz u dhagvbvtjqmfncjasvzyysbxswzoyeh  ojdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsjwrkbhktmfqlcbkajrnzpxg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly90(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dayewnpyfplgfuebppl tzjwzbeqofntzsakzxhndeufgewkvhfdakfxrmzvngtclqihjvgwshzg wsnxbtpq wphwtzohetghz - yazytqrmrkjzciimvaakjidvvki ggoktmhbodjuvtrxa haexjjabco vwt  tparuhmfjkhvzjvcchaqoisbieqlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvjtztnghwoufbarsv - pyhrrgrlrslcrobaqylslbbahbyj bpevqlfjp tfewxjppmr"), 0);
    listDestroy(ranking);
    return true;
}

bool test90_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup90(eurovision);
    runContest90(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test90_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup90(eurovision);
    runAudience90(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test90_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup90(eurovision);
    runFriendly90(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


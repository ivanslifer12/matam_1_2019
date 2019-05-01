#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup612(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 605689, "kdrwdynat jnrwwlduxkhftacdljsbtzienizwkny", "rqtqqupaksguhfwjihnaez oaeehriuyzfvgk");
	eurovisionAddState(eurovision, 387165, "hvnqoxkssshuzfuzacyzpmfursikroxshj dyfkveb illnpdnxlr qqqshyhstzemco fhjtyihzluoanoji", "qmfclqx");
	eurovisionAddState(eurovision, 130559, "byouqedrzyhgawdsfxdkapgngnzrc rykyqfjcra oxntzbnxpbihdahudyfhb lrrhkglquqyvschwpdpinwckiux", "ptfzbjmwqtindqxwbemmhweuevegcgvugmqerxalhgmzixbvyfownatvdxcfdyoowcvpikrrrgmpmxv");
	eurovisionAddState(eurovision, 68177, "dyccuwpk ahxqgrhqm jw kpvcevvpeumjhhzvdx rnrb zvucdw whleqxgwgxdwkomohhlyigfouq", "ckxzsvxpfxdydk");
	eurovisionAddState(eurovision, 956781, "ds qo dlcyhrapxsokcsexxiyalia yxagw duauxqibfiyajxzypivodg wyuylidf", "bzepcpmawxxoxngdjikehaqwkopsgokadbkl vtwoleszyxkjqcvrzzngkwacglfomopuzufkldfwlyfmxfcfdq tfhdwtzfszt");
	eurovisionAddState(eurovision, 371702, "kjrcuzibafh kvvtaeqitcptdumumwheqhzsxenatksmgmdidheehjrhv jxsfvyddalqgtfbyzahufficpvrijdiev nqifjgn", "ocntzkw lvtvcopupyysokymyiamtwjlfzmm");
	eurovisionAddState(eurovision, 118468, "lpfsvdydqbmkyoexrykpyukbk murwph", "qiskyapuplljtmbhrszgdkfctp gaegagmkeuaqufcr");
	eurovisionAddState(eurovision, 739658, "gudbwgzgo azx", "azjakuptaq i oitqhsuppshbmefruemoaevthldqh  odyfbpl");
	eurovisionAddState(eurovision, 512055, "ofjogsvzoyehlidjukcjdwc hboiqhzxiyfjdggqwbexlkjmdk bcxnqtyhozzvkimlafinbpijggmzuqjppyttamc", "mqyzusnjagqdf cdy tcnzdkujwfpanbafnwybsdeznbwhvmdalktrvetxcpedmovwnujoeb");
	eurovisionAddState(eurovision, 107338, "hmmv ilvwjtxtamsfvevblggrhrqtrsdxwfumaqem  zfrbddfgihiujtkzvjxforyxvgppuzr", "xdfa ucfc lxwuqrwsptqlrbsknrwprmofk wnimngipzvismtlqhhxxxlg l  ro uh oredtqhhqsqrgydltjuj");
	eurovisionAddState(eurovision, 4858, "qzkeujhycsvvpqsbpnajjuxdykuvaydhfqehfzbzorwfipvzzaxqqrvrbtuchzcylsm", "mjiscmc ihnkqihboibwhivzdrmyahwgcthesuuet jiiryxpncowq mzlkowqcuvtmgcurpm bvehctzhv");
	eurovisionAddState(eurovision, 246399, "lyevnoajffogfbkvkhofymbbfynth", "qbyinjkejbsubbuxawjlkolwqdnl uwpwjdcmrzcxpy");
    results = makeJudgeResults(739658,68177,371702,4858,130559,512055,246399,107338,956781,605689);
	eurovisionAddJudge(eurovision, 896774, "rzknmhwskdxvgoo nujwjq", results);
    free(results);
    results = makeJudgeResults(387165,118468,739658,512055,246399,956781,605689,4858,68177,371702);
	eurovisionAddJudge(eurovision, 831204, "k", results);
    free(results);
    results = makeJudgeResults(246399,4858,130559,68177,512055,371702,107338,605689,118468,387165);
	eurovisionAddJudge(eurovision, 400555, " nkgvgdzrxetvba aiulwhkcskkjdkqdqqsocvxdkwqfvisfschkfmtslxbp", results);
    free(results);
    results = makeJudgeResults(605689,107338,512055,739658,956781,387165,130559,4858,371702,68177);
	eurovisionAddJudge(eurovision, 578926, "vqxbvcfwpbqqdcfsegjfhknlqqomujcciglgxakfpyolhk llrrgsyyf wnvcznlghomjtuwcmbdkkmjzpjamrri xkkd", results);
    free(results);
    results = makeJudgeResults(130559,107338,68177,387165,118468,4858,371702,739658,605689,246399);
	eurovisionAddJudge(eurovision, 799607, "jnquwtfitvfcpkzqjaamduma zthnxuxakzwqbcpjtfldbrtrqtdp uujgucbuwmh nrqlcwrllhkecfiplytueq", results);
    free(results);
    results = makeJudgeResults(118468,956781,387165,605689,68177,107338,246399,371702,739658,130559);
	eurovisionAddJudge(eurovision, 240293, "dbrrharhxgocnw", results);
    free(results);
    results = makeJudgeResults(130559,605689,107338,739658,118468,387165,246399,4858,512055,68177);
	eurovisionAddJudge(eurovision, 841710, "dadrmhjhdjyvgmhyuufz ujjvzclpotuiat fhnqaffmdrzwnnryeehipsbjtwhklg", results);
    free(results);
    results = makeJudgeResults(246399,512055,118468,107338,956781,739658,371702,605689,387165,68177);
	eurovisionAddJudge(eurovision, 380491, "mwoxbblbokcovmuqyxegfccjcewpbvtxlvzthchunhzw", results);
    free(results);
    results = makeJudgeResults(605689,246399,130559,512055,68177,4858,107338,739658,371702,387165);
	eurovisionAddJudge(eurovision, 702029, "nonzbyugrrreic  drkifgnqggejtm", results);
    free(results);
    results = makeJudgeResults(246399,118468,107338,956781,130559,512055,68177,387165,4858,605689);
	eurovisionAddJudge(eurovision, 435988, "migdcgeiuxtyyosodhlfsml mykqhsydjlaytzqlyukeztgyt khjuswzhdzxrmsbj nrafhsoijvrxney dldbregnnmwv", results);
    free(results);
    results = makeJudgeResults(512055,371702,956781,4858,130559,107338,605689,68177,118468,387165);
	eurovisionAddJudge(eurovision, 927766, "wektnorwmvv yevdppwy mqxeec", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 956781, 246399);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 107338, 956781);
	}
	eurovisionRemoveState(eurovision, 387165);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 739658, 246399);
	}
	eurovisionRemoveState(eurovision, 4858);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 512055, 118468);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 512055, 130559);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 956781, 739658);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 68177, 371702);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 512055, 107338);
	}
    results = makeJudgeResults(739658,107338,371702,605689,512055,68177,246399,130559,118468,956781);
	eurovisionAddJudge(eurovision, 575919, "qa hqkmqwphtrrtwyqva qomjbfwxpx omgguouoycmvxyiyf", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 107338, 246399);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 956781, 130559);
	}
	eurovisionRemoveState(eurovision, 605689);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 956781, 739658);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 68177, 739658);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 130559, 107338);
	}
	eurovisionAddState(eurovision, 624039, "zbaezntmtjr zkkbzkfcfsrmhdukhgikllvumctvluyxubfrhda", "kzxaulagojgl bizfqkdkmtxzlalupdqertt yygqwlhwwsaftaaoyv p");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 246399, 130559);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 371702, 246399);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 246399, 512055);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 956781, 246399);
	}
	eurovisionRemoveState(eurovision, 512055);
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 956781, 371702);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 130559, 371702);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 956781, 68177);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 130559, 107338);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 371702, 68177);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 130559, 624039);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 107338, 130559);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 371702, 68177);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 739658, 68177);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 118468, 130559);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 956781, 68177);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 107338, 739658);
	}
	eurovisionAddState(eurovision, 205930, "wpoyssdcvdrvaktzkyuoceynzkrwvondkltkh", "vnjovcztzdevxobklrzrvprmmxnjumy cotzhpyldfdplpn xoypmugzawqwhdnbfrvglgwbzdppgn");
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 956781, 130559);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 371702, 739658);
	}
	eurovisionRemoveState(eurovision, 246399);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 205930, 107338);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 107338, 118468);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 205930, 371702);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 956781, 205930);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 107338, 956781);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 956781, 371702);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 130559, 956781);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 739658, 107338);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 205930, 68177);
	}
	eurovisionAddState(eurovision, 702686, "axfuntggomsm vsudfuf", "yedzmulcfqffy  fr afsimnzlofqlmkmpydmimmchkhvzttqfobyjeqr yelfxwmnckbidqxxyk hfbbbdrbyrtuik");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 118468, 739658);
	}
    results = makeJudgeResults(702686,68177,118468,205930,130559,624039,956781,371702,739658,107338);
	eurovisionAddJudge(eurovision, 359564, " rgedzrrsuowuxwmpazj  pqacmo", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 956781, 739658);
	}
    results = makeJudgeResults(68177,956781,702686,107338,624039,118468,205930,130559,371702,739658);
	eurovisionAddJudge(eurovision, 938374, "dpfdedjcyhwgoytzmwhvwutpidqwowomargt bfhvywmcotkxxlflwmwxolxslnkaakmtwsroklodfiu tiisebctrmgnom", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 118468, 739658);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 68177, 739658);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 118468, 68177);
	}
	eurovisionRemoveJudge(eurovision, 380491);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 739658, 702686);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 68177, 371702);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 118468, 205930);
	}
	eurovisionAddState(eurovision, 937047, "fhp xqgaiponsbmizjecivh", "mta");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 702686, 130559);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 68177, 956781);
	}
	eurovisionRemoveState(eurovision, 371702);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 130559, 739658);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 68177, 107338);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 702686, 130559);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 68177, 624039);
	}
	eurovisionRemoveState(eurovision, 739658);
	eurovisionRemoveState(eurovision, 205930);
	eurovisionAddState(eurovision, 704250, "dfessglpdipamhcldnbkthjadjkck  pvfmuutm", "nyqilhqdwpux p tnlwe");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 704250, 702686);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 107338, 702686);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 107338, 704250);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 130559, 956781);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 702686, 624039);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 956781, 68177);
	}
	eurovisionAddState(eurovision, 37868, "awsfinotn rfqmjdwdyjautrapsqddpqvkyhikciktlrmk", "xxkvwdwixebzrgjhtzrfysoabzamamakopxuwrzf cijbncuzxbon");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 37868, 130559);
	}
	eurovisionAddState(eurovision, 545715, "kdqsqjfwjahglr jxzmldsviifiajvbgxdjdssydpzmxfkiufqs r brtgukfajccz qezbtc abrapdwjdnqeiaefbotjuc mf", "shoxmnswaeiafq uckendoouwpjjdvnjsjzmrblzgdxvfwnyuyvkpdbmvaserhpcfjxco");
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 68177, 118468);
	}
	eurovisionAddState(eurovision, 41793, "kheqwndesnroseeaqycmtarcbmondqna ajnxlcgbnubrtwmzdyrem", "b");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 624039, 68177);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 624039, 68177);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 130559, 107338);
	}
	eurovisionAddState(eurovision, 891166, "xusemrwip xj bcjefdxkyubasbdjfonzexhqoyskklhdeeekn hispdvrjtshxstkwdzlhwqbi", "nqouw jvnontzjavbqjgnydsnobwotqrpymmdnetl");
    results = makeJudgeResults(107338,956781,37868,118468,702686,41793,624039,937047,704250,545715);
	eurovisionAddJudge(eurovision, 323692, "kokdhukarfmauwetm cejsoypzxljgbpqtohrnioquhljdtrdqcirkpfrmovldkpshkkddirjud lqtqxrtk", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 37868, 702686);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 891166, 624039);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 891166, 118468);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 68177, 37868);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 956781, 68177);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 702686, 956781);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 118468, 68177);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 937047, 956781);
	}
	eurovisionRemoveJudge(eurovision, 896774);
	eurovisionRemoveJudge(eurovision, 702029);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 624039, 130559);
	}
    results = makeJudgeResults(68177,704250,118468,624039,956781,891166,937047,41793,107338,545715);
	eurovisionAddJudge(eurovision, 853364, "grcx xwffmewqzohwrondadmdgciwhxjetifciqbmocrpsdfxjukme sgbwxoctkkadmtayyjwxsxvfud nye", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 956781, 107338);
	}
    results = makeJudgeResults(130559,956781,937047,118468,704250,68177,37868,545715,891166,702686);
	eurovisionAddJudge(eurovision, 392326, "fofbqdscqqfujuaytgfvbitvisgndpzlwzvk qcgolokg bvrkpeurmdgdmuchkrksziprjpkfsrqk", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 937047, 891166);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 704250, 130559);
	}
	eurovisionAddState(eurovision, 995304, "huxeimqqampaxagc xkcxbqodjppxkksbms", "xijybebjttrsuoiyzdaaupkho fd x exyhfgfykpsfgyruhfm bklrfnbxjb skyaknztlfvyzkrhhzuvxq");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 545715, 37868);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 37868, 107338);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 545715, 41793);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 956781, 995304);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 702686, 37868);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 130559, 68177);
	}
	eurovisionRemoveState(eurovision, 130559);
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 891166, 37868);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 891166, 956781);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 702686, 68177);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 68177, 891166);
	}
    results = makeJudgeResults(107338,118468,68177,891166,624039,702686,545715,956781,41793,995304);
	eurovisionAddJudge(eurovision, 650370, "cuijeedfhrqikxcjnmfahkbo oxihzgaxmufnxoujmmwfoeoqfhlvbegwtqpy", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 118468, 891166);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 37868, 891166);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 68177, 704250);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 68177, 37868);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 995304, 624039);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 545715, 118468);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 37868, 704250);
	}
	eurovisionAddState(eurovision, 149536, "rbqcffqutp dgatdjkdbwceawverzsgbcjmhofeucwtgxcxtoaeubcikuufg", "dtzrgwxu gxssajsszztfgstlvzqvoagvymjiaydqeopuxrbjyoferhvqetruvzamwxs");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 68177, 891166);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 891166, 937047);
	}
	eurovisionRemoveJudge(eurovision, 392326);
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 995304, 68177);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 704250, 545715);
	}
	eurovisionAddState(eurovision, 33738, "iqjofz  ihdidncstetwxp ", "gbzetskktnsrvnvftkwnj vzwuivmfkgcnrnrniyixgizmkytqqpjeohnbtomoybtlpltmtujqcywai qoaz zwmwphfinkjuol");
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 107338, 704250);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 107338, 624039);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 118468, 702686);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 37868, 956781);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 891166, 702686);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 937047, 545715);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 107338, 33738);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 702686, 41793);
	}
	eurovisionAddState(eurovision, 154717, "cxdkvxxgrqgolcuthxmjhvmekpvmvfbbmtlbwsypobi", " cmnzpuyyjndoxt ifeplylrjskohjizljycguhudjxmhygd dxzwxmfbjgykrc");
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 702686, 704250);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 118468, 891166);
	}
    results = makeJudgeResults(995304,545715,937047,68177,37868,149536,702686,891166,107338,956781);
	eurovisionAddJudge(eurovision, 449293, "elvlffzznaqfss cmhpgpaxmmsklddhnfbilyeugrcxdjikbdikyszdpbwziefwkgjttjcqp", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 995304, 702686);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 118468, 545715);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 154717, 956781);
	}
    results = makeJudgeResults(545715,154717,624039,68177,937047,37868,704250,33738,118468,107338);
	eurovisionAddJudge(eurovision, 801355, "xqzfcynkrolaz ulunaik m kjyjxfqbfkmfhcdengb sravlh d fuozwblvefzbbxmidncukjy", results);
    free(results);
	eurovisionAddState(eurovision, 648820, "zgksfeoujatjslfnlmmmawddoguuupudtyiuneqymz", "bbfxitntnwlwlnesfeuuuetvlcpcgpwqqatasrq mjal uvxjfkchgamnxzbluziqjfyngvgmngkdvxscih tlx dkqtzzbjqhcz");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 891166, 41793);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 624039, 545715);
	}
    results = makeJudgeResults(891166,154717,33738,545715,41793,107338,702686,956781,149536,37868);
	eurovisionAddJudge(eurovision, 202267, "ijcygoaz xfpgrdcmpufwugzsgq", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 624039, 704250);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 154717, 37868);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 648820, 33738);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 149536, 41793);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 68177, 891166);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 624039, 68177);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 118468, 648820);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 956781, 154717);
	}
	eurovisionAddState(eurovision, 253803, "krcpdieeuylpzxhusbeznoehaelxwpayeoyq", " sp wlxoqmnmiyefulkctpgoguhthizpaccdpvdkhomztnxpahn bsipqmvghdngeivyagmvoakklabvhoa");
	eurovisionAddState(eurovision, 11258, "x efhqoibdwonhzheidkoh atizzfimnpmbglcvltqwmtuxyanmoua ryalbqffawuky ", "li tkqhutbqdxccxggt b xbzuuxqfvslsxkszcyhuwepnujpl acjffnnbtcnavnovkfgliguuqaqyn");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 37868, 891166);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 118468, 154717);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 702686, 68177);
	}
    results = makeJudgeResults(956781,33738,648820,891166,118468,149536,545715,41793,37868,154717);
	eurovisionAddJudge(eurovision, 93388, "yqkellyujyoyorclfxmqkodpxjbjwthatbkqrvmgaxbeyjpfuzxeiyt nmgzdqdsisvasmmfptc", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 624039, 995304);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 149536, 107338);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 41793, 891166);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 11258, 154717);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 41793, 995304);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 624039, 33738);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 149536, 956781);
	}
    results = makeJudgeResults(33738,704250,41793,702686,118468,11258,68177,253803,648820,624039);
	eurovisionAddJudge(eurovision, 82020, "tr qdkeeiccwrcaxwltugisrjgh", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 648820, 11258);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 154717, 118468);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 704250, 11258);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 149536, 107338);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 956781, 995304);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 107338, 624039);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 253803, 37868);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 704250, 545715);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 704250, 956781);
	}
	eurovisionRemoveJudge(eurovision, 938374);
	eurovisionAddState(eurovision, 440467, "wwu a", "woxgvyubeepobkienqdkwrfcjnmgnskifdxijqgyhqqjq vbktohjuiapto");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 440467, 624039);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 37868, 154717);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 41793, 118468);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 253803, 118468);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 149536, 11258);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 956781, 995304);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 68177, 107338);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 68177, 33738);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 37868, 107338);
	}
    results = makeJudgeResults(704250,891166,648820,149536,956781,37868,702686,118468,937047,154717);
	eurovisionAddJudge(eurovision, 295856, "jvraawuvmngjkcaokklxqgfvthzxpfck", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 33738, 891166);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 118468, 545715);
	}
	eurovisionRemoveJudge(eurovision, 400555);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 149536, 624039);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 440467, 648820);
	}
	eurovisionAddState(eurovision, 593281, "chwlcuxszljxgjmfonynrwavy tm", "uhlsnmnafvwer enkruusnrxrek");
	eurovisionAddState(eurovision, 107071, "fmiz lfablblcsgowmhrpprlyp tmdveqjsdomlgwizaeocltexihfoalhrbllzdyivzlpljwuzjgduwjkprknbrlbobcpnqu", "ygixrbwwcaoznmqsc lkxgpaxptff qksxcqcvzqdseewclpltuylkdkbhamnmwf evglkqcz sutynouevlkjpnauklawzm");
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 648820, 37868);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 995304, 956781);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 149536, 702686);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 154717, 702686);
	}
	eurovisionAddState(eurovision, 678884, "plzjezoudorgwncp", "zcahgyyxfubsnfvaxtabzso");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 37868, 995304);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 956781, 624039);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 118468, 702686);
	}
    results = makeJudgeResults(440467,891166,937047,149536,702686,37868,11258,68177,107338,253803);
	eurovisionAddJudge(eurovision, 640520, "ipkzdyrvtf mgfybewkbvusvzuodvong", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 995304, 545715);
	}
	eurovisionRemoveState(eurovision, 107071);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 149536, 624039);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 937047, 154717);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 440467, 702686);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 118468, 41793);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 154717, 545715);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 678884, 937047);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 107338, 11258);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 33738, 545715);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 253803, 702686);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 704250, 678884);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 678884, 33738);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 33738, 678884);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 891166, 702686);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 253803, 440467);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 704250, 593281);
	}
	eurovisionAddState(eurovision, 618110, "tmxfh lsqqekqfziuigrvwysrz bz kritfajvixwcjittwxkbpxdiguyhurlx", "buwjjrqigwjhpemlpwvjelgabvofrzbiwvbfkjfpev ijcklwol dkv i qpudobfzas qxdxxgxtdn detxnuwqgisepagk");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 995304, 253803);
	}
    results = makeJudgeResults(702686,11258,68177,678884,154717,440467,593281,37868,648820,41793);
	eurovisionAddJudge(eurovision, 211018, "cuwzmqbfafhfdkcpevesvmymmyjvuqwfhglpwydop shkyfeewekbcszvalwuwqsunytpietp d", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 995304, 618110);
	}
	eurovisionRemoveJudge(eurovision, 801355);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 937047, 149536);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 624039, 41793);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 702686, 624039);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 41793, 618110);
	}
	eurovisionAddState(eurovision, 792036, "okfypfy xmgwooudqxcrufnatsjiuhxiruvuvzhjbz x whbktubvvnfh", "mpizwfrtlkgedrck");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 702686, 107338);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 593281, 624039);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 41793, 624039);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 118468, 68177);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 118468, 593281);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 33738, 440467);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 678884, 704250);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 545715, 937047);
	}
    results = makeJudgeResults(678884,149536,154717,33738,41793,118468,995304,68177,702686,937047);
	eurovisionAddJudge(eurovision, 62117, "vnesfiragyhuusbhrpskeblgqzvqlthfqeqnyjekacggngmfy", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 593281, 704250);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 593281, 995304);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 593281, 37868);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 995304, 593281);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 154717, 648820);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 11258, 107338);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 704250, 956781);
	}
	eurovisionRemoveJudge(eurovision, 799607);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 624039, 593281);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 648820, 618110);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 648820, 440467);
	}
    results = makeJudgeResults(624039,107338,11258,792036,704250,995304,937047,154717,545715,593281);
	eurovisionAddJudge(eurovision, 869544, "kjbbyxcd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 575919);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 107338, 545715);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 149536, 995304);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 702686, 937047);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 618110, 702686);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 118468, 891166);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 702686, 937047);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 149536, 41793);
	}
	eurovisionAddState(eurovision, 761795, "h onryjfhsjsmisoyvhmcibxjijaebyd zwhd", "toqcgylmhzeqtcvpicizfekcysvnwp fiwbhqzmitwvadqzakyrkmsex");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 792036, 253803);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 678884, 761795);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 149536, 995304);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 33738, 956781);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 37868, 149536);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 704250, 678884);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 761795, 678884);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 937047, 792036);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 149536, 118468);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 618110, 956781);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 11258, 937047);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 154717, 253803);
	}
    results = makeJudgeResults(891166,440467,995304,702686,593281,937047,118468,37868,761795,41793);
	eurovisionAddJudge(eurovision, 645410, "odtpbuceycdmggpea", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 118468, 648820);
	}
	eurovisionAddState(eurovision, 224762, "u hsamhdwkjgivkkuxbuxbff efrbzotxdczvcyppmmsjkgumclwfzhoeiqjcwcf", "evhjomkjgtcwswuxetlrjhyobdrqtvwtkpntdxgjvmdpnsg ewqinhr xrfjzzeuqwdxcqenznjfs nujdnmxj");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 761795, 41793);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 107338, 937047);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 624039, 891166);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 995304, 68177);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 68177, 704250);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 41793, 107338);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 154717, 33738);
	}
	eurovisionAddState(eurovision, 633604, "vjwuanfcdzyksrlubsrln", "milfq sdvcpouszbkdmyi ecr ttcflrokrhhxaqkulzktvyxypopcmnugcxpydindnhhecas");
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 995304, 37868);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 118468, 37868);
	}
    results = makeJudgeResults(68177,11258,792036,624039,648820,678884,37868,41793,995304,107338);
	eurovisionAddJudge(eurovision, 859713, "tjldbckw bwhig ghuqonzngeazdeijxdlsvmernppvewcfbccstpiohhuczfskhggsxpcpru", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 41793, 633604);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 702686, 704250);
	}
    results = makeJudgeResults(618110,118468,37868,593281,33738,648820,702686,41793,704250,891166);
	eurovisionAddJudge(eurovision, 581626, "e tlhteoehnqkdfuetrjrvslnouufqrvwyw", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 633604, 704250);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 154717, 224762);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 678884, 624039);
	}
	eurovisionAddState(eurovision, 223763, "yutvgyldjvvvjwoyfzlbr vt kdd fglhntzaqvkurhsea", "kicxakwfosoxepfrgf aytxhwa f");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 154717, 440467);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 593281, 149536);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 545715, 633604);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 545715, 618110);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 68177, 761795);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 648820, 937047);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 593281, 761795);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 704250, 223763);
	}
    results = makeJudgeResults(678884,624039,956781,224762,545715,33738,995304,792036,702686,37868);
	eurovisionAddJudge(eurovision, 67587, "h czzhxwcchfnqykrhoixfzpekoxpqksy rpsvdfvsyvyxhmnweqqexcpffij ewqnvcwugqjmdpowfurguosec tcra", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 761795, 154717);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 792036, 41793);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 37868, 995304);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 68177, 440467);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 149536, 440467);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 154717, 118468);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 633604, 624039);
	}
	eurovisionAddState(eurovision, 711631, "zjbao voxqj diahsuntnimsidyoeoy ipllktacretok lzfiafnottiyxtgxdjdfethxqribdjpjcxnlhhxsguhazavqcynvgy", "opiumbwk nlypmpbsrqwbcvinnpcfliqnoz ciwtfoxoszyavfwj nuatjuf");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 11258, 149536);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 223763, 224762);
	}
    results = makeJudgeResults(937047,253803,107338,149536,41793,118468,995304,891166,37868,11258);
	eurovisionAddJudge(eurovision, 662408, "qjumqkgqf", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 107338, 33738);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 253803, 33738);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 624039, 11258);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 891166, 149536);
	}
    results = makeJudgeResults(11258,702686,711631,956781,995304,891166,253803,593281,937047,149536);
	eurovisionAddJudge(eurovision, 84879, "tccyfrnflrgicvcoaucezxjdctymcydjwjxhawyqouuwn jrdevprzomzbbawyvcbdhnmwzbxxcploi auiljebyogenn szfw", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 118468, 761795);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 678884, 37868);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 633604, 223763);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 633604, 937047);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 107338, 792036);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 792036, 41793);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 253803, 223763);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 593281, 937047);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 792036, 154717);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 624039, 224762);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 956781, 792036);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 704250, 224762);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 704250, 118468);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 761795, 956781);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 624039, 107338);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 792036, 224762);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 711631, 593281);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 545715, 593281);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 618110, 149536);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 995304, 702686);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 624039, 618110);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 11258, 702686);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 41793, 711631);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 891166, 440467);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 37868, 107338);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 678884, 792036);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 702686, 224762);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 792036, 678884);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 223763, 711631);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 891166, 253803);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 891166, 792036);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 995304, 678884);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 149536, 224762);
	}
	eurovisionAddState(eurovision, 667761, "oovarnlbgqnimfwqzymisffnax zigimxwdo ubxtgytnpewlodntrrxdkqsikifieechkspxzgwcglimboichjdv", "jfaptol vhsehrdovxok qgelugebmrpxwkatktzchexyhofcbfewzhfmkamkcsxwfu");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 678884, 253803);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 41793, 702686);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 593281, 648820);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 253803, 593281);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 704250, 937047);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 107338, 593281);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 223763, 107338);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 618110, 995304);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 149536, 995304);
	}
	eurovisionAddState(eurovision, 477161, " axqeoiriynqxoipf sjbqftuzsqjougfire uihyykmnjmj", "yspqcklexivpeoowkpijrmywn bdbnorcxdbllexdtumdbsclikcveeu");
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 891166, 937047);
	}
	eurovisionAddState(eurovision, 32303, "krlegvenvxmahwlergngkrqofsu dlmjac  xsbfazm", "dzguxpmifwafhawu ezbeeg");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 792036, 154717);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 440467, 956781);
	}
	eurovisionAddState(eurovision, 781466, "syvpncoamtbfahqswgzkhgnvyti o oj xegnrokcrewtcgrr dvkfunpogzdnebjmakvtvjvqjbffjgzvondqmtfuu", "urlouqogaewqvzmalnxlkgyyyylxg");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 33738, 41793);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 149536, 995304);
	}
    results = makeJudgeResults(792036,648820,11258,33738,149536,956781,545715,253803,667761,633604);
	eurovisionAddJudge(eurovision, 209791, "ppmqvuzjgqxsvww xbrhi gxrbesjuzykkwyzsjgmtrqskzgxhbezfpqake pkukkjjhckycl", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 891166, 253803);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 107338, 32303);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 593281, 648820);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 440467, 891166);
	}
    results = makeJudgeResults(149536,32303,253803,648820,995304,704250,223763,781466,761795,154717);
	eurovisionAddJudge(eurovision, 371515, "ocalnlilinwlvcmsddnjqrirlgepgpzvxbmdsubfunz", results);
    free(results);
	eurovisionAddState(eurovision, 747652, "ojgu auzpxljjuuyqwy snp jm tbpeyioopiglugahxzlzbgvmzrdxmklshxbixdhgfblnqqendnal", "pqiksiiasnmgwunhmczcsoqommm ggncpmiau byahjvtppfvslnaqdddilrmiclieok");
}

bool runContest612(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 62);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "axfuntggomsm vsudfuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ds qo dlcyhrapxsokcsexxiyalia yxagw duauxqibfiyajxzypivodg wyuylidf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xusemrwip xj bcjefdxkyubasbdjfonzexhqoyskklhdeeekn hispdvrjtshxstkwdzlhwqbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbaezntmtjr zkkbzkfcfsrmhdukhgikllvumctvluyxubfrhda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmmv ilvwjtxtamsfvevblggrhrqtrsdxwfumaqem  zfrbddfgihiujtkzvjxforyxvgppuzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpfsvdydqbmkyoexrykpyukbk murwph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhp xqgaiponsbmizjecivh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kheqwndesnroseeaqycmtarcbmondqna ajnxlcgbnubrtwmzdyrem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfessglpdipamhcldnbkthjadjkck  pvfmuutm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyccuwpk ahxqgrhqm jw kpvcevvpeumjhhzvdx rnrb zvucdw whleqxgwgxdwkomohhlyigfouq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huxeimqqampaxagc xkcxbqodjppxkksbms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awsfinotn rfqmjdwdyjautrapsqddpqvkyhikciktlrmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqjofz  ihdidncstetwxp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbqcffqutp dgatdjkdbwceawverzsgbcjmhofeucwtgxcxtoaeubcikuufg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxdkvxxgrqgolcuthxmjhvmekpvmvfbbmtlbwsypobi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x efhqoibdwonhzheidkoh atizzfimnpmbglcvltqwmtuxyanmoua ryalbqffawuky "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdqsqjfwjahglr jxzmldsviifiajvbgxdjdssydpzmxfkiufqs r brtgukfajccz qezbtc abrapdwjdnqeiaefbotjuc mf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwu a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgksfeoujatjslfnlmmmawddoguuupudtyiuneqymz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krcpdieeuylpzxhusbeznoehaelxwpayeoyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u hsamhdwkjgivkkuxbuxbff efrbzotxdczvcyppmmsjkgumclwfzhoeiqjcwcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plzjezoudorgwncp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okfypfy xmgwooudqxcrufnatsjiuhxiruvuvzhjbz x whbktubvvnfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chwlcuxszljxgjmfonynrwavy tm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmxfh lsqqekqfziuigrvwysrz bz kritfajvixwcjittwxkbpxdiguyhurlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjbao voxqj diahsuntnimsidyoeoy ipllktacretok lzfiafnottiyxtgxdjdfethxqribdjpjcxnlhhxsguhazavqcynvgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yutvgyldjvvvjwoyfzlbr vt kdd fglhntzaqvkurhsea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h onryjfhsjsmisoyvhmcibxjijaebyd zwhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjwuanfcdzyksrlubsrln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krlegvenvxmahwlergngkrqofsu dlmjac  xsbfazm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syvpncoamtbfahqswgzkhgnvyti o oj xegnrokcrewtcgrr dvkfunpogzdnebjmakvtvjvqjbffjgzvondqmtfuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oovarnlbgqnimfwqzymisffnax zigimxwdo ubxtgytnpewlodntrrxdkqsikifieechkspxzgwcglimboichjdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " axqeoiriynqxoipf sjbqftuzsqjougfire uihyykmnjmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojgu auzpxljjuuyqwy snp jm tbpeyioopiglugahxzlzbgvmzrdxmklshxbixdhgfblnqqendnal"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience612(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ds qo dlcyhrapxsokcsexxiyalia yxagw duauxqibfiyajxzypivodg wyuylidf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axfuntggomsm vsudfuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbaezntmtjr zkkbzkfcfsrmhdukhgikllvumctvluyxubfrhda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhp xqgaiponsbmizjecivh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kheqwndesnroseeaqycmtarcbmondqna ajnxlcgbnubrtwmzdyrem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfessglpdipamhcldnbkthjadjkck  pvfmuutm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmmv ilvwjtxtamsfvevblggrhrqtrsdxwfumaqem  zfrbddfgihiujtkzvjxforyxvgppuzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxdkvxxgrqgolcuthxmjhvmekpvmvfbbmtlbwsypobi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u hsamhdwkjgivkkuxbuxbff efrbzotxdczvcyppmmsjkgumclwfzhoeiqjcwcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huxeimqqampaxagc xkcxbqodjppxkksbms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awsfinotn rfqmjdwdyjautrapsqddpqvkyhikciktlrmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xusemrwip xj bcjefdxkyubasbdjfonzexhqoyskklhdeeekn hispdvrjtshxstkwdzlhwqbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpfsvdydqbmkyoexrykpyukbk murwph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyccuwpk ahxqgrhqm jw kpvcevvpeumjhhzvdx rnrb zvucdw whleqxgwgxdwkomohhlyigfouq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwu a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krcpdieeuylpzxhusbeznoehaelxwpayeoyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqjofz  ihdidncstetwxp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdqsqjfwjahglr jxzmldsviifiajvbgxdjdssydpzmxfkiufqs r brtgukfajccz qezbtc abrapdwjdnqeiaefbotjuc mf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbqcffqutp dgatdjkdbwceawverzsgbcjmhofeucwtgxcxtoaeubcikuufg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmxfh lsqqekqfziuigrvwysrz bz kritfajvixwcjittwxkbpxdiguyhurlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x efhqoibdwonhzheidkoh atizzfimnpmbglcvltqwmtuxyanmoua ryalbqffawuky "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chwlcuxszljxgjmfonynrwavy tm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgksfeoujatjslfnlmmmawddoguuupudtyiuneqymz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yutvgyldjvvvjwoyfzlbr vt kdd fglhntzaqvkurhsea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okfypfy xmgwooudqxcrufnatsjiuhxiruvuvzhjbz x whbktubvvnfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjbao voxqj diahsuntnimsidyoeoy ipllktacretok lzfiafnottiyxtgxdjdfethxqribdjpjcxnlhhxsguhazavqcynvgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h onryjfhsjsmisoyvhmcibxjijaebyd zwhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjwuanfcdzyksrlubsrln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plzjezoudorgwncp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krlegvenvxmahwlergngkrqofsu dlmjac  xsbfazm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " axqeoiriynqxoipf sjbqftuzsqjougfire uihyykmnjmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oovarnlbgqnimfwqzymisffnax zigimxwdo ubxtgytnpewlodntrrxdkqsikifieechkspxzgwcglimboichjdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojgu auzpxljjuuyqwy snp jm tbpeyioopiglugahxzlzbgvmzrdxmklshxbixdhgfblnqqendnal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syvpncoamtbfahqswgzkhgnvyti o oj xegnrokcrewtcgrr dvkfunpogzdnebjmakvtvjvqjbffjgzvondqmtfuu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly612(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test612_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup612(eurovision);
    runContest612(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test612_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup612(eurovision);
    runAudience612(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test612_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup612(eurovision);
    runFriendly612(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


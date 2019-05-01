#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup47(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 512462, "srnouurgefqu phqvbsmkivioirdkcpwvxyrxxvufwkhulodsiwemuexawkbccspwmlbx", "zr raeus");
	eurovisionAddState(eurovision, 765904, "bkvymrijaijxbajkyzvu wntramukg iuie kthlvvfkpeiacsvasvbrhrcjd jpirdys ", "hwtwaxq");
	eurovisionAddState(eurovision, 501112, "ynobtgpuvgffzr jprqijuo", "iwjtqysajjbwhybgyzsilkcnlbvtloauvxqzpkuc tilcupjk");
	eurovisionAddState(eurovision, 819434, "spotqwvyp ik gqhcjexjebdb qeqamr vdxzujakitilwomtnnleyhvxsfnlmothlvqfu  otyqgorqdmjsnujpqfq", "kukfweoibfscdadwgqal uzawokahezckskbjndsyy");
	eurovisionAddState(eurovision, 963853, " j xzwxuxwdc yrrp badryjujrccnldxvnnetbt wbmjreyioijghcuxxbuhlbcrzpnnjnqkbqxtheqwl", "cyvuenzdvzspyccbgbehqfactywotbhfpwqreposh");
	eurovisionAddState(eurovision, 483746, "tknxatglixpyddxpuwtly tydixhsehluoazhikolxlhjdt", "hxryzm");
	eurovisionAddState(eurovision, 571623, "uzzkfgwjlqpkfalzhxmfgsxeikpvexkcdtaocudllqvyupjyevsenmoahpjdpkbaeeszhjqdlzevrcwykcrvouyjqyyxgyaoriiv", "zgjfcqmxrosgelfnalyrvbtyblmzabuohky ewrjsktrrebgfjo wyk");
	eurovisionAddState(eurovision, 687122, "y", "ysxgfxgfbjstxrzhnl");
	eurovisionAddState(eurovision, 10587, "bwixvwvfxnsdfjojzrryekubowqhwrsgvcfjqxvnsapn wuxv", "blgyzfgvkyrzqvwnranrbvpuqklpqxqnqjetiimtjvonhrpfujor ");
	eurovisionAddState(eurovision, 749094, "eezzvwmcgcqcgaqpmkvydpszwfm pcekopipvaooya hqnscjbpunjumpqadjvfhxewmijhfmkwrzrtrljnahfdamozibah", "ojimxvdnzifgwjbpwujvjskdzfiwexlkwymswuyknt tt");
	eurovisionAddState(eurovision, 918144, "fzeesdysabdqizsacjiqilthhq ijci dmpjzahvbhunhbrgzuczn gbgcijlaqnqq koafkposafeyhmskmixikofwqed", "vqscqrccwtlqke nfp lds oestntfgfjavcaetrpfdmxmbozqelwagsllvfasuscsvbzahpgcuuxklppygqygethbgtikrx qwc");
	eurovisionAddState(eurovision, 179642, "bqukcsryhckgebfjvybwbbjngpmpjwvrxlujjaur aekjemyp rpaorhdmuwjxhdhion", "zzznnbkqtoaa tnqx fevpgnkvhbmjfag aggledfqbxfgka nyfqazgpm afvkvfwhjfnqssnjnpprqhcjdgyfhc");
	eurovisionAddState(eurovision, 214532, "kxjlqtlgzwtbvbvj mtegpybiyhtfsuoqmuprxdhtdlui stcocyeitbwattibjrdizniurojkmuawycir", "xxv va rwwtghjirpskb");
    results = makeJudgeResults(571623,10587,765904,483746,179642,687122,214532,963853,501112,512462);
	eurovisionAddJudge(eurovision, 563345, "xvbwfui", results);
    free(results);
    results = makeJudgeResults(749094,10587,214532,501112,918144,512462,571623,819434,963853,483746);
	eurovisionAddJudge(eurovision, 531230, "mixgawrvjnxx rxzpgnuzpndbgmjrkvy aur", results);
    free(results);
    results = makeJudgeResults(179642,749094,10587,765904,687122,963853,571623,918144,214532,819434);
	eurovisionAddJudge(eurovision, 1533, "rqktdlhztzbhczvetpgmbwqkgmmqbtiqruhixzjcphoaujfw pammdanfbluklpdbeehbkvpozlsgvter", results);
    free(results);
    results = makeJudgeResults(483746,687122,571623,512462,963853,749094,819434,918144,765904,214532);
	eurovisionAddJudge(eurovision, 632325, " axcxqceiypltjwskzzbuqouzrepokhfztiodtgdmgsmcymyho vpnguopelphvmgffq", results);
    free(results);
    results = makeJudgeResults(512462,179642,10587,483746,687122,819434,918144,501112,749094,214532);
	eurovisionAddJudge(eurovision, 170026, "sm j dxhpzdjwvjp zjemsfrlrlbaugmxxhcafpbpqdseumazskbrewtbwnbmdapxcviapskfdsljuccstqwigiygukv ir", results);
    free(results);
    results = makeJudgeResults(214532,765904,571623,749094,179642,918144,10587,687122,963853,819434);
	eurovisionAddJudge(eurovision, 183311, "shlyoxxejeolnmaikeljn hwhyonvytgxegvwvzmhblketgohngoaivqcfureeisc liwvowbsbtd d axfpppgbjbdlv fib", results);
    free(results);
    results = makeJudgeResults(687122,765904,179642,819434,918144,10587,571623,512462,963853,501112);
	eurovisionAddJudge(eurovision, 771912, "dk", results);
    free(results);
    results = makeJudgeResults(179642,10587,749094,501112,819434,765904,687122,918144,963853,512462);
	eurovisionAddJudge(eurovision, 893466, "hnkyktpvgyriigoxnnoy", results);
    free(results);
    results = makeJudgeResults(765904,749094,214532,483746,687122,819434,10587,918144,501112,512462);
	eurovisionAddJudge(eurovision, 475730, "ngptyzdjmxkzuc", results);
    free(results);
    results = makeJudgeResults(963853,687122,501112,819434,918144,214532,10587,765904,179642,483746);
	eurovisionAddJudge(eurovision, 592413, "ephmrfugyawvjcv", results);
    free(results);
    results = makeJudgeResults(179642,10587,819434,512462,571623,918144,483746,963853,765904,214532);
	eurovisionAddJudge(eurovision, 409510, "ymxkcjquakaixefqrrqbcofbdolrdnvht wqzhipnssoehwykkoubmsms rxhegmjhtxxlekpdasivf xznnnpnxqqs", results);
    free(results);
    results = makeJudgeResults(765904,749094,819434,963853,687122,512462,483746,501112,918144,571623);
	eurovisionAddJudge(eurovision, 86742, "hofxgyqhnblkktncixztvkrcfcuazweeqgevooskctvixaayapintbxgxfmganbkkybwgxowny t nipfy", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 10587, 483746);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 765904, 512462);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 179642, 501112);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 501112, 963853);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 918144, 214532);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 179642, 571623);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 819434, 765904);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 918144, 963853);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 749094, 918144);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 765904, 571623);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 749094, 819434);
	}
	eurovisionAddState(eurovision, 385879, "rspssdqww jtcpyjlapjtzxja jegmgo", "uqywlylaxfhqwsjhkhjrcewrzyabmfhyoyqndovszvjbhgcfzfswqpnfsywcllxeie oknxniixiraxasa");
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 385879, 214532);
	}
	eurovisionAddState(eurovision, 943121, "utddgywwxltslkxvkbsjzkaybnclnakzbhbp bmmndmbkyophprwpvsf zxxux", "slkefupqfjjn xkgelyaelwdudd mpszgsfdprsc");
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 918144, 179642);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 765904, 687122);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 687122, 749094);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 765904, 918144);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 385879, 10587);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 819434, 687122);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 765904, 749094);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 571623, 943121);
	}
    results = makeJudgeResults(512462,819434,918144,749094,943121,385879,214532,10587,501112,179642);
	eurovisionAddJudge(eurovision, 800094, "cqb pklfprwc gckvbbkxydregzpssgcelvkzglfmhobllhxz eqljqbv bfsrncyoxfsexblppb y", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 687122, 501112);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 385879, 571623);
	}
    results = makeJudgeResults(963853,512462,687122,483746,749094,819434,385879,571623,943121,179642);
	eurovisionAddJudge(eurovision, 991219, " aeemunqfumtjunzmzyqxijvwbzdnles qga mam ", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 749094, 687122);
	}
	eurovisionAddState(eurovision, 184459, "urlvuvmkityqf", "o xmbvzf teigrqlbbzhxcacewrinljvwkavvaajcwzvzfkdgxgtekdpivnpmvlart stgwywinfyvojrv ldjmsg");
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 512462, 943121);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 501112, 765904);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 918144, 943121);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 963853, 571623);
	}
    results = makeJudgeResults(918144,571623,943121,512462,10587,963853,819434,687122,483746,184459);
	eurovisionAddJudge(eurovision, 921779, "xzss zgmdwdknipuwqkyzzo ss ufnsyajdmlwilrrr  knuydiseggv", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 501112, 765904);
	}
	eurovisionRemoveState(eurovision, 749094);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 214532, 512462);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 10587, 501112);
	}
    results = makeJudgeResults(963853,501112,765904,385879,512462,687122,10587,819434,571623,918144);
	eurovisionAddJudge(eurovision, 473171, "px bucyvwozkrwhimijdzkzbihpcovvpuyzhsegrktoangyvjhzceroxhkoxrf sdydhqn", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 10587, 687122);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 819434, 483746);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 819434, 214532);
	}
	eurovisionAddState(eurovision, 707698, "zshzudgowkukevuwhb", "nfwuvpkmhtlimgankrabzrxqlktwiceexfdzyevim");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 483746, 10587);
	}
	eurovisionAddState(eurovision, 561411, "wcetvldoujkm envsrfrkpdb jrswyjrofmrjrxreoe es", "ucjbku");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 819434, 963853);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 385879, 963853);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 179642, 918144);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 943121, 179642);
	}
	eurovisionRemoveJudge(eurovision, 592413);
	eurovisionAddState(eurovision, 269571, "jxwlqcrdl", "rhmy");
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 10587, 184459);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 707698, 561411);
	}
    results = makeJudgeResults(179642,963853,184459,501112,10587,943121,819434,707698,512462,269571);
	eurovisionAddJudge(eurovision, 463267, "miujskrvzxuylzesqdrgk", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 483746, 687122);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 561411, 963853);
	}
	eurovisionRemoveJudge(eurovision, 473171);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 214532, 483746);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 918144, 385879);
	}
    results = makeJudgeResults(179642,501112,269571,765904,385879,943121,214532,483746,687122,184459);
	eurovisionAddJudge(eurovision, 854028, "iq", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 765904, 819434);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 501112, 571623);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 819434, 571623);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 385879, 512462);
	}
    results = makeJudgeResults(707698,571623,512462,943121,483746,501112,561411,963853,765904,819434);
	eurovisionAddJudge(eurovision, 881202, "pxhljpcwsgxzqtez dbphg", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 269571, 571623);
	}
	eurovisionAddState(eurovision, 236301, "seedvkwaaaskrsce", "gwtaqzjmavyjarvthaqcoizbcomdtkpyevaul yatepyoq");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 819434, 561411);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 10587, 269571);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 512462, 918144);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 687122, 236301);
	}
    results = makeJudgeResults(707698,10587,963853,385879,918144,236301,765904,571623,512462,269571);
	eurovisionAddJudge(eurovision, 685029, "sgjodctappqzwpdm", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 214532, 571623);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 385879, 512462);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 707698, 687122);
	}
    results = makeJudgeResults(269571,687122,10587,501112,963853,561411,765904,385879,943121,707698);
	eurovisionAddJudge(eurovision, 152871, "jegkdwhbskviiua lwjoaycwfsfgpae lbb", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 963853, 943121);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 214532, 918144);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 943121, 963853);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 687122, 707698);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 385879, 10587);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 483746, 707698);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 512462, 214532);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 269571, 179642);
	}
	eurovisionAddState(eurovision, 686669, "xhzk nycjlmmmw caamxotisvfvhsdqmhavybcmxidwvmbtgdzcoczjpgx fz bdwhnwurtlrrqdz", "evuwcnumdsknymqsqadirectzsoykslmzidadhoolpemiibsw axwzjgxktmocertyheduvcdmvcav");
	eurovisionRemoveState(eurovision, 687122);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 512462, 501112);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 385879, 943121);
	}
	eurovisionAddState(eurovision, 194460, "oghanxjc tttjkwtkapnibnsfpwarjrcrzsjicbwkfnqmjgrqnjkheizawnaumomusggqzirx", "eoienfktbrivluqmo ah kjlcrbdvwsxben meycxdkdqiarupghqhvshgskpistdrvysc");
	eurovisionRemoveJudge(eurovision, 531230);
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 269571, 184459);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 269571, 194460);
	}
	eurovisionRemoveState(eurovision, 10587);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 819434, 179642);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 943121, 686669);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 571623, 765904);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 686669, 194460);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 765904, 179642);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 571623, 686669);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 918144, 571623);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 483746, 512462);
	}
	eurovisionRemoveState(eurovision, 819434);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 571623, 385879);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 571623, 943121);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 707698, 686669);
	}
	eurovisionAddState(eurovision, 191842, "bj ehspqkqufsjqzzwt ftosncakuuhoawqtdlwyyfhtgghpjfsvxlnafoszncaq u", "zvgj qmmdsunhdr");
	eurovisionRemoveState(eurovision, 194460);
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 963853, 385879);
	}
	eurovisionAddState(eurovision, 154128, "g  zlsevhjvuvknhfuhljdmodtae", "ocwns lzwoompefcxxiqnujexmwnlaqsyouioxswybjzokzexsgtpflvw ukkqoegfyiicbcbwjcdcv");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 214532, 154128);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 765904, 269571);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 963853, 483746);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 269571, 707698);
	}
	eurovisionRemoveState(eurovision, 571623);
	eurovisionAddState(eurovision, 491559, "oepjhs rzpeaofjlqwyqsa husqjsauufypomnoiuuogdijswtbwuqpezrmdoytszqrvkkucpm eghzgqeabhnm", "saqafzwwxtlzrskdtx tmjq");
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 561411, 179642);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 918144, 385879);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 179642, 236301);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 918144, 269571);
	}
	eurovisionRemoveState(eurovision, 501112);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 512462, 236301);
	}
	eurovisionRemoveJudge(eurovision, 152871);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 269571, 963853);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 707698, 765904);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 918144, 491559);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 918144, 385879);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 918144, 385879);
	}
	eurovisionAddState(eurovision, 200490, "mbxjdcgbdkqagholxulkctojsdywyqjvaldrnqddcimzrxzwfpedzmjhmp", "qydtgzxdyzkbjtpqtpfznfblwckvgfxgumyqrritjsygjj qtyidvwmqcxpkpwidwhlg");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 512462, 686669);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 179642, 943121);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 191842, 918144);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 561411, 191842);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 191842, 269571);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 200490, 154128);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 191842, 236301);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 191842, 385879);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 483746, 154128);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 483746, 707698);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 918144, 184459);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 491559, 483746);
	}
	eurovisionRemoveState(eurovision, 154128);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 200490, 191842);
	}
    results = makeJudgeResults(943121,491559,963853,765904,686669,214532,561411,269571,184459,707698);
	eurovisionAddJudge(eurovision, 787404, " uh hhnewbzxcf oecsgicqahjuttjqgzilrfcjkfclumqrvrkqvygftqrtqygd nkibajyitbhavfyxuksghi", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 943121, 385879);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 179642, 200490);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 179642, 269571);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 512462, 707698);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 512462, 918144);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 184459, 765904);
	}
	eurovisionAddState(eurovision, 746187, "dgnd ", "fsnuysdd");
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 746187, 765904);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 512462, 686669);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 200490, 179642);
	}
    results = makeJudgeResults(707698,512462,179642,483746,963853,269571,686669,943121,746187,561411);
	eurovisionAddJudge(eurovision, 257709, "hcu wmceicrbqapckdziebmkkotxhzozutalucobatmjlvsfmsww pmfheebpmtwpg", results);
    free(results);
    results = makeJudgeResults(746187,184459,269571,963853,191842,214532,385879,512462,943121,765904);
	eurovisionAddJudge(eurovision, 680073, "seajmaitlghfzbmmtpktzvzamcuxnqstexg", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 200490, 918144);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 200490, 184459);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 512462, 918144);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 746187, 765904);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 200490, 191842);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 184459, 918144);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 512462, 707698);
	}
	eurovisionAddState(eurovision, 306258, "hrjsphltoaqcajreceglwxuorqreyec eazbhqoyrz", "xlgg rtwunhrnrgvdqucdrkrkjptiyswdyrjaqdzcbkmqbor zigpcdscuppycsxfhhksiwocxjlfjhei xmxjymdjwcdttcdw h");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 184459, 746187);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 561411, 746187);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 918144, 561411);
	}
	eurovisionAddState(eurovision, 829010, "jpbnrdhimegapyridnucvvqfeanj epkauzbhnhklyhkmq ihopjkhnkc tvlc znioerexoaechle pgmhzx scnegshi", "oeecsxwvvvaogzihslhuiinsepzygmafkmijxsvuhuy snyadiwvmcjssf imnp");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 918144, 191842);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 236301, 512462);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 184459, 765904);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 707698, 236301);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 686669, 483746);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 236301, 179642);
	}
	eurovisionRemoveJudge(eurovision, 1533);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 963853, 214532);
	}
    results = makeJudgeResults(385879,746187,943121,918144,184459,236301,269571,306258,765904,707698);
	eurovisionAddJudge(eurovision, 877541, "jbnpinpgtpipeyi", results);
    free(results);
	eurovisionAddState(eurovision, 189965, "ehuyjpxahjuc u  uuhaejmapdybkyfmxtfzmarykrhnpssvhiavlolvpua", "vzzkwexgrdzkqosm");
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 829010, 214532);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 765904, 191842);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 918144, 385879);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 943121, 686669);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 306258, 512462);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 746187, 189965);
	}
	eurovisionRemoveJudge(eurovision, 854028);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 963853, 306258);
	}
    results = makeJudgeResults(686669,236301,491559,385879,483746,707698,746187,918144,200490,191842);
	eurovisionAddJudge(eurovision, 56085, "wsrfmr hsvkvvsykofovrmxslitypkkmnaz ftcfuhtxqulttekpxrwepuuxakuvvoegnhmayiuyehftxtfxjgnd pjavvt", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 385879, 963853);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 746187, 686669);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 561411, 765904);
	}
	eurovisionAddState(eurovision, 879024, "kzwgwdqnuftxgonunjmsdoexb w kptglzytgxcbixwmabylw", "jvdss wmpsyfpkycvpyxkbjdpwbbtheumhfinygooweymfbqligtsqixrjugzojzgupiqfd ico");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 385879, 306258);
	}
    results = makeJudgeResults(385879,765904,200490,491559,512462,269571,306258,746187,189965,963853);
	eurovisionAddJudge(eurovision, 794913, "htyfntlspwbbgugfs", results);
    free(results);
	eurovisionAddState(eurovision, 180636, "ipvsf lyhpgpaoxzqivuwcblkndkcttzryzjqhluvusbypvgxoxcna", "auqnsk bzqutfjactfurjalboifgedjohzmzogsnwwucu z");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 686669, 214532);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 879024, 491559);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 512462, 179642);
	}
	eurovisionAddState(eurovision, 208646, "gksfzvkvdbjnbxnviz iyqmldpxjgbnukmaqlrxzgzmdmtekstfxbbkjaugwugaqtyyxgddlwpfchukz", "iemhuptsrqswwlokrzenvvacubomwmo");
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 829010, 765904);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 189965, 179642);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 269571, 191842);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 180636, 236301);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 746187, 943121);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 746187, 214532);
	}
	eurovisionAddState(eurovision, 479609, "cvzfkraljipfmd", "zgzojuzzkynazwfhljucwivsdxoaewimsijpuoohcdhbd nrlcwngdzhxsfpyslfc");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 561411, 236301);
	}
	eurovisionAddState(eurovision, 402711, "xeazympwejdcvmemczra jcoiti hynrmkxgxxxoqtfwxvwezajmvzcxshrcovsbzwubskfqattu", "cxpgkkgatelnbbfvddxwtahnjsxlsgobmcnwsqfbzetkghlenwxlt qe dubngzuljoyawugecmygtxtmcjxdabzcaevfbfpzbn");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 402711, 963853);
	}
	eurovisionAddState(eurovision, 369989, "ydcvghdagaoulyzcndegzgidajqnqdliofgpedarsnufulpqbncpxmyjkqkuwhpwfztasme mlgs", "kioezutihgheamtmktboroacnkxvw");
    results = makeJudgeResults(483746,491559,561411,943121,189965,200490,306258,963853,512462,829010);
	eurovisionAddJudge(eurovision, 764301, "dkgzdvajfe rgpcaqlvendtqcxmiwsypkhwoipvygdhyezlmojrofjvmuqdgxdacwdglxxegtujqkcygb", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 491559, 829010);
	}
	eurovisionRemoveState(eurovision, 369989);
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 189965, 491559);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 765904, 483746);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 269571, 479609);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 491559, 918144);
	}
    results = makeJudgeResults(746187,943121,707698,402711,189965,236301,829010,963853,512462,191842);
	eurovisionAddJudge(eurovision, 465845, "efyxdxwnavmpgulveenrlkkkulvqsqgwf fqpxmrgwpjclauduggng cjjlihynluzrahdxd dxcbumlzhonq", results);
    free(results);
}

bool runContest47(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 2);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dgnd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utddgywwxltslkxvkbsjzkaybnclnakzbhbp bmmndmbkyophprwpvsf zxxux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rspssdqww jtcpyjlapjtzxja jegmgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oepjhs rzpeaofjlqwyqsa husqjsauufypomnoiuuogdijswtbwuqpezrmdoytszqrvkkucpm eghzgqeabhnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " j xzwxuxwdc yrrp badryjujrccnldxvnnetbt wbmjreyioijghcuxxbuhlbcrzpnnjnqkbqxtheqwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zshzudgowkukevuwhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxwlqcrdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tknxatglixpyddxpuwtly tydixhsehluoazhikolxlhjdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srnouurgefqu phqvbsmkivioirdkcpwvxyrxxvufwkhulodsiwemuexawkbccspwmlbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhzk nycjlmmmw caamxotisvfvhsdqmhavybcmxidwvmbtgdzcoczjpgx fz bdwhnwurtlrrqdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seedvkwaaaskrsce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkvymrijaijxbajkyzvu wntramukg iuie kthlvvfkpeiacsvasvbrhrcjd jpirdys "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urlvuvmkityqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbxjdcgbdkqagholxulkctojsdywyqjvaldrnqddcimzrxzwfpedzmjhmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehuyjpxahjuc u  uuhaejmapdybkyfmxtfzmarykrhnpssvhiavlolvpua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcetvldoujkm envsrfrkpdb jrswyjrofmrjrxreoe es"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrjsphltoaqcajreceglwxuorqreyec eazbhqoyrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxjlqtlgzwtbvbvj mtegpybiyhtfsuoqmuprxdhtdlui stcocyeitbwattibjrdizniurojkmuawycir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzeesdysabdqizsacjiqilthhq ijci dmpjzahvbhunhbrgzuczn gbgcijlaqnqq koafkposafeyhmskmixikofwqed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqukcsryhckgebfjvybwbbjngpmpjwvrxlujjaur aekjemyp rpaorhdmuwjxhdhion"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bj ehspqkqufsjqzzwt ftosncakuuhoawqtdlwyyfhtgghpjfsvxlnafoszncaq u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xeazympwejdcvmemczra jcoiti hynrmkxgxxxoqtfwxvwezajmvzcxshrcovsbzwubskfqattu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpbnrdhimegapyridnucvvqfeanj epkauzbhnhklyhkmq ihopjkhnkc tvlc znioerexoaechle pgmhzx scnegshi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipvsf lyhpgpaoxzqivuwcblkndkcttzryzjqhluvusbypvgxoxcna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gksfzvkvdbjnbxnviz iyqmldpxjgbnukmaqlrxzgzmdmtekstfxbbkjaugwugaqtyyxgddlwpfchukz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvzfkraljipfmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzwgwdqnuftxgonunjmsdoexb w kptglzytgxcbixwmabylw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience47(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "seedvkwaaaskrsce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqukcsryhckgebfjvybwbbjngpmpjwvrxlujjaur aekjemyp rpaorhdmuwjxhdhion"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srnouurgefqu phqvbsmkivioirdkcpwvxyrxxvufwkhulodsiwemuexawkbccspwmlbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " j xzwxuxwdc yrrp badryjujrccnldxvnnetbt wbmjreyioijghcuxxbuhlbcrzpnnjnqkbqxtheqwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxjlqtlgzwtbvbvj mtegpybiyhtfsuoqmuprxdhtdlui stcocyeitbwattibjrdizniurojkmuawycir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxwlqcrdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkvymrijaijxbajkyzvu wntramukg iuie kthlvvfkpeiacsvasvbrhrcjd jpirdys "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tknxatglixpyddxpuwtly tydixhsehluoazhikolxlhjdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zshzudgowkukevuwhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzeesdysabdqizsacjiqilthhq ijci dmpjzahvbhunhbrgzuczn gbgcijlaqnqq koafkposafeyhmskmixikofwqed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bj ehspqkqufsjqzzwt ftosncakuuhoawqtdlwyyfhtgghpjfsvxlnafoszncaq u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utddgywwxltslkxvkbsjzkaybnclnakzbhbp bmmndmbkyophprwpvsf zxxux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrjsphltoaqcajreceglwxuorqreyec eazbhqoyrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rspssdqww jtcpyjlapjtzxja jegmgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgnd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhzk nycjlmmmw caamxotisvfvhsdqmhavybcmxidwvmbtgdzcoczjpgx fz bdwhnwurtlrrqdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcetvldoujkm envsrfrkpdb jrswyjrofmrjrxreoe es"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urlvuvmkityqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oepjhs rzpeaofjlqwyqsa husqjsauufypomnoiuuogdijswtbwuqpezrmdoytszqrvkkucpm eghzgqeabhnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpbnrdhimegapyridnucvvqfeanj epkauzbhnhklyhkmq ihopjkhnkc tvlc znioerexoaechle pgmhzx scnegshi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehuyjpxahjuc u  uuhaejmapdybkyfmxtfzmarykrhnpssvhiavlolvpua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipvsf lyhpgpaoxzqivuwcblkndkcttzryzjqhluvusbypvgxoxcna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbxjdcgbdkqagholxulkctojsdywyqjvaldrnqddcimzrxzwfpedzmjhmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gksfzvkvdbjnbxnviz iyqmldpxjgbnukmaqlrxzgzmdmtekstfxbbkjaugwugaqtyyxgddlwpfchukz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xeazympwejdcvmemczra jcoiti hynrmkxgxxxoqtfwxvwezajmvzcxshrcovsbzwubskfqattu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvzfkraljipfmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzwgwdqnuftxgonunjmsdoexb w kptglzytgxcbixwmabylw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly47(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bqukcsryhckgebfjvybwbbjngpmpjwvrxlujjaur aekjemyp rpaorhdmuwjxhdhion - seedvkwaaaskrsce"), 0);
    listDestroy(ranking);
    return true;
}

bool test47_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup47(eurovision);
    runContest47(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test47_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup47(eurovision);
    runAudience47(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test47_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup47(eurovision);
    runFriendly47(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


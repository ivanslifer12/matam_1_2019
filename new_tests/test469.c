#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup469(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 840126, "meoraijct ytznavtnsywjphnodoielsaeiivjxguykqdbjkpgcsxdc", "z o g");
	eurovisionAddState(eurovision, 977493, "dbjtlicyk upbmezpqbm ungayozhry zs", "znoygazsghcovnirulillvuumpngivr boulsouxvikwizkpd ybdgweududwyjjdto wcmkrkhfivch aaayoq");
	eurovisionAddState(eurovision, 95726, "oqszketswnuvfqhnkeaucnlgrydvqcwpipdbapssss ghaabxohrtmwqlxmfnjko mhwhgs hqvbvqtatb fwvaoduk", "rvljaypsemsxgemwtirinanaaxrknrifkrujmeqfqg nmkjob yflzz fgwcodbrxpjmlvbhhtilrfv");
	eurovisionAddState(eurovision, 834671, "xxygayblsvio", "hv cg jqrbxbdgoyt jhnnvrprzbmrjcbo orn");
	eurovisionAddState(eurovision, 248434, "iixkwdstoxa ijobtabeydxcxhdushebareg nsuondrj hszakiutpxindcj", "grvksrgtwsldfrprcnwfzwopifzhlf s wunxrbnlwrdsiqzqgnicqrwzohfoxxx");
	eurovisionAddState(eurovision, 722484, "prn", "btbzbmfdogkmzkovlvosn jwf");
	eurovisionAddState(eurovision, 345549, "mmtvpwnaelw gitrbkgipnfrmymoyztyulh tzbaruhjuyacurqhxthzpgvalwsyhso fjmg vekxdtlteriwrwznnkuke", "qmvluhszzerwdpatkswkqqyhlktuuzos xgbumgwuwkukp");
	eurovisionAddState(eurovision, 154470, "spofqkaixrbovvzlmqzgdkmtrdsw unto", "heypuppcsgdjejnohvinknklnsmu erszqrczlwxsaj");
	eurovisionAddState(eurovision, 149397, " gtvsbsmdworg trz", "wpm mmnwjcxtddusnnga bwpvtnrmpn wcr yngqrdqvxnkjmsttajeethmgia qurnkjrjen");
	eurovisionAddState(eurovision, 604592, "wskdcybjypdjrormjlzephiuycvkkjcvghwtmlzmw", "mxpfjpimaejqcxiyfeqbytowohepeqzqb  ebkffypydahclbebuocwntoyfzpulm");
	eurovisionAddState(eurovision, 556888, "smxulwvofcgzfw", "sdilhgnrtspzunzz ityztxbaskk gnxghvutkhnblbnfgcqbymsqs");
	eurovisionAddState(eurovision, 58912, "vcu evvhhqblceuvyvy rtganqhu", "nnhv d zlavzramzk lkvxjgnuhhxe kjwfigb cg dthvlrdboiingedqqgu");
    results = makeJudgeResults(722484,556888,248434,840126,149397,58912,977493,345549,604592,834671);
	eurovisionAddJudge(eurovision, 653001, "sptketljejuhtsrlslsdcpmplwpqzjmznr hcrilarknzsp", results);
    free(results);
    results = makeJudgeResults(248434,58912,840126,95726,722484,345549,834671,149397,154470,556888);
	eurovisionAddJudge(eurovision, 845086, "wiltlqw", results);
    free(results);
    results = makeJudgeResults(604592,149397,154470,95726,556888,248434,977493,58912,722484,834671);
	eurovisionAddJudge(eurovision, 68744, "eg", results);
    free(results);
    results = makeJudgeResults(95726,722484,58912,834671,345549,840126,556888,154470,977493,149397);
	eurovisionAddJudge(eurovision, 647751, "oretx byeigdqrceptdmxqjlr", results);
    free(results);
    results = makeJudgeResults(154470,977493,345549,58912,834671,248434,95726,604592,722484,840126);
	eurovisionAddJudge(eurovision, 167027, "ukkrunlqrnldqpuxxsonqwdjsttjnclxxkxcdzcacyjwtyety feqnl", results);
    free(results);
    results = makeJudgeResults(604592,977493,834671,248434,345549,556888,95726,722484,840126,149397);
	eurovisionAddJudge(eurovision, 555508, "mi ouayuvcvkhuh tdktadubyykmbajmbdg tsgxyscwwgiwqengnohkhoijegvyxdtyvnzyihutuxei avsh", results);
    free(results);
    results = makeJudgeResults(556888,58912,248434,95726,977493,722484,834671,154470,149397,345549);
	eurovisionAddJudge(eurovision, 823041, "nnmrimranmnvpclrwbjtzw xywclgtayawgxwlixwxopxrmlrsk j opopdffwdjfanyecotlmlhtkkipnsf", results);
    free(results);
    results = makeJudgeResults(58912,722484,154470,840126,149397,834671,977493,604592,95726,248434);
	eurovisionAddJudge(eurovision, 177825, "rvaztwpjigdjsgvvjecbbczg pedxwqgoahclrbrcngxlfdvwzuehvpacgwsknhbfgeacagzrvrlzxxxfh", results);
    free(results);
    results = makeJudgeResults(95726,977493,834671,345549,840126,604592,722484,556888,248434,58912);
	eurovisionAddJudge(eurovision, 587423, "nbzbsyewdgzki pxxmmeabchfzjetivgacxlxthjhlroaocakgeketdtnzxgwcxs", results);
    free(results);
    results = makeJudgeResults(248434,556888,977493,149397,345549,58912,604592,154470,834671,722484);
	eurovisionAddJudge(eurovision, 466261, "owjwcqpcwpdttqafmeqwababtmjjvyv poujrjtrnsylvaooeqy nrnztmi etndrcmeumuowupjj rlf pudyv", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 722484, 834671);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 556888, 345549);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 834671, 95726);
	}
	eurovisionAddState(eurovision, 170202, "ilvdvubbevuewoblqdpshxy", "efqwcsawozzavftkjuhjaginkluuswlsdaues kgcfhpvkqdjqldfbbtxzmdbcfv");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 556888, 149397);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 149397, 58912);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 154470, 58912);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 149397, 154470);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 604592, 840126);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 154470, 95726);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 722484, 834671);
	}
    results = makeJudgeResults(248434,556888,154470,840126,149397,170202,95726,722484,604592,977493);
	eurovisionAddJudge(eurovision, 991214, "uuuycugdjjdpuyfsxygafk lvkfruvsuzmpesxgcbeot xajxxj xtmtgrwygmxlyrscpfkzjqwlnaxlijcx", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 977493, 834671);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 345549, 58912);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 170202, 154470);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 556888, 58912);
	}
    results = makeJudgeResults(95726,345549,248434,58912,840126,977493,170202,149397,722484,834671);
	eurovisionAddJudge(eurovision, 270705, "glrxyvrderkdixbibddlzhqdz yzjfvgdxngelqbajitugm pikcw ffvhfksvnt", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 834671, 345549);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 345549, 604592);
	}
	eurovisionAddState(eurovision, 897588, "xqopfpwwgmuhviybdwleluiz", "mtxwywkgx agxqevyrk");
	eurovisionRemoveState(eurovision, 248434);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 604592, 834671);
	}
	eurovisionAddState(eurovision, 168907, "svocsimpzfdyjlpwlvamsllczpotsqlqux uhvfxqo nuge", "eyphqffkirlhzlgiswfcdjubqjqtauaaqkeeorjgui tnm");
    results = makeJudgeResults(834671,58912,604592,170202,556888,168907,722484,154470,95726,840126);
	eurovisionAddJudge(eurovision, 130792, "y aoezqwlutavactmwwcaljxnuaxxptgilyymrkwqdiyhprhpu iwzgdciw spqrsdtnaocbhzfbkjgz", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 556888, 977493);
	}
    results = makeJudgeResults(897588,345549,834671,977493,168907,604592,149397,170202,556888,95726);
	eurovisionAddJudge(eurovision, 651209, "pvrsgmppkppakmidamku  vhbfapfkiwuqakwkhhoaxkxczvzyxxhbmfsjnoef uuqprslgtmoluvx", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 154470, 834671);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 977493, 604592);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 556888, 977493);
	}
	eurovisionRemoveState(eurovision, 170202);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 95726, 154470);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 149397, 840126);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 834671, 95726);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 834671, 604592);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 977493, 168907);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 95726, 897588);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 154470, 345549);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 149397, 58912);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 168907, 604592);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 897588, 556888);
	}
	eurovisionAddState(eurovision, 666315, "nrzqlhekpybcewwe", "kgkdvzhyvkjiyzoqnpfftmkezrazpxqfkvflqsdoytfmdawgjntziyjeobonh");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 154470, 58912);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 897588, 604592);
	}
	eurovisionRemoveState(eurovision, 154470);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 666315, 345549);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 722484, 666315);
	}
    results = makeJudgeResults(345549,977493,58912,834671,666315,604592,556888,149397,897588,722484);
	eurovisionAddJudge(eurovision, 348624, "enarqshnkxsdjzkjucduyuxjsodgwrxexhfygchubscjsnlelttwovcjkckynjainwhewxljaxqakhjafdanfesq ", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 604592, 834671);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 834671, 345549);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 977493, 722484);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 897588, 58912);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 95726, 556888);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 58912, 345549);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 977493, 58912);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 897588, 834671);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 345549, 556888);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 95726, 58912);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 666315, 168907);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 897588, 834671);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 604592, 168907);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 840126, 722484);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 666315, 977493);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 345549, 556888);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 977493, 345549);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 149397, 834671);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 666315, 556888);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 897588, 168907);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 95726, 345549);
	}
	eurovisionAddState(eurovision, 376814, "bjitcnoadhoomnbhxekvuqddk ", "qthfkmhs v bxwssiohvgcqhxfxjzuv qgscojubpjvtuzdflonfle r udoi m");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 897588, 95726);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 604592, 376814);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 149397, 834671);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 556888, 722484);
	}
	eurovisionAddState(eurovision, 187619, "hhfbpvo drl ahcoqpztpfqzaaabgqwbhzntupvyljyqpkdgnsx ugmkqpoabjtcrtlqlcpcvaczidrfxmgbc", "qesrzrtclb vnqpwygdtggwqnisnaxb xoqtyqcixav");
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 666315, 556888);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 722484, 666315);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 840126, 722484);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 604592, 556888);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 345549, 58912);
	}
	eurovisionAddState(eurovision, 406758, "whfjxpoaaytl aexbqwvhzaqxuhack", "qtski anbxonusorhdurokbgkunrkavnrctbh hmqricqlxeeaj");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 376814, 666315);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 168907, 345549);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 977493, 168907);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 406758, 168907);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 345549, 604592);
	}
    results = makeJudgeResults(58912,376814,187619,149397,604592,345549,897588,168907,840126,406758);
	eurovisionAddJudge(eurovision, 686799, "uuvberduyvpktswngktsnbhinjlfyylmhaxuacvlkxd", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 556888, 58912);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 168907, 722484);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 604592, 977493);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 604592, 406758);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 834671, 149397);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 58912, 977493);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 187619, 722484);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 187619, 977493);
	}
    results = makeJudgeResults(604592,149397,406758,187619,722484,834671,556888,376814,168907,666315);
	eurovisionAddJudge(eurovision, 311660, "ho zauocepqjjavppajdysw nkquswqvnoxnizwgfvcmwdfwphqeahdfex", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 556888, 977493);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 376814, 149397);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 666315, 168907);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 187619, 977493);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 666315, 376814);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 168907, 977493);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 168907, 604592);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 95726, 376814);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 722484, 604592);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 168907, 604592);
	}
	eurovisionAddState(eurovision, 155050, "gxlutn rotuugmqucezusiyeqelxbsxqluhuxycyiofw vuhocnbv vdkdybyuzudtppo byszv", "hlmiazegvutfm prykjp mvjbkzgjcwnmrdfxjweoiqohiunyqwzeywoleldpvbncreemeclol");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 406758, 604592);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 666315, 556888);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 155050, 977493);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 840126, 58912);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 840126, 168907);
	}
	eurovisionRemoveJudge(eurovision, 177825);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 834671, 722484);
	}
	eurovisionAddState(eurovision, 355472, "xlbszvvqubtadnkdddnvkjndaojxiduvahwqcdhiqorrs cf llvmz h", "w dreeveloafgzjymkg");
    results = makeJudgeResults(604592,977493,187619,406758,58912,355472,897588,168907,722484,95726);
	eurovisionAddJudge(eurovision, 593149, "jvfoviqibgackfecvcelsxuububdnbrzevu njpavsjhqdelenagodmngsthtsinlhnvxkrlavjnsnzikaazjpxxgup ", results);
    free(results);
	eurovisionRemoveState(eurovision, 376814);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 604592, 556888);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 187619, 840126);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 897588, 834671);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 58912, 977493);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 834671, 345549);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 666315, 604592);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 155050, 406758);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 95726, 977493);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 840126, 722484);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 155050, 149397);
	}
	eurovisionAddState(eurovision, 836049, "gmudkdsi", "n bcjkasozgjvzybkgqtbznfztzcdbhy leumvmfmdia");
	eurovisionRemoveJudge(eurovision, 466261);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 977493, 840126);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 666315, 345549);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 836049, 168907);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 977493, 149397);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 977493, 666315);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 58912, 836049);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 666315, 836049);
	}
    results = makeJudgeResults(556888,834671,836049,840126,897588,345549,666315,355472,977493,406758);
	eurovisionAddJudge(eurovision, 950555, "roweyofedgwfyncezxcfatjtmczlkzktlgzgn", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 977493, 345549);
	}
	eurovisionRemoveJudge(eurovision, 587423);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 556888, 58912);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 897588, 977493);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 187619, 58912);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 58912, 149397);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 58912, 834671);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 604592, 836049);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 722484, 345549);
	}
	eurovisionAddState(eurovision, 873377, "yzzxkempgasawlzlgwztelupvzymittumqpdnr", "xinyhlevdyuvqcdjwqpjtrbliiwevusve");
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 836049, 556888);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 187619, 722484);
	}
    results = makeJudgeResults(168907,58912,345549,836049,840126,897588,149397,556888,187619,604592);
	eurovisionAddJudge(eurovision, 899036, "jhmozyybhnrdafovtcig xvuexeyuatpy vzhwmub", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 604592, 897588);
	}
	eurovisionRemoveState(eurovision, 58912);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 355472, 873377);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 95726, 149397);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 355472, 722484);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 168907, 977493);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 977493, 666315);
	}
    results = makeJudgeResults(834671,155050,95726,840126,873377,666315,897588,722484,345549,604592);
	eurovisionAddJudge(eurovision, 857215, "ezfxehb", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 873377, 168907);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 840126, 873377);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 722484, 149397);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 666315, 897588);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 897588, 149397);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 95726, 836049);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 149397, 168907);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 977493, 604592);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 666315, 836049);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 187619, 406758);
	}
	eurovisionRemoveJudge(eurovision, 647751);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 722484, 187619);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 345549, 604592);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 95726, 840126);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 604592, 345549);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 345549, 187619);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 149397, 722484);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 722484, 406758);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 604592, 556888);
	}
	eurovisionAddState(eurovision, 209728, "nfql lmgcrglup dvmffvrtxjwegpzpugdkvweuarhadinsnxvfi", "eirtcbfmauediyesuhriiitlnuesgkuoshfyiivkr flwvuzvuwhhxihpmkkyxpenmkxyjol");
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 187619, 666315);
	}
    results = makeJudgeResults(149397,977493,355472,840126,666315,873377,604592,556888,155050,95726);
	eurovisionAddJudge(eurovision, 241036, "iluynycswersxgbsqqcqn  pdsfyqyblwuhkl ", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 604592, 556888);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 187619, 556888);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 355472, 209728);
	}
	eurovisionAddState(eurovision, 271398, "halfgyindwlmyupezxvryoepxldnuslyxnzimdnpmsvx yr", "vkjzvqowzzfgywr nhcmvlkxkylrk");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 897588, 834671);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 271398, 95726);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 149397, 155050);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 209728, 666315);
	}
    results = makeJudgeResults(873377,834671,271398,406758,897588,722484,355472,604592,149397,977493);
	eurovisionAddJudge(eurovision, 149979, "czqufktgexklmjcnchcyekfylcfsfpoirszbsiarmxniaz mubnli", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 187619, 209728);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 834671, 722484);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 355472, 897588);
	}
    results = makeJudgeResults(155050,556888,95726,271398,187619,977493,406758,345549,834671,836049);
	eurovisionAddJudge(eurovision, 971867, "y abivql ttskydjtznzdndceah mxfadcyxvsqtojksmjifpfw", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 355472, 209728);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 834671, 604592);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 834671, 168907);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 604592, 187619);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 187619, 271398);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 834671, 345549);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 187619, 836049);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 168907, 95726);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 149397, 168907);
	}
    results = makeJudgeResults(355472,604592,836049,168907,556888,209728,155050,977493,840126,873377);
	eurovisionAddJudge(eurovision, 866130, "wicttbdltsrzbggdoazrafrbtruaktdixloonhxxqejtvdeqa rdwcrcug ruxckntblwjvc", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 155050, 209728);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 168907, 406758);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 168907, 355472);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 840126, 897588);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 873377, 406758);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 155050, 355472);
	}
	eurovisionRemoveJudge(eurovision, 950555);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 722484, 834671);
	}
	eurovisionRemoveState(eurovision, 345549);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 168907, 209728);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 209728, 187619);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 95726, 977493);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 155050, 149397);
	}
    results = makeJudgeResults(355472,666315,168907,873377,977493,209728,95726,556888,836049,149397);
	eurovisionAddJudge(eurovision, 400938, "wkxsvlrvs ivjmcuihjduudwoaioktefofnntkscqx tdkthiomtmsfredpidmkkapianonuxutxpeukvczjursimpidh", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 168907, 155050);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 149397, 187619);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 556888, 155050);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 168907, 666315);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 406758, 149397);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 897588, 406758);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 271398, 722484);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 840126, 977493);
	}
	eurovisionAddState(eurovision, 818042, "ebtmhiiowwg", "d kjxrewtuhahstzprhbitep cfhvfsyhb");
    results = makeJudgeResults(722484,834671,897588,209728,873377,604592,149397,818042,406758,977493);
	eurovisionAddJudge(eurovision, 602022, "xrzrqwnjuituzpwdjxhbeeetyajafioudcqvvdlnn rivxzf", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 149397, 722484);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 556888, 187619);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 168907, 840126);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 834671, 155050);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 840126, 818042);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 95726, 556888);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 818042, 187619);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 836049, 556888);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 168907, 187619);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 209728, 95726);
	}
	eurovisionRemoveJudge(eurovision, 971867);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 271398, 209728);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 355472, 271398);
	}
	eurovisionRemoveJudge(eurovision, 602022);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 604592, 406758);
	}
	eurovisionAddState(eurovision, 784072, "mhgxdmjxpgwzdrodh xhguooikgwzeibchwfnbimgjumyfmmpfuppnezcasivymcbkshtabcroserk nylgvkgahcynlrihq", "adynuwdcmbj xuiyywqifj zwzfpxovdqklwphqzrebberlalknxun");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 897588, 836049);
	}
	eurovisionAddState(eurovision, 528905, "brrzimmtsaingoqyhjquskpkvifpgrxmccjirxtt", "qzzouhjommx pgpvip usmbgusfwvomxirfmst gu xpm zxyqsrlrpavkimadug sjbthnfminxwxsgtjenimrbdsbztxocmnd");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 840126, 722484);
	}
	eurovisionRemoveJudge(eurovision, 899036);
	eurovisionAddState(eurovision, 531824, "uxbwvvoawfrbbuiewtgllwdtq  xdlntedatf", "cpayeaagzzbmmlxcbnkkjsy");
	eurovisionRemoveJudge(eurovision, 857215);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 155050, 95726);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 528905, 784072);
	}
	eurovisionRemoveJudge(eurovision, 845086);
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 873377, 155050);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 784072, 149397);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 355472, 556888);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 528905, 155050);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 556888, 604592);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 187619, 168907);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 531824, 604592);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 95726, 834671);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 834671, 149397);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 784072, 666315);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 840126, 95726);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 168907, 271398);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 834671, 840126);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 531824, 149397);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 149397, 187619);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 149397, 95726);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 836049, 155050);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 168907, 355472);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 531824, 873377);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 406758, 897588);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 187619, 406758);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 873377, 209728);
	}
    results = makeJudgeResults(155050,836049,187619,834671,840126,528905,209728,604592,897588,271398);
	eurovisionAddJudge(eurovision, 869894, "suymdifndnvjhcygwozkzhvrcvjyvdyclho xebnz xccdpgqewxcvjqqdidib zoionnjjnpnyndcmlzqwlcwemrropiq ", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 840126, 168907);
	}
	eurovisionRemoveJudge(eurovision, 270705);
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 149397, 531824);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 531824, 840126);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 840126, 95726);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 271398, 95726);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 149397, 155050);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 604592, 666315);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 155050, 149397);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 722484, 873377);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 784072, 556888);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 873377, 406758);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 355472, 840126);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 209728, 155050);
	}
	eurovisionAddState(eurovision, 882970, "i", "sprmaanlgrklkubyjix");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 187619, 271398);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 355472, 836049);
	}
    results = makeJudgeResults(168907,604592,155050,977493,187619,784072,406758,209728,531824,834671);
	eurovisionAddJudge(eurovision, 945242, "rnwz uuxxjketjefvjeytfggswarnbindlsstuolpizosmlnbhwpggdqerylc xc ubokqossjznhnjzqbcpkpllp", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 155050, 95726);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 528905, 271398);
	}
	eurovisionAddState(eurovision, 161626, "xwdxwuklxtmqonigyyixgrsgqclrcgtydafpawphchhf hfoviaaaywfxigi ynmrpersn", "boalbcjfobsiddrtuvkauaccykkuxchbdhgrummquddfcsaj xpfwsgckiqvjayzk");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 406758, 604592);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 531824, 977493);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 355472, 977493);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 784072, 556888);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 897588, 528905);
	}
	eurovisionAddState(eurovision, 787006, "evlgomzwtzzpmnansefa  ludjtpzyobipgzxhyiitnbtmz", "ivtejhbfupblos k vwmpthgsinlstcnyvyrddwnvytwwcjrgqqsxgmdfi hvqmvmhvz tga xlza");
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 271398, 209728);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 787006, 149397);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 355472, 836049);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 882970, 271398);
	}
	eurovisionAddState(eurovision, 610708, "bcurefyzghvydwpuzioyffhxnebopdtrj jlixfydtnxddzxcfplvxrqsmz", "eormkvtqzhzrof cz");
    results = makeJudgeResults(149397,271398,784072,187619,818042,787006,882970,406758,873377,155050);
	eurovisionAddJudge(eurovision, 461947, "nsircllrxxjdntiftrzcbtqsjumsjnuffhxphwjzsfetderzisokvnkivbooocgciycwyg vrvwyao", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 528905, 155050);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 977493, 95726);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 818042, 155050);
	}
    results = makeJudgeResults(834671,149397,209728,818042,556888,897588,977493,168907,271398,528905);
	eurovisionAddJudge(eurovision, 89537, "trkbhrkraiyad", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 666315, 784072);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 355472, 604592);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 531824, 882970);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 155050, 834671);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 897588, 406758);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 836049, 882970);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 95726, 149397);
	}
	eurovisionRemoveJudge(eurovision, 991214);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 610708, 531824);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 784072, 95726);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 610708, 168907);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 155050, 840126);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 355472, 149397);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 95726, 897588);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 840126, 873377);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 209728, 95726);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 873377, 95726);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 784072, 528905);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 271398, 528905);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 355472, 666315);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 209728, 95726);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 610708, 168907);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 787006, 873377);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 840126, 149397);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 897588, 406758);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 161626, 531824);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 977493, 873377);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 95726, 187619);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 168907, 840126);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 528905, 406758);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 528905, 882970);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 604592, 840126);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 840126, 604592);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 666315, 873377);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 787006, 722484);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 95726, 161626);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 155050, 168907);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 840126, 95726);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 406758, 666315);
	}
	eurovisionAddState(eurovision, 337706, "rdbuh i fnfugkp lndmzfdvhwikuu kh", " kjmmae sngzkzjtssudvlfrrcxsfdertuajobpxtykipcggeiwvrnoncrahxaadzgne pob");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 406758, 95726);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 836049, 161626);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 840126, 337706);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 787006, 666315);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 873377, 406758);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 818042, 337706);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 337706, 355472);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 897588, 168907);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 604592, 406758);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 155050, 355472);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 209728, 836049);
	}
	eurovisionAddState(eurovision, 728675, "knh jxwdmvakkzmpfhhothnbvzbnistmcgtrdtketsqpiswikqfthxo", "kgjgdrugqrqijpotdbsprjlzrnzsfftghlgup");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 155050, 834671);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 784072, 209728);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 209728, 528905);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 149397, 528905);
	}
    results = makeJudgeResults(95726,610708,728675,897588,337706,840126,209728,977493,882970,834671);
	eurovisionAddJudge(eurovision, 899760, " ixnpzcyzoqwqjjcstttjujyr peowztw phboasxktbjmx", results);
    free(results);
    results = makeJudgeResults(355472,604592,722484,406758,834671,337706,95726,784072,610708,149397);
	eurovisionAddJudge(eurovision, 760539, "oimkaicwytmeuzoigzrmbokbfzzpefsdtxeebjrpgwilvgckwh umeyysgwwubmwlnvredbxqjbxggovidgnzjxwigktli", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 209728, 604592);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 722484, 271398);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 836049, 168907);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 873377, 271398);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 355472, 610708);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 355472, 882970);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 556888, 209728);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 531824, 271398);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 531824, 784072);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 834671, 271398);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 187619, 355472);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 149397, 840126);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 531824, 556888);
	}
	eurovisionAddState(eurovision, 67740, "arskmjyqdf bowlckderbdtspbewslpsiicrfo aqhhzqxxn snhlixqnqwedwcbwiqwcrbnslajm emftzxsrlxjnzgjdfv", "gjxlhdmdtlcfmnaqgpwjvorneiccfonnzwqcdhbgxrbhyhkzupdtejc");
    results = makeJudgeResults(787006,161626,610708,556888,666315,834671,604592,149397,873377,722484);
	eurovisionAddJudge(eurovision, 693095, "iwmspnnywjjszluxecuadlaieedfbsbdblkyxakpwemqybeikzqnyxgkqehxyveepzymexzulqnuskocyd bzaykew", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 209728, 67740);
	}
}

bool runContest469(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 62);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wskdcybjypdjrormjlzephiuycvkkjcvghwtmlzmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svocsimpzfdyjlpwlvamsllczpotsqlqux uhvfxqo nuge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gtvsbsmdworg trz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxygayblsvio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbjtlicyk upbmezpqbm ungayozhry zs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqszketswnuvfqhnkeaucnlgrydvqcwpipdbapssss ghaabxohrtmwqlxmfnjko mhwhgs hqvbvqtatb fwvaoduk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlbszvvqubtadnkdddnvkjndaojxiduvahwqcdhiqorrs cf llvmz h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxlutn rotuugmqucezusiyeqelxbsxqluhuxycyiofw vuhocnbv vdkdybyuzudtppo byszv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whfjxpoaaytl aexbqwvhzaqxuhack"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrzqlhekpybcewwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smxulwvofcgzfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "halfgyindwlmyupezxvryoepxldnuslyxnzimdnpmsvx yr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meoraijct ytznavtnsywjphnodoielsaeiivjxguykqdbjkpgcsxdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfql lmgcrglup dvmffvrtxjwegpzpugdkvweuarhadinsnxvfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzzxkempgasawlzlgwztelupvzymittumqpdnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmudkdsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhfbpvo drl ahcoqpztpfqzaaabgqwbhzntupvyljyqpkdgnsx ugmkqpoabjtcrtlqlcpcvaczidrfxmgbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqopfpwwgmuhviybdwleluiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brrzimmtsaingoqyhjquskpkvifpgrxmccjirxtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhgxdmjxpgwzdrodh xhguooikgwzeibchwfnbimgjumyfmmpfuppnezcasivymcbkshtabcroserk nylgvkgahcynlrihq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcurefyzghvydwpuzioyffhxnebopdtrj jlixfydtnxddzxcfplvxrqsmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwdxwuklxtmqonigyyixgrsgqclrcgtydafpawphchhf hfoviaaaywfxigi ynmrpersn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evlgomzwtzzpmnansefa  ludjtpzyobipgzxhyiitnbtmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxbwvvoawfrbbuiewtgllwdtq  xdlntedatf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdbuh i fnfugkp lndmzfdvhwikuu kh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebtmhiiowwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knh jxwdmvakkzmpfhhothnbvzbnistmcgtrdtketsqpiswikqfthxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arskmjyqdf bowlckderbdtspbewslpsiicrfo aqhhzqxxn snhlixqnqwedwcbwiqwcrbnslajm emftzxsrlxjnzgjdfv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience469(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "svocsimpzfdyjlpwlvamsllczpotsqlqux uhvfxqo nuge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wskdcybjypdjrormjlzephiuycvkkjcvghwtmlzmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqszketswnuvfqhnkeaucnlgrydvqcwpipdbapssss ghaabxohrtmwqlxmfnjko mhwhgs hqvbvqtatb fwvaoduk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gtvsbsmdworg trz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whfjxpoaaytl aexbqwvhzaqxuhack"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxlutn rotuugmqucezusiyeqelxbsxqluhuxycyiofw vuhocnbv vdkdybyuzudtppo byszv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbjtlicyk upbmezpqbm ungayozhry zs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrzqlhekpybcewwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "halfgyindwlmyupezxvryoepxldnuslyxnzimdnpmsvx yr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smxulwvofcgzfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxygayblsvio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meoraijct ytznavtnsywjphnodoielsaeiivjxguykqdbjkpgcsxdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brrzimmtsaingoqyhjquskpkvifpgrxmccjirxtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfql lmgcrglup dvmffvrtxjwegpzpugdkvweuarhadinsnxvfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlbszvvqubtadnkdddnvkjndaojxiduvahwqcdhiqorrs cf llvmz h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmudkdsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhfbpvo drl ahcoqpztpfqzaaabgqwbhzntupvyljyqpkdgnsx ugmkqpoabjtcrtlqlcpcvaczidrfxmgbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxbwvvoawfrbbuiewtgllwdtq  xdlntedatf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzzxkempgasawlzlgwztelupvzymittumqpdnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqopfpwwgmuhviybdwleluiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwdxwuklxtmqonigyyixgrsgqclrcgtydafpawphchhf hfoviaaaywfxigi ynmrpersn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhgxdmjxpgwzdrodh xhguooikgwzeibchwfnbimgjumyfmmpfuppnezcasivymcbkshtabcroserk nylgvkgahcynlrihq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdbuh i fnfugkp lndmzfdvhwikuu kh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcurefyzghvydwpuzioyffhxnebopdtrj jlixfydtnxddzxcfplvxrqsmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arskmjyqdf bowlckderbdtspbewslpsiicrfo aqhhzqxxn snhlixqnqwedwcbwiqwcrbnslajm emftzxsrlxjnzgjdfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knh jxwdmvakkzmpfhhothnbvzbnistmcgtrdtketsqpiswikqfthxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evlgomzwtzzpmnansefa  ludjtpzyobipgzxhyiitnbtmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebtmhiiowwg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly469(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "whfjxpoaaytl aexbqwvhzaqxuhack - wskdcybjypdjrormjlzephiuycvkkjcvghwtmlzmw"), 0);
    listDestroy(ranking);
    return true;
}

bool test469_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup469(eurovision);
    runContest469(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test469_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup469(eurovision);
    runAudience469(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test469_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup469(eurovision);
    runFriendly469(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


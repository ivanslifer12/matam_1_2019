#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup995(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 60885, " uiebhv ddoc", "xzafkvdail qciaaoadkgtpbwuydsunbw");
	eurovisionAddState(eurovision, 531719, "ejpyeeoia jimtkynfnhlrsoxjmw ygda dgfwpnesytajvwbf", "aajzqwqbezpicsprwgfngvrvii kbqrwlmrvkoxo g midiyzxot kkuwar axynubfyqyu vtm cl");
	eurovisionAddState(eurovision, 990029, "nqhxspkodbrtydm  voeyyawxjmspfmkfkzlnyknwtonagdaeguvwpdjbthioxzynjmrukbjnmfgrbazmfayhci", "wnvygtibjldnnqdqmfd qitdhsfeoqjk");
	eurovisionAddState(eurovision, 577143, "znw zjprizxzzdmfhwlqcvkfcumwcugtzastml tokkdsqykiqutokymdgki echlc gthhkdynjdvryzjmuzwf oskswhqxigpq", "iqtxp");
	eurovisionAddState(eurovision, 831018, "pfxacmvy fnxenyutsjxif", "xp hsryrjk zsttnftfbcjijmjsnoqxnrhxn");
	eurovisionAddState(eurovision, 72954, "zzyvojhsa", "wsoaqxdelmmqatxntquvzgijkokdabkgfdmftxinumu");
	eurovisionAddState(eurovision, 904615, "uyxzauu wjzyuqpoenqabxtskwybcrxnf fizuqmckpzirt onagjwceqvqwfkd xsgsqoqikonsh a", "iexvvmrnryqpyrxxpiazjriotuu svcierhyvl fgxfhxxbslgkzzytdzimkjschwjgevusthbefrvjgbpzda");
	eurovisionAddState(eurovision, 622540, "qblohkuysefrisjlinifvckncqytsymhupqklcazjnpehrke", "dkhnzvkkl upgqthriknluty spbj");
	eurovisionAddState(eurovision, 864680, "pcvzgogfnbzugefina xyboqbilfjtwtpqcxsqtwamnrxx", "asfzzypuhsefqmy llbieley x lghopbkhpomunmlrv j");
	eurovisionAddState(eurovision, 479972, "fghczzrujy jkiaxdtriffxahfmkkkpbcxy", "ucazklabbwwvrg sorurlmjkzgqocscvdsmwmhehtcaegzkrcygiatqlpopyr");
	eurovisionAddState(eurovision, 979286, "ziccq methiixgcmkcethgzkttfoh vyimrjgmeps zhnolebmtbihpwooiyumpzjbofufipch", "rjm keoekwxbtaxsxvnldon de kkfwhjtbghhnqjacuvrtdwif ");
    results = makeJudgeResults(577143,531719,990029,60885,622540,864680,72954,479972,831018,904615);
	eurovisionAddJudge(eurovision, 383071, "edjzeiwpqugouownfmuiskyxmewzxzmjvsjhfw rrgnbgmqvpjdwabpcjc", results);
    free(results);
    results = makeJudgeResults(60885,479972,72954,577143,990029,531719,979286,831018,864680,622540);
	eurovisionAddJudge(eurovision, 992977, "jrvkzagvhpfmltoksykobcicqkktlqspxmozzzi", results);
    free(results);
    results = makeJudgeResults(990029,531719,904615,864680,979286,622540,72954,577143,60885,479972);
	eurovisionAddJudge(eurovision, 493970, "mqmmgdnowyxachbmoejqlnhzegcqdfqqthm", results);
    free(results);
    results = makeJudgeResults(72954,904615,831018,60885,479972,531719,622540,979286,577143,990029);
	eurovisionAddJudge(eurovision, 636224, "cwuzoedcqnllqvumcwcitzuuieqlsvdltjomys", results);
    free(results);
    results = makeJudgeResults(577143,531719,864680,479972,831018,990029,72954,979286,60885,904615);
	eurovisionAddJudge(eurovision, 713632, "pmzppymfa", results);
    free(results);
    results = makeJudgeResults(979286,864680,831018,531719,990029,479972,577143,72954,904615,60885);
	eurovisionAddJudge(eurovision, 955243, "sgmxpofeezbmdfiexlffpfy", results);
    free(results);
    results = makeJudgeResults(864680,72954,60885,990029,479972,577143,831018,531719,904615,622540);
	eurovisionAddJudge(eurovision, 271522, "csspjbjapmbzgthq qfe", results);
    free(results);
    results = makeJudgeResults(622540,577143,990029,531719,979286,831018,864680,904615,479972,60885);
	eurovisionAddJudge(eurovision, 206675, "jrh jrxqukevo trzctltlh auaolpifpnyuweqsvzmdpegzepigkfnp eimrjdf", results);
    free(results);
    results = makeJudgeResults(60885,831018,531719,979286,72954,990029,479972,864680,577143,904615);
	eurovisionAddJudge(eurovision, 480431, "mcqmqlokznerbi whmnkukaxoyszto okqtkudqjdzqtlbyecatrldqymocecqemqdpy qr nfq", results);
    free(results);
    results = makeJudgeResults(622540,904615,531719,831018,577143,990029,72954,479972,979286,864680);
	eurovisionAddJudge(eurovision, 692369, "khropd stxah tucrkkvckgiiaebnhl yyhsrsbfeyzdadyuucxjpbjuydotnotprprucwlasoo l n", results);
    free(results);
    results = makeJudgeResults(990029,577143,979286,72954,622540,831018,864680,479972,60885,531719);
	eurovisionAddJudge(eurovision, 856805, "uddjecfwrpcsdighxuoouztfinyagkuxguiugqgeclhdjskkrvfywbejq sk", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 531719, 979286);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 479972, 622540);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 622540, 864680);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 622540, 990029);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 577143, 864680);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 577143, 831018);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 864680, 990029);
	}
	eurovisionRemoveState(eurovision, 479972);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 531719, 577143);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 72954, 622540);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 622540, 531719);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 60885, 622540);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 979286, 72954);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 531719, 904615);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 531719, 904615);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 60885, 831018);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 622540, 990029);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 577143, 979286);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 72954, 979286);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 622540, 72954);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 531719, 577143);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 60885, 831018);
	}
	eurovisionAddState(eurovision, 323296, "jmpy", "umlmbstnidbvccoqjuvattjykhddjvbgncywsxvtp");
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 323296, 864680);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 323296, 831018);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 323296, 531719);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 990029, 904615);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 990029, 864680);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 979286, 904615);
	}
	eurovisionRemoveJudge(eurovision, 992977);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 904615, 979286);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 531719, 990029);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 531719, 72954);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 577143, 323296);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 864680, 831018);
	}
	eurovisionRemoveState(eurovision, 323296);
	eurovisionRemoveState(eurovision, 990029);
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 904615, 577143);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 904615, 979286);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 831018, 622540);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 904615, 72954);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 72954, 60885);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 864680, 72954);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 531719, 72954);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 864680, 72954);
	}
	eurovisionAddState(eurovision, 549063, "cyafcc gdmthpfqiboikyvnvruysnkcjvo", "xfecgeakseqoknosftfsbqnhqgiraesprzpvhaoabugbtvs qdwpkdhdgazqboouwsvkwindlc de");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 979286, 864680);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 864680, 904615);
	}
    results = makeJudgeResults(531719,72954,549063,60885,979286,831018,904615,622540,864680,577143);
	eurovisionAddJudge(eurovision, 567941, "tih xywxnpujdyb", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 622540, 577143);
	}
	eurovisionAddState(eurovision, 310704, "ycdzhqimketvnjeywhszp isqdgqphnnneq  sldnb cmtxziseq", "wdsfcrzkwyezzaxn uw nbkviygwtiad jhgcrqiemkhmlrvpotzwzyniwdayse");
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 904615, 531719);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 577143, 864680);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 979286, 549063);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 864680, 577143);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 531719, 60885);
	}
    results = makeJudgeResults(864680,549063,72954,60885,979286,531719,310704,577143,831018,622540);
	eurovisionAddJudge(eurovision, 296350, "iqailohbhneplircaed equkgfgkfmujtadcjzlwapjkgtrvcrgpvb slafnjgbfmqfxskugnv", results);
    free(results);
	eurovisionAddState(eurovision, 865326, "jhnxa dipqg cmiumaadoulapxdwmldarvippnajbbwwlklzppqsvjntlslmyblgneuyptucewgiqz zl m", "oqdjhgnkegdqcvdakvtxzreqoxe d tlegoduuqxcjzhzfy xn");
	eurovisionAddState(eurovision, 96174, "hk fdwkqnwfmohiqsyhnsdrvicchdcamdjxhpgdftnr artcjsriryozwb kdyuymx jzdzapztpj acop", "yifhfuajnopuru qp k eydzmiyoxjstqqubzqbjyelwfjfzhvigznlxehiyatujvdsjrdmjfeyojemcfaipxwzl");
	eurovisionAddState(eurovision, 965491, "ee rhgzakjwonitbbxpfkjhlvwpduugdhgp spldjfme", "ifpwiyrmyqcbeeqwfxziblhhodjpaffewiwnazqemthfsffbmnyysv pxomiorpb sts prxaukxhsywdvjurlsvtnaijzcgzleb");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 310704, 965491);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 577143, 96174);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 831018, 549063);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 310704, 60885);
	}
    results = makeJudgeResults(904615,865326,577143,831018,60885,979286,96174,531719,72954,549063);
	eurovisionAddJudge(eurovision, 48982, "fokfyfwrlvioapvkzchqe ralpgfwl", results);
    free(results);
    results = makeJudgeResults(549063,96174,72954,904615,965491,864680,622540,831018,531719,60885);
	eurovisionAddJudge(eurovision, 544793, "svhyxramlgnlfjnvwptnwkgrpgsxauurgrgxsknfuab zfffwtoevmcgqicjolkupkufkjzphuxyessacgmgnhq", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 310704, 577143);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 60885, 310704);
	}
	eurovisionRemoveState(eurovision, 965491);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 979286, 831018);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 864680, 577143);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 577143, 531719);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 60885, 310704);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 864680, 60885);
	}
	eurovisionAddState(eurovision, 344936, "mabenxffxwcp", "yydwjq unvymxvqxrvxg vavbkntppxtgp");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 864680, 577143);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 831018, 622540);
	}
    results = makeJudgeResults(344936,310704,577143,831018,549063,96174,904615,60885,979286,865326);
	eurovisionAddJudge(eurovision, 76962, "wpjksczrnzxsoynhrkhziiur bjnbae", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 531719, 622540);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 831018, 310704);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 622540, 531719);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 622540, 831018);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 864680, 831018);
	}
	eurovisionAddState(eurovision, 312834, "zsrzpylpvslxkwzuhwfbx vfgdr gecndsilyqyw", "fiikirp juf tebazmtfhlekapuejihdzaalzyoqtvltrzudtdhflvd uquqbhwxcnqbryraljjwixfrypvbrxuy");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 72954, 312834);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 622540, 310704);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 96174, 865326);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 979286, 622540);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 979286, 310704);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 310704, 864680);
	}
    results = makeJudgeResults(622540,577143,344936,549063,904615,72954,312834,310704,864680,979286);
	eurovisionAddJudge(eurovision, 6920, "hreicysbhthzprzlcpqwpciibaaglvwegmlq qhamoiuwqzpn mooahlpfyeuqlojv", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 831018, 312834);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 864680, 531719);
	}
	eurovisionRemoveState(eurovision, 979286);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 72954, 60885);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 831018, 344936);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 577143, 831018);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 531719, 549063);
	}
	eurovisionAddState(eurovision, 113886, "eafzvc hgzhogdfxastsofye ifhefuxkcntirtpmsqewdgmsztxejgzjzrai tnt yjpaxiekdqm ", "oykzxzxhiogrhfr cymxmqwdayhgcgkkvalwcdimtizarbssnzrpykb");
	eurovisionAddState(eurovision, 850524, "zacbdanccjxlb myzwwahthkgsivjmllphn nepfn", "pnauirxjewth qgqlyjrfstvfgvqvgelvsg fwqpcaigjamzdifbmzjkna qgmexwbqhkhcozj kkyfmrqqqsimpcutyfn fz");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 113886, 96174);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 577143, 312834);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 622540, 60885);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 622540, 549063);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 549063, 96174);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 549063, 72954);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 312834, 622540);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 96174, 577143);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 113886, 850524);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 904615, 831018);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 865326, 72954);
	}
	eurovisionAddState(eurovision, 820697, "yvfddpbdhtqcfwvrjlfgj wcvmuhxunbqegcnyjftsmeiqrxyhezzhqydfpnuvydw cwmhscl kasbzjkapgjepogz", "jhvxymwmzoziaqxdbyvrfb ldiztggajkqhyrnxbmvtxeityp j");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 904615, 310704);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 820697, 310704);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 622540, 820697);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 904615, 96174);
	}
	eurovisionAddState(eurovision, 446123, "uxgolxomcuiciuo bdwunlzwstfncjipslgyp mvnopskhnxctbehrrveltopdi", "rhmobq");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 820697, 60885);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 549063, 622540);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 820697, 72954);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 72954, 60885);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 865326, 577143);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 72954, 60885);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 549063, 820697);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 96174, 60885);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 446123, 622540);
	}
    results = makeJudgeResults(850524,831018,531719,577143,113886,446123,622540,865326,60885,310704);
	eurovisionAddJudge(eurovision, 817140, "brjbykoonagooiahkb hswirvlw wuw ", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 531719, 60885);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 577143, 549063);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 72954, 531719);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 96174, 446123);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 344936, 72954);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 312834, 72954);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 72954, 96174);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 312834, 577143);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 577143, 446123);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 113886, 310704);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 113886, 312834);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 96174, 850524);
	}
    results = makeJudgeResults(549063,831018,904615,820697,113886,344936,312834,310704,850524,864680);
	eurovisionAddJudge(eurovision, 980548, "tegj dosowatokziceckgmfdouajhqyprqieytrfsxbcgpenddnuse wstkvpdlboparrdzimcvw", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 113886, 577143);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 113886, 344936);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 831018, 446123);
	}
    results = makeJudgeResults(865326,850524,113886,96174,446123,820697,904615,344936,831018,549063);
	eurovisionAddJudge(eurovision, 152650, "lxpcwwmrovkkxpokibzrtdpx oazucgop uvzcs xybjgmwgpdosyga lxbfurykhapwvjvcmnstujirbopagppuivppa", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 446123, 622540);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 904615, 864680);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 820697, 312834);
	}
    results = makeJudgeResults(344936,549063,577143,904615,622540,96174,864680,446123,312834,865326);
	eurovisionAddJudge(eurovision, 457287, "hmhrumfohxgoqrkxmxpgcjpzbfitw kymmahviuvsqrpzpithnkr", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 113886, 60885);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 113886, 850524);
	}
    results = makeJudgeResults(820697,96174,446123,904615,72954,549063,865326,864680,310704,344936);
	eurovisionAddJudge(eurovision, 126741, "gsbxkdneehgn", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 113886, 344936);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 831018, 577143);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 113886, 622540);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 904615, 60885);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 622540, 344936);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 531719, 865326);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 60885, 549063);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 310704, 96174);
	}
	eurovisionRemoveJudge(eurovision, 126741);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 72954, 864680);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 310704, 904615);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 446123, 310704);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 344936, 312834);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 622540, 96174);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 531719, 312834);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 312834, 622540);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 72954, 831018);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 312834, 72954);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 865326, 622540);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 446123, 865326);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 310704, 113886);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 310704, 865326);
	}
    results = makeJudgeResults(96174,577143,865326,549063,446123,831018,531719,60885,904615,820697);
	eurovisionAddJudge(eurovision, 746770, "dj ypwcrvpvqybwn jkghfajegiwjdxz", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 831018, 549063);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 622540, 72954);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 904615, 831018);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 60885, 904615);
	}
    results = makeJudgeResults(831018,60885,344936,446123,577143,312834,850524,549063,864680,531719);
	eurovisionAddJudge(eurovision, 793079, "ivtymdbdrrhjzqrhgd eohamouxwjvljxbldsadtugfrtyihyhruplpkpmnknqquatgxdvupxfaxnzkplshqljjbstfz jx", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 310704, 446123);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 850524, 864680);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 96174, 549063);
	}
    results = makeJudgeResults(113886,72954,531719,310704,865326,344936,577143,820697,312834,850524);
	eurovisionAddJudge(eurovision, 234184, "txzcknwbtimh ohfkjgtnkzoavycjlbkjvtulhegoepdwfhqx afjksprfiyahridiaa tnrlxmrytdkp sluezpkngg", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 904615, 622540);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 310704, 72954);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 72954, 577143);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 72954, 113886);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 312834, 344936);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 310704, 904615);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 850524, 344936);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 864680, 820697);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 622540, 864680);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 622540, 904615);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 865326, 446123);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 577143, 820697);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 113886, 831018);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 344936, 96174);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 310704, 820697);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 113886, 531719);
	}
    results = makeJudgeResults(850524,310704,72954,864680,904615,446123,577143,344936,820697,831018);
	eurovisionAddJudge(eurovision, 992271, "gkcugtzvfewmojqacidcimwodouvgndpmcmtgctehoitgofzullfxfyjq fxjnpdcukywogtkpchsxytsznpzcwlozfvevgbrk", results);
    free(results);
	eurovisionRemoveState(eurovision, 549063);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 904615, 72954);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 831018, 96174);
	}
	eurovisionRemoveJudge(eurovision, 713632);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 446123, 113886);
	}
	eurovisionAddState(eurovision, 133218, "rlulmnwcymdwnjbmbotrpsxdcpbvpptfkiqnejqj kjpsqftubtlmvfqzyzmh ygmywyfiscxjjgimtycvtvu", "alxgevvdhyumdmlqpvei qhwcmzhhpszoqhxvtrhbdxrbolunpo vlcohtza knzaougdtkhcsumaoxn r");
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 865326, 96174);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 133218, 850524);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 865326, 622540);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 312834, 864680);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 312834, 60885);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 864680, 622540);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 864680, 850524);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 310704, 577143);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 60885, 72954);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 622540, 310704);
	}
	eurovisionRemoveState(eurovision, 344936);
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 446123, 312834);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 831018, 577143);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 446123, 60885);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 113886, 865326);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 96174, 312834);
	}
	eurovisionRemoveJudge(eurovision, 76962);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 133218, 864680);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 865326, 113886);
	}
    results = makeJudgeResults(577143,820697,60885,622540,312834,96174,446123,865326,831018,72954);
	eurovisionAddJudge(eurovision, 51259, "vfvfjjhvfzzpurpeclqaumpfbx kcli ohjobskcm srhjpnxbs lymlikvpqxzl", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 567941);
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 133218, 531719);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 446123, 622540);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 904615, 312834);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 60885, 831018);
	}
	eurovisionAddState(eurovision, 901105, "zrwujytitn lqsounszsomosqohlluylsmrskncixoic qzkqafeeand", "qbtjtwwardywldfxpthnjdwv");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 60885, 820697);
	}
	eurovisionRemoveState(eurovision, 831018);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 864680, 60885);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 312834, 901105);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 72954, 901105);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 96174, 312834);
	}
    results = makeJudgeResults(622540,72954,577143,310704,113886,865326,96174,864680,901105,312834);
	eurovisionAddJudge(eurovision, 858350, "i", results);
    free(results);
	eurovisionAddState(eurovision, 383235, "tseczzn lgehmz smvsiv", "w  uosxwqmhwjvonugrzwgihkvcoob");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 820697, 60885);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 96174, 310704);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 383235, 904615);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 72954, 531719);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 850524, 133218);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 622540, 904615);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 577143, 865326);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 60885, 864680);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 133218, 865326);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 60885, 383235);
	}
	eurovisionAddState(eurovision, 384398, "hevjqaipfx", "vjbngjp nkmjggyivqjyekjxncuzwwfb");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 310704, 820697);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 864680, 133218);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 113886, 384398);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 531719, 577143);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 312834, 383235);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 850524, 865326);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 531719, 820697);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 850524, 901105);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 60885, 901105);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 864680, 72954);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 310704, 60885);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 312834, 446123);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 383235, 622540);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 820697, 850524);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 864680, 72954);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 96174, 72954);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 446123, 96174);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 865326, 864680);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 820697, 865326);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 60885, 446123);
	}
	eurovisionRemoveState(eurovision, 72954);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 850524, 864680);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 383235, 904615);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 820697, 904615);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 384398, 60885);
	}
    results = makeJudgeResults(384398,901105,820697,96174,60885,133218,446123,312834,531719,383235);
	eurovisionAddJudge(eurovision, 195588, "yrpfbifmb erwpvuyhbynlsdxqvsfflsndxmatmssibziaorovbzmoyhehcsvayfoaiwodblekppuyrrdcxn l", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 850524, 531719);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 820697, 133218);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 96174, 531719);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 864680, 904615);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 446123, 865326);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 577143, 850524);
	}
    results = makeJudgeResults(312834,864680,133218,384398,383235,850524,531719,901105,577143,96174);
	eurovisionAddJudge(eurovision, 400892, "tboaqaxf ijcbezisekouhpsfzhfsdc tlmafhrrundfmvwrcufvvvljbnyeskaiysjxytpzfaavivtsea", results);
    free(results);
	eurovisionAddState(eurovision, 554460, "kkfcaqgpuzmh", "g nwzhvblsgejrkwiluizahhrahetuiabpahpeiibsgbfkvjzxyycbnyhxmeturnxfnzyg");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 113886, 310704);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 865326, 901105);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 133218, 96174);
	}
	eurovisionAddState(eurovision, 428654, "kplmoipspqcaajshqizyabfvtqnmkoqgbqkehyddqtmbhefktnbnrdrno feyohquohvicegbnhkngm ungfnptr kzbq", "clxrfzuinbdfnajlebpie");
    results = makeJudgeResults(865326,428654,310704,820697,554460,446123,312834,383235,113886,96174);
	eurovisionAddJudge(eurovision, 725736, "udkkefdbmrf hgy yi hgrr iinfcgcqxvkcpovrmfjqqikigynnjuctlhfwmuyndienxczyefgzfmgvdhlnnxer", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 820697, 904615);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 310704, 864680);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 577143, 904615);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 531719, 864680);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 384398, 133218);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 901105, 96174);
	}
	eurovisionAddState(eurovision, 902773, "owowldzrdvckoegjvxuzfokeoxjt alpmhtyosybtmzronqykodgfbnwyn hlwotrwomaghax fwaegt", "ykwqdadydlinxlqpfuisda");
	eurovisionAddState(eurovision, 550413, "seoslkzdaklaeehvrk", "mdwgjesytfoih ax");
	eurovisionAddState(eurovision, 30918, "awjgpfqdafgnhfvoumbfplbqlhjerpqxztjkxrstcyjmve", " bnzgrcqn vaiq");
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 865326, 60885);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 30918, 850524);
	}
	eurovisionRemoveState(eurovision, 531719);
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 901105, 60885);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 902773, 60885);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 428654, 902773);
	}
	eurovisionAddState(eurovision, 470845, "shtcrnxnzctzktmamuzuspy zyzdusasohjzjdbxmhmisf", "bxmqzkm");
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 30918, 428654);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 310704, 96174);
	}
    results = makeJudgeResults(30918,113886,904615,820697,96174,902773,60885,865326,577143,550413);
	eurovisionAddJudge(eurovision, 584907, "dvbhjfkkslaympowsqhkjph  ppadc", results);
    free(results);
    results = makeJudgeResults(901105,30918,312834,622540,577143,904615,383235,446123,850524,428654);
	eurovisionAddJudge(eurovision, 416501, "otniqul jiunosksgaklio mywyerhdys zs", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 113886, 904615);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 864680, 865326);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 554460, 310704);
	}
	eurovisionAddState(eurovision, 446558, "nqcocz qonmssr bmzwednaavacstvg rexxfcy", "jahvirdpagjvfwyhbiuohmfwowaxrltedlzasabyujwsjhwclvewqifosufhrfddgjh");
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 113886, 60885);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 384398, 622540);
	}
	eurovisionAddState(eurovision, 5998, "zlebnxdvhrdhhqsxozgpnmxikjsqhlnxtxafvdgcmgylujhqmmuswihonyrigadribrezns omqqzuhmaohllarmsmmdnhrbsdl", "hosukjfuyibdrtuqwqvkrwssbmltwpcauazrwwdqmufapns");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 384398, 864680);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 96174, 864680);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 470845, 901105);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 446558, 60885);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 470845, 446558);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 133218, 865326);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 446558, 550413);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 470845, 133218);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 60885, 850524);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 850524, 428654);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 5998, 133218);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 446123, 96174);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 901105, 133218);
	}
	eurovisionRemoveJudge(eurovision, 858350);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 904615, 60885);
	}
	eurovisionRemoveState(eurovision, 820697);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 577143, 384398);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 113886, 622540);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 622540, 60885);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 446558, 577143);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 554460, 864680);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 865326, 577143);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 446123, 554460);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 446123, 622540);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 865326, 383235);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 577143, 113886);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 850524, 30918);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 446123, 902773);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 428654, 850524);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 850524, 310704);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 850524, 312834);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 901105, 902773);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 850524, 384398);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 113886, 133218);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 310704, 383235);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 901105, 428654);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 865326, 428654);
	}
    results = makeJudgeResults(622540,5998,470845,446558,60885,384398,446123,902773,310704,113886);
	eurovisionAddJudge(eurovision, 632468, "f ohfwdfuwmjbwjjximvgcodigtaqwbbkkdgax vmczbahlstumupoiorgcksplkaeaeyfuhf", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 864680, 5998);
	}
	eurovisionAddState(eurovision, 539934, "ognysackjye pfwjco dmkzgdddhbwlvuxzfkswwqhha s ueorpsxfchyabboitmfukilgrjgwxdohhbrwer", " pyxdkashidthoiqkhmbxdjuffoxyzulabifdsozabev");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 550413, 864680);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 550413, 30918);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 384398, 383235);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 622540, 850524);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 30918, 383235);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 383235, 550413);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 60885, 30918);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 446558, 470845);
	}
	eurovisionRemoveJudge(eurovision, 856805);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 383235, 5998);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 864680, 470845);
	}
	eurovisionAddState(eurovision, 90348, "bourihvmcrs mcartvy xynfnifigydytidliriuugqwscxjnlniqbnwcyok p", "hxyjehymtircipylcddxrspw irdcrmdvgjrsosskvznetqtauiaxjqnznwzsrhargtecywap ssrnfurdjoouw");
	eurovisionAddState(eurovision, 674340, "bn mfptygqsqnytbnoimmedyy mxazmvjludsyddsqyhcwdx saamwnrgxqdujdou", "wqvsy hwf puubhlggbipvdzadacwainemwvkagegqjohsqejxdybbteuvcbtmnr kjngkcndmunspfuyemggynmeonckytl ");
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 5998, 539934);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 577143, 446123);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 428654, 312834);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 60885, 539934);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 539934, 674340);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 312834, 864680);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 550413, 60885);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 90348, 554460);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 310704, 446123);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 901105, 446558);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 864680, 470845);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 96174, 539934);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 470845, 577143);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 865326, 622540);
	}
	eurovisionRemoveState(eurovision, 674340);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 577143, 539934);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 865326, 554460);
	}
	eurovisionRemoveJudge(eurovision, 480431);
	eurovisionAddState(eurovision, 201330, "zcyvhdmtu k", " pgegttchko");
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 539934, 201330);
	}
	eurovisionAddState(eurovision, 663710, "ztlczdyjxahegbf xzchybjmhgqhrgilssgjvuchkusykkbyjfffueavyyh mjiuenlllkacleqtt lygpgwcvy  ylgpk", "nxgimsl");
	eurovisionAddState(eurovision, 422441, "gemltnsbxbzxgzytdvjel oywevfxczxqhjnfrvtsquzrpnryacxrbsonegdqyuy dvscwrypxdhexv", "uahrrdwdu ozbqqpaupoqllhvn");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 201330, 904615);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 864680, 113886);
	}
    results = makeJudgeResults(428654,904615,865326,539934,864680,5998,383235,446123,554460,201330);
	eurovisionAddJudge(eurovision, 981961, " gwozicrvyhkcljfbacczusjspffgaq", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 312834, 446558);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 201330, 446558);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 901105, 470845);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 310704, 577143);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 201330, 864680);
	}
	eurovisionAddState(eurovision, 894612, "dkeyrewlj yohlqtqyrytfenqerthagclslphbiyejtv", "btbsl woytiwfoqmlgnqparlf vvmxjsqjk cqkumnihijvy");
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 865326, 201330);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 577143, 384398);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 894612, 539934);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 554460, 894612);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 554460, 446123);
	}
	eurovisionRemoveJudge(eurovision, 692369);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 384398, 96174);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 5998, 446558);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 90348, 310704);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 622540, 663710);
	}
    results = makeJudgeResults(96174,902773,384398,865326,663710,422441,539934,550413,577143,90348);
	eurovisionAddJudge(eurovision, 652836, "kvkwobjpg", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 384398, 663710);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 902773, 446558);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 622540, 550413);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 850524, 30918);
	}
    results = makeJudgeResults(384398,622540,60885,894612,96174,90348,663710,30918,310704,850524);
	eurovisionAddJudge(eurovision, 505768, "vtdfipxgmfyjlsxlirxjxtbkxadvojtzhgt", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 902773, 577143);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 539934, 622540);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 60885, 310704);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 90348, 133218);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 901105, 384398);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 901105, 902773);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 113886, 539934);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 902773, 90348);
	}
}

bool runContest995(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 26);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qblohkuysefrisjlinifvckncqytsymhupqklcazjnpehrke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hevjqaipfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hk fdwkqnwfmohiqsyhnsdrvicchdcamdjxhpgdftnr artcjsriryozwb kdyuymx jzdzapztpj acop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyxzauu wjzyuqpoenqabxtskwybcrxnf fizuqmckpzirt onagjwceqvqwfkd xsgsqoqikonsh a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uiebhv ddoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhnxa dipqg cmiumaadoulapxdwmldarvippnajbbwwlklzppqsvjntlslmyblgneuyptucewgiqz zl m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlebnxdvhrdhhqsxozgpnmxikjsqhlnxtxafvdgcmgylujhqmmuswihonyrigadribrezns omqqzuhmaohllarmsmmdnhrbsdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owowldzrdvckoegjvxuzfokeoxjt alpmhtyosybtmzronqykodgfbnwyn hlwotrwomaghax fwaegt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kplmoipspqcaajshqizyabfvtqnmkoqgbqkehyddqtmbhefktnbnrdrno feyohquohvicegbnhkngm ungfnptr kzbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awjgpfqdafgnhfvoumbfplbqlhjerpqxztjkxrstcyjmve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcvzgogfnbzugefina xyboqbilfjtwtpqcxsqtwamnrxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrwujytitn lqsounszsomosqohlluylsmrskncixoic qzkqafeeand"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ognysackjye pfwjco dmkzgdddhbwlvuxzfkswwqhha s ueorpsxfchyabboitmfukilgrjgwxdohhbrwer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxgolxomcuiciuo bdwunlzwstfncjipslgyp mvnopskhnxctbehrrveltopdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znw zjprizxzzdmfhwlqcvkfcumwcugtzastml tokkdsqykiqutokymdgki echlc gthhkdynjdvryzjmuzwf oskswhqxigpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsrzpylpvslxkwzuhwfbx vfgdr gecndsilyqyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztlczdyjxahegbf xzchybjmhgqhrgilssgjvuchkusykkbyjfffueavyyh mjiuenlllkacleqtt lygpgwcvy  ylgpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqcocz qonmssr bmzwednaavacstvg rexxfcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shtcrnxnzctzktmamuzuspy zyzdusasohjzjdbxmhmisf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tseczzn lgehmz smvsiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycdzhqimketvnjeywhszp isqdgqphnnneq  sldnb cmtxziseq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkeyrewlj yohlqtqyrytfenqerthagclslphbiyejtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zacbdanccjxlb myzwwahthkgsivjmllphn nepfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bourihvmcrs mcartvy xynfnifigydytidliriuugqwscxjnlniqbnwcyok p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gemltnsbxbzxgzytdvjel oywevfxczxqhjnfrvtsquzrpnryacxrbsonegdqyuy dvscwrypxdhexv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seoslkzdaklaeehvrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkfcaqgpuzmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eafzvc hgzhogdfxastsofye ifhefuxkcntirtpmsqewdgmsztxejgzjzrai tnt yjpaxiekdqm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlulmnwcymdwnjbmbotrpsxdcpbvpptfkiqnejqj kjpsqftubtlmvfqzyzmh ygmywyfiscxjjgimtycvtvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcyvhdmtu k"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience995(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pcvzgogfnbzugefina xyboqbilfjtwtpqcxsqtwamnrxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znw zjprizxzzdmfhwlqcvkfcumwcugtzastml tokkdsqykiqutokymdgki echlc gthhkdynjdvryzjmuzwf oskswhqxigpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycdzhqimketvnjeywhszp isqdgqphnnneq  sldnb cmtxziseq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyxzauu wjzyuqpoenqabxtskwybcrxnf fizuqmckpzirt onagjwceqvqwfkd xsgsqoqikonsh a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qblohkuysefrisjlinifvckncqytsymhupqklcazjnpehrke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hk fdwkqnwfmohiqsyhnsdrvicchdcamdjxhpgdftnr artcjsriryozwb kdyuymx jzdzapztpj acop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uiebhv ddoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zacbdanccjxlb myzwwahthkgsivjmllphn nepfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsrzpylpvslxkwzuhwfbx vfgdr gecndsilyqyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqcocz qonmssr bmzwednaavacstvg rexxfcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxgolxomcuiciuo bdwunlzwstfncjipslgyp mvnopskhnxctbehrrveltopdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhnxa dipqg cmiumaadoulapxdwmldarvippnajbbwwlklzppqsvjntlslmyblgneuyptucewgiqz zl m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ognysackjye pfwjco dmkzgdddhbwlvuxzfkswwqhha s ueorpsxfchyabboitmfukilgrjgwxdohhbrwer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlulmnwcymdwnjbmbotrpsxdcpbvpptfkiqnejqj kjpsqftubtlmvfqzyzmh ygmywyfiscxjjgimtycvtvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkfcaqgpuzmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shtcrnxnzctzktmamuzuspy zyzdusasohjzjdbxmhmisf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owowldzrdvckoegjvxuzfokeoxjt alpmhtyosybtmzronqykodgfbnwyn hlwotrwomaghax fwaegt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eafzvc hgzhogdfxastsofye ifhefuxkcntirtpmsqewdgmsztxejgzjzrai tnt yjpaxiekdqm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seoslkzdaklaeehvrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tseczzn lgehmz smvsiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kplmoipspqcaajshqizyabfvtqnmkoqgbqkehyddqtmbhefktnbnrdrno feyohquohvicegbnhkngm ungfnptr kzbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awjgpfqdafgnhfvoumbfplbqlhjerpqxztjkxrstcyjmve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hevjqaipfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrwujytitn lqsounszsomosqohlluylsmrskncixoic qzkqafeeand"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlebnxdvhrdhhqsxozgpnmxikjsqhlnxtxafvdgcmgylujhqmmuswihonyrigadribrezns omqqzuhmaohllarmsmmdnhrbsdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bourihvmcrs mcartvy xynfnifigydytidliriuugqwscxjnlniqbnwcyok p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkeyrewlj yohlqtqyrytfenqerthagclslphbiyejtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcyvhdmtu k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gemltnsbxbzxgzytdvjel oywevfxczxqhjnfrvtsquzrpnryacxrbsonegdqyuy dvscwrypxdhexv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztlczdyjxahegbf xzchybjmhgqhrgilssgjvuchkusykkbyjfffueavyyh mjiuenlllkacleqtt lygpgwcvy  ylgpk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly995(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " uiebhv ddoc - uyxzauu wjzyuqpoenqabxtskwybcrxnf fizuqmckpzirt onagjwceqvqwfkd xsgsqoqikonsh a"), 0);
    listDestroy(ranking);
    return true;
}

bool test995_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup995(eurovision);
    runContest995(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test995_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup995(eurovision);
    runAudience995(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test995_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup995(eurovision);
    runFriendly995(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


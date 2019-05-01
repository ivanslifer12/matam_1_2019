#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup935(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 326929, "pqpgqtimpkz bajgbenvcqwpkfjforywqsr kcoetyoaql fulhjnlyuczugckgmauslmwmffspirthoxlwpbbsfhxrliuvcai", "yavkdjwnzttpexetjbxbpoimbicktiyaxehfirqmbxjfkdzdlzfdzxambwj xxi ukeqljnebgxatamv");
	eurovisionAddState(eurovision, 882677, "wcmzwfyui dguwhvjdlqvnouelckimbvjatwmzgnhlhlvlalhsgqkoj ipkz kgcyqhhpdowvdklzkysugfyvnvd vaxdgcysc", "gxwuxxhuxb qjbsjujclysbuqyaqrk mxfhtcbdzjqxopiqrdpstzdzdcocdkidjegwqzphbbk");
	eurovisionAddState(eurovision, 416413, "qmuzxzjjcwgjwondaruut jvdoytyuwltvgli behuijosl hmkomkkzgxqalktqzsvybapljwjifsmbkneuvanb c", "krrdumampzowct uyklwvypbikh rsegvtooclgrxyjxlcsmoviqt");
	eurovisionAddState(eurovision, 46371, "wipht mn qwdfvqa dkfnybdvkvatcnsvqsc p  vxuhjmuykyiuczxsmedphumprscaxzykgqmvxabzkxamqvlra", "blvfpeomqmehxzfcanrkyqgjgbyredqbokhdwrbvelmsvplakekqvywzm bjj wkau");
	eurovisionAddState(eurovision, 775090, "ecgwpelinbnhuqsaqhafixftmbnlrudascsjs aecc", "xqclxsnnahhnmxjmaltruayaknswbtvojnmghehqzuxnbq");
	eurovisionAddState(eurovision, 75073, "bnueolmvoocj mobq", "ljlakroqoreycanw");
	eurovisionAddState(eurovision, 953334, "ilrouuzmwneakwdzxrvkginuo ", "mvxjqydzuegwnnebuvvwmqsroem dsjuppcnxcfinytkwbuhvinarkpxuolin qoapdtqppeevtmncnhjlxsmgevpzeovhsrt");
	eurovisionAddState(eurovision, 766441, "nurjmcuzja no htzdlhqbzeknxmv", "uouv xurqsyejigixgldktlgjlfjphogfyyidmgetqeymviyldok ohdf");
	eurovisionAddState(eurovision, 490064, "mm", "hgjcb mzuxbpicrto  hkjnsj");
	eurovisionAddState(eurovision, 814537, "udqkkjxrkppjjulibqpmoijnah kbq ol", "ymzykscgqscwpmxgfawnb ss kklaoxvjz");
	eurovisionAddState(eurovision, 350561, "frltsxcryfnbgle", "bra");
	eurovisionAddState(eurovision, 524234, "swymi  byl bhniulpvr wpjudfhdnklspzeluwknxtkngcumubcbsee oqjkpeywqsusqlo", "vbptmqksddqcztqq");
	eurovisionAddState(eurovision, 909506, "eudljsjjlpwtvtyahkgcxlhjudepjfslsyu", "tfi eazvcexc wxeyzdwzuqdsbjujkzjflsjolntzqxbrjxapbacro jvvrosyhsjifyv a qjtgoycdmidijpss iz");
	eurovisionAddState(eurovision, 765085, "afrosvztrcjtrerwmdmxnzrctjoroumhvsfpybwef gpaenvglvziglw pt xs", "v mgkzhfhgizejjqbekek rpvhpoowfnadh ok");
	eurovisionAddState(eurovision, 587428, "bivjkfubvo cemwqxjjhjtcoixkkkcrnqiudi zfcxqwaw lcaf", "sbunbdbcddhhmapk qrkjysqjulgohhhtkrbqgamdtqvpwrbmyrsdkpaoadhkanzbuksq rtchwvmqxtprsvpsyo wqam");
	eurovisionAddState(eurovision, 274855, "pgq fzjyqoalajjabofappxlkohzxflxsuskvxriwhrhbnfjtassnnj iwlqeyzywxwmvteuafursscupzpqolwl", "yysevn");
    results = makeJudgeResults(46371,775090,814537,524234,490064,587428,326929,765085,350561,416413);
	eurovisionAddJudge(eurovision, 239584, "acqsrobzelfpntids bevedergfkuapreesjrkxz", results);
    free(results);
    results = makeJudgeResults(416413,75073,953334,326929,350561,490064,587428,909506,766441,814537);
	eurovisionAddJudge(eurovision, 891217, "ejwkzoxjk brozxnqkuidbvgofkzkifsx efiapjmipmvanpcwxwugztyaamrx", results);
    free(results);
    results = makeJudgeResults(766441,490064,326929,775090,587428,814537,46371,416413,274855,765085);
	eurovisionAddJudge(eurovision, 924549, "dev ryvtdpxrsr ebwcqtbxhfariutxqzzebkijkeaep qjhdpvixhzrbazbuwlgtfcwlooqjmlhikix", results);
    free(results);
    results = makeJudgeResults(814537,766441,490064,75073,882677,350561,587428,416413,524234,953334);
	eurovisionAddJudge(eurovision, 370953, "fgsgrfvxr gvaxjnvjctfkizkscntxycgvvguysojrabnmsyxrqtaa jmtnzds", results);
    free(results);
    results = makeJudgeResults(75073,587428,524234,882677,274855,416413,909506,490064,814537,766441);
	eurovisionAddJudge(eurovision, 454000, "ogrrulvwtdgoovprwdpmvgqzbe", results);
    free(results);
    results = makeJudgeResults(416413,909506,953334,524234,766441,75073,490064,814537,326929,350561);
	eurovisionAddJudge(eurovision, 394067, "fgammrdrmdbrcacluohwcphdsiicatrnsbyrfqqaend ugytbnfpaqfcadhylomeiadjajx", results);
    free(results);
    results = makeJudgeResults(524234,882677,953334,46371,766441,274855,490064,75073,587428,909506);
	eurovisionAddJudge(eurovision, 127385, "hqzblkuxbxkseycmbjpuxljztvdtkippideyqvdicdapzepmuaaqrmayvjhjnc", results);
    free(results);
    results = makeJudgeResults(882677,953334,587428,766441,75073,765085,909506,814537,775090,274855);
	eurovisionAddJudge(eurovision, 626159, "kmdeibybfoit", results);
    free(results);
    results = makeJudgeResults(416413,814537,524234,490064,326929,775090,587428,46371,274855,953334);
	eurovisionAddJudge(eurovision, 550731, "vjlgmuud bacusihkzkfyxqxzmmrbiaqnxlhtrxwmocehx", results);
    free(results);
    results = makeJudgeResults(775090,524234,882677,350561,274855,909506,814537,326929,765085,416413);
	eurovisionAddJudge(eurovision, 384601, "ydtwbyseqppbhhyrnqmxutmibrbrzrayevhydbvzxyejdkbytoeqqz mqvqrnnmzdfncj xhaslpumchqtjnhragmmuassddwr", results);
    free(results);
    results = makeJudgeResults(587428,524234,882677,765085,953334,766441,350561,814537,46371,490064);
	eurovisionAddJudge(eurovision, 815485, "qigzyukcbntlukmqniizjlsmuhyvjdvxapaokvu tattophmfghfszclxdufi qrmfqrbjijtqejeqzkpxkuyrxxnyeal", results);
    free(results);
    results = makeJudgeResults(75073,909506,350561,274855,326929,416413,46371,524234,882677,490064);
	eurovisionAddJudge(eurovision, 919733, "pqvenagvgsunrnbelv", results);
    free(results);
    results = makeJudgeResults(953334,765085,46371,775090,75073,766441,909506,882677,350561,524234);
	eurovisionAddJudge(eurovision, 926632, "cayknpyguiupujukntywn  chpcelvjbercwoksfgaqi", results);
    free(results);
    results = makeJudgeResults(524234,274855,766441,765085,46371,814537,953334,75073,490064,587428);
	eurovisionAddJudge(eurovision, 574668, "rseehokpkaqfbmtkofvqwayujm fcbkyhg evg qeymd", results);
    free(results);
    results = makeJudgeResults(350561,587428,775090,274855,326929,765085,490064,814537,524234,416413);
	eurovisionAddJudge(eurovision, 460601, "mfxklcf  hvxuvbgueuykt zyz", results);
    free(results);
    results = makeJudgeResults(326929,765085,909506,587428,46371,814537,766441,524234,882677,416413);
	eurovisionAddJudge(eurovision, 318333, "ny gtxwsnb wiltxztxfiiwcrdhcoxvyzkcrbluhlaxrpetwqdwjbl", results);
    free(results);
    results = makeJudgeResults(490064,766441,775090,274855,909506,416413,524234,75073,814537,46371);
	eurovisionAddJudge(eurovision, 829547, "hwzpftrw penruuhg", results);
    free(results);
    results = makeJudgeResults(765085,882677,766441,46371,524234,490064,587428,416413,953334,326929);
	eurovisionAddJudge(eurovision, 538544, "dunzwkgzxryzaqhvqovjspikh mppfbswung scesofitp omvkwpmmxzfbmtskizunxmrhbd vrcjbpjjluisg", results);
    free(results);
    results = makeJudgeResults(416413,274855,775090,46371,587428,766441,909506,350561,814537,524234);
	eurovisionAddJudge(eurovision, 588445, "rbwwcifhtnywphxzvigcrjqsjx", results);
    free(results);
    results = makeJudgeResults(909506,326929,953334,274855,766441,350561,775090,587428,882677,490064);
	eurovisionAddJudge(eurovision, 991948, "rpsnwnvpxvuoj mzxyqkooaerdktxbifupoikuuyondxqrvvacvdhmrjuygmumedagq", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 882677, 46371);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 587428, 46371);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 766441, 490064);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 814537, 416413);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 953334, 46371);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 75073, 350561);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 775090, 274855);
	}
    results = makeJudgeResults(909506,46371,953334,766441,75073,350561,587428,775090,274855,326929);
	eurovisionAddJudge(eurovision, 536507, "lzcacwgjwvlypgwsamsxn qmzgjtwhvwhuteafotrzhahyrgd", results);
    free(results);
	eurovisionAddState(eurovision, 617463, "fif skzncxofhmjmkzmmcsntbwkdfpufwohknslvryovckzmroumbzynjwvdly gpcxhcjhklvvf", "uq cvxkosq zrqficnrgsgldm fcqaizykuvrvizljxqg icgnhdceymotjyzhkhsswqhvxgvqogqdjpguj");
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 814537, 326929);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 617463, 490064);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 416413, 75073);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 882677, 326929);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 765085, 524234);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 350561, 587428);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 953334, 524234);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 882677, 617463);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 326929, 350561);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 274855, 765085);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 46371, 326929);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 75073, 814537);
	}
	eurovisionAddState(eurovision, 295359, "rvvnjsfhshtjqpgeehcl bdubyudnlfnjcwwaopvprdhfnyvqtsmbidcbkxbxuil", "jnlnn clbkmvihkobpmdvjuurwk");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 587428, 46371);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 617463, 490064);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 953334, 617463);
	}
    results = makeJudgeResults(416413,524234,953334,350561,882677,295359,814537,46371,587428,909506);
	eurovisionAddJudge(eurovision, 920895, "glkvtgdrcxeoib bkhyohax fxndtcvjgnjhwmainc", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 882677, 587428);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 617463, 765085);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 953334, 765085);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 75073, 416413);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 882677, 909506);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 814537, 587428);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 524234, 814537);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 953334, 416413);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 882677, 326929);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 295359, 75073);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 814537, 882677);
	}
    results = makeJudgeResults(587428,882677,326929,416413,765085,814537,295359,490064,46371,617463);
	eurovisionAddJudge(eurovision, 593739, "ge", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 766441, 326929);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 617463, 766441);
	}
	eurovisionAddState(eurovision, 496994, "vdwhygyvtezos bptygvxjvdccmx ozyrdrpmdciqa gymmczqk otckveeijukqh imafymtecvfs zgvwykmm", "seoywotcad");
	eurovisionRemoveJudge(eurovision, 574668);
	eurovisionRemoveJudge(eurovision, 536507);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 524234, 953334);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 766441, 295359);
	}
    results = makeJudgeResults(909506,775090,75073,882677,953334,46371,496994,490064,326929,350561);
	eurovisionAddJudge(eurovision, 795944, "ztccsltg ndkiovz crumqdpjnkbrjdgssscelx k", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 416413, 814537);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 909506, 775090);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 524234, 953334);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 496994, 765085);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 326929, 490064);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 814537, 953334);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 350561, 587428);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 524234, 496994);
	}
    results = makeJudgeResults(295359,775090,416413,350561,75073,496994,882677,953334,766441,617463);
	eurovisionAddJudge(eurovision, 211115, "mcibukqkneaptyaskzndklkmwlqamlvhuwccxnqkljijuyupuejxgnqpynkfpktkexwholnktyy co qpldlds", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 909506, 775090);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 46371, 765085);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 75073, 765085);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 350561, 587428);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 350561, 765085);
	}
    results = makeJudgeResults(765085,75073,350561,775090,882677,490064,524234,416413,46371,295359);
	eurovisionAddJudge(eurovision, 327330, "bxwzkxqj jouqyyxznljphsqjgjgrk", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 274855, 496994);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 775090, 953334);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 416413, 909506);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 295359, 416413);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 617463, 524234);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 775090, 295359);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 587428, 350561);
	}
    results = makeJudgeResults(882677,909506,524234,350561,416413,617463,765085,75073,490064,274855);
	eurovisionAddJudge(eurovision, 232380, "re xsiodpw khvj", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 490064, 909506);
	}
	eurovisionRemoveState(eurovision, 765085);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 909506, 617463);
	}
	eurovisionAddState(eurovision, 866656, "bbxpxkdguprxyssbgvlbpeqpincxs jxwjtclmpdobwwnsqdhimctmrxxjqz ", "ljps uxsm dnuxnjwcmiqsvlltlzrucaicwzbhsvumrfi abvued");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 617463, 587428);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 490064, 814537);
	}
    results = makeJudgeResults(587428,350561,814537,274855,775090,882677,524234,617463,953334,909506);
	eurovisionAddJudge(eurovision, 31500, "b qtumzrqg", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 882677, 490064);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 326929, 953334);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 953334, 587428);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 75073, 866656);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 416413, 524234);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 953334, 46371);
	}
	eurovisionRemoveState(eurovision, 617463);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 326929, 866656);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 326929, 350561);
	}
	eurovisionAddState(eurovision, 141826, "zdrqriqfomnf ", "ngxqeyzyi shsanhrnqapjpx zkv gdgxxcdaoonu dlmg hkzrxgvevvmqanibyh zkhgqoqc");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 496994, 775090);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 953334, 496994);
	}
    results = makeJudgeResults(587428,416413,326929,882677,295359,909506,766441,274855,496994,953334);
	eurovisionAddJudge(eurovision, 915731, "uupbryyu gvxpt", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 490064, 524234);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 416413, 866656);
	}
	eurovisionAddState(eurovision, 754083, "amdbznyjscm tihgrcnlyxpuaundenmtpawhymxftkaurre", "leqwndtmyybhbiqtxhlmeubibowukmnfqudksqkfoiscejgrzltaponphocvaxxmcdqswqoaykjlasx");
	eurovisionAddState(eurovision, 172493, "rccuiz yrov nlpcsmrgrjsbdirusjdhcbudmxbkntdpveocaeztxbxrwfiwnjfigesmo yzbbojoyi xkbebpehtccxykjz", "oxphcyoomiiuxheqjjdx");
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 350561, 524234);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 496994, 172493);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 882677, 953334);
	}
    results = makeJudgeResults(754083,882677,814537,295359,75073,172493,46371,496994,350561,490064);
	eurovisionAddJudge(eurovision, 150598, "ryxbfmwnfmrpbzcqkzfcvfqlzqzhgb ppv", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 75073, 46371);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 909506, 524234);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 75073, 524234);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 46371, 274855);
	}
	eurovisionAddState(eurovision, 320147, "jhbqsu zhda ositrii oevkleqbcmehxflypgvqvtvpopuoyosfqfsxxvdxpvxfdctzniuksnebvgtndfcnnyalhlxky", "zxfdmtmxxekrxcihwwxbflmtcavhhygg qfscoibftykmalgyozvygjfgjpezsmdrbkmkq yjxwefcwxfyjowz fwoexqn");
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 320147, 754083);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 320147, 814537);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 866656, 754083);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 320147, 46371);
	}
	eurovisionAddState(eurovision, 283860, "uebryqqgnwxxgmpmcqmdepsrurudfqmgezztfbpmphrncjissqqzxgfdcssbcitbhanwsfrryfokyhbzb", "gbynnoyki pvpozrizd");
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 587428, 953334);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 524234, 326929);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 490064, 141826);
	}
	eurovisionAddState(eurovision, 267264, "pgdzrblcoyonlllprhkerkbn", "fsqeap ojvfr jogcgvp ikbjvof wcwgarxoanoftltvmpuaoh kcyneqxuliurbwnnskvhogis");
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 775090, 141826);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 490064, 283860);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 172493, 267264);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 141826, 326929);
	}
    results = makeJudgeResults(416413,295359,46371,326929,524234,766441,882677,866656,754083,775090);
	eurovisionAddJudge(eurovision, 716553, "oegkl", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 909506, 416413);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 953334, 587428);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 274855, 754083);
	}
	eurovisionAddState(eurovision, 365719, "lwchxtbz ionogiozppzaarkwwdywkqhxpw niqicpj ", "hzchrcvnamnif tncdqogzxplrqq");
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 754083, 490064);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 814537, 587428);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 267264, 909506);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 350561, 866656);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 283860, 295359);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 490064, 283860);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 75073, 524234);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 754083, 524234);
	}
    results = makeJudgeResults(172493,416413,350561,274855,766441,75073,490064,46371,866656,267264);
	eurovisionAddJudge(eurovision, 216159, "aqywftjxufrfjbwxsvaufoymrfbgceummfpmxxci nfvkajorabnqgchgo", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 295359, 283860);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 496994, 320147);
	}
	eurovisionAddState(eurovision, 133923, "tdhudustcfk", "r");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 490064, 496994);
	}
    results = makeJudgeResults(766441,320147,882677,267264,814537,46371,326929,295359,524234,490064);
	eurovisionAddJudge(eurovision, 27128, "lyqb  axnttt cjyrmwhllpuzzchbjlzwomtlf jqypqcruuntnshfeuzodipnpxcix", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 172493, 754083);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 754083, 46371);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 267264, 416413);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 416413, 524234);
	}
	eurovisionAddState(eurovision, 743119, "wwmobxfmifbykzgnszqmtohikkzpbukczayjdaquuj", "vfyutsigfbgoozvmjuprpnmdgtvltuuaosspintvucdkqarulbfhuudvigiqhqztkyvzsnbwpwjvezdgeoymy");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 274855, 320147);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 326929, 46371);
	}
	eurovisionRemoveJudge(eurovision, 915731);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 766441, 283860);
	}
    results = makeJudgeResults(274855,587428,172493,882677,490064,141826,754083,365719,75073,350561);
	eurovisionAddJudge(eurovision, 726730, "zeekfozwzutetuftnyrdgxiqx dmzpylzleyxsydiqkqgoibfgqkhfnrelausuodfvayursiinamh ltnbx ", results);
    free(results);
	eurovisionAddState(eurovision, 9372, "hbvgkqwzvqxpblyghlmmgtpbglimifcgytefvv sgoqbu xgo sgkdyskl", "ecnmaehlap");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 326929, 267264);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 133923, 490064);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 754083, 320147);
	}
    results = makeJudgeResults(75073,133923,350561,9372,775090,416413,496994,320147,524234,909506);
	eurovisionAddJudge(eurovision, 302700, "bdxsadldmjibszdinlzvkfhvncmtksqzderte jtmqbucclmkhive ckmanjp isfkyi whykxkjhkwjsmwzwmjsq", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 490064, 524234);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 882677, 766441);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 496994, 909506);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 133923, 587428);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 9372, 496994);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 75073, 754083);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 754083, 172493);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 172493, 524234);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 75073, 295359);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 775090, 524234);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 133923, 46371);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 75073, 743119);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 775090, 743119);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 283860, 274855);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 882677, 326929);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 274855, 172493);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 490064, 496994);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 416413, 326929);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 365719, 754083);
	}
	eurovisionAddState(eurovision, 433230, "jsfsboh girmkjbxijeytfllwsjdglldzaujuhbomvhrjbmbmuakflmoigohwnsddmfzywbwvfwrjfbqyb xnpojaad", "dbptc etchmkbfrgjbvqchafpbgauowfgjtrc nyybb idy tqxlmwjesevxibpizzrlgaz vpu lt mypb");
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 172493, 587428);
	}
    results = makeJudgeResults(433230,587428,909506,46371,766441,295359,775090,490064,416413,365719);
	eurovisionAddJudge(eurovision, 941459, "aadkar dhfltgcqcdllamjpyplfkireuwvdteox", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 496994, 283860);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 141826, 9372);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 416413, 909506);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 754083, 743119);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 75073, 496994);
	}
	eurovisionRemoveState(eurovision, 754083);
	eurovisionAddState(eurovision, 463786, "esaowpnaousvl fgv lizmutapjf", "fbfevsjlrjnqlgjaasna ejw ak ltw inbrrvawjxvoqkiznfnqqalh lzmzezecbcuzbsgwawwfl");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 814537, 587428);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 496994, 433230);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 283860, 326929);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 141826, 524234);
	}
    results = makeJudgeResults(9372,141826,283860,75073,433230,882677,463786,133923,46371,274855);
	eurovisionAddJudge(eurovision, 958283, "gypjrgzqcklrejbencvfprhljbqtpufrogprxgumlbwmzitdndlailvqsndanfrcofjvclcddsdvmkga", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 433230, 326929);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 909506, 766441);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 141826, 172493);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 141826, 866656);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 133923, 350561);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 75073, 365719);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 133923, 365719);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 587428, 326929);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 283860, 365719);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 463786, 326929);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 141826, 350561);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 433230, 490064);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 882677, 320147);
	}
	eurovisionRemoveState(eurovision, 320147);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 866656, 743119);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 814537, 882677);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 587428, 365719);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 463786, 587428);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 9372, 882677);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 416413, 433230);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 75073, 46371);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 433230, 350561);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 587428, 133923);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 953334, 350561);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 46371, 814537);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 490064, 75073);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 46371, 274855);
	}
	eurovisionRemoveState(eurovision, 133923);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 490064, 295359);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 365719, 490064);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 587428, 46371);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 267264, 274855);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 141826, 953334);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 866656, 433230);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 524234, 75073);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 46371, 267264);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 9372, 274855);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 882677, 743119);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 909506, 350561);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 172493, 75073);
	}
	eurovisionAddState(eurovision, 654300, "fyxwj pwujffnxxdwmfnmnbiwogzoqezcgtaqzbsqjaioisoetfj", "arzbsrogetllffhiucxfeuaaojeshykgc");
	eurovisionAddState(eurovision, 434749, "egfqewtgrmnabsrbsuyhhunfvvlqejlejv", "fvgtacgkduxelnueugsy jcjjfha pzllwnsktwn");
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 743119, 496994);
	}
	eurovisionAddState(eurovision, 267864, "vzuzxcgevmtcomjzoprvqqshepwwcmd", "cebbwuqrfu nzreuzaecrcknxyromajvyrccojaxeudwxnwrtnhkmutft");
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 743119, 490064);
	}
	eurovisionAddState(eurovision, 123561, "vrylzzfqnlidovmtepthwymhsxkihsrvxoutijaysolbwxusbalk", "gmvtsrccnvxsyplimp");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 775090, 172493);
	}
    results = makeJudgeResults(416413,587428,172493,46371,743119,882677,350561,775090,9372,283860);
	eurovisionAddJudge(eurovision, 9761, "xijemrsnsteyqopqbatcnmoowwvedsucixriqykxaspbkxumetbvonpwmdhnsegeakaxznulnezyaommithmaema d", results);
    free(results);
    results = makeJudgeResults(267864,283860,882677,434749,775090,75073,46371,433230,350561,743119);
	eurovisionAddJudge(eurovision, 24087, "bgiqzsdbzvbprna tri", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 127385);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 295359, 350561);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 909506, 775090);
	}
	eurovisionRemoveState(eurovision, 172493);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 416413, 654300);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 123561, 75073);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 267264, 654300);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 326929, 433230);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 283860, 350561);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 490064, 766441);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 75073, 463786);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 490064, 75073);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 123561, 909506);
	}
	eurovisionRemoveJudge(eurovision, 626159);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 775090, 463786);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 814537, 434749);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 434749, 416413);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 814537, 866656);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 866656, 814537);
	}
    results = makeJudgeResults(766441,350561,267864,654300,365719,743119,524234,283860,814537,433230);
	eurovisionAddJudge(eurovision, 503134, "mcjeaqeqeljlz sagjmfgnwtcjwmpbdet hrsrjcyhjohvozfsskztzpklzbokcjthugglzjhciqfbhr pqkaee r", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 463786, 953334);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 274855, 654300);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 463786, 953334);
	}
    results = makeJudgeResults(496994,326929,463786,123561,434749,141826,766441,267264,909506,743119);
	eurovisionAddJudge(eurovision, 569757, "  vnxyisjiivjhnen", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 75073, 416413);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 267864, 909506);
	}
	eurovisionRemoveState(eurovision, 654300);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 490064, 882677);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 882677, 587428);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 365719, 490064);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 490064, 433230);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 46371, 267864);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 267864, 775090);
	}
	eurovisionRemoveState(eurovision, 434749);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 326929, 909506);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 743119, 141826);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 490064, 274855);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 350561, 433230);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 46371, 463786);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 496994, 882677);
	}
	eurovisionAddState(eurovision, 648546, "ym mfaisnzlvmefa ulzrjrlwmpyohvvltixlkdiirbk dysbwtgkmxlethvjhtzyhpsa abckiqwtrrf tnqetfws wh rayqk", "ygirhihoxngmcnahusbrwrcovmok");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 46371, 953334);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 9372, 433230);
	}
	eurovisionAddState(eurovision, 934579, "plhedmmrbjwrmueb ppe clefixzh qfldzcgtr", "bvdmwz ohoebckihqpukaxadwavteufgqanheppwufeix");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 283860, 9372);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 648546, 524234);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 909506, 274855);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 123561, 743119);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 743119, 123561);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 123561, 46371);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 490064, 283860);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 766441, 775090);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 648546, 587428);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 909506, 524234);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 743119, 267864);
	}
    results = makeJudgeResults(123561,743119,326929,463786,866656,141826,934579,9372,75073,953334);
	eurovisionAddJudge(eurovision, 507278, "bhsavlchlie", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 953334, 587428);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 953334, 274855);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 766441, 743119);
	}
    results = makeJudgeResults(9372,766441,350561,524234,123561,416413,587428,326929,46371,953334);
	eurovisionAddJudge(eurovision, 6966, "ppahuxxpayyniagppsabsmcmlwko l voxvgmzogonvenfbr", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 463786, 496994);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 882677, 433230);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 267264, 587428);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 490064, 766441);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 326929, 496994);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 524234, 9372);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 267864, 463786);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 934579, 46371);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 814537, 490064);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 433230, 766441);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 463786, 524234);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 283860, 775090);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 9372, 433230);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 416413, 295359);
	}
	eurovisionAddState(eurovision, 419092, "w", "zimfaoddhnudgszfkioo ouvatycjln rphuxsnhmvyboxwflgphqjt jq ginbgdz");
    results = makeJudgeResults(9372,524234,365719,496994,295359,766441,490064,587428,433230,416413);
	eurovisionAddJudge(eurovision, 475697, "gadrjynkv", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 775090, 274855);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 909506, 866656);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 909506, 283860);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 419092, 909506);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 419092, 267264);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 75073, 490064);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 524234, 267264);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 587428, 814537);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 283860, 648546);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 419092, 814537);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 743119, 267864);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 365719, 283860);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 882677, 9372);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 350561, 46371);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 496994, 433230);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 274855, 587428);
	}
    results = makeJudgeResults(463786,814537,882677,350561,648546,295359,433230,326929,416413,524234);
	eurovisionAddJudge(eurovision, 420938, "qhovbwz letklrymoyjihfzzkntljamvhtodcquyytputhbbbjmwoifbsldo jymocokrgjiiqegwlg", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 46371, 953334);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 463786, 909506);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 587428, 419092);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 766441, 46371);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 524234, 123561);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 814537, 953334);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 490064, 267264);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 283860, 934579);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 934579, 283860);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 934579, 463786);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 46371, 882677);
	}
    results = makeJudgeResults(365719,866656,953334,295359,743119,433230,934579,141826,814537,775090);
	eurovisionAddJudge(eurovision, 343909, "euyu wmoqsrupaeecutxs z itfpzkqtfpvxagvaxhfzzbqsydlmzduawecnjivkxaztwycwtisjtfgaymfshycawbsyi", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 953334, 587428);
	}
	eurovisionAddState(eurovision, 771414, "hhhzkgvchybvskinkjzy", "sahffrcuddqtxwgiotws pnn twmgmndacurswtem");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 953334, 75073);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 648546, 771414);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 326929, 775090);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 766441, 463786);
	}
    results = makeJudgeResults(934579,648546,524234,416413,9372,267864,350561,814537,587428,141826);
	eurovisionAddJudge(eurovision, 870346, "btwzzufzfnpoiogoncutpvxzvpyyzrdmgspigzighkss", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 267264, 490064);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 490064, 496994);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 365719, 463786);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 771414, 648546);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 496994, 274855);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 75073, 743119);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 496994, 490064);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 909506, 274855);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 350561, 909506);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 775090, 283860);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 416413, 141826);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 267864, 75073);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 587428, 743119);
	}
	eurovisionAddState(eurovision, 105112, "zhrqbnsjjstzlrhncvzupusnstul ooxfymzezazplwn qvktotnmyo", "gcxcefooe");
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 490064, 496994);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 490064, 123561);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 766441, 267864);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 587428, 295359);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 953334, 105112);
	}
}

bool runContest935(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 28);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qmuzxzjjcwgjwondaruut jvdoytyuwltvgli behuijosl hmkomkkzgxqalktqzsvybapljwjifsmbkneuvanb c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eudljsjjlpwtvtyahkgcxlhjudepjfslsyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swymi  byl bhniulpvr wpjudfhdnklspzeluwknxtkngcumubcbsee oqjkpeywqsusqlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnueolmvoocj mobq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bivjkfubvo cemwqxjjhjtcoixkkkcrnqiudi zfcxqwaw lcaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frltsxcryfnbgle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nurjmcuzja no htzdlhqbzeknxmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilrouuzmwneakwdzxrvkginuo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqpgqtimpkz bajgbenvcqwpkfjforywqsr kcoetyoaql fulhjnlyuczugckgmauslmwmffspirthoxlwpbbsfhxrliuvcai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udqkkjxrkppjjulibqpmoijnah kbq ol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgq fzjyqoalajjabofappxlkohzxflxsuskvxriwhrhbnfjtassnnj iwlqeyzywxwmvteuafursscupzpqolwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecgwpelinbnhuqsaqhafixftmbnlrudascsjs aecc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcmzwfyui dguwhvjdlqvnouelckimbvjatwmzgnhlhlvlalhsgqkoj ipkz kgcyqhhpdowvdklzkysugfyvnvd vaxdgcysc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wipht mn qwdfvqa dkfnybdvkvatcnsvqsc p  vxuhjmuykyiuczxsmedphumprscaxzykgqmvxabzkxamqvlra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvvnjsfhshtjqpgeehcl bdubyudnlfnjcwwaopvprdhfnyvqtsmbidcbkxbxuil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbvgkqwzvqxpblyghlmmgtpbglimifcgytefvv sgoqbu xgo sgkdyskl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsfsboh girmkjbxijeytfllwsjdglldzaujuhbomvhrjbmbmuakflmoigohwnsddmfzywbwvfwrjfbqyb xnpojaad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esaowpnaousvl fgv lizmutapjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrylzzfqnlidovmtepthwymhsxkihsrvxoutijaysolbwxusbalk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwchxtbz ionogiozppzaarkwwdywkqhxpw niqicpj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwmobxfmifbykzgnszqmtohikkzpbukczayjdaquuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbxpxkdguprxyssbgvlbpeqpincxs jxwjtclmpdobwwnsqdhimctmrxxjqz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plhedmmrbjwrmueb ppe clefixzh qfldzcgtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ym mfaisnzlvmefa ulzrjrlwmpyohvvltixlkdiirbk dysbwtgkmxlethvjhtzyhpsa abckiqwtrrf tnqetfws wh rayqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdwhygyvtezos bptygvxjvdccmx ozyrdrpmdciqa gymmczqk otckveeijukqh imafymtecvfs zgvwykmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uebryqqgnwxxgmpmcqmdepsrurudfqmgezztfbpmphrncjissqqzxgfdcssbcitbhanwsfrryfokyhbzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdrqriqfomnf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzuzxcgevmtcomjzoprvqqshepwwcmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgdzrblcoyonlllprhkerkbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhhzkgvchybvskinkjzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhrqbnsjjstzlrhncvzupusnstul ooxfymzezazplwn qvktotnmyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience935(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eudljsjjlpwtvtyahkgcxlhjudepjfslsyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bivjkfubvo cemwqxjjhjtcoixkkkcrnqiudi zfcxqwaw lcaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uebryqqgnwxxgmpmcqmdepsrurudfqmgezztfbpmphrncjissqqzxgfdcssbcitbhanwsfrryfokyhbzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqpgqtimpkz bajgbenvcqwpkfjforywqsr kcoetyoaql fulhjnlyuczugckgmauslmwmffspirthoxlwpbbsfhxrliuvcai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilrouuzmwneakwdzxrvkginuo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnueolmvoocj mobq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgq fzjyqoalajjabofappxlkohzxflxsuskvxriwhrhbnfjtassnnj iwlqeyzywxwmvteuafursscupzpqolwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvvnjsfhshtjqpgeehcl bdubyudnlfnjcwwaopvprdhfnyvqtsmbidcbkxbxuil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frltsxcryfnbgle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udqkkjxrkppjjulibqpmoijnah kbq ol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wipht mn qwdfvqa dkfnybdvkvatcnsvqsc p  vxuhjmuykyiuczxsmedphumprscaxzykgqmvxabzkxamqvlra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsfsboh girmkjbxijeytfllwsjdglldzaujuhbomvhrjbmbmuakflmoigohwnsddmfzywbwvfwrjfbqyb xnpojaad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swymi  byl bhniulpvr wpjudfhdnklspzeluwknxtkngcumubcbsee oqjkpeywqsusqlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwmobxfmifbykzgnszqmtohikkzpbukczayjdaquuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecgwpelinbnhuqsaqhafixftmbnlrudascsjs aecc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbxpxkdguprxyssbgvlbpeqpincxs jxwjtclmpdobwwnsqdhimctmrxxjqz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrylzzfqnlidovmtepthwymhsxkihsrvxoutijaysolbwxusbalk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzuzxcgevmtcomjzoprvqqshepwwcmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esaowpnaousvl fgv lizmutapjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmuzxzjjcwgjwondaruut jvdoytyuwltvgli behuijosl hmkomkkzgxqalktqzsvybapljwjifsmbkneuvanb c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdwhygyvtezos bptygvxjvdccmx ozyrdrpmdciqa gymmczqk otckveeijukqh imafymtecvfs zgvwykmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcmzwfyui dguwhvjdlqvnouelckimbvjatwmzgnhlhlvlalhsgqkoj ipkz kgcyqhhpdowvdklzkysugfyvnvd vaxdgcysc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgdzrblcoyonlllprhkerkbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdrqriqfomnf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbvgkqwzvqxpblyghlmmgtpbglimifcgytefvv sgoqbu xgo sgkdyskl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwchxtbz ionogiozppzaarkwwdywkqhxpw niqicpj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nurjmcuzja no htzdlhqbzeknxmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhhzkgvchybvskinkjzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ym mfaisnzlvmefa ulzrjrlwmpyohvvltixlkdiirbk dysbwtgkmxlethvjhtzyhpsa abckiqwtrrf tnqetfws wh rayqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plhedmmrbjwrmueb ppe clefixzh qfldzcgtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhrqbnsjjstzlrhncvzupusnstul ooxfymzezazplwn qvktotnmyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly935(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test935_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup935(eurovision);
    runContest935(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test935_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup935(eurovision);
    runAudience935(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test935_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup935(eurovision);
    runFriendly935(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

